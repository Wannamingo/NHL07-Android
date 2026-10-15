/**
 * nhl_07_recomp - Recompiled code chunk 93
 * Functions: 250 (0x000D7080 - 0x000E0EE0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000D7080
 * Original: 0x000D7080 - 0x000D70A2 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7080: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0x32;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM32(eax) = 0x7C97B8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D70B0
 * Original: 0x000D70B0 - 0x000D70D2 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D70B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D70B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0x33;
    MEM32(eax) = 0x7C97C8;
    MEM16(eax + 0x1C) = LO16(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D70E0
 * Original: 0x000D70E0 - 0x000D70E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D70E0(void)
{

loc_000D70E0: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_000D70F0
 * Original: 0x000D70F0 - 0x000D70F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D70F0(void)
{

loc_000D70F0: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000D7100
 * Original: 0x000D7100 - 0x000D7136 (54 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7100: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x000D710Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D710D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7131; /* je: equal / zero */

loc_000D7116: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000D711Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000D711E: ;
    MEM32(esi) = 0x7C97C8;
    SET_LO16(eax, MEM16(edi + 0x1C));
    MEM16(esi + 0x1C) = LO16(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D7131: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7150
 * Original: 0x000D7150 - 0x000D7172 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7150: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0x33;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM32(eax) = 0x7C97D8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D7180
 * Original: 0x000D7180 - 0x000D7197 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7180: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x21;
    MEM32(eax) = 0x7C97E8;
    esp += 4; return; /* ret */

}

/**
 * sub_000D71A0
 * Original: 0x000D71A0 - 0x000D71A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D71A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D71A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D71B0
 * Original: 0x000D71B0 - 0x000D71B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D71B0(void)
{

loc_000D71B0: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000D71C0
 * Original: 0x000D71C0 - 0x000D71EE (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D71C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D71C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    edi = ecx;
    PUSH32(esp, 0x000D71CDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000D71CD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D71E9; /* je: equal / zero */

loc_000D71D6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000D71DEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000D71DE: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7C97E8;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D71E9: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D7200
 * Original: 0x000D7200 - 0x000D7227 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7200: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 0x21;
    MEM32(eax) = 0x7C97F8;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D7230
 * Original: 0x000D7230 - 0x000D728C (92 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7230: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D7288; /* jle: less or equal (signed <=) */

loc_000D7237: ;
    eax = esi * 4;
    ecx = MEM32(eax + 0x8F0040);
    SET_LO8(ecx, MEM8(ecx + 0xD2));
    PUSH32(esp, edi);
    edi = SX8(LO8(ecx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_000D7288; /* jge: greater or equal (signed >=) */

loc_000D7253: ;
    edx = 0x8F0044;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0xD2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 0xD2) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D7288; /* jl: less (signed <) */

loc_000D7264: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM16(esp + 0xC) = 0x36;
    MEM32(esp) = 0x7C9798;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x000D7288u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D7288: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D72B0
 * Original: 0x000D72B0 - 0x000D75DD (813 bytes, 260 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D72B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D72B0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000D72C8; /* je: equal / zero */

loc_000D72C1: ;
    edx = 1;
    goto loc_000D72E4;

loc_000D72C8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12C (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D72D7; /* jne: not equal / not zero */

loc_000D72D0: ;
    edx = 4;
    goto loc_000D72E4;

loc_000D72D7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x258) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x258 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D72E4; /* jl: less (signed <) */

loc_000D72DF: ;
    edx = 0x20;

loc_000D72E4: ;
    edi = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    eax = edi + edi * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x18) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax * 4 + 0x8E8FA8);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7323; /* jne: not equal / not zero */

loc_000D7305: ;
    eax = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x40);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D7318u); RECOMP_ABI_CALL(0x000D66C0u, sub_000D66C0); /* call 0x000D66C0 */

loc_000D7318: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D7323: ;
    ecx = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x28) = ecx;
    ecx = ecx + 0x895B8E;

loc_000D7334: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D734A; /* je: equal / zero */

loc_000D7339: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D7334; /* jl: less (signed <) */

loc_000D7342: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D734A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D75D5; /* je: equal / zero */

loc_000D7353: ;
    edx = MEM32(esp + 0x38);
    ecx = MEM32(edi * 4 + 0x8F0040);
    eax = ebp + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM8(eax + 0x895B8E) = 1;
    MEM8(eax + 0x895B8C) = LO8(ebx);
    MEM8(eax + 0x895B8D) = LO8(edx);
    MEM32(eax + 0x895B90) = esi;
    _fa = (uint32_t)(MEM8(ecx + 0xD2)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0xD2), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D73AC; /* jne: not equal / not zero */

loc_000D7387: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D73AC; /* jne: not equal / not zero */

loc_000D738C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D73AC; /* jne: not equal / not zero */

loc_000D7390: ;
    SET_LO8(ecx, MEM8(edi + 0x8960F6));
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi + 0x8960F6) = LO8(ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 0x895B8F) = LO8(ecx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D73AC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    MEM8(eax + 0x895B8F) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000D73D2; /* jne: not equal / not zero */

loc_000D73B8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D73DA; /* jne: not equal / not zero */

loc_000D73BC: ;
    SET_LO8(eax, MEM8(ecx + 0xD2));
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM8(ecx + 0xD2) = LO8(eax);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D73D2: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D75D5; /* je: equal / zero */

loc_000D73DA: ;
    SET_LO8(ecx, MEM8(eax + 0x895B85));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D73F2; /* jne: not equal / not zero */

loc_000D73E4: ;
    SET_LO8(ecx, MEM8(eax + 0x895B87));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D75D5; /* je: equal / zero */

loc_000D73F2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D75D5; /* jne: not equal / not zero */

loc_000D73FA: ;
    edx = MEM32(esp + 0x18);
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _fb = (uint32_t)(0x8F5B98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5B98;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x26) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x26;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x24) = eax;
    eax = edx * 4 + 0x8E8FA8;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    MEM32(esp + 0x1C) = 0x64;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x20) = 0x14;

loc_000D7435: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(ecx);
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = edx;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, MEM8(edx + 0x895B8E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D745F; /* je: equal / zero */

loc_000D745C: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000D745F: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8960F0);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D7498; /* jle: less or equal (signed <=) */

loc_000D746C: ;
    eax = 0x895B2B;

loc_000D7471: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7498; /* je: equal / zero */

loc_000D7476: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax + -3);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x30) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7490; /* jne: not equal / not zero */

loc_000D7480: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax + -2);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7490; /* jne: not equal / not zero */

loc_000D7488: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7490; /* je: equal / zero */

loc_000D748D: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000D7490: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D7471; /* jl: less (signed <) */

loc_000D7498: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x34) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D74A4; /* je: equal / zero */

loc_000D749E: ;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D74A7; /* jne: not equal / not zero */

loc_000D74A4: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000D74A7: ;
    ecx = MEM32(esp + 0x24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000D74B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D74F4; /* je: equal / zero */

loc_000D74B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D74B7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D74CD; /* je: equal / zero */

loc_000D74BC: ;
    ebx = ZX8(MEM8(ecx + eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D74C7; /* jne: not equal / not zero */

loc_000D74C4: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000D74C7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D74B7; /* jl: less (signed <) */

loc_000D74CD: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D74B0; /* jl: less (signed <) */

loc_000D74D6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D74F4; /* je: equal / zero */

loc_000D74DB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D74E1u); RECOMP_ABI_CALL(0x00031B4Du, sub_00031B4D); /* call 0x00031B4D */

loc_000D74E1: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D74F4; /* jge: greater or equal (signed >=) */

loc_000D74EC: ;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x1C) = eax;

loc_000D74F4: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x20) = eax;
    if ((_fa != 0)) goto loc_000D7435; /* jne: not equal / not zero */

loc_000D750E: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x10);
    esi = eax + ecx;
    edi = MEM32(esi * 4 + 0x8E8FA8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D7526u); RECOMP_ABI_CALL(0x0002B6F3u, sub_0002B6F3); /* call 0x0002B6F3 */

loc_000D7526: ;
    MEM32(edi + 0x1E4) = 1;
    edi = MEM32(esp + 0x2C);
    edx = ebp * 8;
    PUSH32(esp, edx);
    edi = edi + 0x895B8C;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x895B8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x895B8C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D7552u); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_000D7552: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D75D5; /* jle: less or equal (signed <=) */

loc_000D755D: ;
    ebx = ebp;
    /* nop */

loc_000D7560: ;
    MEM8(edi + 1) = 0;
    ecx = (uint32_t)(int32_t)SMEM8(0x8960F1);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D75CF; /* jle: less or equal (signed <=) */

loc_000D7571: ;
    ebp = MEM32(esp + 0x30);
    eax = esi + esi * 2;
    edx = (uint32_t)(int32_t)SMEM8(eax * 2 + 0x895B50);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    eax = eax * 2 + 0x895B50;
    if (CMP_NE(_fa, _fb)) goto loc_000D75CA; /* jne: not equal / not zero */

loc_000D758B: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 1);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x34) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D75CA; /* jne: not equal / not zero */

loc_000D7595: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D75B2; /* je: equal / zero */

loc_000D759A: ;
    SET_LO8(edx, MEM8(eax + 3));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D75A7; /* je: equal / zero */

loc_000D75A2: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D75CA; /* jne: not equal / not zero */

loc_000D75A7: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    MEM16(eax + 4) = LO16(ecx);
    goto loc_000D75C1;

loc_000D75B2: ;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 3), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D75CA; /* jne: not equal / not zero */

loc_000D75B8: ;
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(eax + 4) = LO16(edx);

loc_000D75C1: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x8960F1);
    esi = ecx;

loc_000D75CA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D7571; /* jl: less (signed <) */

loc_000D75CF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000D7560; /* jne: not equal / not zero */

loc_000D75D5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D76B0
 * Original: 0x000D76B0 - 0x000D7A62 (946 bytes, 297 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D76B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D76B0: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000D76B8u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000D76B8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7A5E; /* je: equal / zero */

loc_000D76C0: ;
    SET_LO8(eax, MEM8(0x896177));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7A5D; /* jne: not equal / not zero */

loc_000D76D0: ;
    eax = MEM32(0x8F0044);
    ecx = MEM32(0x8F0040);
    SET_LO8(eax, MEM8(eax + 0xD2));
    SET_LO8(ecx, MEM8(ecx + 0xD2));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x54);
    if (CMP_NE(_fa, _fb)) goto loc_000D76FB; /* jne: not equal / not zero */

loc_000D76F0: ;
    PUSH32(esp, 0x000D76F5u); RECOMP_ABI_CALL(0x000D6890u, sub_000D6890); /* call 0x000D6890 */

loc_000D76F5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D76FB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(eax) (8-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax = edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000D76F0; /* je: equal / zero */

loc_000D770C: ;
    _fa = (uint32_t)(MEM32(0x8F6A68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x800000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x8F6A68), 0x800000 (32-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_000D7A5C; /* ja: above (unsigned >) */

loc_000D771C: ;
    PUSH32(esp, ebp);
    eax = eax + eax * 4;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = eax;
    ecx = 0x1869F;
    edi = 2;
    eax = eax + 0x895BAD;
    edi = edi;

loc_000D7740: ;
    _fa = (uint32_t)(MEM8(eax + -31)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -31), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7765; /* je: equal / zero */

loc_000D7745: ;
    _fa = (uint32_t)(MEM8(eax + -32)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -32), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7765; /* je: equal / zero */

loc_000D774A: ;
    _fa = (uint32_t)(MEM8(eax + -30)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -30), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7765; /* jne: not equal / not zero */

loc_000D774F: ;
    edx = MEM32(eax + -29);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D7765; /* jge: greater or equal (signed >=) */

loc_000D7756: ;
    _fa = (uint32_t)(MEM8(eax + -33)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -33), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7760; /* je: equal / zero */

loc_000D775B: ;
    ebp = edi + -2;
    goto loc_000D7763;

loc_000D7760: ;
    esi = edi + -2;

loc_000D7763: ;
    ecx = edx;

loc_000D7765: ;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7789; /* je: equal / zero */

loc_000D776A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7789; /* je: equal / zero */

loc_000D776E: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7789; /* jne: not equal / not zero */

loc_000D7773: ;
    edx = MEM32(eax + 3);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D7789; /* jge: greater or equal (signed >=) */

loc_000D777A: ;
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7784; /* je: equal / zero */

loc_000D777F: ;
    ebp = edi + -1;
    goto loc_000D7787;

loc_000D7784: ;
    esi = edi + -1;

loc_000D7787: ;
    ecx = edx;

loc_000D7789: ;
    _fa = (uint32_t)(MEM8(eax + 0x21)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x21), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D77AA; /* je: equal / zero */

loc_000D778E: ;
    _fa = (uint32_t)(MEM8(eax + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x20), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D77AA; /* je: equal / zero */

loc_000D7793: ;
    _fa = (uint32_t)(MEM8(eax + 0x22)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x22), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D77AA; /* jne: not equal / not zero */

loc_000D7798: ;
    edx = MEM32(eax + 0x23);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D77AA; /* jge: greater or equal (signed >=) */

loc_000D779F: ;
    _fa = (uint32_t)(MEM8(eax + 0x1F)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1F), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) ebp = edi; /* cmovne */
    if (CMP_EQ(_fa, _fb)) esi = edi; /* cmove */
    ecx = edx;

loc_000D77AA: ;
    _fa = (uint32_t)(MEM8(eax + 0x41)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x41), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D77CF; /* je: equal / zero */

loc_000D77AF: ;
    _fa = (uint32_t)(MEM8(eax + 0x40)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x40), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D77CF; /* je: equal / zero */

loc_000D77B4: ;
    _fa = (uint32_t)(MEM8(eax + 0x42)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x42), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D77CF; /* jne: not equal / not zero */

loc_000D77B9: ;
    edx = MEM32(eax + 0x43);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D77CF; /* jge: greater or equal (signed >=) */

loc_000D77C0: ;
    _fa = (uint32_t)(MEM8(eax + 0x3F)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x3F), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D77CA; /* je: equal / zero */

loc_000D77C5: ;
    ebp = edi + 1;
    goto loc_000D77CD;

loc_000D77CA: ;
    esi = edi + 1;

loc_000D77CD: ;
    ecx = edx;

loc_000D77CF: ;
    _fa = (uint32_t)(MEM8(eax + 0x61)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x61), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D77F4; /* je: equal / zero */

loc_000D77D4: ;
    _fa = (uint32_t)(MEM8(eax + 0x60)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x60), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D77F4; /* je: equal / zero */

loc_000D77D9: ;
    _fa = (uint32_t)(MEM8(eax + 0x62)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x62), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D77F4; /* jne: not equal / not zero */

loc_000D77DE: ;
    edx = MEM32(eax + 0x63);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D77F4; /* jge: greater or equal (signed >=) */

loc_000D77E5: ;
    _fa = (uint32_t)(MEM8(eax + 0x5F)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x5F), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D77EF; /* je: equal / zero */

loc_000D77EA: ;
    ebp = edi + 2;
    goto loc_000D77F2;

loc_000D77EF: ;
    esi = edi + 2;

loc_000D77F2: ;
    ecx = edx;

loc_000D77F4: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edi + -2;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D7740; /* jl: less (signed <) */

loc_000D7808: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D78A4; /* jne: not equal / not zero */

loc_000D7811: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D7893; /* jl: less (signed <) */

loc_000D7815: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x13 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D7893; /* jg: greater (signed >) */

loc_000D781A: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D7893; /* jl: less (signed <) */

loc_000D7822: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D7893; /* jg: greater (signed >) */

loc_000D7827: ;
    eax = eax + eax * 4;
    ecx = esi + eax * 4;
    edx = MEM32(ecx * 4 + 0x8E8FA8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000D7842u); RECOMP_ABI_CALL(0x0001E63Du, sub_0001E63D); /* call 0x0001E63D */

loc_000D7842: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x000D784Bu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D784B: ;
    esi = MEM32(esp + 0x5C);
    eax = esi * 4;
    ecx = MEM32(eax + 0x8F0040);
    SET_LO8(ecx, MEM8(ecx + 0xD2));
    edx = 0x8F0044;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0xD2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax + 0xD2) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D7897; /* jle: less or equal (signed <=) */

loc_000D7873: ;
    PUSH32(esp, esi);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000D787Du); RECOMP_ABI_CALL(0x00024736u, sub_00024736); /* call 0x00024736 */

loc_000D787D: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x000D7886u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D7886: ;
    PUSH32(esp, 0x000D788Bu); RECOMP_ABI_CALL(0x000D6890u, sub_000D6890); /* call 0x000D6890 */

loc_000D788B: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D7893: ;
    esi = MEM32(esp + 0x5C);

loc_000D7897: ;
    PUSH32(esp, 0x000D789Cu); RECOMP_ABI_CALL(0x000D6890u, sub_000D6890); /* call 0x000D6890 */

loc_000D789C: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D78A4: ;
    eax = MEM32(esp + 0x10);
    edx = eax + eax * 4;
    ebp = ebp + edx * 4;
    edi = ebp;
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(MEM8(edi + 0x895B96)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x895B96), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D79C8; /* jne: not equal / not zero */

loc_000D78C0: ;
    ecx = MEM32(esp + 0x5C);
    eax = ecx * 4;
    edx = MEM32(eax + 0x8F0040);
    SET_LO8(edx, MEM8(edx + 0xD2));
    esi = 0x8F0044;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0xD2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 0xD2) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D78FB; /* jle: less or equal (signed <=) */

loc_000D78E8: ;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000D78F2u); RECOMP_ABI_CALL(0x00024736u, sub_00024736); /* call 0x00024736 */

loc_000D78F2: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x000D78FBu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D78FB: ;
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM8(esi + 0x8960F6)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x8960F6), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7945; /* jne: not equal / not zero */

loc_000D7907: ;
    eax = MEM32(ebp * 4 + 0x8E8FA8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7914u); RECOMP_ABI_CALL(0x0001709Au, sub_0001709A); /* call 0x0001709A */

loc_000D7914: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    MEM8(edi + 0x895B8E) = LO8(ebx);
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x18) = 0x7ABE10;
    MEM16(esp + 0x24) = 0x34;
    PUSH32(esp, 0x000D793Du); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D793D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D7945: ;
    ecx = MEM32(ebp * 4 + 0x8E8FA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D7952u); RECOMP_ABI_CALL(0x000229C2u, sub_000229C2); /* call 0x000229C2 */

loc_000D7952: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi + 0x895B8E) = LO8(ebx);
    eax = eax + 0x895BAF;
    ecx = 4;
    /* nop */

loc_000D7970: ;
    SET_LO8(edx, MEM8(eax + -32));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D797C; /* je: equal / zero */

loc_000D7977: ;
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + -32) = LO8(edx);

loc_000D797C: ;
    SET_LO8(edx, MEM8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7986; /* je: equal / zero */

loc_000D7982: ;
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);

loc_000D7986: ;
    SET_LO8(edx, MEM8(eax + 0x20));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7992; /* je: equal / zero */

loc_000D798D: ;
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x20) = LO8(edx);

loc_000D7992: ;
    SET_LO8(edx, MEM8(eax + 0x40));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D799E; /* je: equal / zero */

loc_000D7999: ;
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x40) = LO8(edx);

loc_000D799E: ;
    SET_LO8(edx, MEM8(eax + 0x60));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D79AA; /* je: equal / zero */

loc_000D79A5: ;
    SET_LO8(edx, LO8(edx) - 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x60) = LO8(edx);

loc_000D79AA: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000D7970; /* jne: not equal / not zero */

loc_000D79B2: ;
    SET_LO8(eax, MEM8(esi + 0x8960F6));
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM8(esi + 0x8960F6) = LO8(eax);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D79C8: ;
    PUSH32(esp, 0x18);
    edx = edi + 0x895B94;
    PUSH32(esp, edx);
    eax = edi + 0x895B8C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D79DDu); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_000D79DD: ;
    PUSH32(esp, 8);
    ecx = edi + 0x895BA4;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D79ECu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_000D79EC: ;
    edx = MEM32(ebp * 4 + 0x8E8FA8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x18;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM16(esp + 0x24) = 0x33;
    MEM16(esp + 0x34) = LO16(eax);
    MEM32(esp + 0x18) = 0x7C97D8;
    PUSH32(esp, 0x000D7A1Fu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D7A1F: ;
    ecx = MEM32(esp + 0x5C);
    eax = ecx * 4;
    edx = MEM32(eax + 0x8F0040);
    SET_LO8(edx, MEM8(edx + 0xD2));
    esi = 0x8F0044;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + 0xD2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax + 0xD2) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D7A5A; /* jle: less or equal (signed <=) */

loc_000D7A47: ;
    PUSH32(esp, ecx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x000D7A51u); RECOMP_ABI_CALL(0x00024736u, sub_00024736); /* call 0x00024736 */

loc_000D7A51: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x000D7A5Au); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D7A5A: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_000D7A5C: ;
    POP32(esp, esi);

loc_000D7A5D: ;
    POP32(esp, ebx);

loc_000D7A5E: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7B50
 * Original: 0x000D7B50 - 0x000D7B62 (18 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7B50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7B50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D7B57u); RECOMP_ABI_CALL(0x0001E147u, sub_0001E147); /* call 0x0001E147 */

loc_000D7B57: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000D7B5Eu); RECOMP_ABI_CALL(0x0001E147u, sub_0001E147); /* call 0x0001E147 */

loc_000D7B5E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7B70
 * Original: 0x000D7B70 - 0x000D7C3F (207 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7B70: ;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = ecx + 1;
    PUSH32(esp, ebx);

loc_000D7B83: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax + 0x89608C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7BEE; /* jne: not equal / not zero */

loc_000D7B8E: ;
    ebx = (uint32_t)(int32_t)SMEM8(eax * 4 + 0x896096);
    MEM32(esp + 0xC) = ebx;
    ebx = (uint32_t)(int32_t)SMEM8(eax * 4 + 0x8960BE);
    MEM32(esp + 0x1C) = ebx;
    ebx = (uint32_t)(int32_t)SMEM8(eax * 4 + 0x896097);
    MEM32(esp + 0x10) = ebx;
    ebx = (uint32_t)(int32_t)SMEM8(eax * 4 + 0x8960BF);
    MEM32(esp + 0x20) = ebx;
    ebx = (uint32_t)(int32_t)SMEM8(eax * 4 + 0x896098);
    MEM32(esp + 0x14) = ebx;
    ebx = (uint32_t)(int32_t)SMEM8(eax * 4 + 0x8960C0);
    MEM32(esp + 0x24) = ebx;
    ebx = (uint32_t)(int32_t)SMEM8(eax * 4 + 0x896099);
    MEM32(esp + 0x18) = ebx;
    ebx = (uint32_t)(int32_t)SMEM8(eax * 4 + 0x8960C1);
    MEM32(esp + 0x28) = ebx;

loc_000D7BEE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D7B83; /* jl: less (signed <) */

loc_000D7BF4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000D7BFF; /* je: equal / zero */

loc_000D7BF9: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    goto loc_000D7C02;

loc_000D7BFF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000D7C02: ;
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x30) = edi;
    MEM16(esp + 0x34) = 0x31;
    MEM32(esp + 0x28) = 0x7C9778;
    MEM32(esp + 0x48) = eax;
    ecx = 8;
    esi = esp + 8;
    edi = esp + 0x4C;
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
    ecx = esp + 0x28;
    PUSH32(esp, 0x000D7C39u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D7C39: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7C80
 * Original: 0x000D7C80 - 0x000D7CEB (107 bytes, 29 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D7C80: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7C8F; /* je: equal / zero */

loc_000D7C89: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000D7C92;

loc_000D7C8F: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000D7C92: ;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = ecx;
    ecx = MEM32(esp + 0x30);
    SET_LO8(edx, MEM8(ecx + 0x39));
    SET_LO8(ecx, MEM8(esp + 0x3C));
    MEM8(esp + 0x1D) = LO8(eax);
    SET_LO8(eax, MEM8(esp + 0x38));
    MEM8(esp + 0x1F) = LO8(ecx);
    ecx = MEM32(esp + 0x44);
    MEM8(esp + 0x1C) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 0x34));
    MEM8(esp + 0x1E) = LO8(eax);
    eax = MEM32(esp + 0x40);
    MEM32(esp + 0x28) = ecx;
    ecx = esp;
    MEM16(esp + 0xC) = 0x35;
    MEM32(esp) = 0x7C9758;
    MEM8(esp + 0x20) = LO8(edx);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000D7CE7u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D7CE7: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D7D10
 * Original: 0x000D7D10 - 0x000D80D4 (964 bytes, 279 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D7D10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D7D10: ;
    SET_LO8(eax, MEM8(0x896177));
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D80CC; /* jne: not equal / not zero */

loc_000D7D26: ;
    ecx = MEM32(0x8F0040);
    SET_LO8(eax, MEM8(ecx + 0xD2));
    edx = MEM32(0x8F0044);
    MEM8(esp + 8) = LO8(eax);
    SET_LO8(eax, MEM8(edx + 0xD2));
    MEM8(esp + 9) = LO8(eax);
    MEM8(0x8960F4) = LO8(eax);
    SET_LO8(eax, MEM8(ecx + 0xD2));
    MEM8(esp + 4) = LO8(ebx);
    MEM8(esp + 5) = LO8(ebx);
    MEM32(esp + 0x24) = 0xFFFFFFFFu;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x28) = ebx;
    MEM8(0x8960F3) = LO8(eax);
    PUSH32(esp, 0x000D7D77u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000D7D77: ;
    ecx = eax;
    PUSH32(esp, 0x000D7D7Eu); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_000D7D7E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D80CC; /* jne: not equal / not zero */

loc_000D7D86: ;
    _fa = (uint32_t)(MEM16(0x896164)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896164), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D80CC; /* jne: not equal / not zero */

loc_000D7D93: ;
    PUSH32(esp, 0x000D7D98u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000D7D98: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D80CC; /* je: equal / zero */

loc_000D7DA0: ;
    _fa = (uint32_t)(MEM32(0x8E9810)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8E9810), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D80CC; /* jne: not equal / not zero */

loc_000D7DAC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0x895B8F;
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = esi;
    MEM32(esp + 0x24) = 1;
    MEM32(esp + 0x28) = 0x8F0044;
    edi = edi;

loc_000D7DD0: ;
    MEM32(esp + 0x14) = ebx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp = eax;

loc_000D7DD7: ;
    _fa = (uint32_t)(MEM8(esi + -2)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -2), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7FEC; /* je: equal / zero */

loc_000D7DE0: ;
    _fa = (uint32_t)(MEM8(esi + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -1), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7FEC; /* jne: not equal / not zero */

loc_000D7DE9: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7FEC; /* je: equal / zero */

loc_000D7DF3: ;
    ecx = eax + -1;
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(esi) = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7E23; /* jne: not equal / not zero */

loc_000D7E06: ;
    _fa = (uint32_t)(MEM8(esi + -3)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -3), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7E23; /* je: equal / zero */

loc_000D7E0B: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = esp + 0x7C;
    PUSH32(esp, 0x000D7E1Au); RECOMP_ABI_CALL(0x0002EA06u, sub_0002EA06); /* call 0x0002EA06 */

loc_000D7E1A: ;
    ecx = esp + 0x74;
    PUSH32(esp, 0x000D7E23u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D7E23: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7E6E; /* jne: not equal / not zero */

loc_000D7E28: ;
    _fa = (uint32_t)(MEM8(esi + -3)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -3), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7E6E; /* je: equal / zero */

loc_000D7E2D: ;
    _fa = (uint32_t)(MEM8(esi + 6)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 6), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7E6E; /* jne: not equal / not zero */

loc_000D7E32: ;
    edx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(edx + 0x8960F6)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x8960F6), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7E6E; /* jne: not equal / not zero */

loc_000D7E3E: ;
    eax = MEM32(ebp + 0x8E8EB8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7E4Bu); RECOMP_ABI_CALL(0x00036972u, sub_00036972); /* call 0x00036972 */

loc_000D7E4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x38;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x38) = 0x7ABE10;
    MEM16(esp + 0x44) = 0x27;
    PUSH32(esp, 0x000D7E6Eu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D7E6E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7FEC; /* jne: not equal / not zero */

loc_000D7E76: ;
    _fa = (uint32_t)(MEM8(esi + -3)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -3), LO8(ebx) (8-bit) */
    SET_LO8(eax, MEM8(esi + 6));
    if (CMP_EQ(_fa, _fb)) goto loc_000D7F88; /* je: equal / zero */

loc_000D7E82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7F8C; /* jne: not equal / not zero */

loc_000D7E8A: ;
    edx = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edx);
    ecx = MEM32(edi * 4 + 0x8F0040);
    SET_LO8(edx, MEM8(eax + 0xD2));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xD2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(ecx + 0xD2) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D7EC0; /* jle: less or equal (signed <=) */

loc_000D7EA9: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 0x58;
    PUSH32(esp, 0x000D7EB7u); RECOMP_ABI_CALL(0x00024736u, sub_00024736); /* call 0x00024736 */

loc_000D7EB7: ;
    ecx = esp + 0x54;
    PUSH32(esp, 0x000D7EC0u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D7EC0: ;
    _fa = (uint32_t)(MEM8(edi + 0x8960F6)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x8960F6), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7F1D; /* jne: not equal / not zero */

loc_000D7EC8: ;
    ecx = MEM32(ebp + 0x8E8FA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D7ED4u); RECOMP_ABI_CALL(0x0001709Au, sub_0001709A); /* call 0x0001709A */

loc_000D7ED4: ;
    SET_LO8(ecx, MEM8(esp + edi + 0x14));
    eax = esp + edi + 0x14;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    _fa = (uint32_t)(MEM32(esp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x30), 0xFFFFFFFFu (32-bit) */
    MEM8(esi + -2) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000D7F01; /* jne: not equal / not zero */

loc_000D7EED: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(ebp + 0x8E8FA8);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x2C) = eax;
    goto loc_000D7F0B;

loc_000D7F01: ;
    ecx = MEM32(ebp + 0x8E8FA8);
    MEM32(esp + 0x34) = ecx;

loc_000D7F0B: ;
    _fa = (uint32_t)(MEM8(esi + -4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + -4), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7FEC; /* jne: not equal / not zero */

loc_000D7F14: ;
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000D7FEC;

loc_000D7F1D: ;
    edx = MEM32(ebp + 0x8E8FA8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D7F29u); RECOMP_ABI_CALL(0x000229C2u, sub_000229C2); /* call 0x000229C2 */

loc_000D7F29: ;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + -2) = LO8(ebx);
    edx = 4;

loc_000D7F38: ;
    SET_LO8(ecx, MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7F42; /* je: equal / zero */

loc_000D7F3E: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);

loc_000D7F42: ;
    SET_LO8(ecx, MEM8(eax + 0x20));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7F4E; /* je: equal / zero */

loc_000D7F49: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x20) = LO8(ecx);

loc_000D7F4E: ;
    SET_LO8(ecx, MEM8(eax + 0x40));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7F5A; /* je: equal / zero */

loc_000D7F55: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x40) = LO8(ecx);

loc_000D7F5A: ;
    SET_LO8(ecx, MEM8(eax + 0x60));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7F66; /* je: equal / zero */

loc_000D7F61: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x60) = LO8(ecx);

loc_000D7F66: ;
    SET_LO8(ecx, MEM8(eax + 0x80));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7F78; /* je: equal / zero */

loc_000D7F70: ;
    SET_LO8(ecx, LO8(ecx) - 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(eax + 0x80) = LO8(ecx);

loc_000D7F78: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000D7F38; /* jne: not equal / not zero */

loc_000D7F80: ;
    MEM8(edi + 0x8960F6) = MEM8(edi + 0x8960F6) - 1;
    _fa = (uint32_t)(MEM8(edi + 0x8960F6)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    goto loc_000D7FEC;

loc_000D7F88: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D7FDA; /* je: equal / zero */

loc_000D7F8C: ;
    SET_LO8(eax, MEM8(esi + -4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    edi = esi + -4;
    if (CMP_NE(_fa, _fb)) goto loc_000D7FBD; /* jne: not equal / not zero */

loc_000D7F96: ;
    _fa = (uint32_t)(MEM8(esi + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 4), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D7FBD; /* jne: not equal / not zero */

loc_000D7F9C: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0xA0;
    PUSH32(esp, 0x000D7FB1u); RECOMP_ABI_CALL(0x0002EA06u, sub_0002EA06); /* call 0x0002EA06 */

loc_000D7FB1: ;
    ecx = esp + 0x98;
    PUSH32(esp, 0x000D7FBDu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D7FBD: ;
    PUSH32(esp, 0x18);
    edx = esi + 4;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000D7FC9u); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_000D7FC9: ;
    PUSH32(esp, 8);
    eax = esi + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D7FD5u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_000D7FD5: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000D7FEC;

loc_000D7FDA: ;
    ecx = MEM32(ebp + 0x8E8FA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D7FE6u); RECOMP_ABI_CALL(0x000229C2u, sub_000229C2); /* call 0x000229C2 */

loc_000D7FE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + -2) = LO8(ebx);

loc_000D7FEC: ;
    eax = MEM32(esp + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_000D7DD7; /* jl: less (signed <) */

loc_000D8004: ;
    esi = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x24);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = esi;
    esi = MEM32(esp + 0x20);
    eax = ebp;
    ebp = MEM32(esp + 0x28);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x280) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x280;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = ebp;
    MEM32(esp + 0x20) = esi;
    if (CMP_G(_fas, _fbs)) goto loc_000D7DD0; /* jg: greater (signed >) */

loc_000D803A: ;
    SET_LO8(edx, MEM8(esp + 0x10));
    eax = (uint32_t)(int32_t)SMEM8(esp + 0x11);
    ecx = SX8(LO8(edx));
    esi = ecx + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8087; /* jne: not equal / not zero */

loc_000D804E: ;
    edx = MEM32(0x8F0044);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0xD2);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F0040);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xD2);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000D8079u); RECOMP_ABI_CALL(0x000D7C80u, sub_000D7C80); /* call 0x000D7C80 */

loc_000D8079: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000D8087: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D8091; /* jg: greater (signed >) */

loc_000D808B: ;
    _fa = (uint32_t)(MEM8(esp + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x11), LO8(ebx) (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D80C9; /* jle: less or equal (signed <=) */

loc_000D8091: ;
    edi = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    eax = MEM32(0x8F0040);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F0044);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xD2);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xD2);
    eax = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x4C);
    PUSH32(esp, 0x000D80C6u); RECOMP_ABI_CALL(0x000D7C80u, sub_000D7C80); /* call 0x000D7C80 */

loc_000D80C6: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D80C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000D80CC: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xAC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D81D0
 * Original: 0x000D81D0 - 0x000D8CCB (2811 bytes, 762 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D81D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D81D0: ;
    _fb = (uint32_t)(0x280) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x280;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000D81DBu); RECOMP_ABI_CALL(0x000189EFu, sub_000189EF); /* call 0x000189EF */

loc_000D81DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8CC4; /* jne: not equal / not zero */

loc_000D81E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x130) = edx;
    MEM32(esp + 0x134) = edx;
    MEM32(esp + 0x138) = edx;
    MEM32(esp + 0x13C) = edx;
    MEM32(esp + 0x140) = edx;
    MEM32(esp + 0x144) = edx;
    MEM32(esp + 0x148) = edx;
    MEM32(esp + 0x14C) = edx;
    MEM32(esp + 0x150) = edx;
    MEM32(esp + 0x154) = edx;
    MEM32(esp + 0x158) = edx;
    MEM32(esp + 0x15C) = edx;
    MEM32(esp + 0x160) = edx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x164) = edx;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x168) = edx;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x16C) = edx;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x170) = edx;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x174) = edx;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x178) = edx;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x17C) = edx;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x180) = edx;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x184) = edx;
    MEM32(esp + 0x90) = eax;
    MEM32(esp + 0x188) = edx;
    MEM32(esp + 0x94) = eax;
    MEM32(esp + 0x18C) = edx;
    MEM32(esp + 0x98) = eax;
    MEM32(esp + 0x190) = edx;
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0x194) = edx;
    MEM32(esp + 0xA0) = eax;
    MEM32(esp + 0x198) = edx;
    MEM32(esp + 0xA4) = eax;
    MEM32(esp + 0x19C) = edx;
    MEM32(esp + 0xA8) = eax;
    MEM32(esp + 0x1A0) = edx;
    MEM32(esp + 0xAC) = eax;
    MEM32(esp + 0x1A4) = edx;
    MEM32(esp + 0xB0) = eax;
    MEM32(esp + 0x68) = ecx;
    MEM32(esp + 0x1A8) = edx;
    MEM32(esp + 0xB4) = eax;
    MEM32(esp + 0x6C) = ecx;
    MEM32(esp + 0x1AC) = edx;
    MEM32(esp + 0xB8) = eax;
    MEM32(esp + 0x70) = ecx;
    MEM32(esp + 0x1B0) = edx;
    MEM32(esp + 0xBC) = eax;
    MEM32(esp + 0x74) = ecx;
    MEM32(esp + 0x1B4) = edx;
    MEM32(esp + 0xC0) = eax;
    MEM32(esp + 0x78) = ecx;
    MEM32(esp + 0x1B8) = edx;
    MEM32(esp + 0xC4) = eax;
    MEM32(esp + 0x7C) = ecx;
    MEM32(esp + 0x1BC) = edx;
    MEM32(esp + 0xC8) = eax;
    MEM32(esp + 0x80) = ecx;
    MEM32(esp + 0x1C0) = edx;
    MEM32(esp + 0xCC) = eax;
    MEM32(esp + 0x84) = ecx;
    MEM32(esp + 0x1C4) = edx;
    MEM32(esp + 0x88) = ecx;
    MEM32(esp + 0x1C8) = edx;
    MEM32(esp + 0xD0) = eax;
    MEM32(esp + 0x8C) = ecx;
    MEM32(esp + 0x1CC) = edx;
    MEM32(esp + 0xD4) = eax;
    MEM32(esp + 0xD8) = eax;
    MEM32(esp + 0xDC) = eax;
    MEM32(esp + 0xE0) = eax;
    MEM32(esp + 0xE4) = eax;
    MEM32(esp + 0xE8) = eax;
    MEM32(esp + 0xEC) = eax;
    MEM32(esp + 0xF0) = eax;
    MEM32(esp + 0xF4) = eax;
    MEM32(esp + 0xF8) = eax;
    MEM32(esp + 0xFC) = eax;
    MEM32(esp + 0x100) = eax;
    MEM32(esp + 0x104) = eax;
    MEM32(esp + 0x108) = eax;
    MEM32(esp + 0x10C) = eax;
    MEM32(esp + 0x110) = eax;
    MEM32(esp + 0x114) = eax;
    MEM32(esp + 0x118) = eax;
    MEM32(esp + 0x11C) = eax;
    PUSH32(esp, ebx);
    MEM32(esp + 0x124) = eax;
    PUSH32(esp, ebp);
    MEM32(esp + 0x12C) = eax;
    MEM32(esp + 0x130) = eax;
    ecx = edx;
    PUSH32(esp, esi);
    MEM32(esp + 0x138) = eax;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, edi);
    goto loc_000D8490;

    /* nop */

loc_000D8490: ;
    esi = MEM32(eax + 0x8F0040);
    esi = (uint32_t)(int32_t)SMEM8(esi + 0xD2);
    MEM32(esp + eax + 0x28) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8490; /* jl: less (signed <) */

loc_000D84A9: ;
    eax = MEM32(esp + 0x28);
    MEM32(0x8B2180) = eax;
    eax = MEM32(esp + 0x2C);
    MEM32(0x8B2184) = eax;
    SET_LO8(eax, MEM8(0x8960F0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(0x8960F1) = 0;
    MEM32(esp + 0x1C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_000D8671; /* jle: less or equal (signed <=) */

loc_000D84D7: ;
    eax = 0x895B29;
    /* nop */

loc_000D84E0: ;
    SET_LO8(ebx, MEM8(eax + 2));
    ecx = (uint32_t)(int32_t)SMEM8(eax + -1);
    edx = SX8(LO8(ebx));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000D85C0; /* ja: above (unsigned >) */

loc_000D84F4: ;
    edx = ZX8(MEM8(edx + 0xD8CE0));
    { uint32_t _jt = MEM32(edx * 4 + 0xD8CCC); /* switch: 5 entries, 5 targets */
    if (_jt == 0x000D8502u) goto loc_000D8502;
    if (_jt == 0x000D8538u) goto loc_000D8538;
    if (_jt == 0x000D8573u) goto loc_000D8573;
    if (_jt == 0x000D85A6u) goto loc_000D85A6;
    if (_jt == 0x000D85C0u) goto loc_000D85C0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000D8502: ;
    MEM32(esp + ecx * 4 + 0x20) = MEM32(esp + ecx * 4 + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esp + ecx * 4 + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = (uint32_t)(int32_t)SMEM8(eax);
    ecx = ecx + ecx * 4;
    esi = edx + ecx * 4;
    SET_LO8(ecx, MEM8(esp + esi + 0x30));
    edi = esp + esi + 0x30;
    edx = SX8(LO8(ecx));
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(eax + 1));
    edx = esp + edx + 0x1F0;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx + esi * 2) = LO8(eax);
    eax = MEM32(esp + 0x10);
    MEM8(edi) = LO8(ecx);
    goto loc_000D85C0;

loc_000D8538: ;
    esi = MEM32(esp + ecx * 4 + 0x20);
    SET_LO8(edx, MEM8(eax + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + ecx * 4 + 0x20) = esi;
    esi = (uint32_t)(int32_t)SMEM8(eax);
    ecx = ecx + ecx * 4;
    esi = esi + ecx * 4;
    SET_LO8(ecx, MEM8(esp + esi + 0x30));
    edi = esp + esi + 0x30;
    ebp = SX8(LO8(ecx));
    esi = ebp + esi * 2;
    _fb = (uint32_t)(2) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + 2);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(esp + esi + 0x1F0) = LO8(edx);
    MEM8(esp + esi + 0x1F1) = LO8(edx);
    MEM8(edi) = LO8(ecx);
    goto loc_000D85C0;

loc_000D8573: ;
    MEM32(esp + ecx * 4 + 0x14) = MEM32(esp + ecx * 4 + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + ecx * 4 + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + ecx * 4;
    ecx = (uint32_t)(int32_t)SMEM8(eax);
    esi = ecx + edx * 4;
    SET_LO8(ecx, MEM8(esp + esi + 0x78));
    edi = esp + esi + 0x78;
    edx = SX8(LO8(ecx));
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(eax + 1));
    edx = esp + edx + 0x240;
    SET_LO8(ecx, LO8(ecx) + 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx + esi * 2) = LO8(eax);
    eax = MEM32(esp + 0x10);
    MEM8(edi) = LO8(ecx);
    goto loc_000D85C0;

loc_000D85A6: ;
    edx = (uint32_t)(int32_t)SMEM8(eax);
    ecx = ecx + ecx * 4;
    ecx = edx + ecx * 4;
    edx = MEM32(esp + ecx * 4 + 0xA0);
    ecx = esp + ecx * 4 + 0xA0;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx) = edx;

loc_000D85C0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D864E; /* je: equal / zero */

loc_000D85CA: ;
    SET_LO8(edx, MEM8(0x8960F1));
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D861F; /* jle: less or equal (signed <=) */

loc_000D85D6: ;
    ecx = 0x895B53;
    goto loc_000D85E0;

    /* nop */

loc_000D85E0: ;
    _fa = (uint32_t)(MEM8(eax + 2)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 2), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8610; /* jne: not equal / not zero */

loc_000D85E6: ;
    SET_LO8(ebx, MEM8(ecx + -3));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax + -1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax + -1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8610; /* jne: not equal / not zero */

loc_000D85EE: ;
    SET_LO8(ebx, MEM8(ecx + -2));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8610; /* jne: not equal / not zero */

loc_000D85F5: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8610; /* jne: not equal / not zero */

loc_000D85FA: ;
    SET_LO8(ebx, MEM8(eax + 1));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + -1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(ecx + -1) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8610; /* jne: not equal / not zero */

loc_000D8602: ;
    MEM8(ecx) = 2;
    SET_LO8(edx, MEM8(0x8960F1));
    edi = 1;

loc_000D8610: ;
    ebx = SX8(LO8(edx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D85E0; /* jl: less (signed <) */

loc_000D861B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D864E; /* jne: not equal / not zero */

loc_000D861F: ;
    ecx = SX8(LO8(edx));
    SET_LO8(edx, MEM8(eax + 2));
    ecx = ecx + ecx * 2;
    ecx = ecx * 2 + 0x895B50;
    MEM8(ecx + 3) = LO8(edx);
    SET_LO8(edx, MEM8(eax + -1));
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + 1) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(ecx + 2) = LO8(edx);
    MEM16(ecx + 4) = 0xFF;
    MEM8(0x8960F1) = MEM8(0x8960F1) + 1;
    _fa = (uint32_t)(MEM8(0x8960F1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_000D864E: ;
    ecx = MEM32(esp + 0x1C);
    edx = (uint32_t)(int32_t)SMEM8(0x8960F0);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000D84E0; /* jl: less (signed <) */

loc_000D8669: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);

loc_000D8671: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D868B; /* jle: less or equal (signed <=) */

loc_000D8675: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000D8697; /* je: equal / zero */

loc_000D8687: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000D869C;

loc_000D868B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x10) = ecx;

loc_000D8697: ;
    esi = 1;

loc_000D869C: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi;

loc_000D86A0: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D86B0; /* jne: not equal / not zero */

loc_000D86A8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D878F; /* je: equal / zero */

loc_000D86B0: ;
    eax = esi + esi * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x1C) = eax;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(esp + eax + 0x78));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8785; /* je: equal / zero */

loc_000D86C8: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D86D8; /* jne: not equal / not zero */

loc_000D86D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8785; /* je: equal / zero */

loc_000D86D8: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(esp + eax + 0x78));
    edi = esp + eax + 0x78;
    ecx = SX8(LO8(ebx));
    edx = esp + ecx + 0x240;
    eax = (uint32_t)(int32_t)SMEM8(edx + eax * 2 + -1);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x12C;
    PUSH32(esp, 0x000D8706u); RECOMP_ABI_CALL(0x000D72B0u, sub_000D72B0); /* call 0x000D72B0 */

loc_000D8706: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    MEM8(edi) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000D8718; /* jne: not equal / not zero */

loc_000D8712: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000D871C;

loc_000D8718: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000D871C: ;
    eax = esi * 4;
    edx = MEM32(esp + eax + 0x28);
    ecx = eax;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + ecx + 0x2C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D8778; /* jle: less or equal (signed <=) */

loc_000D8731: ;
    eax = MEM32(eax + 0x8F0040);
    SET_LO8(eax, MEM8(eax + 0xD2));
    ebx = SX8(LO8(eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D8778; /* jge: greater or equal (signed >=) */

loc_000D8744: ;
    ecx = MEM32(ecx + 0x8F0044);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xD2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xD2) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8778; /* jl: less (signed <) */

loc_000D8752: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x58;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = eax;
    MEM16(esp + 0x64) = 0x36;
    MEM32(esp + 0x58) = 0x7C9798;
    MEM32(esp + 0x74) = esi;
    PUSH32(esp, 0x000D8778u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D8778: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    ecx = MEM32(esp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_000D86C8; /* jne: not equal / not zero */

loc_000D8785: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D86A0; /* jl: less (signed <) */

loc_000D878F: ;
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D87AD; /* jle: less or equal (signed <=) */

loc_000D879B: ;
    eax = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = 0;
    goto loc_000D87BD;

loc_000D87AD: ;
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = 0;

loc_000D87BD: ;
    eax = MEM32(0x8F6A68);
    esi = MEM32(0x8F0040);
    SET_LO8(ebx, MEM8(esi + 0xD2));
    eax = eax & 0xC000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x4000000 (32-bit) */
    SET_LO8(eax, 5);
    if (CMP_NE(_fa, _fb)) goto loc_000D8855; /* jne: not equal / not zero */

loc_000D87DC: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D88C1; /* jne: not equal / not zero */

loc_000D87E4: ;
    esi = MEM32(0x8F0044);
    _fa = (uint32_t)(MEM8(esi + 0xD2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xD2), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D88C1; /* jne: not equal / not zero */

loc_000D87F6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D88C1; /* jne: not equal / not zero */

loc_000D87FF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D88C1; /* jne: not equal / not zero */

loc_000D8807: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esp + 0x30;
    /* nop */

loc_000D8810: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D8812: ;
    SET_LO8(eax, MEM8(ebx + esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8841; /* je: equal / zero */

loc_000D8819: ;
    ecx = SX8(LO8(eax));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM8(esp + ecx + 0x1EF);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    eax = 1;
    ecx = 0x78;
    PUSH32(esp, 0x000D883Au); RECOMP_ABI_CALL(0x000D72B0u, sub_000D72B0); /* call 0x000D72B0 */

loc_000D883A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebx + esi) = 0;

loc_000D8841: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8812; /* jl: less (signed <) */

loc_000D884A: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x50 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8810; /* jl: less (signed <) */

loc_000D8853: ;
    goto loc_000D88C1;

loc_000D8855: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D88C1; /* jne: not equal / not zero */

loc_000D8859: ;
    esi = MEM32(0x8F0044);
    _fa = (uint32_t)(MEM8(esi + 0xD2)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0xD2), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D88C1; /* jne: not equal / not zero */

loc_000D8867: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D88C1; /* jne: not equal / not zero */

loc_000D886C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D88C1; /* jne: not equal / not zero */

loc_000D8870: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esp + 0x30;

loc_000D8878: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000D8880: ;
    SET_LO8(eax, MEM8(ebx + esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D88AF; /* je: equal / zero */

loc_000D8887: ;
    eax = SX8(LO8(eax));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM8(esp + eax + 0x1EF);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    eax = 1;
    ecx = 0x78;
    PUSH32(esp, 0x000D88A8u); RECOMP_ABI_CALL(0x000D72B0u, sub_000D72B0); /* call 0x000D72B0 */

loc_000D88A8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebx + esi) = 0;

loc_000D88AF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8880; /* jl: less (signed <) */

loc_000D88B8: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x50 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8878; /* jl: less (signed <) */

loc_000D88C1: ;
    eax = MEM32(esp + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edx;

loc_000D88D0: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D88E4; /* jne: not equal / not zero */

loc_000D88D8: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D89CA; /* je: equal / zero */

loc_000D88E4: ;
    eax = esi + esi * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x1C) = eax;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, MEM8(esp + eax + 0x30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D89C0; /* je: equal / zero */

loc_000D88FC: ;
    /* nop */

loc_000D8900: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8914; /* jne: not equal / not zero */

loc_000D8908: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D89C0; /* je: equal / zero */

loc_000D8914: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, MEM8(esp + eax + 0x30));
    edi = esp + eax + 0x30;
    ecx = SX8(LO8(ebx));
    edx = esp + ecx + 0x1F0;
    eax = (uint32_t)(int32_t)SMEM8(edx + eax * 2 + -1);
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = 1;
    ecx = 0x78;
    PUSH32(esp, 0x000D8945u); RECOMP_ABI_CALL(0x000D72B0u, sub_000D72B0); /* call 0x000D72B0 */

loc_000D8945: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    MEM8(edi) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000D8957; /* jne: not equal / not zero */

loc_000D8951: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_000D895B;

loc_000D8957: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000D895B: ;
    eax = esi * 4;
    edx = MEM32(esp + eax + 0x28);
    ecx = eax;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + ecx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + ecx + 0x2C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D89B7; /* jle: less or equal (signed <=) */

loc_000D8970: ;
    eax = MEM32(eax + 0x8F0040);
    SET_LO8(eax, MEM8(eax + 0xD2));
    ebx = SX8(LO8(eax));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D89B7; /* jge: greater or equal (signed >=) */

loc_000D8983: ;
    ecx = MEM32(ecx + 0x8F0044);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0xD2)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0xD2) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D89B7; /* jl: less (signed <) */

loc_000D8991: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x58;
    MEM32(esp + 0x5C) = eax;
    MEM32(esp + 0x60) = eax;
    MEM16(esp + 0x64) = 0x36;
    MEM32(esp + 0x58) = 0x7C9798;
    MEM32(esp + 0x74) = esi;
    PUSH32(esp, 0x000D89B7u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000D89B7: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8900; /* jne: not equal / not zero */

loc_000D89C0: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D88D0; /* jl: less (signed <) */

loc_000D89CA: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ebp;
    edi = esp + 0x30;

loc_000D89D4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D89D6: ;
    _fa = (uint32_t)(MEM8(edi + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8A16; /* je: equal / zero */

loc_000D89DC: ;
    /* nop */

loc_000D89E0: ;
    SET_LO8(ebx, MEM8(edi + esi));
    ecx = MEM32(esp + 0x14);
    edx = SX8(LO8(ebx));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM8(esp + edx + 0x1EF);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = 1;
    ecx = 0x78;
    PUSH32(esp, 0x000D8A08u); RECOMP_ABI_CALL(0x000D72B0u, sub_000D72B0); /* call 0x000D72B0 */

loc_000D8A08: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(edi + esi) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000D89E0; /* jne: not equal / not zero */

loc_000D8A16: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D89D6; /* jl: less (signed <) */

loc_000D8A1F: ;
    edx = MEM32(esp + 0x14);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x50 (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000D89D4; /* jl: less (signed <) */

loc_000D8A30: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ebp;
    edi = esp + 0x78;
    /* nop */

loc_000D8A40: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D8A42: ;
    _fa = (uint32_t)(MEM8(edi + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8A83; /* je: equal / zero */

loc_000D8A48: ;
    goto loc_000D8A50;

    /* nop */

loc_000D8A50: ;
    SET_LO8(ebx, MEM8(edi + esi));
    ecx = MEM32(esp + 0x14);
    edx = SX8(LO8(ebx));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM8(esp + edx + 0x23F);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x12C;
    PUSH32(esp, 0x000D8A75u); RECOMP_ABI_CALL(0x000D72B0u, sub_000D72B0); /* call 0x000D72B0 */

loc_000D8A75: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(ebx) - 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(edi + esi) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000D8A50; /* jne: not equal / not zero */

loc_000D8A83: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8A42; /* jl: less (signed <) */

loc_000D8A8C: ;
    edx = MEM32(esp + 0x14);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x50 (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000D8A40; /* jl: less (signed <) */

loc_000D8A9D: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esp + 0x140;

loc_000D8AA6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D8AA8: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8ACA; /* je: equal / zero */

loc_000D8AAE: ;
    ebp = eax;

loc_000D8AB0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x258;
    PUSH32(esp, 0x000D8AC2u); RECOMP_ABI_CALL(0x000D72B0u, sub_000D72B0); /* call 0x000D72B0 */

loc_000D8AC2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000D8AB0; /* jne: not equal / not zero */

loc_000D8AC8: ;
    MEM32(esi) = ebp;

loc_000D8ACA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8AA8; /* jl: less (signed <) */

loc_000D8AD3: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8AA6; /* jl: less (signed <) */

loc_000D8AD9: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esp + 0xA0;

loc_000D8AE2: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D8AE4: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8B0A; /* je: equal / zero */

loc_000D8AEA: ;
    ebp = eax;
    /* nop */

loc_000D8AF0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1869F;
    PUSH32(esp, 0x000D8B02u); RECOMP_ABI_CALL(0x000D72B0u, sub_000D72B0); /* call 0x000D72B0 */

loc_000D8B02: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000D8AF0; /* jne: not equal / not zero */

loc_000D8B08: ;
    MEM32(esi) = ebp;

loc_000D8B0A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8AE4; /* jl: less (signed <) */

loc_000D8B13: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8AE2; /* jl: less (signed <) */

loc_000D8B19: ;
    PUSH32(esp, 4);
    edx = esp + 0x1E4;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000D8B2Au); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_000D8B2A: ;
    SET_LO8(eax, MEM8(0x8960F1));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D8C36; /* jle: less or equal (signed <=) */

loc_000D8B3E: ;
    esi = 0x895B50;

loc_000D8B43: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    SET_LO16(ecx, MEM16(esi + 4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFF (16-bit) */
    eax = eax + eax * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000D8B5C; /* je: equal / zero */

loc_000D8B54: ;
    ecx = SX16(LO16(ecx));
    edi = ecx + eax * 4;
    goto loc_000D8B63;

loc_000D8B5C: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 1);
    edi = edx + eax * 4;

loc_000D8B63: ;
    SET_LO8(eax, MEM8(esi + 3));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8B8E; /* jne: not equal / not zero */

loc_000D8B6A: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8B7C; /* je: equal / zero */

loc_000D8B71: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8B7C; /* je: equal / zero */

loc_000D8B75: ;
    MEM32(esp + 0x1E0) = edi;

loc_000D8B7C: ;
    ecx = MEM32(edi * 4 + 0x8E8FA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D8B89u); RECOMP_ABI_CALL(0x0002A69Fu, sub_0002A69F); /* call 0x0002A69F */

loc_000D8B89: ;
    goto loc_000D8C20;

loc_000D8B8E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8C23; /* je: equal / zero */

loc_000D8B96: ;
    eax = MEM32(edi * 4 + 0x8E8FA8);
    _fa = (uint32_t)(MEM32(eax + 0x1B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1B0), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8BAF; /* je: equal / zero */

loc_000D8BA6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D8BACu); RECOMP_ABI_CALL(0x0002B6F3u, sub_0002B6F3); /* call 0x0002B6F3 */

loc_000D8BAC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8BAF: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8BEF; /* je: equal / zero */

loc_000D8BB6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8BEF; /* je: equal / zero */

loc_000D8BBA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D8BEF; /* jge: greater or equal (signed >=) */

loc_000D8BBF: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x895B50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x895B50 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D8BE7; /* jle: less or equal (signed <=) */

loc_000D8BCB: ;
    goto loc_000D8BD0;

    /* nop */

loc_000D8BD0: ;
    _fa = (uint32_t)(MEM32(esp + eax * 4 + 0x1E0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + eax * 4 + 0x1E0), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8BDE; /* jne: not equal / not zero */

loc_000D8BD9: ;
    ecx = 1;

loc_000D8BDE: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8BD0; /* jl: less (signed <) */

loc_000D8BE3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D8BEF; /* jne: not equal / not zero */

loc_000D8BE7: ;
    MEM32(esp + ebp * 4 + 0x1E0) = edi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000D8BEF: ;
    _fa = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 4), 0xFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8C23; /* je: equal / zero */

loc_000D8BF7: ;
    eax = (uint32_t)(int32_t)SMEM8(esi);
    edx = (uint32_t)(int32_t)SMEM8(esi + 1);
    eax = eax + eax * 4;
    ecx = edx + eax * 4;
    eax = MEM32(ecx * 4 + 0x8E8FA8);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8C23; /* je: equal / zero */

loc_000D8C11: ;
    _fa = (uint32_t)(MEM32(eax + 0x1B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x1B0), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8C23; /* je: equal / zero */

loc_000D8C1A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D8C20u); RECOMP_ABI_CALL(0x0002B6F3u, sub_0002B6F3); /* call 0x0002B6F3 */

loc_000D8C20: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8C23: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8960F1);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8B43; /* jl: less (signed <) */

loc_000D8C36: ;
    PUSH32(esp, 0x000D8C3Bu); RECOMP_ABI_CALL(0x00014507u, sub_00014507); /* call 0x00014507 */

loc_000D8C3B: ;
    SET_LO8(eax, MEM8(0x8960F1));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D8CBB; /* jle: less or equal (signed <=) */

loc_000D8C4A: ;
    esi = 0x895B54;
    /* nop */

loc_000D8C50: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + -4);
    edi = (uint32_t)(int32_t)SMEM8(esi + -3);
    SET_LO16(edx, MEM16(esi));
    eax = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D8C72; /* je: equal / zero */

loc_000D8C6D: ;
    ecx = SX16(LO16(edx));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D8C72: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + -1);
    edx = (uint32_t)(int32_t)SMEM8(esi + -2);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    eax = edi;
    PUSH32(esp, 0x000D8C84u); RECOMP_ABI_CALL(0x000D6AE0u, sub_000D6AE0); /* call 0x000D6AE0 */

loc_000D8C84: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + -1);
    ecx = (uint32_t)(int32_t)SMEM8(esi + -2);
    edx = (uint32_t)(int32_t)SMEM8(esi + -4);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(0x896168);
    PUSH32(esp, ecx);
    ecx = (uint32_t)(int32_t)SMEM16(0x896160);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000D8CA9u); RECOMP_ABI_CALL(0x000173D3u, sub_000173D3); /* call 0x000173D3 */

loc_000D8CA9: ;
    edx = (uint32_t)(int32_t)SMEM8(0x8960F1);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8C50; /* jl: less (signed <) */

loc_000D8CBB: ;
    PUSH32(esp, 0x000D8CC0u); RECOMP_ABI_CALL(0x000117F8u, sub_000117F8); /* call 0x000117F8 */

loc_000D8CC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000D8CC4: ;
    _fb = (uint32_t)(0x280) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x280;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D8FD0
 * Original: 0x000D8FD0 - 0x000D9046 (118 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D8FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D8FD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x8960BE;
    /* nop */

loc_000D8FE0: ;
    SET_LO8(ecx, MEM8(esi + 0x89608C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D901B; /* je: equal / zero */

loc_000D8FEA: ;
    SET_LO8(eax, MEM8(esi + 0x8960E6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D900A; /* je: equal / zero */

loc_000D8FF4: ;
    eax = SX8(LO8(eax));
    eax = MEM32(eax * 4 + 0x8E8FA4);
    ecx = SX8(LO8(ecx));
    ecx = MEM32(ecx * 4 + 0x8E8FA4);
    goto loc_000D9016;

loc_000D900A: ;
    edx = SX8(LO8(ecx));
    ecx = MEM32(edx * 4 + 0x8E8FA4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000D9016: ;
    PUSH32(esp, 0x000D901Bu); RECOMP_ABI_CALL(0x000D7B70u, sub_000D7B70); /* call 0x000D7B70 */

loc_000D901B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000D9020: ;
    MEM8(edi + eax + -40) = LO8(ebx);
    MEM8(edi + eax) = LO8(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D9020; /* jl: less (signed <) */

loc_000D902D: ;
    MEM8(esi + 0x89608C) = LO8(ebx);
    MEM8(esi + 0x8960E6) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000D8FE0; /* jl: less (signed <) */

loc_000D9042: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9070
 * Original: 0x000D9070 - 0x000D908B (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000D9070(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000D9070: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = exp2(fp_top()) - 1.0; /* f2xm1 */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D90A0
 * Original: 0x000D90A0 - 0x000D90BB (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000D90A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000D90A0: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = exp2(fp_top()) - 1.0; /* f2xm1 */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D90D0
 * Original: 0x000D90D0 - 0x000D9100 (48 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D90D0(void)
{

loc_000D90D0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000D9110
 * Original: 0x000D9110 - 0x000D912B (27 bytes, 13 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000D9110(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000D9110: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = exp2(fp_top()) - 1.0; /* f2xm1 */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D9140
 * Original: 0x000D9140 - 0x000D9144 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9140(void)
{

loc_000D9140: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9150
 * Original: 0x000D9150 - 0x000D9157 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9150(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000D9150: ;
    fp_push(MEMF(ecx + 0x320)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D9160
 * Original: 0x000D9160 - 0x000D9167 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9160(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000D9160: ;
    fp_push(MEMF(ecx + 0x340)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D9170
 * Original: 0x000D9170 - 0x000D9173 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9170(void)
{

loc_000D9170: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9180
 * Original: 0x000D9180 - 0x000D91AA (42 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9180(void)
{

loc_000D9180: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    eax = MEM32(esp + 0x10);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0xC) = eax;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000D91C0
 * Original: 0x000D91C0 - 0x000D91C5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D91C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D91C0: ;
    g_seh_ebp = ebp; sub_0002C2E7(); return; /* tail jmp 0x0002C2E7 */

}

/**
 * sub_000D91D0
 * Original: 0x000D91D0 - 0x000D91EA (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D91D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D91D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D91F0
 * Original: 0x000D91F0 - 0x000D920A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D91F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D91F0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D9210
 * Original: 0x000D9210 - 0x000D922C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000D9210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9210: ;
    SET_LO8(eax, MEM8(ecx + 0xAC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9229; /* jne: not equal / not zero */

loc_000D921A: ;
    _fa = (uint32_t)(MEM32(ecx + 0xA4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xA4), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9229; /* je: equal / zero */

loc_000D9223: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000D9229: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D9240
 * Original: 0x000D9240 - 0x000D9280 (64 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9240: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x88);
    MEM32(esi) = 0x7C9C94;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D925Bu); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_000D925B: ;
    ecx = MEM32(esi + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D926B; /* je: equal / zero */

loc_000D9265: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D926Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9269u); } /* indirect call */
    }

loc_000D926B: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9278; /* je: equal / zero */

loc_000D9272: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D9278u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9276u); } /* indirect call */
    }

loc_000D9278: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002A7EE(); return; /* tail jmp 0x0002A7EE */

}

/**
 * sub_000D9290
 * Original: 0x000D9290 - 0x000D92E0 (80 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9290: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D9298u); RECOMP_ABI_CALL(0x000266ADu, sub_000266AD); /* call 0x000266AD */

loc_000D9298: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esi + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB8B8)); /* movss */
    MEM16(esi + 0xB8) = LO16(eax);
    MEM8(esi + 0xBB) = LO8(eax);
    MEM32(esi + 0xA8) = 0xFFFFFFFFu;
    MEM32(esi + 0x94) = eax;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_000D9300
 * Original: 0x000D9300 - 0x000D944A (330 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9300(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9300: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D930Bu); RECOMP_ABI_CALL(0x00027F99u, sub_00027F99); /* call 0x00027F99 */

loc_000D930B: ;
    MEM32(esi + 0xA8) = 0xFFFFFFFFu;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(esi + 0xB8) = LO16(eax);
    MEM8(esi + 0xBB) = LO8(eax);
    MEM32(esi + 0x94) = eax;
    ecx = MEM32(0x8F95D0);
    eax = esi + 0x3C;
    MEM32(eax) = ecx;
    edx = MEM32(0x8F95D4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x8F95D8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x8F95D0);
    edx = esi + 0x48;
    MEM32(edx) = eax;
    ecx = MEM32(0x8F95D4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8F95D8);
    MEM32(edx + 8) = eax;
    edx = MEM32(0x8F95D0);
    ecx = esi + 0x54;
    MEM32(ecx) = edx;
    eax = MEM32(0x8F95D4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x8F95D8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(0x8F95D0);
    eax = esi + 0x60;
    MEM32(eax) = ecx;
    edx = MEM32(0x8F95D4);
    MEM32(eax + 4) = edx;
    ecx = MEM32(0x8F95D8);
    MEM32(eax + 8) = ecx;
    eax = MEM32(0x8F95D0);
    xmm1 = XMM_SCALAR(MEMF(0x7C9BC0)); /* movss */
    edx = esi + 0x6C;
    MEM32(edx) = eax;
    ecx = MEM32(0x8F95D4);
    MEM32(edx + 4) = ecx;
    eax = MEM32(0x8F95D8);
    MEM32(edx + 8) = eax;
    edx = MEM32(0x8F95D0);
    ecx = esi + 0x78;
    MEM32(ecx) = edx;
    eax = MEM32(0x8F95D4);
    MEM32(ecx + 4) = eax;
    edx = MEM32(0x8F95D8);
    MEM32(ecx + 8) = edx;
    esi = MEM32(esi + 0x84);
    eax = esi + 0x14;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    MEM32(eax + 8) = ecx;
    MEM32(esi) = edx;
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D94A0
 * Original: 0x000D94A0 - 0x000D957D (221 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000D94A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_000D94A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D94B3u); RECOMP_ABI_CALL(0x0002FCD0u, sub_0002FCD0); /* call 0x0002FCD0 */

loc_000D94B3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edi = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(0x7AB8B8)); /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xA8) = 0xFFFFFFFFu;
    MEM16(esi + 0xB8) = LO16(ebx);
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    MEM8(esi + 0xBB) = LO8(ebx);
    MEMF(esi + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xC0) = ebx;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000D94FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D94F9u); } /* indirect call */
    }

loc_000D94FC: ;
    MEM32(esi + 0x34) = 2;
    ecx = MEM32(0x8EADA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D950Eu); RECOMP_ABI_CALL(0x0002BFA9u, sub_0002BFA9); /* call 0x0002BFA9 */

loc_000D950E: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(0x8EADA0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D951Du); RECOMP_ABI_CALL(0x00017793u, sub_00017793); /* call 0x00017793 */

loc_000D951D: ;
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7C9BC0)); /* movss */
    edx = ecx;
    eax = esp + 0x14;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, eax);
    ecx = edi;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x20) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000D9553u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_000D9553: ;
    ecx = MEM32(esi + 0x84);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x28);
    MEM32(ecx + 4) = eax;
    POP32(esp, edi);
    MEM32(ecx + 8) = edx;
    MEM32(esi + 0x94) = ebx;
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
 * sub_000D95C0
 * Original: 0x000D95C0 - 0x000D95ED (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D95C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D95C0: ;
    eax = MEM32(0x8EADA0);
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_000D95E5; /* jne: not equal / not zero */

loc_000D95CF: ;
    PUSH32(esp, 0x000D95D4u); RECOMP_ABI_CALL(0x00019561u, sub_00019561); /* call 0x00019561 */

loc_000D95D4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D95E5; /* jne: not equal / not zero */

loc_000D95D8: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D95E9; /* jle: less or equal (signed <=) */

loc_000D95E5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000D95E9: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9600
 * Original: 0x000D9600 - 0x000D967A (122 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D9600: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000D9608u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000D9608: ;
    ecx = eax;
    PUSH32(esp, 0x000D960Fu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_000D960F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D966B; /* je: equal / zero */

loc_000D9613: ;
    _fa = (uint32_t)(MEM32(esi + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xA8), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D966B; /* jne: not equal / not zero */

loc_000D961C: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x7B047C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D966B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000D9631: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E99E0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7AB82C); /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D966B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000D9646: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B1DE8); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AD450); /* comiss */
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D9676; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AD450)) */

loc_000D9667: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000D966B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */

loc_000D9676: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D96A0
 * Original: 0x000D96A0 - 0x000D96AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D96A0(void)
{

loc_000D96A0: ;
    MEM32(ecx + 0xC0) = 0xF;
    esp += 4; return; /* ret */

}

/**
 * sub_000D96B0
 * Original: 0x000D96B0 - 0x000D97BA (266 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D96B0(void)
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

loc_000D96B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000D96BE; /* jle: less or equal (signed <=) */

loc_000D96BA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x2C) = eax;

loc_000D96BE: ;
    PUSH32(esp, 0x000D96C3u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000D96C3: ;
    ecx = eax;
    PUSH32(esp, 0x000D96CAu); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_000D96CA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D96D3; /* je: equal / zero */

loc_000D96CE: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_000D96F7;

loc_000D96D3: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB4)); /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_000D96EF; /* jl: less (signed <) */

loc_000D96E5: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B1DE8); /* addss */
    goto loc_000D96F7;

loc_000D96EF: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7B1DE8); /* subss */

loc_000D96F7: ;
    eax = MEM32(esi + 0xC0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_000D9739; /* jle: less or equal (signed <=) */

loc_000D9709: ;
    xmm0 = XMM_SCALAR(MEMF(0x7ABD68)); /* movss */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC0) = eax;
    eax = MEM32(esi + 0x20);
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D9739; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x34)) */

loc_000D9721: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD318)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x6C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D9739; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x6C)) */

loc_000D972F: ;
    MEM32(esi + 0xC0) = 0;

loc_000D9739: ;
    ecx = esi;
    PUSH32(esp, 0x000D9740u); RECOMP_ABI_CALL(0x0001557Eu, sub_0001557E); /* call 0x0001557E */

loc_000D9740: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9752; /* je: equal / zero */

loc_000D9744: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x000D974Bu); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_000D974B: ;
    ecx = eax;
    PUSH32(esp, 0x000D9752u); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_000D9752: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D97AD; /* jge: greater or equal (signed >=) */

loc_000D975C: ;
    ecx = MEM32(0x8EACE4);
    SET_LO8(eax, MEM8(ecx + 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9785; /* je: equal / zero */

loc_000D9769: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9785; /* jne: not equal / not zero */

loc_000D976F: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AD44C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x6C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D9785; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x6C)) */

loc_000D9780: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000D9785u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9782u); } /* indirect call */
    }

loc_000D9785: ;
    eax = MEM32(0x8EADA0);
    ecx = MEM32(eax + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D97B8; /* jne: not equal / not zero */

loc_000D9791: ;
    PUSH32(esp, 0x000D9796u); RECOMP_ABI_CALL(0x00019561u, sub_00019561); /* call 0x00019561 */

loc_000D9796: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D97B8; /* jne: not equal / not zero */

loc_000D979A: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000D97B8; /* jg: greater (signed >) */

loc_000D97A7: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00028075(); return; /* tail jmp 0x00028075 */

loc_000D97AD: ;
    ecx = 0x8EFCB8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0003324A(); return; /* tail jmp 0x0003324A */

loc_000D97B8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9800
 * Original: 0x000D9800 - 0x000D98A8 (168 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9800: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0xBB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D98A6; /* jne: not equal / not zero */

loc_000D9811: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000D983B; /* jge: greater or equal (signed >=) */

loc_000D981B: ;
    PUSH32(esp, 0x000D9820u); RECOMP_ABI_CALL(0x00011FE6u, sub_00011FE6); /* call 0x00011FE6 */

loc_000D9820: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    ecx = esi + 0x54;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    goto loc_000D9859;

loc_000D983B: ;
    PUSH32(esp, 0x000D9840u); RECOMP_ABI_CALL(0x00027576u, sub_00027576); /* call 0x00027576 */

loc_000D9840: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    edx = esi + 0x60;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;

loc_000D9859: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9886; /* je: equal / zero */

loc_000D9863: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D986Au); RECOMP_ABI_CALL(0x000276F2u, sub_000276F2); /* call 0x000276F2 */

loc_000D986A: ;
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx);
    eax = esi + 0x6C;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;

loc_000D9886: ;
    ecx = esi;
    PUSH32(esp, 0x000D988Du); RECOMP_ABI_CALL(0x0003297Bu, sub_0003297B); /* call 0x0003297B */

loc_000D988D: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x78;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;

loc_000D98A6: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D98E0
 * Original: 0x000D98E0 - 0x000D98FD (29 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D98E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D98E0: ;
    SET_LO8(edx, MEM8(esp + 4));
    ecx = MEM32(0x8FCBB0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00034663(); return; /* tail jmp 0x00034663 */

}

/**
 * sub_000D9910
 * Original: 0x000D9910 - 0x000D9933 (35 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000D9910: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xBA) = LO8(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x8FCBB0);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00034663(); return; /* tail jmp 0x00034663 */

}

/**
 * sub_000D9940
 * Original: 0x000D9940 - 0x000D9947 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9940(void)
{

loc_000D9940: ;
    SET_LO8(eax, MEM8(ecx + 0xBA));
    esp += 4; return; /* ret */

}

/**
 * sub_000D9950
 * Original: 0x000D9950 - 0x000D9957 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9950(void)
{

loc_000D9950: ;
    eax = MEM32(ecx + 0x94);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9960
 * Original: 0x000D9960 - 0x000D99AA (74 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9960(void)
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

loc_000D9960: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    ecx = MEM32(ecx + 0x20);
    eax = esp;
    PUSH32(esp, eax);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000D9997u); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000D9997: ;
    ecx = MEM32(0x8E8F84);
    MEM32(ecx + 0x2C) = 5;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D99C0
 * Original: 0x000D99C0 - 0x000D9B2A (362 bytes, 87 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D99C0(void)
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

loc_000D99C0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x1C));
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x20);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000D9B23; /* jnp: not parity */

loc_000D99DD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    eax = edi + 0x30;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0xC) = ecx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    ecx = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = edx;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x14) = eax;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = edx;
    ecx = esp + 0x10;
    MEM32(esp + 0x18) = eax;
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000D9A57u); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_000D9A57: ;
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D9B0B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000D9A70: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D9B0B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_000D9AB7: ;
    xmm3 = XMM_SCALAR(MEMF(0x8E99C0)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x28); /* divss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x8E99B4); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D9B0B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000D9B05: ;
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */

loc_000D9B0B: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x000D9B17u); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000D9B17: ;
    eax = MEM32(0x8E8F84);
    MEM32(eax + 0x2C) = 5;

loc_000D9B23: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x1C)) >> 32) & 1);
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D9B90
 * Original: 0x000D9B90 - 0x000D9BB7 (39 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000D9B90: ;
    ecx = MEM32(0x8E9390);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9BB4; /* je: equal / zero */

loc_000D9B9A: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000D9BA6; /* je: equal / zero */

loc_000D9BA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000D9BB4; /* jne: not equal / not zero */

loc_000D9BA6: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esp + 4)));
    eax = eax - MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_000D9BB4: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000D9BC0
 * Original: 0x000D9BC0 - 0x000D9C0A (74 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9BC0: ;
    eax = MEM32(esp + 8);
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xA8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xA8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000D9C07; /* jne: not equal / not zero */

loc_000D9BD0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    eax = MEM32(eax);
    MEM32(ecx + 0x98) = eax;
    MEMF(ecx + 0x9C) = xmm1.f[0]; /* movss */
    MEMF(ecx + 0xA0) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0xA4) = 0;
    MEM8(ecx + 0xBC) = 1;

loc_000D9C07: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000D9C20
 * Original: 0x000D9C20 - 0x000D9C7D (93 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9C20(void)
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

loc_000D9C20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D9C2Fu); RECOMP_ABI_CALL(0x00030CC5u, sub_00030CC5); /* call 0x00030CC5 */

loc_000D9C2F: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) - fp_top()); /* fsubr dword ptr [0x7a9980] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.69314718055994530942); /* fldln2 */
    fp_push(MEMF(esp)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AACB4)); /* fmul dword ptr [0x7aacb4] */
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = exp2(fp_top()) - 1.0; /* f2xm1 */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) - fp_top()); /* fsubr dword ptr [0x7a9980] */
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
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
 * sub_000D9CA0
 * Original: 0x000D9CA0 - 0x000D9D03 (99 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9CA0(void)
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

loc_000D9CA0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D9CAFu); RECOMP_ABI_CALL(0x00030CC5u, sub_00030CC5); /* call 0x00030CC5 */

loc_000D9CAF: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) - fp_top()); /* fsubr dword ptr [0x7a9980] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.69314718055994530942); /* fldln2 */
    fp_push(MEMF(esp)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AACB4)); /* fmul dword ptr [0x7aacb4] */
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = recomp_frndint(fp_top(), g_fp_control_word); /* frndint */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = exp2(fp_top()) - 1.0; /* f2xm1 */
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) - fp_top()); /* fsubr dword ptr [0x7a9980] */
    fp_st1() = RECOMP_FP_PC(fp_st1() / fp_top()); fp_pop(); /* fdivp st(1) */
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
 * sub_000D9D20
 * Original: 0x000D9D20 - 0x000D9DBF (159 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9D20(void)
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

loc_000D9D20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D9DB6; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000D9D3F: ;
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000D9D4Bu); RECOMP_ABI_CALL(0x00030CC5u, sub_00030CC5); /* call 0x00030CC5 */

loc_000D9D4B: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) - fp_top()); /* fsubr dword ptr [0x7a9980] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(0.69314718055994530942); /* fldln2 */
    fp_push(MEMF(esp + 4)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] / MEMF(esp + 0x10); /* divss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D9DB6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000D9D93: ;
    fp_push(0.69314718055994530942); /* fldln2 */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x14); /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */

loc_000D9DB6: ;
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000D9DF0
 * Original: 0x000D9DF0 - 0x000D9E27 (55 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9DF0(void)
{

loc_000D9DF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7C9CB0);
    ecx = edi;
    PUSH32(esp, 0x000D9E05u); RECOMP_ABI_CALL(0x00020717u, sub_00020717); /* call 0x00020717 */

loc_000D9E05: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000D9E0Du); RECOMP_ABI_CALL(0x00023F16u, sub_00023F16); /* call 0x00023F16 */

loc_000D9E0D: ;
    eax = MEM32(esi + 0x88);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000D9E1Bu); RECOMP_ABI_CALL(0x000259C4u, sub_000259C4); /* call 0x000259C4 */

loc_000D9E1B: ;
    ecx = edi;
    PUSH32(esp, 0x000D9E22u); RECOMP_ABI_CALL(0x000115F0u, sub_000115F0); /* call 0x000115F0 */

loc_000D9E22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D9E40
 * Original: 0x000D9E40 - 0x000D9E81 (65 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(ecx, MEM8(0x8EFCB4));
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000D9E68; /* jne: not equal / not zero */

loc_000D9E52: ;
    MEM32(0x8EFCB4) = MEM32(0x8EFCB4) | eax;
    _fa = (uint32_t)(MEM32(0x8EFCB4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x89AFE6) = 0xB0;
    MEM8(0x89AFE8) = 5;

loc_000D9E68: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x89AFE4);
    PUSH32(esp, 0x000D9E79u); RECOMP_ABI_CALL(0x0001E8E0u, sub_0001E8E0); /* call 0x0001E8E0 */

loc_000D9E79: ;
    MEM32(esi + 0x88) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000D9EA0
 * Original: 0x000D9EA0 - 0x000D9EB9 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9EA0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000D9EA0: ;
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C9BCC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000D9EB8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7C9BCC)) */

loc_000D9EB1: ;
    MEM32(ecx + 0x2C) = 5;

loc_000D9EB8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000D9EC0
 * Original: 0x000D9EC0 - 0x000D9F15 (85 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9EC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x88);
    MEM32(esi) = 0x7C9C94;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000D9EDBu); RECOMP_ABI_CALL(0x0003451Eu, sub_0003451E); /* call 0x0003451E */

loc_000D9EDB: ;
    ecx = MEM32(esi + 0x84);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9EEB; /* je: equal / zero */

loc_000D9EE5: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000D9EEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9EE9u); } /* indirect call */
    }

loc_000D9EEB: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000D9EF8; /* je: equal / zero */

loc_000D9EF2: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000D9EF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000D9EF6u); } /* indirect call */
    }

loc_000D9EF8: ;
    ecx = esi;
    PUSH32(esp, 0x000D9EFFu); RECOMP_ABI_CALL(0x0002A7EEu, sub_0002A7EE); /* call 0x0002A7EE */

loc_000D9EFF: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000D9F0F; /* je: equal / zero */

loc_000D9F06: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000D9F0Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000D9F0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000D9F0F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000D9F30
 * Original: 0x000D9F30 - 0x000DA0AD (381 bytes, 91 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000D9F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000D9F30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000D9F3Fu); RECOMP_ABI_CALL(0x00018071u, sub_00018071); /* call 0x00018071 */

loc_000D9F3F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi) = 0x7C9C94;
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    eax = esi + 0x3C;
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax + 0xC) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x10) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x90) = ebx;
    MEM32(esi + 0x94) = ebx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xA8) = eax;
    MEM32(esi + 0xAC) = eax;
    MEMF(esi + 0xB0) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    MEM16(esi + 0xB8) = LO16(ebx);
    MEM8(esi + 0xBA) = LO8(ebx);
    MEM8(esi + 0xBB) = LO8(ebx);
    MEM8(esi + 0xBC) = LO8(ebx);
    MEM32(esi + 0x28) = 3;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xD0);
    MEMF(esi + 0x98) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x9C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xA0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0xA4) = ebx;
    PUSH32(esp, 0x000DA030u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DA030: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA041; /* je: equal / zero */

loc_000DA037: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x000DA03Fu); RECOMP_ABI_CALL(0x0002F8ACu, sub_0002F8AC); /* call 0x0002F8AC */

loc_000DA03F: ;
    goto loc_000DA043;

loc_000DA041: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000DA043: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x110);
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x000DA051u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DA051: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA061; /* je: equal / zero */

loc_000DA058: ;
    ecx = eax;
    PUSH32(esp, 0x000DA05Fu); RECOMP_ABI_CALL(0x00030A2Cu, sub_00030A2C); /* call 0x00030A2C */

loc_000DA05F: ;
    goto loc_000DA063;

loc_000DA061: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000DA063: ;
    SET_LO8(ecx, MEM8(0x8EFCB4));
    MEM32(esi + 0x84) = eax;
    eax = 1;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000DA08E; /* jne: not equal / not zero */

loc_000DA078: ;
    MEM32(0x8EFCB4) = MEM32(0x8EFCB4) | eax;
    _fa = (uint32_t)(MEM32(0x8EFCB4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(0x89AFE6) = 0xB0;
    MEM8(0x89AFE8) = 5;

loc_000DA08E: ;
    ecx = MEM32(0x9016AC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x89AFE4);
    PUSH32(esp, 0x000DA09Fu); RECOMP_ABI_CALL(0x0001E8E0u, sub_0001E8E0); /* call 0x0001E8E0 */

loc_000DA09F: ;
    MEM32(esi + 0x88) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DA110
 * Original: 0x000DA110 - 0x000DA1B0 (160 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA110: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0xA8) = eax;
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_000DA157; /* jge: greater or equal (signed >=) */

loc_000DA12C: ;
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x000DA136u); RECOMP_ABI_CALL(0x0002C2E7u, sub_0002C2E7); /* call 0x0002C2E7 */

loc_000DA136: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA143; /* je: equal / zero */

loc_000DA13F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA1AC; /* jne: not equal / not zero */

loc_000DA143: ;
    POP32(esp, esi);
    MEM32(esp + 4) = 0;
    ecx = MEM32(0x8F0650);
    g_seh_ebp = ebp; sub_000248DA(); return; /* tail jmp 0x000248DA */

loc_000DA157: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA170; /* jne: not equal / not zero */

loc_000DA15C: ;
    eax = MEM32(0x8E9248);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    ecx = 0x8EFCB8;
    g_seh_ebp = ebp; sub_00029461(); return; /* tail jmp 0x00029461 */

loc_000DA170: ;
    ecx = MEM32(eax * 4 + 0x8E8FA8);
    PUSH32(esp, ecx);
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x000DA182u); RECOMP_ABI_CALL(0x00029461u, sub_00029461); /* call 0x00029461 */

loc_000DA182: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA18F; /* je: equal / zero */

loc_000DA18B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA1AC; /* jne: not equal / not zero */

loc_000DA18F: ;
    edx = MEM32(esi + 0xA8);
    eax = MEM32(edx * 4 + 0x8E8FA8);
    POP32(esp, esi);
    MEM32(esp + 4) = eax;
    ecx = MEM32(0x8F0650);
    g_seh_ebp = ebp; sub_000295B5(); return; /* tail jmp 0x000295B5 */

loc_000DA1AC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DA1E0
 * Original: 0x000DA1E0 - 0x000DA362 (386 bytes, 101 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DA1E0(void)
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

loc_000DA1E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xA8);
    ecx = MEM32(eax * 4 + 0x8E9058);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    ebx = MEM32(ecx + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000DA229u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DA226u); } /* indirect call */
    }

loc_000DA229: ;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DA238u); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_000DA238: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C9BC0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DA24D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x34)) */

loc_000DA247: ;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */

loc_000DA24D: ;
    SET_LO8(eax, MEM8(esi + 0xBC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA28B; /* je: equal / zero */

loc_000DA257: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi + 0x98;
    MEM8(esi + 0xBC) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DA26Eu); RECOMP_ABI_CALL(0x000285ACu, sub_000285AC); /* call 0x000285AC */

loc_000DA26E: ;
    esi = MEM32(esi + 0x20);
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000DA27Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DA27Au); } /* indirect call */
    }

loc_000DA27D: ;
    PUSH32(esp, 0x8F95C0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DA289u); RECOMP_ABI_CALL(0x0002E85Du, sub_0002E85D); /* call 0x0002E85D */

loc_000DA289: ;
    goto loc_000DA2A3;

loc_000DA28B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xB4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB1D0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DA2A3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AB1D0)) */

loc_000DA29C: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DA2A3u); RECOMP_ABI_CALL(0x0002FA1Eu, sub_0002FA1E); /* call 0x0002FA1E */

loc_000DA2A3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    ecx = esp + 0x20;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DA2D3u); RECOMP_ABI_CALL(0x0002E862u, sub_0002E862); /* call 0x0002E862 */

loc_000DA2D3: ;
    xmm2 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edi + 0x3C); /* subss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x44); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edi + 0x40); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB1DC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DA34F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AB1DC)) */

loc_000DA33F: ;
    PUSH32(esp, 0x43400000);
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DA34Du); RECOMP_ABI_CALL(0x000130D0u, sub_000130D0); /* call 0x000130D0 */

loc_000DA34D: ;
    fp_pop(); /* fstp st(0) */

loc_000DA34F: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DA35Bu); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000DA35B: ;
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
 * sub_000DA3D0
 * Original: 0x000DA3D0 - 0x000DA44D (125 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA3D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000DA3F8u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_000DA3F8: ;
    MEM8(esi + 0xBA) = 1;
    ecx = MEM32(0x8FCBB0);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DA40Fu); RECOMP_ABI_CALL(0x00034663u, sub_00034663); /* call 0x00034663 */

loc_000DA40F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0x8EFCB8;
    MEM32(esi + 0xA8) = 0xFFFFFFFFu;
    MEMF(esi + 0xB4) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000DA42Eu); RECOMP_ABI_CALL(0x0002C2E7u, sub_0002C2E7); /* call 0x0002C2E7 */

loc_000DA42E: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DA43C; /* je: equal / zero */

loc_000DA438: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA449; /* jne: not equal / not zero */

loc_000DA43C: ;
    ecx = MEM32(0x8F0650);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000DA449u); RECOMP_ABI_CALL(0x000248DAu, sub_000248DA); /* call 0x000248DA */

loc_000DA449: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DA470
 * Original: 0x000DA470 - 0x000DA5DC (364 bytes, 102 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA470(void)
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

loc_000DA470: ;
    SET_LO8(eax, MEM8(0x896177));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000DA5D6; /* je: equal / zero */

loc_000DA486: ;
    PUSH32(esp, 0x000DA48Bu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000DA48B: ;
    ecx = eax;
    PUSH32(esp, 0x000DA492u); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_000DA492: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA5D6; /* je: equal / zero */

loc_000DA49A: ;
    PUSH32(esp, 0x000DA49Fu); RECOMP_ABI_CALL(0x000150A6u, sub_000150A6); /* call 0x000150A6 */

loc_000DA49F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA5D6; /* jne: not equal / not zero */

loc_000DA4A7: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xB4)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DA4BC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DA4B7: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000DA4C4;

loc_000DA4BC: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0xB4); /* subss */

loc_000DA4C4: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AD318); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DA4CF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AD318)) */

loc_000DA4CD: ;
    SET_LO8(ebx, 1);

loc_000DA4CF: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DA5C3; /* jl: less (signed <) */

loc_000DA4DD: ;
    eax = MEM32(eax * 4 + 0x8E8FA8);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA4EC; /* jne: not equal / not zero */

loc_000DA4EA: ;
    SET_LO8(ebx, 1);

loc_000DA4EC: ;
    eax = MEM32(0x895AE4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DA4F7u); RECOMP_ABI_CALL(0x0001C491u, sub_0001C491); /* call 0x0001C491 */

loc_000DA4F7: ;
    ecx = eax;
    PUSH32(esp, 0x000DA4FEu); RECOMP_ABI_CALL(0x000174F0u, sub_000174F0); /* call 0x000174F0 */

loc_000DA4FE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA5D6; /* jne: not equal / not zero */

loc_000DA506: ;
    _fa = (uint32_t)(MEM8(0x8E93BD)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8E93BD), 2 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DA5C8; /* jge: greater or equal (signed >=) */

loc_000DA513: ;
    ecx = MEM32(0x895AE4);
    PUSH32(esp, 0x000DA51Eu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000DA51E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA5C3; /* je: equal / zero */

loc_000DA526: ;
    ecx = MEM32(0x895AE4);
    edx = MEM32(ecx + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C981C); /* comiss */
    if ((_fca > _fcb)) goto loc_000DA5C8; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7C981C)) */

loc_000DA544: ;
    PUSH32(esp, 0x000DA549u); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000DA549: ;
    fp_push(MEMF(0x7AEBF0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000DA5C3; /* ja: above (unsigned >) */

loc_000DA555: ;
    ecx = MEM32(0x895AE4);
    eax = MEM32(ecx + 0x54);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 0x20 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000DA5C3; /* jne: not equal / not zero */

loc_000DA563: ;
    edx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB868); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DA5C3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AB868)) */

loc_000DA574: ;
    eax = edx;
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000DA57Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DA57Cu); } /* indirect call */
    }

loc_000DA57F: ;
    PUSH32(esp, eax);
    eax = MEM32(0x895AE4);
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DA590u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_000DA590: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DA59Eu); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_000DA59E: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DA5A9u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_000DA5A9: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DA5B5u); RECOMP_ABI_CALL(0x00013D28u, sub_00013D28); /* call 0x00013D28 */

loc_000DA5B5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca > _fcb)) goto loc_000DA5C8; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax)) */

loc_000DA5C3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA5D6; /* jne: not equal / not zero */

loc_000DA5C8: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x000DA5CFu); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_000DA5CF: ;
    ecx = eax;
    PUSH32(esp, 0x000DA5D6u); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_000DA5D6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_000DA640
 * Original: 0x000DA640 - 0x000DA7E3 (419 bytes, 120 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DA640: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000DA64Bu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000DA64B: ;
    ecx = eax;
    PUSH32(esp, 0x000DA652u); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_000DA652: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA7D5; /* je: equal / zero */

loc_000DA65A: ;
    eax = MEM32(0x8EFCB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA669; /* jne: not equal / not zero */

loc_000DA663: ;
    eax = MEM32(esi + 0x90);

loc_000DA669: ;
    MEM32(esi + 0x90) = eax;
    SET_LO8(eax, MEM8(esi + 0xBB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DA707; /* je: equal / zero */

loc_000DA67E: ;
    PUSH32(esp, 0x000DA683u); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_000DA683: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DA690; /* jl: less (signed <) */

loc_000DA687: ;
    edi = MEM32(eax * 4 + 0x8E8EB8);
    goto loc_000DA692;

loc_000DA690: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000DA692: ;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x000DA699u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_000DA699: ;
    ecx = eax;
    PUSH32(esp, 0x000DA6A0u); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_000DA6A0: ;
    eax = (uint32_t)(int32_t)SMEM8(edi + 0x39);
    ecx = esp + 8;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM16(esp + 0x14) = 0x1D;
    MEM8(esp + 0x24) = LO8(eax);
    MEM8(esp + 0x25) = 0xD;
    MEM16(esp + 0x26) = 0xFFFF;
    MEM32(esp + 8) = 0x7ABDF0;
    PUSH32(esp, 0x000DA6DCu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DA6DC: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA7D4; /* je: equal / zero */

loc_000DA6E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA7D4; /* je: equal / zero */

loc_000DA6F1: ;
    POP32(esp, edi);
    PUSH32(esp, esi);
    MEM32(esi + 0x2C) = 0x3E8;
    PUSH32(esp, 0x000DA6FFu); RECOMP_ABI_CALL(0x00030004u, sub_00030004); /* call 0x00030004 */

loc_000DA6FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DA707: ;
    eax = MEM32(0x8E97BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA7D4; /* jne: not equal / not zero */

loc_000DA714: ;
    edi = MEM32(esi + 0x8C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA7D4; /* je: equal / zero */

loc_000DA722: ;
    ecx = MEM32(0x8EFCB8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA745; /* je: equal / zero */

loc_000DA72C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000DA731u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DA72Eu); } /* indirect call */
    }

loc_000DA731: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA745; /* jne: not equal / not zero */

loc_000DA735: ;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA7D4; /* jne: not equal / not zero */

loc_000DA745: ;
    eax = MEM32(esi + 0x20);
    edx = eax + 0x30;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000DA757u); RECOMP_ABI_CALL(0x0003727Du, sub_0003727D); /* call 0x0003727D */

loc_000DA757: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA7D4; /* je: equal / zero */

loc_000DA75B: ;
    ecx = MEM32(esi + 0x90);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA77B; /* je: equal / zero */

loc_000DA765: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000DA76Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DA767u); } /* indirect call */
    }

loc_000DA76A: ;
    _fa = (uint32_t)(MEM32(esi + 0x8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x8C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA77B; /* jne: not equal / not zero */

loc_000DA772: ;
    PUSH32(esp, 0x000DA777u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000DA777: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA7D4; /* jne: not equal / not zero */

loc_000DA77B: ;
    ecx = MEM32(esi + 0x8C);
    PUSH32(esp, 0x000DA786u); RECOMP_ABI_CALL(0x00024FC9u, sub_00024FC9); /* call 0x00024FC9 */

loc_000DA786: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA7BC; /* je: equal / zero */

loc_000DA78F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA7BC; /* je: equal / zero */

loc_000DA793: ;
    ecx = MEM32(esi + 0x8C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DA79Fu); RECOMP_ABI_CALL(0x000332AEu, sub_000332AE); /* call 0x000332AE */

loc_000DA79F: ;
    ecx = MEM32(0x8EACE4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000DA7ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DA7AAu); } /* indirect call */
    }

loc_000DA7AD: ;
    POP32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DA7B4u); RECOMP_ABI_CALL(0x00030004u, sub_00030004); /* call 0x00030004 */

loc_000DA7B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DA7BC: ;
    edi = MEM32(0x8F0650);
    ecx = edi;
    PUSH32(esp, 0x000DA7C9u); RECOMP_ABI_CALL(0x0003796Cu, sub_0003796C); /* call 0x0003796C */

loc_000DA7C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DA7D4; /* je: equal / zero */

loc_000DA7CD: ;
    ecx = edi;
    PUSH32(esp, 0x000DA7D4u); RECOMP_ABI_CALL(0x00030360u, sub_00030360); /* call 0x00030360 */

loc_000DA7D4: ;
    POP32(esp, edi);

loc_000DA7D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DA7DBu); RECOMP_ABI_CALL(0x00030004u, sub_00030004); /* call 0x00030004 */

loc_000DA7DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DA850
 * Original: 0x000DA850 - 0x000DA8DA (138 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DA850: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000DA858u); RECOMP_ABI_CALL(0x000229D6u, sub_000229D6); /* call 0x000229D6 */

loc_000DA858: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA8D8; /* jne: not equal / not zero */

loc_000DA85C: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x43F00000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DA86Du); RECOMP_ABI_CALL(0x00013A62u, sub_00013A62); /* call 0x00013A62 */

loc_000DA86D: ;
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x8C) = eax;
    eax = MEM32(ecx);
    edx = esi + 0x3C;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = ecx;
    PUSH32(esp, 0x000DA894u); RECOMP_ABI_CALL(0x000229D6u, sub_000229D6); /* call 0x000229D6 */

loc_000DA894: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DA8A9; /* jne: not equal / not zero */

loc_000DA898: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DA8A9; /* jl: less (signed <) */

loc_000DA8A2: ;
    ecx = esi;
    PUSH32(esp, 0x000DA8A9u); RECOMP_ABI_CALL(0x0003252Au, sub_0003252A); /* call 0x0003252A */

loc_000DA8A9: ;
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx);
    eax = esi + 0x48;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    ecx = esi;
    MEM32(eax + 8) = edx;
    PUSH32(esp, 0x000DA8C9u); RECOMP_ABI_CALL(0x00034B2Cu, sub_00034B2C); /* call 0x00034B2C */

loc_000DA8C9: ;
    ecx = esi;
    PUSH32(esp, 0x000DA8D0u); RECOMP_ABI_CALL(0x0001B208u, sub_0001B208); /* call 0x0001B208 */

loc_000DA8D0: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00021A2C(); return; /* tail jmp 0x00021A2C */

loc_000DA8D8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DA900
 * Original: 0x000DA900 - 0x000DA954 (84 bytes, 23 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000DA900(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DA900: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DA970
 * Original: 0x000DA970 - 0x000DA977 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA970(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DA970: ;
    fp_push(MEMF(ecx + 0x2A0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DA980
 * Original: 0x000DA980 - 0x000DA987 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA980(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DA980: ;
    fp_push(MEMF(ecx + 0x484)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DA990
 * Original: 0x000DA990 - 0x000DA997 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA990(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DA990: ;
    fp_push(MEMF(ecx + 0x488)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DA9A0
 * Original: 0x000DA9A0 - 0x000DA9A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA9A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DA9A0: ;
    fp_push(MEMF(ecx + 0x48C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DA9B0
 * Original: 0x000DA9B0 - 0x000DA9B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA9B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DA9B0: ;
    fp_push(MEMF(ecx + 0x490)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DA9C0
 * Original: 0x000DA9C0 - 0x000DA9C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA9C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DA9C0: ;
    fp_push(MEMF(ecx + 0x494)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DA9D0
 * Original: 0x000DA9D0 - 0x000DA9D7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA9D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DA9D0: ;
    fp_push(MEMF(ecx + 0x498)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DA9E0
 * Original: 0x000DA9E0 - 0x000DA9E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA9E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DA9E0: ;
    fp_push(MEMF(ecx + 0x49C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DA9F0
 * Original: 0x000DA9F0 - 0x000DA9F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DA9F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DA9F0: ;
    fp_push(MEMF(ecx + 0x4A0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DAA00
 * Original: 0x000DAA00 - 0x000DAA07 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAA00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DAA00: ;
    fp_push(MEMF(ecx + 0x4A4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DAA10
 * Original: 0x000DAA10 - 0x000DAA17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAA10(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DAA10: ;
    fp_push(MEMF(ecx + 0x4A8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DAA20
 * Original: 0x000DAA20 - 0x000DAA27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAA20(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DAA20: ;
    fp_push(MEMF(ecx + 0x4AC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DAA30
 * Original: 0x000DAA30 - 0x000DAA37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAA30(void)
{

loc_000DAA30: ;
    eax = MEM32(ecx + 0x46C);
    esp += 4; return; /* ret */

}

/**
 * sub_000DAA40
 * Original: 0x000DAA40 - 0x000DAA47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAA40(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DAA40: ;
    fp_push(MEMF(ecx + 0x4B0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DAA50
 * Original: 0x000DAA50 - 0x000DAA57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAA50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DAA50: ;
    fp_push(MEMF(ecx + 0x4B4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DAA60
 * Original: 0x000DAA60 - 0x000DAA67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAA60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DAA60: ;
    fp_push(MEMF(ecx + 0x4BC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DAA70
 * Original: 0x000DAA70 - 0x000DAA77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAA70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DAA70: ;
    fp_push(MEMF(ecx + 0x4C8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DAA80
 * Original: 0x000DAA80 - 0x000DAA93 (19 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAA80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DAA80: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000DAAA0
 * Original: 0x000DAAA0 - 0x000DAB1B (123 bytes, 36 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000DAAA0(void)
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

loc_000DAAA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x000DAAA8u); RECOMP_ABI_CALL(0x00024BFAu, sub_00024BFA); /* call 0x00024BFA */

loc_000DAAA8: ;
    eax = MEM32(0x8BFE50);
    ecx = 0x8BFE50;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000DAAB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DAAB2u); } /* indirect call */
    }

loc_000DAAB5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CA12C);
    PUSH32(esp, 0x000DAAC0u); RECOMP_ABI_CALL(0x00020E88u, sub_00020E88); /* call 0x00020E88 */

loc_000DAAC0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DAAC8u); RECOMP_ABI_CALL(0x00026D2Eu, sub_00026D2E); /* call 0x00026D2E */

loc_000DAAC8: ;
    ecx = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = edx;
    MEM32(esi) = ecx;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DAAED; /* jne: not equal / not zero */

loc_000DAAD9: ;
    MEM32(esi + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B54)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000DAAED: ;
    eax = MEM32(0x8E9394);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAAFE; /* je: equal / zero */

loc_000DAAF6: ;
    SET_LO8(eax, MEM8(eax + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(ecx + 0x30) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAB01; /* je: equal / zero */

loc_000DAAFE: ;
    MEM32(esi + 8) = edx;

loc_000DAB01: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x000DAB08u); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_000DAB08: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x8E9B50)); /* fmul dword ptr [0x8e9b50] */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DAB40
 * Original: 0x000DAB40 - 0x000DAB7A (58 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAB40(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000DAB40: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DAB77; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DAB58: ;
    eax = MEM32(ecx);
    MEMF(ecx + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(0x8E9B0C);
    MEM32(eax + 0x2C) = edx;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DAB77u); RECOMP_ABI_CALL(0x00031FE4u, sub_00031FE4); /* call 0x00031FE4 */

loc_000DAB77: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DAB90
 * Original: 0x000DAB90 - 0x000DAC40 (176 bytes, 39 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000DAB90: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x198)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AB2D0); /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x8E9B68)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD408); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7B9D60); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x8E9B5C); /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esi + 0xC); /* addss */
    MEMF(esi + 0xC) = xmm2.f[0]; /* movss */
    ecx = MEM32(0x8F6A68);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DAC25; /* jne: not equal / not zero */

loc_000DAC02: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DAC0Cu); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_000DAC0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DAC25; /* jne: not equal / not zero */

loc_000DAC13: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7CA068); /* addss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */

loc_000DAC25: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9B54)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DAC3C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DAC37: ;
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */

loc_000DAC3C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DAC70
 * Original: 0x000DAC70 - 0x000DAEE1 (625 bytes, 149 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DAC70(void)
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

loc_000DAC70: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 5 (32-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000DAC94; /* jne: not equal / not zero */

loc_000DAC87: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000DAC94: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xD (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000DAD16; /* ja: above (unsigned >) */

loc_000DAC9E: ;
    { uint32_t _jt = MEM32(esi * 4 + 0xDAEE4); /* switch: 14 entries, 12 targets */
    if (_jt == 0x000DACA5u) goto loc_000DACA5;
    if (_jt == 0x000DAD7Eu) goto loc_000DAD7E;
    if (_jt == 0x000DAD8Eu) goto loc_000DAD8E;
    if (_jt == 0x000DADA1u) goto loc_000DADA1;
    if (_jt == 0x000DADAEu) goto loc_000DADAE;
    if (_jt == 0x000DADC1u) goto loc_000DADC1;
    if (_jt == 0x000DADD4u) goto loc_000DADD4;
    if (_jt == 0x000DADE7u) goto loc_000DADE7;
    if (_jt == 0x000DADFAu) goto loc_000DADFA;
    if (_jt == 0x000DAE0Du) goto loc_000DAE0D;
    if (_jt == 0x000DAE20u) goto loc_000DAE20;
    if (_jt == 0x000DAE28u) goto loc_000DAE28;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000DACA5: ;
    PUSH32(esp, 9);
    PUSH32(esp, 0x000DACACu); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_000DACAC: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    eax = esi;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AA820)); /* fadd dword ptr [0x7aa820] */
    fp_top() = RECOMP_FP_PC(MEMF(0x7A9980) - fp_top()); /* fsubr dword ptr [0x7a9980] */
    fp_push(MEMF(0x8E9B40)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7A9980)); /* fadd dword ptr [0x7a9980] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    if ((_fa == 0)) goto loc_000DACF6; /* je: equal / zero */

loc_000DACD7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000DACEA; /* je: equal / zero */

loc_000DACDA: ;
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000DAD04; /* jne: not equal / not zero */

loc_000DACDF: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000DAD04;

loc_000DACEA: ;
    ecx = 0x8E96A0;
    PUSH32(esp, 0x000DACF4u); RECOMP_ABI_CALL(0x00018C38u, sub_00018C38); /* call 0x00018C38 */

loc_000DACF4: ;
    goto loc_000DAD00;

loc_000DACF6: ;
    ecx = 0x8E96A0;
    PUSH32(esp, 0x000DAD00u); RECOMP_ABI_CALL(0x00018BC0u, sub_00018BC0); /* call 0x00018BC0 */

loc_000DAD00: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000DAD04: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_000DAD16: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DAD2F; /* je: equal / zero */

loc_000DAD1B: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9940)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 8); /* mulss */

loc_000DAD29: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_000DAD2F: ;
    ecx = MEM32(edi);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DAED5; /* jne: not equal / not zero */

loc_000DAD3C: ;
    eax = MEM32(0x8E8F84);
    esi = MEM32(eax + 0x20);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x000DAD4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DAD49u); } /* indirect call */
    }

loc_000DAD4C: ;
    eax = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DAE33; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000DAD76: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000DAE3A;

loc_000DAD7E: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B48)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000DAD1B;

loc_000DAD8E: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B44)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000DAD1B;

loc_000DADA1: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B24)); /* movss */
    goto loc_000DAD29;

loc_000DADAE: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B28)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000DAD1B;

loc_000DADC1: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B2C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000DAD1B;

loc_000DADD4: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B30)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000DAD1B;

loc_000DADE7: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B34)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000DAD1B;

loc_000DADFA: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B38)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000DAD1B;

loc_000DAE0D: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B3C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000DAD1B;

loc_000DAE20: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B4C)); /* movss */

loc_000DAE28: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_000DAD1B;

loc_000DAE33: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000DAE3A: ;
    xmm3 = XMM_SCALAR(MEMF(0x7ABD78)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DAE60; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000DAE47: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000DAE5C; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000DAE54: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000DAE5C: ;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */

loc_000DAE60: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x18); /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x3E4CCCCD);
    PUSH32(esp, 0x43F00000);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DAEC6u); RECOMP_ABI_CALL(0x00024EB1u, sub_00024EB1); /* call 0x00024EB1 */

loc_000DAEC6: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x1C)); /* fmul dword ptr [esp + 0x1c] */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000DAED5: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    POP32(esp, esi);
    POP32(esp, edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DAFF0
 * Original: 0x000DAFF0 - 0x000DB077 (135 bytes, 44 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000DAFF0(void)
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

loc_000DAFF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = edx;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB018; /* jne: not equal / not zero */

loc_000DB002: ;
    MEM32(esi + 8) = 0;

loc_000DB009: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9B54)); /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DB018: ;
    MEM32(esi + 8) = MEM32(esi + 8) + 1;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000DB020u); RECOMP_ABI_CALL(0x00024BFAu, sub_00024BFA); /* call 0x00024BFA */

loc_000DB020: ;
    edx = MEM32(0x8BFE50);
    ecx = 0x8BFE50;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000DB02Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DB02Bu); } /* indirect call */
    }

loc_000DB02E: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esi);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(edx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x28), 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = ZX8(LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7CA140);
    PUSH32(esp, 0x000DB04Au); RECOMP_ABI_CALL(0x00020E88u, sub_00020E88); /* call 0x00020E88 */

loc_000DB04A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DB052u); RECOMP_ABI_CALL(0x00026D2Eu, sub_00026D2E); /* call 0x00026D2E */

loc_000DB052: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB009; /* je: equal / zero */

loc_000DB05A: ;
    eax = MEM32(ecx + 0x54);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB075; /* je: equal / zero */

loc_000DB063: ;
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x000DB06Au); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_000DB06A: ;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000DB075u); RECOMP_ABI_CALL(0x0001FED4u, sub_0001FED4); /* call 0x0001FED4 */

loc_000DB075: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DB0A0
 * Original: 0x000DB0A0 - 0x000DB114 (116 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB0A0(void)
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

loc_000DB0A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB110; /* je: equal / zero */

loc_000DB0AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB110; /* je: equal / zero */

loc_000DB0B2: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB0CB; /* je: equal / zero */

loc_000DB0BC: ;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DB0C4u); RECOMP_ABI_CALL(0x000273F5u, sub_000273F5); /* call 0x000273F5 */

loc_000DB0C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB10F; /* jne: not equal / not zero */

loc_000DB0CB: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000DB0D3u); RECOMP_ABI_CALL(0x00023557u, sub_00023557); /* call 0x00023557 */

loc_000DB0D3: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DB10F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DB0EF: ;
    eax = MEM32(esi);
    MEMF(esi + 0xC) = xmm1.f[0]; /* movss */
    ecx = MEM32(0x8E9B0C);
    MEM32(eax + 0x2C) = ecx;
    edx = MEM32(0x8E8F84);
    ecx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DB10Fu); RECOMP_ABI_CALL(0x00031FE4u, sub_00031FE4); /* call 0x00031FE4 */

loc_000DB10F: ;
    POP32(esp, edi);

loc_000DB110: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DB140
 * Original: 0x000DB140 - 0x000DB144 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB140(void)
{

loc_000DB140: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB150
 * Original: 0x000DB150 - 0x000DB154 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB150(void)
{

loc_000DB150: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB160
 * Original: 0x000DB160 - 0x000DB167 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB160(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DB160: ;
    fp_push(MEMF(ecx + 0x318)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DB170
 * Original: 0x000DB170 - 0x000DB177 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB170(void)
{

loc_000DB170: ;
    eax = MEM32(ecx + 0x31C);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB180
 * Original: 0x000DB180 - 0x000DB187 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB180(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DB180: ;
    fp_push(MEMF(ecx + 0x338)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DB190
 * Original: 0x000DB190 - 0x000DB197 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB190: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    esp += 4; return; /* ret */

}

/**
 * sub_000DB1A0
 * Original: 0x000DB1A0 - 0x000DB1AB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB1A0: ;
    SET_LO8(edx, MEM8(ecx + 0x38));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000DB1B0
 * Original: 0x000DB1B0 - 0x000DB1B3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB1B0(void)
{

loc_000DB1B0: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB1C0
 * Original: 0x000DB1C0 - 0x000DB1C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB1C0(void)
{

loc_000DB1C0: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB1D0
 * Original: 0x000DB1D0 - 0x000DB1D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB1D0(void)
{

loc_000DB1D0: ;
    SET_LO8(eax, MEM8(ecx + 5));
    esp += 4; return; /* ret */

}

/**
 * sub_000DB1E0
 * Original: 0x000DB1E0 - 0x000DB1E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB1E0(void)
{

loc_000DB1E0: ;
    eax = ecx + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB1F0
 * Original: 0x000DB1F0 - 0x000DB1F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB1F0(void)
{

loc_000DB1F0: ;
    eax = ecx + 0x38;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB200
 * Original: 0x000DB200 - 0x000DB204 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB200(void)
{

loc_000DB200: ;
    eax = ecx + 0x44;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB210
 * Original: 0x000DB210 - 0x000DB214 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB210(void)
{

loc_000DB210: ;
    eax = ecx + 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB220
 * Original: 0x000DB220 - 0x000DB224 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB220(void)
{

loc_000DB220: ;
    eax = ecx + 0x58;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB230
 * Original: 0x000DB230 - 0x000DB233 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB230(void)
{

loc_000DB230: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB240
 * Original: 0x000DB240 - 0x000DB244 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB240(void)
{

loc_000DB240: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB250
 * Original: 0x000DB250 - 0x000DB254 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB250(void)
{

loc_000DB250: ;
    eax = ecx + 0x2C;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB260
 * Original: 0x000DB260 - 0x000DB264 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB260(void)
{

loc_000DB260: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_000DB270
 * Original: 0x000DB270 - 0x000DB281 (17 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB270(void)
{

loc_000DB270: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xF0) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DB290
 * Original: 0x000DB290 - 0x000DB29D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB290(void)
{

loc_000DB290: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x94) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DB2A0
 * Original: 0x000DB2A0 - 0x000DB2A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB2A0(void)
{

loc_000DB2A0: ;
    eax = MEM32(ecx + 0x40C);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB2B0
 * Original: 0x000DB2B0 - 0x000DB2D3 (35 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB2B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB2B0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x410;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DB2E0
 * Original: 0x000DB2E0 - 0x000DB2E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB2E0(void)
{

loc_000DB2E0: ;
    eax = MEM32(0x8EFF68);
    esp += 4; return; /* ret */

}

/**
 * sub_000DB2F0
 * Original: 0x000DB2F0 - 0x000DB2FD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB2F0(void)
{

loc_000DB2F0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x428) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DB300
 * Original: 0x000DB300 - 0x000DB31F (31 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB300: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB30E; /* je: equal / zero */

loc_000DB309: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB31C; /* jne: not equal / not zero */

loc_000DB30E: ;
    SET_LO8(eax, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DB31C; /* jge: greater or equal (signed >=) */

loc_000DB315: ;
    SET_LO8(eax, MEM8(esp + 8));
    MEM8(ecx + 0x14) = LO8(eax);

loc_000DB31C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DB330
 * Original: 0x000DB330 - 0x000DB334 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB330(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DB330: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DB340
 * Original: 0x000DB340 - 0x000DB840 (1280 bytes, 332 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DB340(void)
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

loc_000DB340: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0xF) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_000DB383; /* jne: not equal / not zero */

loc_000DB35A: ;
    eax = MEM32(esi + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB383; /* jne: not equal / not zero */

loc_000DB364: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DB36Au); RECOMP_ABI_CALL(0x0001C621u, sub_0001C621); /* call 0x0001C621 */

loc_000DB36A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB383; /* jne: not equal / not zero */

loc_000DB371: ;
    eax = MEM32(esi + 0x260);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB383; /* je: equal / zero */

loc_000DB37B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DB383: ;
    PUSH32(esp, 0x42400000);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DB38Fu); RECOMP_ABI_CALL(0x0003632Du, sub_0003632D); /* call 0x0003632D */

loc_000DB38F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x5C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB554; /* je: equal / zero */

loc_000DB3C4: ;
    eax = MEM32(esi + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB4F9; /* jne: not equal / not zero */

loc_000DB3D2: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x8E99E0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DB406; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x34)) */

loc_000DB3E8: ;
    edx = MEM32(esi + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8E99EC); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CA52C); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000DB406: ;
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DB412u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000DB412: ;
    ecx = MEM32(eax + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB42A; /* je: equal / zero */

loc_000DB41C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000DB421u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DB41Eu); } /* indirect call */
    }

loc_000DB421: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB539; /* je: equal / zero */

loc_000DB42A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000DB42D: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DB5E8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DB43C: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DB448u); RECOMP_ABI_CALL(0x0002673Eu, sub_0002673E); /* call 0x0002673E */

loc_000DB448: ;
    ecx = MEM32(eax);
    MEM32(esp + 0x50) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x54) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x58) = ecx;
    edx = MEM32(eax + 0xC);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    MEM32(esp + 0x64) = edx;
    edx = MEM32(0x8E8F84);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DB47Cu); RECOMP_ABI_CALL(0x0002F29Eu, sub_0002F29E); /* call 0x0002F29E */

loc_000DB47C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0xF) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000DB5E8; /* je: equal / zero */

loc_000DB48B: ;
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DB497u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000DB497: ;
    ecx = MEM32(eax + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB4AF; /* je: equal / zero */

loc_000DB4A1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x000DB4A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DB4A3u); } /* indirect call */
    }

loc_000DB4A6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB5E0; /* je: equal / zero */

loc_000DB4AF: ;
    ecx = MEM32(0x8E9394);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB7B9; /* je: equal / zero */

loc_000DB4BD: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB4CD; /* je: equal / zero */

loc_000DB4C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB7B9; /* jne: not equal / not zero */

loc_000DB4CD: ;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DB4D5u); RECOMP_ABI_CALL(0x00011861u, sub_00011861); /* call 0x00011861 */

loc_000DB4D5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB7B9; /* je: equal / zero */

loc_000DB4DD: ;
    eax = MEM32(esi + 0x20);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DB586; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000DB4F1: ;
    xmm1 = xmm2; /* movaps */
    goto loc_000DB58D;

loc_000DB4F9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB56B; /* jne: not equal / not zero */

loc_000DB4FD: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000DB505u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DB502u); } /* indirect call */
    }

loc_000DB505: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x24C); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DB524; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000DB51F: ;
    xmm1 = xmm0; /* movaps */
    goto loc_000DB528;

loc_000DB524: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */

loc_000DB528: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DB5E8; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000DB539: ;
    eax = MEM32(esi + 0x3C);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8E99EC); /* mulss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_000DB42A;

loc_000DB554: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(0x8E99E0)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 0x34); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DB5E8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(eax + 0x34)) */

loc_000DB56B: ;
    ecx = MEM32(esi + 0x3C);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x8E99EC); /* mulss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    goto loc_000DB42D;

loc_000DB586: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_000DB58D: ;
    xmm3 = XMM_SCALAR(MEMF(0x7CA508)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DB5B6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DB59E: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DB5AC; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000DB5A3: ;
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    goto loc_000DB5CF;

loc_000DB5AC: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    goto loc_000DB5CF;

loc_000DB5B6: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DB5C0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000DB5BB: ;
    xmm1 = xmm2; /* movaps */
    goto loc_000DB5C7;

loc_000DB5C0: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */

loc_000DB5C7: ;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000DB5CF: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AEBF0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DB7B9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DB5E0: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DB5E8: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB7B9; /* jne: not equal / not zero */

loc_000DB5F2: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB629; /* jne: not equal / not zero */

loc_000DB5F9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB629; /* jne: not equal / not zero */

loc_000DB5FD: ;
    eax = MEM32(esi + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB7B9; /* je: equal / zero */

loc_000DB60B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DB7B9; /* jne: not equal / not zero */

loc_000DB614: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DB7B9; /* jl: less (signed <) */

loc_000DB620: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DB7B9; /* jg: greater (signed >) */

loc_000DB629: ;
    PUSH32(esp, 1);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DB637u); RECOMP_ABI_CALL(0x0001A1BEu, sub_0001A1BE); /* call 0x0001A1BE */

loc_000DB637: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x24); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x20); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x3C);
    xmm3 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x8E99E8); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    _fca = xmm3.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DB6D1; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs MEMF(esp + 0x10)) */

loc_000DB6AE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    goto loc_000DB7A0;

loc_000DB6D1: ;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DB6DFu); RECOMP_ABI_CALL(0x0001A1BEu, sub_0001A1BE); /* call 0x0001A1BE */

loc_000DB6DF: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x28); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x2C); /* subss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x30); /* subss */
    ecx = MEM32(esp + 0x38);
    eax = MEM32(esp + 0x34);
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x3C);
    MEM32(esp + 0x48) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(esp + 0x44) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x40) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DB7B9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000DB782: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */

loc_000DB7A0: ;
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM8(esp + 0xF) = 1;
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */

loc_000DB7B9: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x43F00000);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DB7CFu); RECOMP_ABI_CALL(0x00013A62u, sub_00013A62); /* call 0x00013A62 */

loc_000DB7CF: ;
    SET_LO8(ecx, MEM8(esp + 0x17));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB836; /* je: equal / zero */

loc_000DB7DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB836; /* je: equal / zero */

loc_000DB7DE: ;
    edx = MEM32(0x8E8F84);
    edx = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, edx);
    ecx = eax;
    MEMF(esp + 0x4C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DB82Cu); RECOMP_ABI_CALL(0x0001556Fu, sub_0001556F); /* call 0x0001556F */

loc_000DB82C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DB836; /* je: equal / zero */

loc_000DB831: ;
    MEM8(esp + 0xF) = 0;

loc_000DB836: ;
    SET_LO8(eax, MEM8(esp + 0xF));
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
 * sub_000DB980
 * Original: 0x000DB980 - 0x000DB9D9 (89 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB980: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(esp + 4) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 8) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(0x8E8F84);
    ecx = esp + 4;
    MEM32(esp + 0xC) = eax;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x000DB9BEu); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000DB9BE: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0x000DB9CBu); RECOMP_ABI_CALL(0x0002FA1Eu, sub_0002FA1E); /* call 0x0002FA1E */

loc_000DB9CB: ;
    ecx = esi;
    PUSH32(esp, 0x000DB9D2u); RECOMP_ABI_CALL(0x0002D278u, sub_0002D278); /* call 0x0002D278 */

loc_000DB9D2: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DB9F0
 * Original: 0x000DB9F0 - 0x000DBA22 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DB9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DB9F0: ;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x84);
    eax = MEM32(eax + 0x20);
    ecx = eax + 0x30;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000DBA0Eu); RECOMP_ABI_CALL(0x0001B0C3u, sub_0001B0C3); /* call 0x0001B0C3 */

loc_000DBA0E: ;
    edx = MEM32(esp + 8);
    eax = MEM32(edx + 0x240);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000DBA20u); RECOMP_ABI_CALL(0x000118EDu, sub_000118ED); /* call 0x000118ED */

loc_000DBA20: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DBA30
 * Original: 0x000DBA30 - 0x000DBC72 (578 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DBA30(void)
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

loc_000DBA30: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x38));
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm6.f[0] = xmm6.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm5.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm5.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm6.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x54)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x54) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DBB2B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp)) */

loc_000DBB1E: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x54); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DBB2B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x54)) */

loc_000DBB25: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DBB2B: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x000DBB39u); RECOMP_ABI_CALL(0x0001262Bu, sub_0001262B); /* call 0x0001262B */

loc_000DBB39: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm4.f[0]; _fcb = MEMF(esp); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DBB6D; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(esp)) */

loc_000DBB45: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x000DBB53u); RECOMP_ABI_CALL(0x0001262Bu, sub_0001262B); /* call 0x0001262B */

loc_000DBB53: ;
    edx = MEM32(eax);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x1C) = edx;

loc_000DBB6D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x10); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x28); /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0xC); /* mulss */
    xmm2.f[0] = xmm2.f[0] * MEMF(esp + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(esp + 8); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm3 = xmm5; /* movaps */
    if ((_fca >= _fcb)) goto loc_000DBBDA; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000DBBD7: ;
    xmm3 = xmm0; /* movaps */

loc_000DBBDA: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DBBE2; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_000DBBDF: ;
    xmm0 = xmm5; /* movaps */

loc_000DBBE2: ;
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000DBBEF; /* jnp: not parity */

loc_000DBBEB: ;
    SET_LO8(ecx, 1);
    goto loc_000DBBF1;

loc_000DBBEF: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000DBBF1: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x50); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x4C); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x48); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x3C) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x48) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp); /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD458); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DBC5E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000DBC5A: ;
    SET_LO8(eax, 1);
    goto loc_000DBC60;

loc_000DBC5E: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000DBC60: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DBC6C; /* je: equal / zero */

loc_000DBC64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DBB25; /* jne: not equal / not zero */

loc_000DBC6C: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x38)) >> 32) & 1);
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DBD10
 * Original: 0x000DBD10 - 0x000DBD11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DBD10(void)
{

loc_000DBD10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DBD20
 * Original: 0x000DBD20 - 0x000DC002 (738 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DBD20(void)
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

loc_000DBD20: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x40);
    xmm4 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x40)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x2C); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x30); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 0x34); /* subss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm5.f[0] = xmm5.f[0] + MEMF(esp + 0x48); /* addss */
    xmm6.f[0] = xmm6.f[0] + MEMF(esp + 0x4C); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x2C)); /* movss */
    eax = MEM32(esp + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x24 (32-bit) */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x44); /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm7 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm6.f[0] = xmm6.f[0] + xmm3.f[0]; /* addss */
    if (CMP_EQ(_fa, _fb)) goto loc_000DBDE6; /* je: equal / zero */

loc_000DBDAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x26 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DBE51; /* jle: less or equal (signed <=) */

loc_000DBDB5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000DBE51; /* jg: greater (signed >) */

loc_000DBDBE: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x44);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x48);
    MEMF(esp + 0x44) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    goto loc_000DBE0C;

loc_000DBDE6: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x44);
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x48);
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm5.f[0]; /* movss */

loc_000DBE0C: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x4C);
    MEMF(esp + 0x4C) = xmm6.f[0]; /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(esp + 0x4C);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(esp + 0xC) = eax;
    eax = MEM32(esp + 0x44);
    MEM32(esp + 8) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(esp + 4) = ecx;
    xmm7 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEM32(esp) = eax;

loc_000DBE51: ;
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0xC); /* subss */
    xmm7.f[0] = xmm7.f[0] - MEMF(esp + 0x10); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x48;
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000DBE88u); RECOMP_ABI_CALL(0x0001262Bu, sub_0001262B); /* call 0x0001262B */

loc_000DBE88: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm6 = xmm4; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(0x7AD3C8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x4C);
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x44) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x44);
    MEMF(esp + 0x48) = xmm2.f[0]; /* movss */
    edx = MEM32(esp + 0x48);
    xmm1 = xmm5; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x3C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 0x40) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x40)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x44) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(0x7AD310)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm6 = xmm3; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    _fca = xmm4.f[0]; _fcb = xmm6.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DBFE4; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm6.f[0]) */

loc_000DBFB2: ;
    _fca = xmm4.f[0]; _fcb = MEMF(0x7AD340); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DBFE4; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs MEMF(0x7AD340)) */

loc_000DBFBB: ;
    xmm3.f[0] = xmm3.f[0] / xmm4.f[0]; /* divss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */

loc_000DBFE4: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x2C);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x30);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(ecx + 8) = edx;
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
 * sub_000DC0C0
 * Original: 0x000DC0C0 - 0x000DC173 (179 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC0C0(void)
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

loc_000DC0C0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 8); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 4); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm4 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] / MEMF(esp + 0xC); /* divss */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = MEM32(esp + 0x14);
    xmm3.f[0] = xmm3.f[0] / xmm4.f[0]; /* divss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(eax + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm5.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x8E99B4); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AA820); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DC170; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000DC168: ;
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000DC170: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DC1A0
 * Original: 0x000DC1A0 - 0x000DC1BF (31 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC1A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000DC1A0: ;
    fp_push(MEMF(0x8E99B4)); /* fld float */
    fp_top() = -fp_top(); /* fchs */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DC1D0
 * Original: 0x000DC1D0 - 0x000DC29A (202 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000DC1D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DC296; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_000DC23B: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 8); /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 8); /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(ecx); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(ecx + 8); /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DC296; /* jb: below (unsigned <) (xmm2.f[0] vs xmm3.f[0]) */

loc_000DC292: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DC296: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DC2D0
 * Original: 0x000DC2D0 - 0x000DC2D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC2D0(void)
{

loc_000DC2D0: ;
    MEM8(ecx + 0x448) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000DC2E0
 * Original: 0x000DC2E0 - 0x000DC366 (134 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC2E0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DC2E6u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000DC2E6: ;
    ecx = eax;
    PUSH32(esp, 0x000DC2EDu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_000DC2ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_000DC2FE; /* jne: not equal / not zero */

loc_000DC2F5: ;
    PUSH32(esp, 0x000DC2FAu); RECOMP_ABI_CALL(0x00014EE9u, sub_00014EE9); /* call 0x00014EE9 */

loc_000DC2FA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC307; /* je: equal / zero */

loc_000DC2FE: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DC304u); RECOMP_ABI_CALL(0x00033A2Eu, sub_00033A2E); /* call 0x00033A2E */

loc_000DC304: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DC307: ;
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC364; /* je: equal / zero */

loc_000DC30D: ;
    SET_LO8(eax, MEM8(edi + 0x30));
    ecx = SX8(LO8(eax));
    PUSH32(esp, esi);
    esi = MEM32(ecx * 4 + 0x8F0040);
    SET_LO8(ecx, MEM8(esp + 0x10));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x14;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC343; /* je: equal / zero */

loc_000DC328: ;
    ecx = MEM32(0x8F004C);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC33A; /* je: equal / zero */

loc_000DC335: ;
    _fa = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x30), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC343; /* je: equal / zero */

loc_000DC33A: ;
    MEM32(esi + 8) = edx;
    MEM32(esi + 0xC) = edx;
    MEM32(esi + 0x10) = edx;

loc_000DC343: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DC349u); RECOMP_ABI_CALL(0x0002F483u, sub_0002F483); /* call 0x0002F483 */

loc_000DC349: ;
    ecx = MEM32(esi + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC363; /* je: equal / zero */

loc_000DC353: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC35D; /* je: equal / zero */

loc_000DC35A: ;
    MEM32(esi + 0x10) = eax;

loc_000DC35D: ;
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 8) = edi;

loc_000DC363: ;
    POP32(esp, esi);

loc_000DC364: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DC390
 * Original: 0x000DC390 - 0x000DC4CE (318 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC390: ;
    eax = MEM32(0x8E97B4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_000DC3A9; /* je: equal / zero */

loc_000DC3A4: ;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x30), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC3B7; /* je: equal / zero */

loc_000DC3A9: ;
    _fa = (uint32_t)(MEM32(0x8E97B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8E97B8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC3BF; /* je: equal / zero */

loc_000DC3B1: ;
    _fa = (uint32_t)(MEM8(esi + 0x30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x30), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC3BF; /* jne: not equal / not zero */

loc_000DC3B7: ;
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DC3BF: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DC3CFu); RECOMP_ABI_CALL(0x00022FDFu, sub_00022FDF); /* call 0x00022FDF */

loc_000DC3CF: ;
    ecx = MEM32(0x8EACE0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DC3DBu); RECOMP_ABI_CALL(0x0001ACFEu, sub_0001ACFE); /* call 0x0001ACFE */

loc_000DC3DB: ;
    ecx = MEM32(0x8EFF68);
    PUSH32(esp, 0x000DC3E6u); RECOMP_ABI_CALL(0x0002CC29u, sub_0002CC29); /* call 0x0002CC29 */

loc_000DC3E6: ;
    ecx = MEM32(esi + 0x1D4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000DC3F2u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000DC3F2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC416; /* je: equal / zero */

loc_000DC3F9: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC407; /* je: equal / zero */

loc_000DC400: ;
    MEM32(ecx + 0x30) = 1;

loc_000DC407: ;
    eax = MEM32(eax + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC416; /* je: equal / zero */

loc_000DC40E: ;
    _fa = (uint32_t)(MEM8(eax + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14), LO8(ebx) (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DC416; /* jge: greater or equal (signed >=) */

loc_000DC413: ;
    MEM8(eax + 0x14) = LO8(ebx);

loc_000DC416: ;
    edx = MEM32(0x8E8F84);
    MEM32(edx + 0x94) = ebx;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC431; /* jne: not equal / not zero */

loc_000DC427: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x000DC42Eu); RECOMP_ABI_CALL(0x0002E678u, sub_0002E678); /* call 0x0002E678 */

loc_000DC42E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DC431: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(esp + 8) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0xC) = edx;
    eax = MEM32(eax + 8);
    edx = MEM32(0x8E8F84);
    ecx = esp + 8;
    MEM32(esp + 0x10) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x000DC467u); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000DC467: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC493; /* je: equal / zero */

loc_000DC46D: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = 0x8F0044;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    MEM32(edx + 0x20) = ebx;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = 0x8F0044;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    MEM32(edx + 0x24) = ebx;

loc_000DC493: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DC49Bu); RECOMP_ABI_CALL(0x00021158u, sub_00021158); /* call 0x00021158 */

loc_000DC49B: ;
    eax = MEM32(0x8E8F84);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000DC4ABu); RECOMP_ABI_CALL(0x0002FC30u, sub_0002FC30); /* call 0x0002FC30 */

loc_000DC4AB: ;
    ecx = MEM32(0x8EACE4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000DC4B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DC4B3u); } /* indirect call */
    }

loc_000DC4B6: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000DC4C3u); RECOMP_ABI_CALL(0x0001B0F5u, sub_0001B0F5); /* call 0x0001B0F5 */

loc_000DC4C3: ;
    MEM32(esi + 0x2C) = ebx;
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DC520
 * Original: 0x000DC520 - 0x000DC845 (805 bytes, 233 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DC520(void)
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

loc_000DC520: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM32(edi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC83E; /* jne: not equal / not zero */

loc_000DC53C: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC549; /* je: equal / zero */

loc_000DC545: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC554; /* jne: not equal / not zero */

loc_000DC549: ;
    SET_LO8(eax, MEM8(edi + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC83E; /* je: equal / zero */

loc_000DC554: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000DC55Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DC558u); } /* indirect call */
    }

loc_000DC55B: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AB1DC)); /* fld float */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000DC83E; /* ja: above (unsigned >) */

loc_000DC573: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC83E; /* je: equal / zero */

loc_000DC57B: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DC583u); RECOMP_ABI_CALL(0x00011861u, sub_00011861); /* call 0x00011861 */

loc_000DC583: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC83E; /* jne: not equal / not zero */

loc_000DC58B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    edx = MEM32(esi);
    ebx = MEM32(esi + 0x20);
    ecx = esi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x4C) = xmm1.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000DC5D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DC5CDu); } /* indirect call */
    }

loc_000DC5D0: ;
    PUSH32(esp, eax);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DC5DFu); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_000DC5DF: ;
    edx = MEM32(esi);
    ebx = MEM32(esi + 0x20);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000DC5E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DC5E6u); } /* indirect call */
    }

loc_000DC5E9: ;
    PUSH32(esp, eax);
    eax = esp + 0x44;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DC5F8u); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_000DC5F8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x40); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x44); /* subss */
    ecx = MEM32(esp + 0x20);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x48); /* subss */
    edx = MEM32(esp + 0x24);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x20;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DC654u); RECOMP_ABI_CALL(0x0001262Bu, sub_0001262B); /* call 0x0001262B */

loc_000DC654: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AB8B8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    eax = MEM32(esp + 0x24);
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    ecx = MEM32(esp + 0x28);
    MEMF(esp + 0x20) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x20);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7BA41C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* comiss */
    MEM32(esp + 0x30) = edx;
    edx = MEM32(esp + 0x2C);
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    MEM8(esp + 0xE) = 1;
    if ((_fca > _fcb)) goto loc_000DC6EB; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(esp + 0x10)) */

loc_000DC6E6: ;
    MEM8(esp + 0xE) = 0;

loc_000DC6EB: ;
    eax = MEM32(edi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    MEM32(ecx + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DC747u); RECOMP_ABI_CALL(0x0002D3D1u, sub_0002D3D1); /* call 0x0002D3D1 */

loc_000DC747: ;
    edi = MEM32(esp + 0x70);
    edx = MEM32(esp + 0x6C);
    ecx = MEM32(0x8E8F84);
    esi = MEM32(ecx + 0x84);
    ecx = MEM32(esp + 0x68);
    ebx = MEM32(esp + 0x60);
    MEM32(esp + 0x50) = edi;
    edi = MEM32(esp + 0x54);
    MEM8(esp + 0x33) = LO8(eax);
    eax = MEM32(esp + 0x64);
    MEM32(esp + 0x38) = edi;
    edi = MEM32(esp + 0x58);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x28) = edx;
    edx = esp + 0x14;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x18) = edi;
    edi = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x34) = ebx;
    MEM32(esp + 0x24) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DC7ABu); RECOMP_ABI_CALL(0x0001B0C3u, sub_0001B0C3); /* call 0x0001B0C3 */

loc_000DC7AB: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ecx + 0x240);
    PUSH32(esp, eax);
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DC7C0u); RECOMP_ABI_CALL(0x000118EDu, sub_000118ED); /* call 0x000118ED */

loc_000DC7C0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC7EB; /* je: equal / zero */

loc_000DC7C4: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC7FB; /* je: equal / zero */

loc_000DC7CB: ;
    SET_LO8(ecx, 0x1C);
    /* nop */

loc_000DC7D0: ;
    edx = MEM32(eax + 0x44);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(edx + 5)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 5), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC7DB; /* jne: not equal / not zero */

loc_000DC7D9: ;
    SET_LO8(ebx, 1);

loc_000DC7DB: ;
    eax = MEM32(eax + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC7D0; /* jne: not equal / not zero */

loc_000DC7E2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC7FB; /* jne: not equal / not zero */

loc_000DC7E7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC7FB; /* je: equal / zero */

loc_000DC7EB: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC7FB; /* jne: not equal / not zero */

loc_000DC7F3: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC83E; /* je: equal / zero */

loc_000DC7FB: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DC80Bu); RECOMP_ABI_CALL(0x00031FE4u, sub_00031FE4); /* call 0x00031FE4 */

loc_000DC80B: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DC81B; /* jne: not equal / not zero */

loc_000DC813: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC837; /* je: equal / zero */

loc_000DC81B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DC820u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000DC820: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DC827u); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_000DC827: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC837; /* je: equal / zero */

loc_000DC82B: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DC834u); RECOMP_ABI_CALL(0x0001B41Au, sub_0001B41A); /* call 0x0001B41A */

loc_000DC834: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DC837: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DC83Eu); RECOMP_ABI_CALL(0x00026A7Cu, sub_00026A7C); /* call 0x00026A7C */

loc_000DC83E: ;
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
 * sub_000DC910
 * Original: 0x000DC910 - 0x000DC927 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC910: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 3;
    MEM32(eax) = 0x7CA5F4;
    esp += 4; return; /* ret */

}

/**
 * sub_000DC930
 * Original: 0x000DC930 - 0x000DC933 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DC930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC930: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DC940
 * Original: 0x000DC940 - 0x000DC946 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC940(void)
{

loc_000DC940: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000DC950
 * Original: 0x000DC950 - 0x000DC97E (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC950: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    edi = ecx;
    PUSH32(esp, 0x000DC95Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DC95D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DC979; /* je: equal / zero */

loc_000DC966: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000DC96Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000DC96E: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7CA5F4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DC979: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DC990
 * Original: 0x000DC990 - 0x000DC9D5 (69 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC990: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x1C) = ecx;
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM32(eax + 0x20) = edx;
    SET_LO8(edx, MEM8(esp + 0x10));
    MEM16(eax + 0x24) = LO16(ecx);
    SET_LO8(ecx, MEM8(esp + 0x14));
    MEM8(eax + 0x26) = LO8(edx);
    edx = MEM32(esp + 0x18);
    MEM16(eax + 0xC) = 3;
    MEM32(eax) = 0x7CA604;
    MEM8(eax + 0x27) = LO8(ecx);
    MEM32(eax + 0x28) = edx;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000DC9F0
 * Original: 0x000DC9F0 - 0x000DCA2E (62 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DC9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DC9F0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0x10;
    MEM32(eax) = 0x7CA614;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM16(eax + 0x24) = LO16(ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0x20) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DCA40
 * Original: 0x000DCA40 - 0x000DCA46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCA40(void)
{

loc_000DCA40: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000DCA50
 * Original: 0x000DCA50 - 0x000DCA56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCA50(void)
{

loc_000DCA50: ;
    eax = 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000DCA60
 * Original: 0x000DCA60 - 0x000DCAA2 (66 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCA60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCA60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    edi = ecx;
    PUSH32(esp, 0x000DCA6Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DCA6D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCA9D; /* je: equal / zero */

loc_000DCA76: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000DCA7Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000DCA7E: ;
    MEM32(esi) = 0x7CA614;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = ecx;
    SET_LO16(edx, MEM16(edi + 0x24));
    POP32(esp, edi);
    MEM16(esi + 0x24) = LO16(edx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DCA9D: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DCAC0
 * Original: 0x000DCAC0 - 0x000DCB04 (68 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCAC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCAC0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM32(eax) = 0x7CA614;
    MEM16(eax + 0xC) = 0x10;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM16(eax + 0x24) = LO16(ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax) = 0x7CA624;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DCB20
 * Original: 0x000DCB20 - 0x000DCB5E (62 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCB20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCB20: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 0x11;
    MEM32(eax) = 0x7CA634;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM16(eax + 0x24) = LO16(ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0x20) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DCB70
 * Original: 0x000DCB70 - 0x000DCB76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCB70(void)
{

loc_000DCB70: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000DCB80
 * Original: 0x000DCB80 - 0x000DCB86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCB80(void)
{

loc_000DCB80: ;
    eax = 0x28;
    esp += 4; return; /* ret */

}

/**
 * sub_000DCB90
 * Original: 0x000DCB90 - 0x000DCBD2 (66 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCB90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    edi = ecx;
    PUSH32(esp, 0x000DCB9Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DCB9D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCBCD; /* je: equal / zero */

loc_000DCBA6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000DCBAEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000DCBAE: ;
    MEM32(esi) = 0x7CA634;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    ecx = MEM32(edi + 0x20);
    MEM32(esi + 0x20) = ecx;
    SET_LO16(edx, MEM16(edi + 0x24));
    POP32(esp, edi);
    MEM16(esi + 0x24) = LO16(edx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DCBCD: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DCBF0
 * Original: 0x000DCBF0 - 0x000DCC34 (68 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCBF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCBF0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM32(eax) = 0x7CA634;
    MEM16(eax + 0xC) = 0x11;
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM16(eax + 0x24) = LO16(ecx);
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax + 0x1C) = edx;
    ecx = MEM32(ecx + 4);
    MEM32(eax + 0x20) = ecx;
    MEM32(eax) = 0x7CA644;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DCC50
 * Original: 0x000DCC50 - 0x000DCCC4 (116 bytes, 37 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCC50: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, ebx);
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x14), LO8(ecx) (8-bit) */
    SET_LO8(ebx, MEM8(eax + 0x1D));
    MEM8(eax + 0x1E) = LO8(edx);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(LO8(edx)), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        SET_LO8(edx, _sv << _sc);
        _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ebx, LO8(ebx) & 0x80);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ebx, MEM8(esp + 8));
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) | LO8(ebx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x18), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax + 0x1D) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 0x1C));
    SET_LO8(ecx, LO8(ecx) & 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) & 0x80);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        SET_LO8(ecx, _sv << _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(edx, MEM8(esp + 0x10));
    SET_LO8(edx, LO8(edx) & 0x3F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO16(edx, MEM16(esp + 0x20));
    MEM8(eax + 0x1C) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x1C));
    MEM16(eax + 0xC) = 0x3A;
    MEM32(eax) = 0x7CA654;
    MEM8(eax + 0x1F) = LO8(ecx);
    MEM16(eax + 0x20) = LO16(edx);
    POP32(esp, ebx);
    esp += 32; return; /* ret 28 */

}

/**
 * sub_000DCCF0
 * Original: 0x000DCCF0 - 0x000DCCF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCCF0(void)
{

loc_000DCCF0: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000DCD00
 * Original: 0x000DCD00 - 0x000DCD06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCD00(void)
{

loc_000DCD00: ;
    eax = 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_000DCD10
 * Original: 0x000DCD10 - 0x000DCD31 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCD10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    esi = ecx;
    PUSH32(esp, 0x000DCD1Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DCD1C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCD2D; /* je: equal / zero */

loc_000DCD23: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000DCD2Bu); RECOMP_ABI_CALL(0x0001F89Eu, sub_0001F89E); /* call 0x0001F89E */

loc_000DCD2B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DCD2D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DCD40
 * Original: 0x000DCD40 - 0x000DCDCA (138 bytes, 52 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCD40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCD40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000DCD4Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000DCD4E: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    MEM32(esi) = 0x7CA654;
    SET_LO8(eax, LO8(eax) ^ MEM8(edi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x1C));
    SET_LO8(eax, LO8(eax) & 0x3F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x1C) = LO8(ecx);
    SET_LO8(eax, MEM8(edi + 0x1C));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1C));
    SET_LO8(edx, MEM8(edi + 0x1C));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0x1D));
    MEM8(esi + 0x1C) = LO8(ecx);
    SET_LO8(edx, LO8(edx) ^ MEM8(edi + 0x1D));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x1D));
    SET_LO8(edx, LO8(edx) & 0x3F);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x1D) = LO8(eax);
    SET_LO8(ecx, LO8(eax));
    SET_LO8(eax, MEM8(edi + 0x1D));
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(eax) & 0x40);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x1D) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1D));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0x1D));
    SET_LO8(ecx, LO8(ecx) & 0x7F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x1D) = LO8(ecx);
    SET_LO8(edx, MEM8(edi + 0x1E));
    MEM8(esi + 0x1E) = LO8(edx);
    SET_LO8(eax, MEM8(edi + 0x1F));
    MEM8(esi + 0x1F) = LO8(eax);
    SET_LO16(ecx, MEM16(edi + 0x20));
    POP32(esp, edi);
    MEM16(esi + 0x20) = LO16(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DCDF0
 * Original: 0x000DCDF0 - 0x000DCE50 (96 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCDF0(void)
{

loc_000DCDF0: ;
    eax = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    esi = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000DCE1Du); RECOMP_ABI_CALL(0x00029AC4u, sub_00029AC4); /* call 0x00029AC4 */

loc_000DCE1D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = MEM32(esp + 0x20);
    MEM32(esi) = 0x7CA664;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    edx = MEM32(ecx);
    MEM32(esi + 0x24) = edx;
    eax = MEM32(ecx + 4);
    MEM32(esi + 0x28) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(esi + 0x2C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_000DCE70
 * Original: 0x000DCE70 - 0x000DCE9A (42 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCE70: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0x1C) = LO8(edx);
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 8), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM16(eax + 0xC) = 0x40;
    MEM32(eax) = 0x7CA674;
    MEM8(eax + 0x1D) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DCEB0
 * Original: 0x000DCEB0 - 0x000DCEB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCEB0(void)
{

loc_000DCEB0: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000DCEC0
 * Original: 0x000DCEC0 - 0x000DCEC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCEC0(void)
{

loc_000DCEC0: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000DCED0
 * Original: 0x000DCED0 - 0x000DCF0A (58 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCED0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x000DCEDDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DCEDD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCF05; /* je: equal / zero */

loc_000DCEE6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000DCEEEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000DCEEE: ;
    MEM32(esi) = 0x7CA674;
    SET_LO8(eax, MEM8(edi + 0x1C));
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1D));
    POP32(esp, edi);
    MEM8(esi + 0x1D) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DCF05: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DCF20
 * Original: 0x000DCF20 - 0x000DCF4A (42 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCF20: ;
    SET_LO8(edx, MEM8(esp + 4));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM8(eax + 0x1C) = LO8(edx);
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 8), LO8(ecx) (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM16(eax + 0xC) = 0x40;
    MEM8(eax + 0x1D) = LO8(ecx);
    MEM32(eax) = 0x7CA684;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000DCF60
 * Original: 0x000DCF60 - 0x000DCF9C (60 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCF60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCF60: ;
    SET_LO16(edx, MEM16(esp + 4));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM16(eax + 0xC) = 0x12;
    MEM32(eax + 0x1C) = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM16(eax + 0x20) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(LO8(edx)), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        SET_LO8(edx, _sv << _sc);
        _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(eax) = 0x7CA694;
    MEM8(eax + 0x22) = LO8(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000DCFB0
 * Original: 0x000DCFB0 - 0x000DCFB6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCFB0(void)
{

loc_000DCFB0: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_000DCFC0
 * Original: 0x000DCFC0 - 0x000DCFC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCFC0(void)
{

loc_000DCFC0: ;
    eax = 0x24;
    esp += 4; return; /* ret */

}

/**
 * sub_000DCFD0
 * Original: 0x000DCFD0 - 0x000DCFF1 (33 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DCFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DCFD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    esi = ecx;
    PUSH32(esp, 0x000DCFDCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DCFDC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DCFED; /* je: equal / zero */

loc_000DCFE3: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x000DCFEBu); RECOMP_ABI_CALL(0x0001C96Eu, sub_0001C96E); /* call 0x0001C96E */

loc_000DCFEB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DCFED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD000
 * Original: 0x000DD000 - 0x000DD054 (84 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD000: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000DD00Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000DD00E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD017; /* je: equal / zero */

loc_000DD012: ;
    eax = edi + 0x1C;
    goto loc_000DD019;

loc_000DD017: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000DD019: ;
    eax = MEM32(eax);
    SET_LO8(edx, MEM8(esi + 0x22));
    MEM32(esi + 0x1C) = eax;
    MEM32(esi) = 0x7CA694;
    SET_LO16(ecx, MEM16(edi + 0x20));
    MEM16(esi + 0x20) = LO16(ecx);
    SET_LO8(edx, LO8(edx) ^ MEM8(edi + 0x22));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x22));
    SET_LO8(edx, LO8(edx) & 0xF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(esi + 0x22) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x22));
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 0x22));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM8(esi + 0x22) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD070
 * Original: 0x000DD070 - 0x000DD0AC (60 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD070: ;
    SET_LO16(edx, MEM16(esp + 4));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM16(eax + 0xC) = 0x12;
    MEM32(eax + 0x1C) = ecx;
    SET_LO8(ecx, MEM8(esp + 8));
    MEM16(eax + 0x20) = LO16(edx);
    SET_LO8(edx, MEM8(esp + 0xC));
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(LO8(edx)), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        SET_LO8(edx, _sv << _sc);
        _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, LO8(ecx) | LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(eax + 0x22) = LO8(ecx);
    MEM32(eax) = 0x7CA6A4;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000DD0C0
 * Original: 0x000DD0C0 - 0x000DD0D7 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD0C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD0C0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x3F;
    MEM32(eax) = 0x7CA6B4;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD0E0
 * Original: 0x000DD0E0 - 0x000DD0E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DD0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD0E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DD0F0
 * Original: 0x000DD0F0 - 0x000DD0F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD0F0(void)
{

loc_000DD0F0: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD100
 * Original: 0x000DD100 - 0x000DD12E (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD100: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    edi = ecx;
    PUSH32(esp, 0x000DD10Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DD10D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD129; /* je: equal / zero */

loc_000DD116: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000DD11Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000DD11E: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7CA6B4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DD129: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD140
 * Original: 0x000DD140 - 0x000DD160 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD140: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 0x3F;
    MEM32(eax) = 0x7CA6C4;
    MEM32(eax + 0x1C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD170
 * Original: 0x000DD170 - 0x000DD187 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD170: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x25;
    MEM32(eax) = 0x7CA6D4;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD190
 * Original: 0x000DD190 - 0x000DD193 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000DD190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD190: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DD1A0
 * Original: 0x000DD1A0 - 0x000DD1A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD1A0(void)
{

loc_000DD1A0: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD1B0
 * Original: 0x000DD1B0 - 0x000DD1DE (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD1B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    edi = ecx;
    PUSH32(esp, 0x000DD1BDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DD1BD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD1D9; /* je: equal / zero */

loc_000DD1C6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000DD1CEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000DD1CE: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7CA6D4;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DD1D9: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD1F0
 * Original: 0x000DD1F0 - 0x000DD210 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD1F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD1F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 0x25;
    MEM32(eax) = 0x7CA6E4;
    MEM32(eax + 0x1C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD220
 * Original: 0x000DD220 - 0x000DD24A (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD220: ;
    eax = ecx;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x26;
    MEM32(eax) = 0x7CA6F4;
    POP32(esp, ebx);
    MEM16(eax + 0x1C) = LO16(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD260
 * Original: 0x000DD260 - 0x000DD266 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD260(void)
{

loc_000DD260: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD270
 * Original: 0x000DD270 - 0x000DD276 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD270(void)
{

loc_000DD270: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD280
 * Original: 0x000DD280 - 0x000DD2B6 (54 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD280: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x000DD28Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DD28D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD2B1; /* je: equal / zero */

loc_000DD296: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000DD29Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000DD29E: ;
    MEM32(esi) = 0x7CA6F4;
    SET_LO16(eax, MEM16(edi + 0x1C));
    MEM16(esi + 0x1C) = LO16(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DD2B1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD2D0
 * Original: 0x000DD2D0 - 0x000DD2FA (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD2D0: ;
    eax = ecx;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x26;
    MEM32(eax) = 0x7CA704;
    POP32(esp, ebx);
    MEM16(eax + 0x1C) = LO16(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD310
 * Original: 0x000DD310 - 0x000DD327 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD310(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD310: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x3D;
    MEM32(eax) = 0x7CA714;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD330
 * Original: 0x000DD330 - 0x000DD336 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD330(void)
{

loc_000DD330: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD340
 * Original: 0x000DD340 - 0x000DD346 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD340(void)
{

loc_000DD340: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD350
 * Original: 0x000DD350 - 0x000DD37E (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD350: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    edi = ecx;
    PUSH32(esp, 0x000DD35Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DD35D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD379; /* je: equal / zero */

loc_000DD366: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000DD36Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000DD36E: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7CA714;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DD379: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD390
 * Original: 0x000DD390 - 0x000DD3A7 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD390(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD390: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x3D;
    MEM32(eax) = 0x7CA724;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD3B0
 * Original: 0x000DD3B0 - 0x000DD3D0 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD3B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD3B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 0x3E;
    MEM32(eax) = 0x7CA734;
    MEM32(eax + 0x1C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD3E0
 * Original: 0x000DD3E0 - 0x000DD3E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD3E0(void)
{

loc_000DD3E0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD3F0
 * Original: 0x000DD3F0 - 0x000DD3F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD3F0(void)
{

loc_000DD3F0: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD400
 * Original: 0x000DD400 - 0x000DD434 (52 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD400: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x000DD40Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DD40D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD42F; /* je: equal / zero */

loc_000DD416: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000DD41Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000DD41E: ;
    MEM32(esi) = 0x7CA734;
    eax = MEM32(edi + 0x1C);
    MEM32(esi + 0x1C) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DD42F: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD450
 * Original: 0x000DD450 - 0x000DD470 (32 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD450: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 0x3E;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax) = 0x7CA744;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000DD480
 * Original: 0x000DD480 - 0x000DD497 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD480: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x43;
    MEM32(eax) = 0x7CA754;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD4A0
 * Original: 0x000DD4A0 - 0x000DD4A6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD4A0(void)
{

loc_000DD4A0: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD4B0
 * Original: 0x000DD4B0 - 0x000DD4B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD4B0(void)
{

loc_000DD4B0: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD4C0
 * Original: 0x000DD4C0 - 0x000DD4EE (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD4C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    edi = ecx;
    PUSH32(esp, 0x000DD4CDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000DD4CD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD4E9; /* je: equal / zero */

loc_000DD4D6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000DD4DEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000DD4DE: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7CA754;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000DD4E9: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD500
 * Original: 0x000DD500 - 0x000DD517 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DD500: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x43;
    MEM32(eax) = 0x7CA764;
    esp += 4; return; /* ret */

}

/**
 * sub_000DD520
 * Original: 0x000DD520 - 0x000DD5EF (207 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DD520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DD520: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0xA8);
    edx = MEM32(ecx * 4 + 0x8E9058);
    _fa = (uint32_t)(MEM32(edx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x28), 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD5ED; /* je: equal / zero */

loc_000DD53D: ;
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x84);
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xF0)); /* movss */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD354)); /* movss */
    PUSH32(esp, edi);
    MEMF(ebx + 0xF0) = xmm0.f[0]; /* movss */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 1;
    /* nop */

loc_000DD570: ;
    eax = MEM32(edi + 0x8F0040);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DD583u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000DD583: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD5C9; /* je: equal / zero */

loc_000DD589: ;
    /* nop */

loc_000DD590: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DD5C9; /* jl: less (signed <) */

loc_000DD5A0: ;
    eax = MEM32(eax * 4 + 0x8E8FA8);
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD5C9; /* je: equal / zero */

loc_000DD5AC: ;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DD5B3u); RECOMP_ABI_CALL(0x000DC520u, sub_000DC520); /* call 0x000DC520 */

loc_000DD5B3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esi + 0x200;
    PUSH32(esp, 0x000DD5C3u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000DD5C3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD590; /* jne: not equal / not zero */

loc_000DD5C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DD570; /* jl: less (signed <) */

loc_000DD5D1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEMF(ebx + 0xF0) = xmm0.f[0]; /* movss */
    ecx = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00026A7C(); return; /* tail jmp 0x00026A7C */

loc_000DD5ED: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DD630
 * Original: 0x000DD630 - 0x000DDC63 (1587 bytes, 408 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DD630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000DD630: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x94;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x8E8F84);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x84);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    ecx = MEM32(edi + 0x40C);
    MEM32(esp + 0x60) = ecx;
    ecx = eax + 0x3C;
    edx = MEM32(ecx);
    MEM32(esp + 0x94) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x98) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x9C) = ecx;
    edx = eax + 0x30;
    ecx = MEM32(edx);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x6C) = ecx;
    edx = MEM32(edx + 8);
    MEM32(esp + 0x64) = eax;
    MEM32(esp + 0x70) = edx;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x30) = ecx;
    ecx = esp + 0x68;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x40) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DD6C4u); RECOMP_ABI_CALL(0x0001B0C3u, sub_0001B0C3); /* call 0x0001B0C3 */

loc_000DD6C4: ;
    ecx = MEM32(edi + 0x20);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000DD6CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD6C9u); } /* indirect call */
    }

loc_000DD6CC: ;
    eax = MEM32(ebx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DD702; /* jl: less (signed <) */

loc_000DD6D6: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0xA8);
    ecx = MEM32(edx * 4 + 0x8E8EB8);
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD702; /* jne: not equal / not zero */

loc_000DD6F0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x000DD6F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD6F2u); } /* indirect call */
    }

loc_000DD6F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD702; /* jne: not equal / not zero */

loc_000DD6F9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DD702: ;
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DD70Eu); RECOMP_ABI_CALL(0x0001E4BCu, sub_0001E4BC); /* call 0x0001E4BC */

loc_000DD70E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x17) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_000DDC5C; /* je: equal / zero */

loc_000DD71A: ;
    eax = MEM32(ebx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x48)); /* movss */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x48;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp + 0x50);
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    eax = MEM32(esp + 0x54);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x58);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x5C) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x410) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x410;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = edx;
    edx = MEM32(esp + 0x5C);
    MEM32(edi + 4) = eax;
    MEM32(edi + 8) = ecx;
    MEM32(edi + 0xC) = edx;
    edi = MEM32(esi + 8);
    eax = edi + 0x58;
    ecx = MEM32(eax);
    MEM32(esp + 0x50) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x54) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x58) = ecx;
    edx = MEM32(eax + 0xC);
    MEM32(esp + 0x5C) = edx;
    eax = MEM32(edi + 0x44);
    ebx = ZX8(MEM8(eax + 5));
    ecx = esp + 0x16;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esp + 0x1A) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DD7A9u); RECOMP_ABI_CALL(0x00019DCCu, sub_00019DCC); /* call 0x00019DCC */

loc_000DD7A9: ;
    edx = esi + 0x14;
    eax = MEM32(edx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esi);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(esi + 4);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 0xA8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(esi + 8);
    MEM32(esp + 0x2C) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_000DDAA8; /* jge: greater or equal (signed >=) */

loc_000DD7E8: ;
    ecx = MEM32(0x8EACE4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DD7F3u); RECOMP_ABI_CALL(0x0002A181u, sub_0002A181); /* call 0x0002A181 */

loc_000DD7F3: ;
    ecx = MEM32(0x8EACE4);
    edx = MEM32(ecx);
    esi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000DD800u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD7FDu); } /* indirect call */
    }

loc_000DD800: ;
    ecx = MEM32(0x8EACE0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000DD80Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DD80Cu); } /* indirect call */
    }

loc_000DD80F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm3.f[0]; _fcb = MEMF(0x7CA778); /* comiss */
    MEM8(esp + 0x14) = 1;
    if ((_fca > _fcb)) goto loc_000DD84B; /* ja: above (unsigned >) (xmm3.f[0] vs MEMF(0x7CA778)) */

loc_000DD846: ;
    MEM8(esp + 0x14) = 0;

loc_000DD84B: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7ABD7C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DD86E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DD85C: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B1DE4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM8(esp + 0x15) = 1;
    if ((_fca >= _fcb)) goto loc_000DD873; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000DD86E: ;
    MEM8(esp + 0x15) = 0;

loc_000DD873: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E99E0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AB82C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM8(esp + 0x13) = 1;
    if ((_fca > _fcb)) goto loc_000DD898; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DD893: ;
    MEM8(esp + 0x13) = 0;

loc_000DD898: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AD42C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DD8B7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AD42C)) */

loc_000DD8AC: ;
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, 2);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DD8B7u); RECOMP_ABI_CALL(0x00025E1Au, sub_00025E1A); /* call 0x00025E1A */

loc_000DD8B7: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD9A2; /* je: equal / zero */

loc_000DD8C3: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x28 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD8D6; /* je: equal / zero */

loc_000DD8C8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x27) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x27 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD8D6; /* je: equal / zero */

loc_000DD8CD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x24 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DD9A2; /* jne: not equal / not zero */

loc_000DD8D6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x7C) = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x24) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x24 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = esp + 0x74;
    MEM16(esp + 0x80) = 0x26;
    MEM32(esp + 0x74) = 0x7CA704;
    MEM16(esp + 0x90) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DD909u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DD909: ;
    ecx = MEM32(ebp + 8);
    edx = MEM32(ecx + 0x1C);
    MEM32(esp + 0x60) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    eax = edi + 0x1C;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 0x6C);
    MEM32(ecx + 8) = eax;
    ecx = MEM32(edi + 0x44);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x5C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esp + 0x3C);
    ecx = MEM32(esp + 0x40);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x50);
    MEM32(edx + 4) = ecx;
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    MEM32(edx + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DD971u); RECOMP_ABI_CALL(0x00011203u, sub_00011203); /* call 0x00011203 */

loc_000DD971: ;
    edx = MEM32(eax);
    MEM32(esp + 0x58) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esp + 0x5C) = ecx;
    edx = MEM32(eax + 8);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x2C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000DDA50; /* je: equal / zero */

loc_000DD990: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DD99Au); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_000DD99A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000DDA50;

loc_000DD9A2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x25 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DD9B0; /* je: equal / zero */

loc_000DD9A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x26) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x26 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDA50; /* jne: not equal / not zero */

loc_000DD9B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp + 0x74;
    MEM32(esp + 0x78) = eax;
    MEM32(esp + 0x7C) = eax;
    MEM16(esp + 0x80) = 0x43;
    MEM32(esp + 0x74) = 0x7CA764;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DD9D5u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DD9D5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x25 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0xC);
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    edx = esp + 0x34;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    PUSH32(esp, eax);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x44) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDA50u); RECOMP_ABI_CALL(0x0002DE4Eu, sub_0002DE4E); /* call 0x0002DE4E */

loc_000DDA50: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDAA8; /* je: equal / zero */

loc_000DDA58: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDAA8; /* je: equal / zero */

loc_000DDA60: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDA65u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000DDA65: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDA6Cu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_000DDA6C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDAA8; /* je: equal / zero */

loc_000DDA70: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7CA774); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DDAA8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7CA774)) */

loc_000DDA7F: ;
    PUSH32(esp, 0xB);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDA86u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_000DDA86: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDA8Du); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_000DDA8D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0);
    ecx = esp + 0x80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDA9Fu); RECOMP_ABI_CALL(0x0003168Eu, sub_0003168E); /* call 0x0003168E */

loc_000DDA9F: ;
    ecx = esp + 0x74;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDAA8u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DDAA8: ;
    xmm2 = XMM_SCALAR(MEMF(0x7AB82C)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x40);
    MEMF(esp + 0x40) = xmm0.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x30) = ecx;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x18); /* addss */
    ecx = MEM32(esp + 0x40);
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x34) = edx;
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x48);
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x1C); /* addss */
    MEMF(esp + 0x44) = xmm3.f[0]; /* movss */
    edx = MEM32(esp + 0x44);
    MEM32(esp + 0x30) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = eax;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x48);
    MEM32(esp + 0x34) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x38) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x2C); /* addss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7CA524)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0x1C) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm4.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DDBA1; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000DDB9B: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_000DDBA1: ;
    esi = MEM32(esp + 0x64);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDBB1u); RECOMP_ABI_CALL(0x0002E862u, sub_0002E862); /* call 0x0002E862 */

loc_000DDBB1: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDBBDu); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000DDBBD: ;
    ecx = MEM32(0x8E8F84);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDBC8u); RECOMP_ABI_CALL(0x000364B3u, sub_000364B3); /* call 0x000364B3 */

loc_000DDBC8: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DDC4F; /* jl: less (signed <) */

loc_000DDBD5: ;
    eax = MEM32(eax * 4 + 0x8E8EB8);
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDBE8; /* je: equal / zero */

loc_000DDBE4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDC4F; /* jne: not equal / not zero */

loc_000DDBE8: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x70)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x20); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    ecx = MEM32(eax + 0x3C);
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x8E99EC); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm0 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DDC4F; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_000DDC45: ;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDC4Fu); RECOMP_ABI_CALL(0x00031FE4u, sub_00031FE4); /* call 0x00031FE4 */

loc_000DDC4F: ;
    ecx = esp + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DDC58u); RECOMP_ABI_CALL(0x00032F7Fu, sub_00032F7F); /* call 0x00032F7F */

loc_000DDC58: ;
    SET_LO8(eax, MEM8(esp + 0x17));

loc_000DDC5C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000DDDF0
 * Original: 0x000DDDF0 - 0x000DDFB8 (456 bytes, 117 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DDDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000DDDF0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDFB2; /* je: equal / zero */

loc_000DDE00: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDFB2; /* je: equal / zero */

loc_000DDE08: ;
    eax = MEM32(esp + 0x30);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x8E99B8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x6C); /* comiss */
    if ((_fca > _fcb)) goto loc_000DDFB2; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x6C)) */

loc_000DDE21: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8E99BC);
    PUSH32(esp, 0x623);
    PUSH32(esp, 0x7CA77C);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0x000DDE39u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000DDE39: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DDE47; /* jle: less or equal (signed <=) */

loc_000DDE40: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DDE47: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x7AD470)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x34); /* comiss */
    if ((_fca > _fcb)) goto loc_000DDE40; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(eax + 0x34)) */

loc_000DDE5E: ;
    PUSH32(esp, 0x000DDE63u); RECOMP_ABI_CALL(0x0002C643u, sub_0002C643); /* call 0x0002C643 */

loc_000DDE63: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DDE40; /* jne: not equal / not zero */

loc_000DDE67: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(0x8E8F84);
    xmm3 = XMM_SCALAR(MEMF(0x8E931C)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(eax + 0x20);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DDEA4; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm3.f[0]) */

loc_000DDE9C: ;
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    goto loc_000DDEB6;

loc_000DDEA4: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DDEB6; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000DDEB0: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000DDEB6: ;
    edx = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x89B084)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DDED9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000DDED1: ;
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    goto loc_000DDEE8;

loc_000DDED9: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DDEE8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000DDEE2: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */

loc_000DDEE8: ;
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    ecx = esp + 4;
    PUSH32(esp, ecx);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000DDF00u); RECOMP_ABI_CALL(0x0002AF5Fu, sub_0002AF5F); /* call 0x0002AF5F */

loc_000DDF00: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DDE40; /* je: equal / zero */

loc_000DDF0B: ;
    PUSH32(esp, 0x000DDF10u); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_000DDF10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DDF1D; /* jl: less (signed <) */

loc_000DDF14: ;
    esi = MEM32(eax * 4 + 0x8E8EB8);
    goto loc_000DDF1F;

loc_000DDF1D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000DDF1F: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x000DDF26u); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_000DDF26: ;
    ecx = eax;
    PUSH32(esp, 0x000DDF2Du); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_000DDF2D: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xE);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000DDF3Fu); RECOMP_ABI_CALL(0x0003168Eu, sub_0003168E); /* call 0x0003168E */

loc_000DDF3F: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x000DDF48u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DDF48: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000DDF57u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_000DDF57: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DDF70; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000DDF66: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AD354); /* addss */
    goto loc_000DDF78;

loc_000DDF70: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7AD354); /* subss */

loc_000DDF78: ;
    edx = MEM32(0x8E8F84);
    ecx = esp + 4;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 0x000DDF91u); RECOMP_ABI_CALL(0x0003525Cu, sub_0003525C); /* call 0x0003525C */

loc_000DDF91: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    PUSH32(esp, 0x000DDF9Eu); RECOMP_ABI_CALL(0x000253A7u, sub_000253A7); /* call 0x000253A7 */

loc_000DDF9E: ;
    ecx = MEM32(0x8E8F84);
    MEM32(ecx + 0x2C) = 0x3E8;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DDFB2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DE030
 * Original: 0x000DE030 - 0x000DE177 (327 bytes, 87 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE030: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x000DE044u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000DE044: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE079; /* jne: not equal / not zero */

loc_000DE048: ;
    eax = MEM32(ebx * 4 + 0x8E8FA8);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = 0x8F0044;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    ecx = (uint32_t)(int32_t)SMEM8(edx + 0xD2);
    edx = MEM32(eax + 0x8F0040);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0xD2);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = eax;

loc_000DE079: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x000DE080u); RECOMP_ABI_CALL(0x0002E678u, sub_0002E678); /* call 0x0002E678 */

loc_000DE080: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    eax = MEM32(ebx * 4 + 0x8E8FA8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE0C5; /* je: equal / zero */

loc_000DE0B9: ;
    eax = MEM32(eax + 0x44);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000DE0C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE0C0u); } /* indirect call */
    }

loc_000DE0C3: ;
    esi = eax;

loc_000DE0C5: ;
    ecx = MEM32(0x8EACE4);
    PUSH32(esp, 0x000DE0D0u); RECOMP_ABI_CALL(0x0002A181u, sub_0002A181); /* call 0x0002A181 */

loc_000DE0D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE0E5; /* je: equal / zero */

loc_000DE0D4: ;
    ecx = MEM32(0x8EACE4);
    PUSH32(esp, 0x000DE0DFu); RECOMP_ABI_CALL(0x0002A181u, sub_0002A181); /* call 0x0002A181 */

loc_000DE0DF: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000DE0E8;

loc_000DE0E5: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DE0E8: ;
    SET_LO8(eax, MEM8(esp + 0x35));
    SET_LO8(edx, MEM8(esp + 0x34));
    MEM8(esp + 0x36) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x4C));
    SET_LO8(ecx, LO8(ecx) ^ LO8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ebx, LO8(ebx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ebx, LO8(ebx) & 0x3F);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ebx, MEM8(esp + 0x50));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _sv=(uint32_t)(LO8(ecx)), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        SET_LO8(ecx, _sv << _sc);
        _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, LO8(ecx) ^ LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(edx, LO8(edx) & 0xBF);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ecx, LO8(ecx) & 0x40);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(eax, LO8(eax) ^ LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x10);
    MEM8(esp + 0x34) = LO8(edx);
    SET_LO8(edx, MEM8(esp + 8));
    MEM8(esp + 0x35) = LO8(eax);
    eax = MEM32(esp + 0xC);
    MEM8(esp + 0x37) = LO8(edx);
    edx = MEM32(esp + 0x14);
    MEM32(esp + 0x40) = ecx;
    ecx = esp + 0x18;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x20) = 0;
    MEM16(esp + 0x24) = 0x3A;
    MEM16(esp + 0x38) = LO16(esi);
    MEM32(esp + 0x18) = 0x7CA664;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x44) = edx;
    PUSH32(esp, 0x000DE171u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DE171: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DE1D0
 * Original: 0x000DE1D0 - 0x000DE232 (98 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE1D0: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(ecx + 0x39));
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    edx = MEM32(esp);
    MEM16(esp + 0x2C) = LO16(ecx);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = ecx;
    _fa = (uint32_t)(MEM8(0x896177)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x896177), LO8(eax) (8-bit) */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM16(esp + 0x14) = 0x10;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 8) = 0x7CA624;
    if (CMP_NE(_fa, _fb)) goto loc_000DE22E; /* jne: not equal / not zero */

loc_000DE225: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000DE22Eu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DE22E: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DE250
 * Original: 0x000DE250 - 0x000DE2B2 (98 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE250: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(ecx + 0x39));
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    edx = MEM32(esp);
    MEM16(esp + 0x2C) = LO16(ecx);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x28) = ecx;
    _fa = (uint32_t)(MEM8(0x896177)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x896177), LO8(eax) (8-bit) */
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = eax;
    MEM16(esp + 0x14) = 0x11;
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 8) = 0x7CA644;
    if (CMP_NE(_fa, _fb)) goto loc_000DE2AE; /* jne: not equal / not zero */

loc_000DE2A5: ;
    ecx = esp + 8;
    PUSH32(esp, 0x000DE2AEu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DE2AE: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DE2D0
 * Original: 0x000DE2D0 - 0x000DE345 (117 bytes, 30 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE2D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE2D0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DE2DF; /* je: equal / zero */

loc_000DE2D9: ;
    edi = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000DE2E2;

loc_000DE2DF: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000DE2E2: ;
    eax = MEM32(esp + 0x38);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    PUSH32(esp, 0x000DE2EFu); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000DE2EF: ;
    SET_LO16(ecx, MEM16(0x896166));
    SET_LO8(edx, MEM8(esp + 0x3C));
    MEM8(esp + 0x2E) = LO8(eax);
    eax = MEM32(esp + 0x40);
    MEM16(esp + 0x2C) = LO16(ecx);
    ecx = esp + 8;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM16(esp + 0x14) = 3;
    MEM32(esp + 8) = 0x7CA604;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x28) = edi;
    MEM8(esp + 0x2F) = LO8(edx);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x000DE33Fu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DE33F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DE370
 * Original: 0x000DE370 - 0x000DE64E (734 bytes, 182 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE370(void)
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

loc_000DE370: ;
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x60));
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    ebp = MEM32(edi + 0xA8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x28 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DE648; /* je: equal / zero */

loc_000DE386: ;
    eax = MEM32(edi + 0x1C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x20);
    ecx = eax;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x30)) >> 32) & 1);
    esi = esi + 0x30;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x44;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(esp + 0x24) = eax;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000DE3BAu); RECOMP_ABI_CALL(0x00024BF5u, sub_00024BF5); /* call 0x00024BF5 */

loc_000DE3BA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE646; /* je: equal / zero */

loc_000DE3C5: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DE3D0u); RECOMP_ABI_CALL(0x00019BE7u, sub_00019BE7); /* call 0x00019BE7 */

loc_000DE3D0: ;
    fp_push(MEMF(esi + 4)); /* fld float */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000DE3EB; /* jb: below (unsigned <) */

loc_000DE3DC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM8(edi + 0xBB) = 1;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x60)) >> 32) & 1);
    esp = esp + 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DE3EB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DE3F1u); RECOMP_ABI_CALL(0x000DDDF0u, sub_000DDDF0); /* call 0x000DDDF0 */

loc_000DE3F1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DE646; /* jne: not equal / not zero */

loc_000DE3FC: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x4C); /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x20);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x40) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x000DE43Bu); RECOMP_ABI_CALL(0x0003301Fu, sub_0003301F); /* call 0x0003301F */

loc_000DE43B: ;
    edx = MEM32(edi + 0x20);
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x48)) >> 32) & 1);
    edx = edx + 0x48;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx);
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(edx + 4);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x40); /* mulss */
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(edx + 8);
    MEM32(esp + 0x24) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x48); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DE646; /* jb: below (unsigned <) (xmm6.f[0] vs xmm0.f[0]) */

loc_000DE493: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000DE4C4; /* jge: greater or equal (signed >=) */

loc_000DE499: ;
    ecx = esp + 0x54;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = eax;
    MEM16(esp + 0x60) = 0x3D;
    MEM32(esp + 0x54) = 0x7CA724;
    PUSH32(esp, 0x000DE4B9u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DE4B9: ;
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    SET_LO8(ebx, 1);

loc_000DE4C4: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E99D4)); /* movss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7AA7DC); /* comiss */
    xmm7 = xmm6; /* movaps */
    xmm7.f[0] = xmm7.f[0] - MEMF(0x8E99C4); /* subss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DE547; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(0x7AA7DC)) */

loc_000DE4EB: ;
    xmm7.f[0] = xmm7.f[0] * MEMF(0x7ABD64); /* mulss */
    PUSH32(esp, 0x50C);
    PUSH32(esp, 0x7CA77C);
    PUSH32(esp, 0x64);
    MEMF(esp + 0x20) = xmm7.f[0]; /* movss */
    PUSH32(esp, 0x000DE50Au); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000DE50A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x5F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_000DE538; /* jle: less or equal (signed <=) */

loc_000DE512: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD378)); /* movss */
    ecx = MEM32(edi + 0x20);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7C40B8)); /* movss */
    PUSH32(esp, 2);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000DE538u); RECOMP_ABI_CALL(0x00025E1Au, sub_00025E1A); /* call 0x00025E1A */

loc_000DE538: ;
    xmm6 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_000DE547: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(0x8E99B4); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm7.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA7E8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 4); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x28);
    MEMF(esp + 0x2C) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEMF(esp + 0x30) = xmm5.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7A9EC0); /* mulss */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DE62A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DE61C: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7BA2C0); /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_000DE62A: ;
    ecx = MEM32(edi + 0x20);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000DE637u); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000DE637: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE646; /* je: equal / zero */

loc_000DE63B: ;
    ecx = MEM32(0x8EACE4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000DE646u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE643u); } /* indirect call */
    }

loc_000DE646: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000DE648: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x60)) >> 32) & 1);
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
 * sub_000DE710
 * Original: 0x000DE710 - 0x000DE8EE (478 bytes, 120 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_000DE710: ;
    eax = MEM32(esi + 0xF0);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DE8DC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DE72A: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A99C0)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(eax + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DE8DC; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs MEMF(eax + 0x1C)) */

loc_000DE73C: ;
    SET_LO8(eax, MEM8(0x89B069));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE8EA; /* je: equal / zero */

loc_000DE749: ;
    eax = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x50)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000DE766; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DE75E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000DE766: ;
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000DE772u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DE76Fu); } /* indirect call */
    }

loc_000DE772: ;
    eax = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca >= _fcb)) goto loc_000DE792; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DE78A: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_000DE792: ;
    xmm2 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000DE8EA; /* jp: parity */

loc_000DE7A4: ;
    eax = MEM32(0x8F0108);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000DE897; /* jne: not equal / not zero */

loc_000DE7B1: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DE897; /* jne: not equal / not zero */

loc_000DE7B9: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DE7D1; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DE7CC: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000DE7D6;

loc_000DE7D1: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */

loc_000DE7D6: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AF5A0)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DE8EA; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DE7E7: ;
    eax = MEM32(esi + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7CA7A0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DE872; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7CA7A0)) */

loc_000DE7FB: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C5650)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DE872; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x1C)) */

loc_000DE809: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    eax = MEM32(edx * 4 + 0x8F0040);
    edx = MEM32(eax + 0x138);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE8EA; /* je: equal / zero */

loc_000DE822: ;
    PUSH32(esp, 0x000DE827u); RECOMP_ABI_CALL(0x000121B2u, sub_000121B2); /* call 0x000121B2 */

loc_000DE827: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DE8EA; /* je: equal / zero */

loc_000DE830: ;
    ecx = MEM32(0x8E8F84);
    MEM32(ecx + 0x94) = 1;
    ecx = esi;
    PUSH32(esp, 0x000DE847u); RECOMP_ABI_CALL(0x000DE1D0u, sub_000DE1D0); /* call 0x000DE1D0 */

loc_000DE847: ;
    SET_LO8(eax, MEM8(0x896177));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DE867; /* jne: not equal / not zero */

loc_000DE850: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, 0x000DE85Eu); RECOMP_ABI_CALL(0x000286D3u, sub_000286D3); /* call 0x000286D3 */

loc_000DE85E: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000DE867u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DE867: ;
    MEM8(0x89B069) = 0;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DE872: ;
    SET_LO8(eax, MEM8(0x89B068));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DE8EA; /* je: equal / zero */

loc_000DE87B: ;
    PUSH32(esp, 0x000DE880u); RECOMP_ABI_CALL(0x000121B2u, sub_000121B2); /* call 0x000121B2 */

loc_000DE880: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000DE8EA; /* je: equal / zero */

loc_000DE885: ;
    ecx = esi;
    PUSH32(esp, 0x000DE88Cu); RECOMP_ABI_CALL(0x000DE250u, sub_000DE250); /* call 0x000DE250 */

loc_000DE88C: ;
    MEM8(0x89B068) = 0;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DE897: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x138);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000DE8EA; /* je: equal / zero */

loc_000DE8AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000DE8EA; /* jge: greater or equal (signed >=) */

loc_000DE8B2: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(eax), 3 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_000DE8EA; /* jge: greater or equal (signed >=) */

loc_000DE8B7: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, HI8(eax));
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x000DE8C8u); RECOMP_ABI_CALL(0x0002026Cu, sub_0002026C); /* call 0x0002026C */

loc_000DE8C8: ;
    ecx = esp + 4;
    PUSH32(esp, 0x000DE8D1u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DE8D1: ;
    MEM8(0x89B069) = 0;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DE8DC: ;
    MEM8(0x89B068) = 1;
    MEM8(0x89B069) = 1;

loc_000DE8EA: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DE970
 * Original: 0x000DE970 - 0x000DEA3A (202 bytes, 56 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DE970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DE970: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x28);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DE996; /* jne: not equal / not zero */

loc_000DE97C: ;
    eax = MEM32(0x8EACE4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEA35; /* je: equal / zero */

loc_000DE98C: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEA35; /* jne: not equal / not zero */

loc_000DE996: ;
    PUSH32(esp, 0x000DE99Bu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000DE99B: ;
    ecx = eax;
    PUSH32(esp, 0x000DE9A2u); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_000DE9A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEA35; /* jne: not equal / not zero */

loc_000DE9AA: ;
    eax = MEM32(esp + 0x2C);
    ecx = eax * 4;
    edx = 0x8F0044;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEA34; /* je: equal / zero */

loc_000DE9C6: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8F00FC;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000DE9DDu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000DE9DD: ;
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DE9E9u); RECOMP_ABI_CALL(0x000DE2D0u, sub_000DE2D0); /* call 0x000DE2D0 */

loc_000DE9E9: ;
    ecx = MEM32(0x8EACE4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DE9F7u); RECOMP_ABI_CALL(0x0003264Cu, sub_0003264C); /* call 0x0003264C */

loc_000DE9F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEA34; /* je: equal / zero */

loc_000DE9FB: ;
    edx = MEM32(0x8EACE4);
    eax = MEM32(edx + 0xC);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    ecx = esp + 8;
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 0x10) = 0;
    MEM16(esp + 0x14) = 0x25;
    MEM32(esp + 8) = 0x7CA6E4;
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x000DEA34u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DEA34: ;
    POP32(esp, esi);

loc_000DEA35: ;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DEA70
 * Original: 0x000DEA70 - 0x000DEB80 (272 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000DEA70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DEA7Au); RECOMP_ABI_CALL(0x00028A48u, sub_00028A48); /* call 0x00028A48 */

loc_000DEA7A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB7A; /* je: equal / zero */

loc_000DEA85: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEACC; /* jne: not equal / not zero */

loc_000DEA8B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, 0x41F00000);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000DEAB1u); RECOMP_ABI_CALL(0x00031DE6u, sub_00031DE6); /* call 0x00031DE6 */

loc_000DEAB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEAC6; /* je: equal / zero */

loc_000DEAB5: ;
    edx = (uint32_t)(int32_t)SMEM8(esi + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000DEAC3u); RECOMP_ABI_CALL(0x000263A1u, sub_000263A1); /* call 0x000263A1 */

loc_000DEAC3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DEAC6: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DEACC: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    xmm0 = XMM_SCALAR(MEMF(0x8E99F0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x6C); /* comiss */
    if ((_fca > _fcb)) goto loc_000DEAC6; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ecx + 0x6C)) */

loc_000DEAE2: ;
    ecx = esi;
    PUSH32(esp, 0x000DEAE9u); RECOMP_ABI_CALL(0x00031E5Eu, sub_00031E5E); /* call 0x00031E5E */

loc_000DEAE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEAC6; /* jne: not equal / not zero */

loc_000DEAED: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x8E99F4); /* comiss */
    PUSH32(esp, edi);
    edi = MEM32(0x8E9394);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DEB3C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x8E99F4)) */

loc_000DEB0B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB26; /* je: equal / zero */

loc_000DEB0F: ;
    ecx = edi;
    PUSH32(esp, 0x000DEB16u); RECOMP_ABI_CALL(0x00036DAFu, sub_00036DAF); /* call 0x00036DAF */

loc_000DEB16: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB35; /* je: equal / zero */

loc_000DEB1A: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000DEB22u); RECOMP_ABI_CALL(0x00011861u, sub_00011861); /* call 0x00011861 */

loc_000DEB22: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB35; /* je: equal / zero */

loc_000DEB26: ;
    ecx = MEM32(0x8EACE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000DEB35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DEB32u); } /* indirect call */
    }

loc_000DEB35: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DEB3C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB6A; /* je: equal / zero */

loc_000DEB40: ;
    ecx = edi;
    PUSH32(esp, 0x000DEB47u); RECOMP_ABI_CALL(0x00036DAFu, sub_00036DAF); /* call 0x00036DAF */

loc_000DEB47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEB6A; /* je: equal / zero */

loc_000DEB4B: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000DEB53u); RECOMP_ABI_CALL(0x00011861u, sub_00011861); /* call 0x00011861 */

loc_000DEB53: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEB6A; /* jne: not equal / not zero */

loc_000DEB57: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000DEB5Eu); RECOMP_ABI_CALL(0x00017C70u, sub_00017C70); /* call 0x00017C70 */

loc_000DEB5E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEB73; /* jne: not equal / not zero */

loc_000DEB65: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DEB6A: ;
    eax = MEM32(esi + 0xF0);
    SET_LO8(ecx, MEM8(eax + 0x53));

loc_000DEB73: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DEB7A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DEBD0
 * Original: 0x000DEBD0 - 0x000DEC6D (157 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DEBD0(void)
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

loc_000DEBD0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = 1;
    PUSH32(esp, 0x000DEBE1u); RECOMP_ABI_CALL(0x000DEA70u, sub_000DEA70); /* call 0x000DEA70 */

loc_000DEBE1: ;
    ecx = MEM32(esi + 0x28);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esp + 0xB) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000DEC04; /* jne: not equal / not zero */

loc_000DEBEE: ;
    ecx = MEM32(esi + 0x3D8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DEC04; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_000DEC02: ;
    SET_LO8(ebx, 1);

loc_000DEC04: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEC67; /* je: equal / zero */

loc_000DEC08: ;
    ecx = esi;
    PUSH32(esp, 0x000DEC0Fu); RECOMP_ABI_CALL(0x00031E5Eu, sub_00031E5E); /* call 0x00031E5E */

loc_000DEC0F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEC63; /* je: equal / zero */

loc_000DEC13: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DEC63; /* jne: not equal / not zero */

loc_000DEC17: ;
    eax = MEM32(esi + 0x3BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000DEC63; /* jge: greater or equal (signed >=) */

loc_000DEC21: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000DEC29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DEC26u); } /* indirect call */
    }

loc_000DEC29: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0xC); /* cvttss2si */
    MEM32(esi + 0x3BC) = eax;
    ecx = MEM32(esi + 0x248);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xE);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DEC63; /* jle: less or equal (signed <=) */

loc_000DEC47: ;
    ecx = esi;
    MEM32(esi + 0x3BC) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000DEC58u); RECOMP_ABI_CALL(0x0001AF38u, sub_0001AF38); /* call 0x0001AF38 */

loc_000DEC58: ;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DEC63: ;
    SET_LO8(eax, MEM8(esp + 0xB));

loc_000DEC67: ;
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_000DECA0
 * Original: 0x000DECA0 - 0x000DF12B (1163 bytes, 306 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000DECA0(void)
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

loc_000DECA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x74));
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = eax;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DECB5u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000DECB5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DECBCu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_000DECBC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF122; /* je: equal / zero */

loc_000DECC4: ;
    _fa = (uint32_t)(MEM8(esi + 0x42C)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x42C), 5 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000DF122; /* jne: not equal / not zero */

loc_000DECD1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DECF2u); RECOMP_ABI_CALL(0x000186D9u, sub_000186D9); /* call 0x000186D9 */

loc_000DECF2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF116; /* je: equal / zero */

loc_000DECFA: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0x20);
    edx = eax + 0x48;
    ecx = MEM32(edx);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm3 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esp + 0x48) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x4C) = edx;
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x68);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x64);
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x60);
    MEM32(esp + 0x58) = eax;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm2 = xmm6; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x40); /* subss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x54) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x3C); /* subss */
    MEM32(esp + 0x50) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x38); /* subss */
    MEMF(esp + 0x28) = xmm2.f[0]; /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm3.f[0]; /* movss */
    ecx = MEM32(esp + 0x6C);
    xmm1 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEM32(esp + 0x5C) = ecx;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x7B047C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DEF34; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x1C)) */

loc_000DEDFF: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    xmm0 = xmm3; /* movaps */
    if ((_fca >= _fcb)) goto loc_000DEE1B; /* jae: above or equal (unsigned >=) (xmm4.f[0] vs xmm5.f[0]) */

loc_000DEE18: ;
    xmm0 = xmm1; /* movaps */

loc_000DEE1B: ;
    _fca = xmm6.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000DEE23; /* jae: above or equal (unsigned >=) (xmm6.f[0] vs xmm5.f[0]) */

loc_000DEE20: ;
    xmm3 = xmm1; /* movaps */

loc_000DEE23: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ecx, 1);
    MEM8(esp + 0x14) = LO8(ecx);
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000DEE37; /* jp: parity */

loc_000DEE32: ;
    MEM8(esp + 0x14) = 0;

loc_000DEE37: ;
    _fca = xmm4.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DEE41; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm5.f[0]) */

loc_000DEE3C: ;
    xmm2 = xmm4; /* movaps */
    goto loc_000DEE48;

loc_000DEE41: ;
    xmm2 = xmm5; /* movaps */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */

loc_000DEE48: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x44)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DEE58; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm5.f[0]) */

loc_000DEE53: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000DEE5F;

loc_000DEE58: ;
    xmm0 = xmm5; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000DEE5F: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7ABD64); /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEM8(esp + 0x15) = LO8(ecx);
    if ((_fca > _fcb)) goto loc_000DEE75; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_000DEE70: ;
    MEM8(esp + 0x15) = 0;

loc_000DEE75: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm1 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = MEMF(0x7BA41C); /* comiss */
    MEM8(esp + 0x17) = LO8(ecx);
    if ((_fca > _fcb)) goto loc_000DEEBD; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(0x7BA41C)) */

loc_000DEEB8: ;
    MEM8(esp + 0x17) = 0;

loc_000DEEBD: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AD42C); /* comiss */
    MEM8(esp + 0x16) = LO8(ecx);
    if ((_fca > _fcb)) goto loc_000DEEE5; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AD42C)) */

loc_000DEEE0: ;
    MEM8(esp + 0x16) = 0;

loc_000DEEE5: ;
    PUSH32(esp, 0x41F00000);
    edx = esp + 0x48;
    PUSH32(esp, edx);
    ecx = esi;
    MEMF(esp + 0x4C) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm5.f[0]; /* movss */
    MEMF(esp + 0x54) = xmm5.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DEF08u); RECOMP_ABI_CALL(0x00031DE6u, sub_00031DE6); /* call 0x00031DE6 */

loc_000DEF08: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DEF34; /* jne: not equal / not zero */

loc_000DEF0C: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DEF1C; /* jne: not equal / not zero */

loc_000DEF14: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DEF28; /* je: equal / zero */

loc_000DEF1C: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DF122; /* jne: not equal / not zero */

loc_000DEF28: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000DF122; /* jne: not equal / not zero */

loc_000DEF34: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DEF3Bu); RECOMP_ABI_CALL(0x000DEA70u, sub_000DEA70); /* call 0x000DEA70 */

loc_000DEF3B: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF122; /* je: equal / zero */

loc_000DEF45: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x48)) >> 32) & 1);
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DEF55u); RECOMP_ABI_CALL(0x0002F67Cu, sub_0002F67C); /* call 0x0002F67C */

loc_000DEF55: ;
    fp_push(MEMF(0x7CA7A8)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DF122; /* jbe: below or equal (unsigned <=) */

loc_000DEF67: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esi);
    edi = MEM32(esi + 0x20);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x64) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = esi;
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x000DEF94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DEF91u); } /* indirect call */
    }

loc_000DEF94: ;
    PUSH32(esp, eax);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DEFA3u); RECOMP_ABI_CALL(0x0001AD35u, sub_0001AD35); /* call 0x0001AD35 */

loc_000DEFA3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x38); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x50); /* subss */
    MEMF(esp + 0x70) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x64)); /* movss */
    ecx = MEM32(esp + 0x70);
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x3C); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x54); /* subss */
    MEMF(esp + 0x74) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x68)); /* movss */
    edx = MEM32(esp + 0x74);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] - MEMF(esp + 0x40); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x58); /* subss */
    MEMF(esp + 0x78) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x78);
    MEM32(esp + 0x44) = ecx;
    ecx = MEM32(esp + 0x70);
    MEMF(esp + 0x70) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x48) = edx;
    MEMF(esp + 0x74) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x74);
    MEM32(esp + 0x4C) = eax;
    MEMF(esp + 0x78) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x78);
    MEMF(esp + 0x74) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x78) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB7D0); /* comiss */
    MEM32(esp + 0x38) = ecx;
    ecx = MEM32(esp + 0x70);
    MEM32(esp + 0x3C) = edx;
    edx = MEM32(esp + 0x74);
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x78);
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = edx;
    MEM32(esp + 0x58) = eax;
    if ((_fca > _fcb)) goto loc_000DF0E9; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AB7D0)) */

loc_000DF081: ;
    xmm1 = XMM_SCALAR(MEMF(0x7CA7A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000DF0E9; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DF08E: ;
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DF097u); RECOMP_ABI_CALL(0x0001B2A3u, sub_0001B2A3); /* call 0x0001B2A3 */

loc_000DF097: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DF0A4u); RECOMP_ABI_CALL(0x0001B2A3u, sub_0001B2A3); /* call 0x0001B2A3 */

loc_000DF0A4: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DF0F4; /* jbe: below or equal (unsigned <=) */

loc_000DF0B0: ;
    ecx = esp + 0x50;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DF0B9u); RECOMP_ABI_CALL(0x0001B2A3u, sub_0001B2A3); /* call 0x0001B2A3 */

loc_000DF0B9: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DF0C6u); RECOMP_ABI_CALL(0x0001B2A3u, sub_0001B2A3); /* call 0x0001B2A3 */

loc_000DF0C6: ;
    fp_push(MEMF(esp + 0x28)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DF0F4; /* jbe: below or equal (unsigned <=) */

loc_000DF0D2: ;
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DF0DBu); RECOMP_ABI_CALL(0x0002F67Cu, sub_0002F67C); /* call 0x0002F67C */

loc_000DF0DB: ;
    fp_push(MEMF(0x7ABD78)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DF122; /* jbe: below or equal (unsigned <=) */

loc_000DF0E9: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DF0F4: ;
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DF0FDu); RECOMP_ABI_CALL(0x0002F67Cu, sub_0002F67C); /* call 0x0002F67C */

loc_000DF0FD: ;
    fp_push(MEMF(0x7AB7D0)); /* fld float */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DF122; /* jbe: below or equal (unsigned <=) */

loc_000DF10B: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(ebx));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_000DF116: ;
    eax = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000DF120u); RECOMP_ABI_CALL(0x000DEA70u, sub_000DEA70); /* call 0x000DEA70 */

loc_000DF120: ;
    SET_LO8(ebx, LO8(eax));

loc_000DF122: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
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
 * sub_000DF250
 * Original: 0x000DF250 - 0x000DF5E3 (915 bytes, 250 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF250(void)
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

loc_000DF250: ;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x60);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi + 8);
    eax = MEM32(esi + 0x44);
    SET_LO8(ecx, MEM8(eax + 5));
    edx = esi + 0x58;
    eax = MEM32(edx);
    MEM8(esp + 0x14) = LO8(ecx);
    ecx = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM8(esp + 0x13) = LO8(ebx);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = ecx;
    MEM32(esp + 0x40) = edx;
    MEM16(esp + 0x50) = 9;
    MEM16(esp + 0x52) = 0x1A;
    MEM16(esp + 0x54) = 0x1B;
    MEM16(esp + 0x56) = 0x1C;
    MEM16(esp + 0x58) = 0x12;
    MEM16(esp + 0x5A) = 0x13;
    MEM16(esp + 0x5C) = 0x14;
    MEM16(esp + 0x5E) = 0x15;
    MEM16(esp + 0x60) = 4;
    MEM16(esp + 0x62) = 0x1E;
    if (CMP_EQ(_fa, _fb)) goto loc_000DF314; /* je: equal / zero */

loc_000DF2D1: ;
    eax = MEM32(esi + 0x44);
    ecx = ZX8(MEM8(eax + 5));
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DF2E3u); RECOMP_ABI_CALL(0x0001F371u, sub_0001F371); /* call 0x0001F371 */

loc_000DF2E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF2F3; /* jne: not equal / not zero */

loc_000DF2EA: ;
    esi = MEM32(esi + 0x38);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF2D1; /* jne: not equal / not zero */

loc_000DF2F1: ;
    goto loc_000DF314;

loc_000DF2F3: ;
    eax = MEM32(esi + 0x44);
    SET_LO8(ecx, MEM8(eax + 5));
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi);
    eax = MEM32(esi + 4);
    MEM8(esp + 0x14) = LO8(ecx);
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = ecx;

loc_000DF314: ;
    edx = esp + 0x68;
    PUSH32(esp, edx);
    ecx = edi;
    MEM8(esp + 0x6C) = 0;
    PUSH32(esp, 0x000DF325u); RECOMP_ABI_CALL(0x00019DCCu, sub_00019DCC); /* call 0x00019DCC */

loc_000DF325: ;
    eax = edi + 0x2C;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x28) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x14;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(edi);
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(edi + 4);
    eax = MEM32(edi + 8);
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    SET_LO8(eax, MEM8(esp + 0x68));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(0x896158);
    MEM32(ebp + 0x428) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000DF3F2; /* jne: not equal / not zero */

loc_000DF395: ;
    esi = MEM32(esp + 0x14);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x000DF3ABu); RECOMP_ABI_CALL(0x00020EECu, sub_00020EEC); /* call 0x00020EEC */

loc_000DF3AB: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF4AC; /* jne: not equal / not zero */

loc_000DF3B5: ;
    ecx = ebp;
    PUSH32(esp, 0x000DF3BCu); RECOMP_ABI_CALL(0x00025E15u, sub_00025E15); /* call 0x00025E15 */

loc_000DF3BC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF3F2; /* jne: not equal / not zero */

loc_000DF3C0: ;
    eax = MEM32(esp + 0x2C);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x44);
    MEM32(edx + 4) = ecx;
    PUSH32(esp, esi);
    ecx = ebp;
    MEM32(edx + 8) = eax;
    PUSH32(esp, 0x000DF3E6u); RECOMP_ABI_CALL(0x0001DC06u, sub_0001DC06); /* call 0x0001DC06 */

loc_000DF3E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x13) = LO8(eax);
    if (CMP_NE(_fa, _fb)) goto loc_000DF4AC; /* jne: not equal / not zero */

loc_000DF3F2: ;
    xmm5 = XMM_SCALAR(MEMF(0x7AB82C)); /* movss */
    _fca = xmm5.f[0]; _fcb = MEMF(esp + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DF4AC; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs MEMF(esp + 0x1C)) */

loc_000DF405: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x38)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x20); /* addss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DF443; /* jb: below (unsigned <) (xmm0.f[0] vs xmm4.f[0]) */

loc_000DF43E: ;
    xmm3 = xmm0; /* movaps */
    goto loc_000DF44A;

loc_000DF443: ;
    xmm3 = xmm4; /* movaps */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */

loc_000DF44A: ;
    xmm6 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    _fca = xmm6.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DF47C; /* jbe: below or equal (unsigned <=) (xmm6.f[0] vs xmm3.f[0]) */

loc_000DF457: ;
    _fca = xmm0.f[0]; _fcb = xmm4.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(0x7ABE28)); /* movss */
    if ((_fca >= _fcb)) goto loc_000DF46C; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm4.f[0]) */

loc_000DF464: ;
    xmm3 = XMM_SCALAR(MEMF(0x7A9EC0)); /* movss */

loc_000DF46C: ;
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x28); /* addss */
    MEMF(esp + 0x28) = xmm3.f[0]; /* movss */

loc_000DF47C: ;
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x2C); /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x30); /* addss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */

loc_000DF4AC: ;
    eax = MEM32(0x8EACE4);
    SET_LO8(ecx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF4BE; /* je: equal / zero */

loc_000DF4B8: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF4C6; /* je: equal / zero */

loc_000DF4BE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF570; /* je: equal / zero */

loc_000DF4C6: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebp + 0x30);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000DF4D4u); RECOMP_ABI_CALL(0x000263A1u, sub_000263A1); /* call 0x000263A1 */

loc_000DF4D4: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x38;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x48;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DF4ECu); RECOMP_ABI_CALL(0x0001262Bu, sub_0001262B); /* call 0x0001262B */

loc_000DF4EC: ;
    ecx = esp + 0x44;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    esi = eax;
    PUSH32(esp, 0x000DF4FCu); RECOMP_ABI_CALL(0x0001262Bu, sub_0001262B); /* call 0x0001262B */

loc_000DF4FC: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AD410); /* comiss */
    if ((_fca > _fcb)) goto loc_000DF558; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AD410)) */

loc_000DF554: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF570; /* je: equal / zero */

loc_000DF558: ;
    eax = ZX8(MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x39);
    PUSH32(esp, 0x000DF56Du); RECOMP_ABI_CALL(0x000DE030u, sub_000DE030); /* call 0x000DE030 */

loc_000DF56D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF570: ;
    ecx = MEM32(0x8E8F84);
    esi = MEM32(ecx + 0x20);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000DF585u); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000DF585: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000DF591u); RECOMP_ABI_CALL(0x0002E862u, sub_0002E862); /* call 0x0002E862 */

loc_000DF591: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0x000DF59Cu); RECOMP_ABI_CALL(0x000364B3u, sub_000364B3); /* call 0x000364B3 */

loc_000DF59C: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF5BA; /* jne: not equal / not zero */

loc_000DF5A4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF5BA; /* jne: not equal / not zero */

loc_000DF5A8: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x000DF5B1u); RECOMP_ABI_CALL(0x00025E1Au, sub_00025E1A); /* call 0x00025E1A */

loc_000DF5B1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000DF5B7u); RECOMP_ABI_CALL(0x0002F483u, sub_0002F483); /* call 0x0002F483 */

loc_000DF5B7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF5BA: ;
    ecx = MEM32(0x8E9380);
    MEM8(ecx + 1) = 0;
    edx = MEM32(0x8E9380);
    eax = (uint32_t)(int32_t)SMEM8(edx);
    ecx = MEM32(eax * 4 + 0x8F0040);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ecx + 0x158) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DF6D0
 * Original: 0x000DF6D0 - 0x000DF83A (362 bytes, 94 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000DF6D0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000DF6D8u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000DF6D8: ;
    ecx = eax;
    PUSH32(esp, 0x000DF6DFu); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_000DF6DF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF836; /* jne: not equal / not zero */

loc_000DF6E7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x34);
    eax = MEM32(esi + 0xA8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DF70B; /* jl: less (signed <) */

loc_000DF6F9: ;
    esi = MEM32(eax * 4 + 0x8E8EB8);
    PUSH32(esp, 0x000DF705u); RECOMP_ABI_CALL(0x000DE710u, sub_000DE710); /* call 0x000DE710 */

loc_000DF705: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DF70B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF737; /* jne: not equal / not zero */

loc_000DF710: ;
    ecx = MEM32(0x8EACE0);
    PUSH32(esp, 0x000DF71Bu); RECOMP_ABI_CALL(0x0002E86Cu, sub_0002E86C); /* call 0x0002E86C */

loc_000DF71B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF737; /* je: equal / zero */

loc_000DF71F: ;
    ecx = MEM32(0x8EACE0);
    PUSH32(esp, 0x000DF72Au); RECOMP_ABI_CALL(0x0001734Cu, sub_0001734C); /* call 0x0001734C */

loc_000DF72A: ;
    esi = eax;
    PUSH32(esp, 0x000DF731u); RECOMP_ABI_CALL(0x000DE710u, sub_000DE710); /* call 0x000DE710 */

loc_000DF731: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000DF737: ;
    ecx = MEM32(0x8EACE4);
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF834; /* je: equal / zero */

loc_000DF746: ;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x24), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF834; /* jne: not equal / not zero */

loc_000DF750: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x44)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000DF76Eu); RECOMP_ABI_CALL(0x0002A181u, sub_0002A181); /* call 0x0002A181 */

loc_000DF76E: ;
    _fa = (uint32_t)(MEM8(eax + 0x64)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x64), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF787; /* jne: not equal / not zero */

loc_000DF773: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xC); /* subss */
    goto loc_000DF793;

loc_000DF787: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_000DF793: ;
    xmm2 = XMM_SCALAR(MEMF(0x7CA500)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DF834; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000DF7A4: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DF834; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000DF7AD: ;
    ecx = MEM32(0x8EACE4);
    PUSH32(esp, 0x000DF7B8u); RECOMP_ABI_CALL(0x0002A181u, sub_0002A181); /* call 0x0002A181 */

loc_000DF7B8: ;
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B1DA0); /* comiss */
    if ((_fca >= _fcb)) goto loc_000DF804; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7B1DA0)) */

loc_000DF7C9: ;
    xmm0 = XMM_SCALAR(MEMF(0x7CA7AC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x30); /* comiss */
    if ((_fca >= _fcb)) goto loc_000DF804; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ecx + 0x30)) */

loc_000DF7D7: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7B43F0); /* comiss */
    if ((_fca >= _fcb)) goto loc_000DF7F3; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(0x7B43F0)) */

loc_000DF7E5: ;
    xmm0 = XMM_SCALAR(MEMF(0x7B43F4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x30); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DF834; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 0x30)) */

loc_000DF7F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF834; /* je: equal / zero */

loc_000DF7F7: ;
    SET_LO8(eax, MEM8(eax + 0x39));
    MEM8(esp + 0x2C) = LO8(eax);
    MEM8(esp + 0x2D) = LO8(ebx);
    goto loc_000DF814;

loc_000DF804: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF834; /* je: equal / zero */

loc_000DF808: ;
    SET_LO8(ecx, MEM8(eax + 0x39));
    MEM8(esp + 0x2C) = LO8(ecx);
    MEM8(esp + 0x2D) = 1;

loc_000DF814: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x10) = 0x7CA684;
    MEM16(esp + 0x1C) = 0x40;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x000DF834u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DF834: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000DF836: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DF8A0
 * Original: 0x000DF8A0 - 0x000DF93E (158 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF8A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 1;
    /* nop */

loc_000DF8B0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF939; /* jne: not equal / not zero */

loc_000DF8B8: ;
    eax = MEM32(edi + 0x8F0040);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DF8CBu); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000DF8CB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF92D; /* je: equal / zero */

loc_000DF8D1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF92D; /* jne: not equal / not zero */

loc_000DF8D5: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E99D8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7D0); /* mulss */
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000DF8F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DF8EFu); } /* indirect call */
    }

loc_000DF8F2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF91A; /* je: equal / zero */

loc_000DF8F6: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), ebp (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000DF904; /* jne: not equal / not zero */

loc_000DF8FD: ;
    PUSH32(esp, 0x000DF902u); RECOMP_ABI_CALL(0x000DECA0u, sub_000DECA0); /* call 0x000DECA0 */

loc_000DF902: ;
    goto loc_000DF909;

loc_000DF904: ;
    PUSH32(esp, 0x000DF909u); RECOMP_ABI_CALL(0x000DEBD0u, sub_000DEBD0); /* call 0x000DEBD0 */

loc_000DF909: ;
    SET_LO8(ebx, LO8(eax));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF91A; /* je: equal / zero */

loc_000DF90F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DF915u); RECOMP_ABI_CALL(0x0001B41Au, sub_0001B41A); /* call 0x0001B41A */

loc_000DF915: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, LO8(eax));

loc_000DF91A: ;
    PUSH32(esp, 0);
    ecx = esi + 0x200;
    PUSH32(esp, 0x000DF927u); RECOMP_ABI_CALL(0x0002A76Cu, sub_0002A76C); /* call 0x0002A76C */

loc_000DF927: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF8D1; /* jne: not equal / not zero */

loc_000DF92D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DF8B0; /* jl: less (signed <) */

loc_000DF939: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000DF970
 * Original: 0x000DF970 - 0x000DFB58 (488 bytes, 134 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DF970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000DF970: ;
    eax = MEM32(0x8E8F84);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0xA8);
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x84);
    eax = MEM32(esi + 0x28);
    ecx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFA0A; /* jne: not equal / not zero */

loc_000DF996: ;
    _fa = (uint32_t)(MEM8(esi + 0x42C)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x42C), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000DFA0A; /* jne: not equal / not zero */

loc_000DF99F: ;
    edi = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    PUSH32(esp, 0x000DF9A8u); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_000DF9A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DF9B7; /* jne: not equal / not zero */

loc_000DF9AC: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFB40; /* jne: not equal / not zero */

loc_000DF9B7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(esi + 0x2C) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_000DFB40; /* jge: greater or equal (signed >=) */

loc_000DF9C6: ;
    MEM8(esi + 0x448) = 1;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0x84);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DF9DEu); RECOMP_ABI_CALL(0x000DF250u, sub_000DF250); /* call 0x000DF250 */

loc_000DF9DE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000DF9E6u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000DF9E6: ;
    ecx = eax;
    PUSH32(esp, 0x000DF9EDu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_000DF9ED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DF9FA; /* je: equal / zero */

loc_000DF9F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DF9F7u); RECOMP_ABI_CALL(0x00033A2Eu, sub_00033A2E); /* call 0x00033A2E */

loc_000DF9F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DF9FA: ;
    ecx = MEM32(0x8EACE4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000DFA05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DFA02u); } /* indirect call */
    }

loc_000DFA05: ;
    goto loc_000DFB31;

loc_000DFA0A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DFA1F; /* jl: less (signed <) */

loc_000DFA0E: ;
    PUSH32(esp, 0xC);
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x000DFA1Au); RECOMP_ABI_CALL(0x00026DE7u, sub_00026DE7); /* call 0x00026DE7 */

loc_000DFA1A: ;
    goto loc_000DFB40;

loc_000DFA1F: ;
    edx = MEM32(edi + 8);
    eax = MEM32(edx + 0x44);
    SET_LO8(edx, MEM8(eax + 5));
    eax = MEM32(0x8EACE4);
    MEM8(esp + 0xE) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 4));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFAB1; /* je: equal / zero */

loc_000DFA38: ;
    _fa = (uint32_t)(MEM32(eax + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x24), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFAB1; /* jne: not equal / not zero */

loc_000DFA3D: ;
    PUSH32(esp, 0x000DFA42u); RECOMP_ABI_CALL(0x000371BAu, sub_000371BA); /* call 0x000371BA */

loc_000DFA42: ;
    ecx = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    eax = MEM32(eax * 4 + 0x8E9058);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2C) = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x18) = ebx;
    MEM16(esp + 0x1C) = 0x14;
    MEM32(esp + 0x10) = 0x7C1984;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x000DFA7Bu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DFA7B: ;
    ecx = MEM32(0x8EACE4);
    PUSH32(esp, 0x000DFA86u); RECOMP_ABI_CALL(0x0002A181u, sub_0002A181); /* call 0x0002A181 */

loc_000DFA86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFA97; /* je: equal / zero */

loc_000DFA8A: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000DFA94u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_000DFA94: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000DFA97: ;
    eax = ZX8(MEM8(esp + 0xE));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DFAA3u); RECOMP_ABI_CALL(0x000213ECu, sub_000213EC); /* call 0x000213EC */

loc_000DFAA3: ;
    ecx = MEM32(0x8EACE4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000DFAB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DFAAEu); } /* indirect call */
    }

loc_000DFAB1: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000DFAB9u); RECOMP_ABI_CALL(0x00021158u, sub_00021158); /* call 0x00021158 */

loc_000DFAB9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xF;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000DFAC8u); RECOMP_ABI_CALL(0x00019DCCu, sub_00019DCC); /* call 0x00019DCC */

loc_000DFAC8: ;
    ecx = edi + 0x14;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x000DFAD3u); RECOMP_ABI_CALL(0x0002E862u, sub_0002E862); /* call 0x0002E862 */

loc_000DFAD3: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x2C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000DFADEu); RECOMP_ABI_CALL(0x0001402Au, sub_0001402A); /* call 0x0001402A */

loc_000DFADE: ;
    edx = MEM32(0x8E8F84);
    ecx = MEM32(edx + 0x20);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000DFAEEu); RECOMP_ABI_CALL(0x00025E1Au, sub_00025E1A); /* call 0x00025E1A */

loc_000DFAEE: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0x000DFAF9u); RECOMP_ABI_CALL(0x000364B3u, sub_000364B3); /* call 0x000364B3 */

loc_000DFAF9: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFB05; /* je: equal / zero */

loc_000DFB01: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFB31; /* jne: not equal / not zero */

loc_000DFB05: ;
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x18) = 0;
    MEM16(esp + 0x1C) = 0x3E;
    MEM32(esp + 0x2C) = esi;
    MEM32(esp + 0x10) = 0x7CA744;
    PUSH32(esp, 0x000DFB31u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000DFB31: ;
    ecx = MEM32(0x8EACE0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x000DFB40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DFB3Du); } /* indirect call */
    }

loc_000DFB40: ;
    ecx = MEM32(0x8E8F84);
    ecx = MEM32(ecx + 0x84);
    PUSH32(esp, 0x000DFB51u); RECOMP_ABI_CALL(0x00026A7Cu, sub_00026A7C); /* call 0x00026A7C */

loc_000DFB51: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000DFBE0
 * Original: 0x000DFBE0 - 0x000DFD19 (313 bytes, 91 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFBE0(void)
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

loc_000DFBE0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = 0x8E9100;
    MEM32(esp + 0x14) = 2;
    PUSH32(esp, edi);
    goto loc_000DFC00;

    /* nop */
    /* nop */

loc_000DFC00: ;
    edi = eax;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = 0x14;
    edi = edi;

loc_000DFC10: ;
    esi = MEM32(edi);
    SET_LO8(eax, MEM8(esi + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000DFCEA; /* jne: not equal / not zero */

loc_000DFC1D: ;
    eax = MEM32(esi + 0x54);
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFCEA; /* je: equal / zero */

loc_000DFC2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFCEA; /* je: equal / zero */

loc_000DFC35: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000DFC3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000DFC39u); } /* indirect call */
    }

loc_000DFC3C: ;
    fp_push(MEMF(0x7A99C0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000DFCEA; /* jbe: below or equal (unsigned <=) */

loc_000DFC4C: ;
    eax = MEM32(esi + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ebx, 1);
    if (CMP_EQ(_fa, _fb)) goto loc_000DFC66; /* je: equal / zero */

loc_000DFC58: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000DFC64; /* jl: less (signed <) */

loc_000DFC5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000DFC66; /* jle: less or equal (signed <=) */

loc_000DFC64: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000DFC66: ;
    eax = MEM32(0x8E8F84);
    ebp = MEM32(eax + 0x84);
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 1 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0xF0)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000DFCA0; /* jne: not equal / not zero */

loc_000DFC85: ;
    ecx = esi;
    PUSH32(esp, 0x000DFC8Cu); RECOMP_ABI_CALL(0x00025E15u, sub_00025E15); /* call 0x00025E15 */

loc_000DFC8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFCA0; /* je: equal / zero */

loc_000DFC90: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB1C8)); /* movss */
    MEMF(ebp + 0xF0) = xmm0.f[0]; /* movss */

loc_000DFCA0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFCD8; /* je: equal / zero */

loc_000DFCA4: ;
    eax = MEM32(0x8E8F84);
    edi = MEM32(eax + 0x84);
    eax = MEM32(eax + 0x20);
    ecx = eax + 0x30;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000DFCC1u); RECOMP_ABI_CALL(0x0001B0C3u, sub_0001B0C3); /* call 0x0001B0C3 */

loc_000DFCC1: ;
    eax = MEM32(esi + 0x240);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x000DFCCFu); RECOMP_ABI_CALL(0x000118EDu, sub_000118ED); /* call 0x000118ED */

loc_000DFCCF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000DFCD8; /* je: equal / zero */

loc_000DFCD3: ;
    PUSH32(esp, 0x000DFCD8u); RECOMP_ABI_CALL(0x000DF970u, sub_000DF970); /* call 0x000DF970 */

loc_000DFCD8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    edi = MEM32(esp + 0x10);
    MEMF(ebp + 0xF0) = xmm0.f[0]; /* movss */

loc_000DFCEA: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_000DFC10; /* jne: not equal / not zero */

loc_000DFD00: ;
    ecx = MEM32(esp + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edi;
    MEM32(esp + 0x18) = ecx;
    if ((_fa != 0)) goto loc_000DFC00; /* jne: not equal / not zero */

loc_000DFD11: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DFD70
 * Original: 0x000DFD70 - 0x000DFDA7 (55 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFD70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DFD70: ;
    eax = ZX16(MEM16(0x89615C));
    ecx = (uint32_t)(int32_t)SMEM16(0x89615E);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xBB40E62Du);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x19D30000);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x89615C) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = ZX16(LO16(eax));
    eax = (uint32_t)(int32_t)SMEM16(esp + 4);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = SX16(LO16(edx));
    esp += 4; return; /* ret */

}

/**
 * sub_000DFDC0
 * Original: 0x000DFDC0 - 0x000DFE7C (188 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000DFDC0: ;
    eax = ZX16(MEM16(0x89615C));
    ecx = (uint32_t)(int32_t)SMEM16(0x89615E);
    eax = (uint32_t)((int32_t)eax * (int32_t)0xBB40E62Du);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x19D30000);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = eax;
    eax = ZX16(LO16(ecx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xBB40E62Du);
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x19D30000);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    PUSH32(esp, esi);
    eax = ZX16(LO16(edx));
    eax = (uint32_t)((int32_t)eax * (int32_t)0xBB40E62Du);
    esi = edx;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x19D30000);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = eax;
    PUSH32(esp, edi);
    eax = ZX16(LO16(esi));
    edi = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xBB40E62Du);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x19D30000);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(int32_t)SMEM16(esp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x89615C) = eax;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = ZX16(LO16(eax));
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = ZX16(LO16(esi));
    edx = ZX16(LO16(edx));
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    edx = (uint32_t)((int32_t)edx * (int32_t)edi);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ZX16(LO16(ecx));
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = SX16(LO16(eax));
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = SX16(LO16(esi));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = SX16(LO16(edx));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x10) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = SX16(LO16(ecx));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000DFEB0
 * Original: 0x000DFEB0 - 0x000DFEEA (58 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFEB0(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000DFEB0: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CB090); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7CB08C)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000DFEE6; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DFED9: ;
    xmm1 = XMM_SCALAR(MEMF(0x7CB088)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DFEE9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000DFEE6: ;
    xmm0 = xmm1; /* movaps */

loc_000DFEE9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000DFF00
 * Original: 0x000DFF00 - 0x000DFF72 (114 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFF00(void)
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

loc_000DFF00: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    edx = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 0x14);
    xmm1 = XMM_SCALAR(MEMF(0x7CB08C)); /* movss */
    PUSH32(esp, esi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CB094); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    if ((_fca > _fcb)) goto loc_000DFF67; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DFF5A: ;
    xmm1 = XMM_SCALAR(MEMF(0x7CB088)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DFF6D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000DFF67: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000DFF6D: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DFF90
 * Original: 0x000DFF90 - 0x000DFFEE (94 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFF90(void)
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

loc_000DFF90: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0xC);
    xmm1 = XMM_SCALAR(MEMF(0x7CB08C)); /* movss */
    ecx = eax;
    edx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + ecx * 2;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CB090); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000DFFE3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DFFD6: ;
    xmm1 = XMM_SCALAR(MEMF(0x7CB088)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DFFE9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000DFFE3: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000DFFE9: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000DFFBB
 * Original: 0x000DFFBB - 0x000DFFEE (51 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000DFFBB(void)
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

loc_000DFFBB: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CB090); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000DFFE3; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000DFFD6: ;
    xmm1 = XMM_SCALAR(MEMF(0x7CB088)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000DFFE9; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000DFFE3: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000DFFE9: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E0000
 * Original: 0x000E0000 - 0x000E0010 (16 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0000(void)
{

loc_000E0000: ;
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

}

/**
 * sub_000E0003
 * Original: 0x000E0003 - 0x000E0010 (13 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0003(void)
{

loc_000E0003: ;
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

}

/**
 * sub_000E0008
 * Original: 0x000E0008 - 0x000E0010 (8 bytes, 8 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0008(void)
{

loc_000E0008: ;
    (void)0;
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
 * sub_000E000C
 * Original: 0x000E000C - 0x000E0010 (4 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E000C(void)
{

loc_000E000C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000E000D
 * Original: 0x000E000D - 0x000E0010 (3 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E000D(void)
{

loc_000E000D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000E000E
 * Original: 0x000E000E - 0x000E0010 (2 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E000E(void)
{

loc_000E000E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000E000F
 * Original: 0x000E000F - 0x000E0010 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E000F(void)
{

loc_000E000F: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000E0010
 * Original: 0x000E0010 - 0x000E0084 (116 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0010(void)
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

loc_000E0010: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 8);
    eax = MEM32(esi + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(esi + 0xF));
    xmm1 = XMM_SCALAR(MEMF(0x7CB08C)); /* movss */
    esi = eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ecx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CB098); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    if ((_fca > _fcb)) goto loc_000E0079; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E006C: ;
    xmm1 = XMM_SCALAR(MEMF(0x7CB088)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E007F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000E0079: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000E007F: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E00B0
 * Original: 0x000E00B0 - 0x000E0121 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E00B0(void)
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

loc_000E00B0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    xmm1 = XMM_SCALAR(MEMF(0x7CB08C)); /* movss */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + 0x13));
    PUSH32(esp, esi);
    esi = eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    ecx = MEM32(ecx + 0x14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CB09C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    if ((_fca > _fcb)) goto loc_000E0116; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E0109: ;
    xmm1 = XMM_SCALAR(MEMF(0x7CB088)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E011C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000E0116: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000E011C: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E0140
 * Original: 0x000E0140 - 0x000E01B1 (113 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0140(void)
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

loc_000E0140: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(ecx + 0xF));
    xmm1 = XMM_SCALAR(MEMF(0x7CB08C)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    ecx = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CB0A0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    if ((_fca > _fcb)) goto loc_000E01A6; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E0199: ;
    xmm1 = XMM_SCALAR(MEMF(0x7CB088)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E01AC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000E01A6: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000E01AC: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E01D0
 * Original: 0x000E01D0 - 0x000E0242 (114 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E01D0(void)
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

loc_000E01D0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0x10);
    xmm1 = XMM_SCALAR(MEMF(0x7CB08C)); /* movss */
    PUSH32(esp, esi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 0x3F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CB090); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    if ((_fca > _fcb)) goto loc_000E0237; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E022A: ;
    xmm1 = XMM_SCALAR(MEMF(0x7CB088)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E023D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000E0237: ;
    MEMF(esp + 4) = xmm1.f[0]; /* movss */

loc_000E023D: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E0260
 * Original: 0x000E0260 - 0x000E02D5 (117 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0260(void)
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

loc_000E0260: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E026Bu); RECOMP_ABI_CALL(0x00024D3Au, sub_00024D3A); /* call 0x00024D3A */

loc_000E026B: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0xC);
    xmm1 = XMM_SCALAR(MEMF(0x7CB08C)); /* movss */
    ecx = eax;
    edx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + ecx * 2;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CB090); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    POP32(esp, esi);
    if ((_fca > _fcb)) goto loc_000E02BC; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E02AF: ;
    xmm1 = XMM_SCALAR(MEMF(0x7CB088)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E02BF; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000E02BC: ;
    xmm0 = xmm1; /* movaps */

loc_000E02BF: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = 5;
    if ((_fca >= _fcb)) goto loc_000E02D4; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E02CF: ;
    eax = 6;

loc_000E02D4: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E0300
 * Original: 0x000E0300 - 0x000E0393 (147 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0300(void)
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

loc_000E0300: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E030Eu); RECOMP_ABI_CALL(0x000223C8u, sub_000223C8); /* call 0x000223C8 */

loc_000E030E: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E0318u); RECOMP_ABI_CALL(0x000209A1u, sub_000209A1); /* call 0x000209A1 */

loc_000E0318: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E0322u); RECOMP_ABI_CALL(0x00035987u, sub_00035987); /* call 0x00035987 */

loc_000E0322: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E032Cu); RECOMP_ABI_CALL(0x0002EED4u, sub_0002EED4); /* call 0x0002EED4 */

loc_000E032C: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    POP32(esp, esi);
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000E0366; /* jb: below (unsigned <) */

loc_000E034E: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E0366; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000E0358: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E0366; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000E035D: ;
    eax = 2;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E0366: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E037F; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000E0371: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E037F; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000E0376: ;
    eax = 3;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E037F: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E038D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_000E0384: ;
    eax = 4;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E038D: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E03C0
 * Original: 0x000E03C0 - 0x000E03D2 (18 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E03C0(void)
{

loc_000E03C0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    MEM32(ecx + edx * 4 + 0x274) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E03E0
 * Original: 0x000E03E0 - 0x000E0845 (1125 bytes, 319 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E03E0(void)
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

loc_000E03E0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = 0x8F0040;
    eax = 0x8E8FA8;
    MEM32(esp + 0x14) = 0x8F5C14;
    MEM32(esp + 0x20) = 2;

loc_000E0404: ;
    edi = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x10) = eax;
    goto loc_000E0420;

loc_000E0416: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E0420;

    /* nop */

loc_000E0420: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(eax);
    SET_LO8(edx, MEM8(edi + -56));
    eax = MEM32(esi + 0xF0);
    SET_LO8(edx, LO8(edx) & 7);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x12 (32-bit) */
    MEM8(eax + 0x50) = LO8(edx);
    ebp = esi + 0x274;
    if (CMP_GE(_fas, _fbs)) goto loc_000E06C5; /* jge: greater or equal (signed >=) */

loc_000E0444: ;
    edx = MEM32(edi + -4);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ebp) = edx;
    eax = MEM32(edi);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x278) = eax;
    edx = MEM32(edi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x27C) = edx;
    eax = MEM32(edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x280) = eax;
    edx = MEM32(edi);
    ebx = edi + -4;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x284) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 3));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x288) = eax;
    SET_LO8(edx, MEM8(edi + 0xF));
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x28C) = edx;
    eax = MEM32(edi + 0x10);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x290) = eax;
    edx = MEM32(edi + 4);
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x294) = edx;
    eax = MEM32(edi + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x298) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + 0xB));
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x29C) = edx;
    eax = MEM32(edi + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2A0) = eax;
    edx = MEM32(edi + 8);
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2A4) = edx;
    eax = MEM32(edi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2A8) = eax;
    edx = MEM32(edi + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2AC) = edx;
    eax = MEM32(edi + 0xC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x16) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2B0) = eax;
    edx = MEM32(edi + 4);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2B4) = edx;
    eax = MEM32(edi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2B8) = eax;
    edx = MEM32(edi + 0xC);
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2BC) = edx;
    eax = MEM32(edi + 0xC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2C0) = eax;
    edx = MEM32(edi + 0xC);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000E0569u); RECOMP_ABI_CALL(0x0003771Eu, sub_0003771E); /* call 0x0003771E */

loc_000E0569: ;
    eax = MEM32(edi + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1C) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x000E0579u); RECOMP_ABI_CALL(0x0003771Eu, sub_0003771E); /* call 0x0003771E */

loc_000E0579: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(edi + 7));
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000E058Bu); RECOMP_ABI_CALL(0x0003771Eu, sub_0003771E); /* call 0x0003771E */

loc_000E058B: ;
    edx = MEM32(ebx);
    ecx = MEM32(esi + 0xF0);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x3D0) = edx;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x50);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    eax = 8;
    if (CMP_A(_fa, _fb)) goto loc_000E06B2; /* ja: above (unsigned >) */

loc_000E05B2: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0xE0848); /* switch: 5 entries, 3 targets */
    if (_jt == 0x000E05B9u) goto loc_000E05B9;
    if (_jt == 0x000E05D5u) goto loc_000E05D5;
    if (_jt == 0x000E06ADu) goto loc_000E06AD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000E05B9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E05BFu); RECOMP_ABI_CALL(0x00022661u, sub_00022661); /* call 0x00022661 */

loc_000E05BF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000E05CAu); RECOMP_ABI_CALL(0x00032FE8u, sub_00032FE8); /* call 0x00032FE8 */

loc_000E05CA: ;
    ebx = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E07B6;

loc_000E05D5: ;
    eax = MEM32(edi);
    xmm4 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7CB08C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7CB088)); /* movss */
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 8);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x10);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7CB094); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E0633; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000E062E: ;
    xmm1 = xmm2; /* movaps */
    goto loc_000E063B;

loc_000E0633: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E063B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_000E0638: ;
    xmm1 = xmm3; /* movaps */

loc_000E063B: ;
    eax = MEM32(edi + 8);
    ecx = eax;
    edx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x3F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax + ecx * 2;
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CB090); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E0670; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000E066B: ;
    xmm0 = xmm2; /* movaps */
    goto loc_000E0678;

loc_000E0670: ;
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E0678; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_000E0675: ;
    xmm0 = xmm3; /* movaps */

loc_000E0678: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E0695; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E067D: ;
    eax = 5;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000E068Au); RECOMP_ABI_CALL(0x00032FE8u, sub_00032FE8); /* call 0x00032FE8 */

loc_000E068A: ;
    ebx = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E07B6;

loc_000E0695: ;
    eax = 6;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000E06A2u); RECOMP_ABI_CALL(0x00032FE8u, sub_00032FE8); /* call 0x00032FE8 */

loc_000E06A2: ;
    ebx = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E07B6;

loc_000E06AD: ;
    eax = 7;

loc_000E06B2: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000E06BAu); RECOMP_ABI_CALL(0x00032FE8u, sub_00032FE8); /* call 0x00032FE8 */

loc_000E06BA: ;
    ebx = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E07B6;

loc_000E06C5: ;
    edx = MEM32(edi + -4);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(ebp) = edx;
    eax = MEM32(edi);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x27C) = eax;
    edx = MEM32(edi);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x280) = edx;
    eax = MEM32(edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x284) = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + 3));
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x288) = edx;
    eax = MEM32(edi + 4);
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2BC) = eax;
    edx = MEM32(edi + 4);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x298) = edx;
    eax = MEM32(edi + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2A0) = eax;
    edx = MEM32(edi + 4);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x29C) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edi + 7));
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x294) = eax;
    edx = MEM32(edi + 8);
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2A8) = edx;
    eax = MEM32(edi + 0xC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2B0) = eax;
    MEM32(esi + 0x2A4) = ecx;
    edx = MEM32(edi + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esi + 0x278) = edx;
    eax = MEM32(edi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x1A) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esi + 0x2AC) = eax;
    edx = MEM32(edi + 0xC);
    edx = edx & 0x3F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2B8) = edx;
    eax = MEM32(edi + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2C0) = eax;
    MEM32(esi + 0x28C) = ecx;
    MEM32(esi + 0x290) = ecx;
    MEM32(esi + 0x2B4) = ecx;

loc_000E07B6: ;
    eax = ebp;
    edx = 0x14;
    /* nop */

loc_000E07C0: ;
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 0x32;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x50) = ecx;
    MEM32(eax + 0xA0) = ecx;
    MEM32(eax + 0xF0) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E07C0; /* jne: not equal / not zero */

loc_000E07D8: ;
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, 0x000E07E3u); RECOMP_ABI_CALL(0x0001C62Bu, sub_0001C62B); /* call 0x0001C62B */

loc_000E07E3: ;
    ecx = MEM32(esi + 0xF0);
    PUSH32(esp, 0x000E07EEu); RECOMP_ABI_CALL(0x00037D4Fu, sub_00037D4F); /* call 0x00037D4F */

loc_000E07EE: ;
    edx = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x54;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x14 (32-bit) */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000E0416; /* jl: less (signed <) */

loc_000E080A: ;
    esi = MEM32(esp + 0x1C);
    ecx = MEM32(esi);
    PUSH32(esp, 0x000E0815u); RECOMP_ABI_CALL(0x0003158Au, sub_0003158A); /* call 0x0003158A */

loc_000E0815: ;
    edi = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x778) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x778;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = ecx;
    if ((_fa != 0)) goto loc_000E0404; /* jne: not equal / not zero */

loc_000E083D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E0980
 * Original: 0x000E0980 - 0x000E0992 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0980(void)
{

loc_000E0980: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E09A0
 * Original: 0x000E09A0 - 0x000E09BF (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E09A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E09A0: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E09BE; /* jle: less or equal (signed <=) */

loc_000E09A8: ;
    edx = MEM32(0x8AC020);
    PUSH32(esp, esi);
    /* nop */

loc_000E09B0: ;
    esi = MEM32(ecx + 8);
    MEM32(esi + eax * 4) = edx;
    esi = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E09B0; /* jl: less (signed <) */

loc_000E09BD: ;
    POP32(esp, esi);

loc_000E09BE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E09D0
 * Original: 0x000E09D0 - 0x000E09EF (31 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E09D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E09D0: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E09EE; /* jle: less or equal (signed <=) */

loc_000E09D8: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    esi = MEM32(0x8AC020);

loc_000E09E2: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E09E7; /* je: equal / zero */

loc_000E09E6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E09E7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E09E2; /* jne: not equal / not zero */

loc_000E09ED: ;
    POP32(esp, esi);

loc_000E09EE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0A00
 * Original: 0x000E0A00 - 0x000E0A42 (66 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0A00: ;
    eax = MEM32(0x8AC020);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000E0A3B; /* jle: less or equal (signed <=) */

loc_000E0A13: ;
    ecx = MEM32(ecx + 8);
    ebp = MEM32(esp + 0x14);
    edi = ecx;
    /* nop */

loc_000E0A20: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0A29; /* je: equal / zero */

loc_000E0A24: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0A38; /* je: equal / zero */

loc_000E0A28: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E0A29: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0A20; /* jl: less (signed <) */

loc_000E0A31: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E0A38: ;
    eax = MEM32(ecx + edx * 4);

loc_000E0A3B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0A60
 * Original: 0x000E0A60 - 0x000E0AA4 (68 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0A60: ;
    eax = MEM32(0x8AC020);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0A9D; /* jle: less or equal (signed <=) */

loc_000E0A71: ;
    ebp = MEM32(ecx + 8);
    ebx = MEM32(esp + 0x14);
    esi = ebp;
    /* nop */

loc_000E0A80: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0A8A; /* je: equal / zero */

loc_000E0A86: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0A99; /* jne: not equal / not zero */

loc_000E0A8A: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0A80; /* jl: less (signed <) */

loc_000E0A92: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E0A99: ;
    eax = MEM32(ebp + edx * 4);

loc_000E0A9D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0AC0
 * Original: 0x000E0AC0 - 0x000E0B08 (72 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0AC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0AC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0AF1; /* jle: less or equal (signed <=) */

loc_000E0ACC: ;
    ebp = MEM32(ecx + 8);
    ebx = MEM32(esp + 0x14);
    esi = ebp;

loc_000E0AD5: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0AE9; /* je: equal / zero */

loc_000E0ADB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x18) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0AE9; /* je: equal / zero */

loc_000E0AE1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8AC020)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x8AC020) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0AFD; /* jne: not equal / not zero */

loc_000E0AE9: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0AD5; /* jl: less (signed <) */

loc_000E0AF1: ;
    eax = MEM32(0x8AC020);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_000E0AFD: ;
    eax = MEM32(ebp + edx * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E0B20
 * Original: 0x000E0B20 - 0x000E0B7C (92 bytes, 43 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0B20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0B60; /* jle: less or equal (signed <=) */

loc_000E0B2D: ;
    ecx = MEM32(ecx + 8);
    ebp = MEM32(esp + 0x20);
    ebx = MEM32(esp + 0x18);
    MEM32(esp + 0x10) = ecx;
    esi = ecx;
    edi = edi;

loc_000E0B40: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0B58; /* je: equal / zero */

loc_000E0B46: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0B58; /* je: equal / zero */

loc_000E0B4C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0B58; /* je: equal / zero */

loc_000E0B50: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8AC020)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x8AC020) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E0B6D; /* jne: not equal / not zero */

loc_000E0B58: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0B40; /* jl: less (signed <) */

loc_000E0B60: ;
    eax = MEM32(0x8AC020);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

loc_000E0B6D: ;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + edx * 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E0BA0
 * Original: 0x000E0BA0 - 0x000E0C85 (229 bytes, 85 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0BA0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = MEM32(0x8AC020);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = 0;
    MEM32(esp + 0x1C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_000E0C7B; /* jle: less or equal (signed <=) */

loc_000E0BC2: ;
    ecx = MEM32(ecx + 8);
    ebp = MEM32(esp + 0x28);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x10) = ecx;

loc_000E0BD1: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E0C4A; /* je: equal / zero */

loc_000E0BDF: ;
    esi = MEM32(ebp);
    MEM32(esp + 0x28) = 0;
    /* nop */

loc_000E0BF0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0C0B; /* jle: less or equal (signed <=) */

loc_000E0BF6: ;
    ecx = MEM32(ebp + 8);
    edx = esi;
    goto loc_000E0C00;

    /* nop */

loc_000E0C00: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0C05; /* je: equal / zero */

loc_000E0C04: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E0C05: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E0C00; /* jne: not equal / not zero */

loc_000E0C0B: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E0C70; /* jge: greater or equal (signed >=) */

loc_000E0C11: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0C33; /* jle: less or equal (signed <=) */

loc_000E0C19: ;
    ebx = MEM32(ebp + 8);
    edx = ebx;
    edi = edi;

loc_000E0C20: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0C2B; /* je: equal / zero */

loc_000E0C24: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0C41; /* je: equal / zero */

loc_000E0C2A: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E0C2B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0C20; /* jl: less (signed <) */

loc_000E0C33: ;
    ecx = eax;

loc_000E0C35: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0C46; /* je: equal / zero */

loc_000E0C3B: ;
    MEM32(esp + 0x28) = MEM32(esp + 0x28) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000E0BF0;

loc_000E0C41: ;
    ecx = MEM32(ebx + ecx * 4);
    goto loc_000E0C35;

loc_000E0C46: ;
    edx = MEM32(esp + 0x1C);

loc_000E0C4A: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_000E0BD1; /* jl: less (signed <) */

loc_000E0C66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E0C70: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x14);
    eax = MEM32(edx + eax * 4);

loc_000E0C7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0CC0
 * Original: 0x000E0CC0 - 0x000E0CF0 (48 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0CC0: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000E0CDF; /* jle: less or equal (signed <=) */

loc_000E0CCA: ;
    edx = MEM32(ecx + 8);
    esi = MEM32(esp + 0xC);

loc_000E0CD1: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0CE6; /* je: equal / zero */

loc_000E0CD5: ;
    edi = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0CD1; /* jl: less (signed <) */

loc_000E0CDF: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E0CE6: ;
    POP32(esp, edi);
    MEM32(ecx + 4) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0D00
 * Original: 0x000E0D00 - 0x000E0D0A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0D00(void)
{

loc_000E0D00: ;
    eax = MEM32(esp + 4);
    MEM32(0x8AC018) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0D10
 * Original: 0x000E0D10 - 0x000E0D1A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0D10(void)
{

loc_000E0D10: ;
    eax = MEM32(esp + 4);
    MEM32(0x8AC01C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0D20
 * Original: 0x000E0D20 - 0x000E0D26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0D20(void)
{

loc_000E0D20: ;
    eax = MEM32(0x8AC01C);
    esp += 4; return; /* ret */

}

/**
 * sub_000E0D30
 * Original: 0x000E0D30 - 0x000E0D44 (20 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0D30(void)
{

loc_000E0D30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x8AC010) = eax;
    MEM32(0x8AC014) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E0D50
 * Original: 0x000E0D50 - 0x000E0D5A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0D50(void)
{

loc_000E0D50: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0D60
 * Original: 0x000E0D60 - 0x000E0D6A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0D60(void)
{

loc_000E0D60: ;
    eax = MEM32(esp + 4);
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0D70
 * Original: 0x000E0D70 - 0x000E0DAA (58 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0D70: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0DA7; /* jle: less or equal (signed <=) */

loc_000E0D78: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x8AC020);
    edx = esi;
    PUSH32(esp, ebx);

loc_000E0D86: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0D9A; /* je: equal / zero */

loc_000E0D8A: ;
    ebx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0D86; /* jl: less (signed <) */

loc_000E0D94: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E0D9A: ;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + eax * 4) = ecx;
    POP32(esp, esi);

loc_000E0DA7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0DC0
 * Original: 0x000E0DC0 - 0x000E0E5F (159 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0DC0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(0x8AC020);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;

loc_000E0DD7: ;
    esi = MEM32(ebx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0DEF; /* jle: less or equal (signed <=) */

loc_000E0DDF: ;
    eax = MEM32(ebx + 8);
    edx = esi;

loc_000E0DE4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0DE9; /* je: equal / zero */

loc_000E0DE8: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E0DE9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E0DE4; /* jne: not equal / not zero */

loc_000E0DEF: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E0E57; /* jge: greater or equal (signed >=) */

loc_000E0DF5: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0E1F; /* jle: less or equal (signed <=) */

loc_000E0DFD: ;
    ebx = MEM32(ebx + 8);
    edx = ebx;

loc_000E0E02: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0E13; /* je: equal / zero */

loc_000E0E06: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    ebp = MEM32(0x8AC020);
    if (CMP_EQ(_fa, _fb)) goto loc_000E0E42; /* je: equal / zero */

loc_000E0E12: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E0E13: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0E02; /* jl: less (signed <) */

loc_000E0E1B: ;
    ebx = MEM32(esp + 0x18);

loc_000E0E1F: ;
    edi = ebp;

loc_000E0E21: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0E51; /* jle: less or equal (signed <=) */

loc_000E0E29: ;
    esi = MEM32(ecx + 8);
    edx = esi;
    edi = edi;

loc_000E0E30: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0E4B; /* je: equal / zero */

loc_000E0E34: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0E30; /* jl: less (signed <) */

loc_000E0E3C: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000E0DD7;

loc_000E0E42: ;
    edi = MEM32(ebx + eax * 4);
    ebx = MEM32(esp + 0x18);
    goto loc_000E0E21;

loc_000E0E4B: ;
    MEM32(ecx + 4) = eax;
    MEM32(esi + eax * 4) = edi;

loc_000E0E51: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000E0DD7;

loc_000E0E57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0E00
 * Original: 0x000E0E00 - 0x000E0E5F (95 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0E00: ;
    edx = ebx;

loc_000E0E02: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0E13; /* je: equal / zero */

loc_000E0E06: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edi (32-bit) */
    ebp = MEM32(0x8AC020);
    if (CMP_EQ(_fa, _fb)) goto loc_000E0E42; /* je: equal / zero */

loc_000E0E12: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E0E13: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0E02; /* jl: less (signed <) */

loc_000E0E1B: ;
    ebx = MEM32(esp + 0x18);
    edi = ebp;

loc_000E0E21: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0E51; /* jle: less or equal (signed <=) */

loc_000E0E29: ;
    esi = MEM32(ecx + 8);
    edx = esi;
    edi = edi;

loc_000E0E30: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0E4B; /* je: equal / zero */

loc_000E0E34: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0E30; /* jl: less (signed <) */

loc_000E0E3C: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_000E0DD7(); return; /* tail jmp 0x000E0DD7 */

loc_000E0E42: ;
    edi = MEM32(ebx + eax * 4);
    ebx = MEM32(esp + 0x18);
    goto loc_000E0E21;

loc_000E0E4B: ;
    MEM32(ecx + 4) = eax;
    MEM32(esi + eax * 4) = edi;

loc_000E0E51: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_000E0DD7(); return; /* tail jmp 0x000E0DD7 */

    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0E90
 * Original: 0x000E0E90 - 0x000E0ECA (58 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0E90: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0EC7; /* jle: less or equal (signed <=) */

loc_000E0E98: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    edx = esi;
    PUSH32(esp, ebx);

loc_000E0EA4: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0EB8; /* je: equal / zero */

loc_000E0EA8: ;
    ebx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0EA4; /* jl: less (signed <) */

loc_000E0EB2: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E0EB8: ;
    MEM32(ecx + 4) = eax;
    ecx = MEM32(0x8AC020);
    POP32(esp, ebx);
    POP32(esp, edi);
    MEM32(esi + eax * 4) = ecx;
    POP32(esp, esi);

loc_000E0EC7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E0EE0
 * Original: 0x000E0EE0 - 0x000E0F10 (48 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0EE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E0EE0: ;
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_LE(_fas, _fbs)) goto loc_000E0EFF; /* jle: less or equal (signed <=) */

loc_000E0EEA: ;
    edx = MEM32(ecx + 8);
    esi = MEM32(esp + 0xC);

loc_000E0EF1: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0F06; /* je: equal / zero */

loc_000E0EF5: ;
    edi = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0EF1; /* jl: less (signed <) */

loc_000E0EFF: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E0F06: ;
    POP32(esp, edi);
    MEM32(ecx + 4) = eax;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
