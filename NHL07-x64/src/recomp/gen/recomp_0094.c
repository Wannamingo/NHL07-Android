/**
 * nhl_07_recomp - Recompiled code chunk 94
 * Functions: 250 (0x000E0F20 - 0x000E8080)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000E0F20
 * Original: 0x000E0F20 - 0x000E0FCF (175 bytes, 77 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E0F20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E0F20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x8AC020);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    ebx = MEM32(edi);
    MEM32(esp + 0x10) = 0;
    /* nop */

loc_000E0F40: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0F5B; /* jle: less or equal (signed <=) */

loc_000E0F46: ;
    eax = MEM32(edi + 8);
    edx = ebx;
    goto loc_000E0F50;

    /* nop */

loc_000E0F50: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0F55; /* je: equal / zero */

loc_000E0F54: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E0F55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E0F50; /* jne: not equal / not zero */

loc_000E0F5B: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E0FC5; /* jge: greater or equal (signed >=) */

loc_000E0F61: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0F89; /* jle: less or equal (signed <=) */

loc_000E0F69: ;
    edi = MEM32(edi + 8);
    edx = edi;
    edi = edi;

loc_000E0F70: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0F81; /* je: equal / zero */

loc_000E0F74: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), esi (32-bit) */
    ebp = MEM32(0x8AC020);
    if (CMP_EQ(_fa, _fb)) goto loc_000E0FB3; /* je: equal / zero */

loc_000E0F80: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E0F81: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0F70; /* jl: less (signed <) */

loc_000E0F89: ;
    esi = ebp;

loc_000E0F8B: ;
    edx = MEM32(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E0FA4; /* jle: less or equal (signed <=) */

loc_000E0F93: ;
    edx = MEM32(ecx + 8);

loc_000E0F96: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E0FB8; /* je: equal / zero */

loc_000E0F9A: ;
    edi = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E0F96; /* jl: less (signed <) */

loc_000E0FA4: ;
    eax = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    goto loc_000E0F40;

loc_000E0FB3: ;
    esi = MEM32(edi + eax * 4);
    goto loc_000E0F8B;

loc_000E0FB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx + 4) = eax;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000E0FC5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E1000
 * Original: 0x000E1000 - 0x000E100F (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1000(void)
{

loc_000E1000: ;
    eax = MEM32(esp + 4);
    MEM32(0x8EFD94) = eax;
    MEM32(0x8AC014) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000E1020
 * Original: 0x000E1020 - 0x000E1030 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1020(void)
{

loc_000E1020: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    MEM32(ecx * 4 + 0x8EFCD0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000E1040
 * Original: 0x000E1040 - 0x000E122B (491 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E1040: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 8) = eax;
    PUSH32(esp, edi);

loc_000E1056: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E10F0; /* jge: greater or equal (signed >=) */

loc_000E105F: ;
    edx = ebp + ebp * 4;
    esi = ZX8(MEM8(ecx + edx * 4 + 0x8960FC));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E10DE; /* je: equal / zero */

loc_000E1073: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E1080;

    /* nop */
    edi = edi;

loc_000E1080: ;
    ecx = MEM32(ebp * 4 + 0x8F00F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E108Du); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_000E108D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E10A9; /* je: equal / zero */

loc_000E1091: ;
    ecx = MEM32(ebp * 4 + 0x8F00F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E109Eu); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_000E109E: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E10A9; /* jne: not equal / not zero */

loc_000E10A6: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E10A9: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1080; /* jl: less (signed <) */

loc_000E10AF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E10DA; /* je: equal / zero */

loc_000E10B4: ;
    ecx = MEM32(esp + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E10CE; /* jle: less or equal (signed <=) */

loc_000E10BE: ;
    edi = edi;

loc_000E10C0: ;
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + eax * 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E10DA; /* je: equal / zero */

loc_000E10C9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E10C0; /* jl: less (signed <) */

loc_000E10CE: ;
    eax = MEM32(esp + 0xC);
    MEM32(ebx + eax * 4) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;

loc_000E10DA: ;
    eax = MEM32(esp + 0xC);

loc_000E10DE: ;
    ecx = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000E1056; /* jl: less (signed <) */

loc_000E10F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E1104; /* jge: greater or equal (signed >=) */

loc_000E10F5: ;
    ecx = 9;
    edi = ebx + eax * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */

loc_000E1104: ;
    eax = MEM32(ebx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1118; /* jl: less (signed <) */

loc_000E1116: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E1118: ;
    eax = MEM32(ebx + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E112D; /* jl: less (signed <) */

loc_000E1128: ;
    ecx = 1;

loc_000E112D: ;
    eax = MEM32(ebx + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1142; /* jl: less (signed <) */

loc_000E113D: ;
    ecx = 2;

loc_000E1142: ;
    eax = MEM32(ebx + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1157; /* jl: less (signed <) */

loc_000E1152: ;
    ecx = 3;

loc_000E1157: ;
    eax = MEM32(ebx + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E116C; /* jl: less (signed <) */

loc_000E1167: ;
    ecx = 4;

loc_000E116C: ;
    eax = MEM32(ebx + 0x14);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1181; /* jl: less (signed <) */

loc_000E117C: ;
    ecx = 5;

loc_000E1181: ;
    eax = MEM32(ebx + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1196; /* jl: less (signed <) */

loc_000E1191: ;
    ecx = 6;

loc_000E1196: ;
    eax = MEM32(ebx + 0x1C);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E11AB; /* jl: less (signed <) */

loc_000E11A6: ;
    ecx = 7;

loc_000E11AB: ;
    eax = MEM32(ebx + 0x20);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    esi = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    POP32(esp, edi);
    POP32(esp, esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E11D1; /* jl: less (signed <) */

loc_000E11BD: ;
    eax = MEM32(ebx);
    ecx = 8;
    edx = MEM32(ebx + ecx * 4);
    MEM32(ebx) = edx;
    MEM32(ebx + ecx * 4) = eax;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E11D1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E11E5; /* je: equal / zero */

loc_000E11D6: ;
    edx = MEM32(ebx + ecx * 4);
    eax = MEM32(ebx);
    MEM32(ebx) = edx;
    MEM32(ebx + ecx * 4) = eax;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E11E5: ;
    eax = ebp + ebp * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(eax + 0x8E8FF0);
    edx = MEM32(ecx + 0x1B4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1209; /* je: equal / zero */

loc_000E11FC: ;
    edx = ebp + ebp * 4;
    ecx = edx * 4 + 0x12;
    MEM32(ebx) = ecx;

loc_000E1209: ;
    edx = MEM32(eax + 0x8E8FF4);
    eax = MEM32(edx + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1226; /* je: equal / zero */

loc_000E1219: ;
    eax = ebp + ebp * 4;
    ecx = eax * 4 + 0x13;
    MEM32(ebx) = ecx;

loc_000E1226: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E1200
 * Original: 0x000E1200 - 0x000E122B (43 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E1200: ;
    ecx = edx * 4 + 0x12;
    MEM32(ebx) = ecx;
    edx = MEM32(eax + 0x8E8FF4);
    eax = MEM32(edx + 0x1B4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1226; /* je: equal / zero */

loc_000E1219: ;
    eax = ebp + ebp * 4;
    ecx = eax * 4 + 0x13;
    MEM32(ebx) = ecx;

loc_000E1226: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E12B0
 * Original: 0x000E12B0 - 0x000E1351 (161 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E12B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000E12B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E12B6: ;
    SET_LO8(edx, MEM8(ecx + 0x895B2A));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_000E1305; /* jle: less or equal (signed <=) */

loc_000E12C0: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x895B28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E1305; /* jne: not equal / not zero */

loc_000E12CB: ;
    _fa = (uint32_t)(MEM8(ecx + 0x895B2B)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x895B2B), 0x10 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1305; /* je: equal / zero */

loc_000E12D4: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x895B29);
    esi = eax + eax * 4;
    edx = edx + esi * 4;
    edx = MEM32(edx * 4 + 0x8E8FA8);
    _fa = (uint32_t)(MEM32(edx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x28), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1305; /* je: equal / zero */

loc_000E12EE: ;
    esi = MEM32(edx + 0x1B4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1305; /* je: equal / zero */

loc_000E12F9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1305; /* je: equal / zero */

loc_000E12FE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1343; /* je: equal / zero */

loc_000E1304: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E1305: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x28 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000E12B6; /* jl: less (signed <) */

loc_000E130D: ;
    ecx = eax + eax * 4;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x8E8FA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x8E8FA8)) >> 32) & 1);
    ecx = ecx + 0x8E8FA8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E1320;

    /* nop */

loc_000E1320: ;
    esi = MEM32(ecx);
    _fa = (uint32_t)(MEM32(esi + 0x1B4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1B4), 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E1332; /* jne: not equal / not zero */

loc_000E132B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E134A; /* je: equal / zero */

loc_000E1331: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E1332: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x14 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000E1320; /* jl: less (signed <) */

loc_000E133B: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E1343: ;
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E134A: ;
    eax = (uint32_t)(int32_t)SMEM8(esi + 0x39);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E1380
 * Original: 0x000E1380 - 0x000E13AB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E1380: ;
    eax = edx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x8F5C2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5C2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_000E1390: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x100 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E13A4; /* jne: not equal / not zero */

loc_000E1398: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1390; /* jl: less (signed <) */

loc_000E13A1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000E13A4: ;
    eax = edx + edx * 4;
    eax = ecx + eax * 4;
    esp += 4; return; /* ret */

}

/**
 * sub_000E13C0
 * Original: 0x000E13C0 - 0x000E13EC (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E13C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E13C0: ;
    PUSH32(esp, 0x000E13C5u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_000E13C5: ;
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_000E13D1; /* jns: not sign (positive) */

loc_000E13CC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E13D1: ;
    ecx = MEM32(eax * 4 + 0x8F00F8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000E13DFu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E13DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E13E8; /* je: equal / zero */

loc_000E13E3: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    esp += 4; return; /* ret */

loc_000E13E8: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E1400
 * Original: 0x000E1400 - 0x000E1438 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E1400: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx * 4 + 0x8F6A6C);
    ecx = MEM32(ecx * 4 + 0x8F0040);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x1C);
    ecx = edx + ecx + 0x28;
    edx = MEM32(esp + 4);

loc_000E1425: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1435; /* je: equal / zero */

loc_000E1429: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1425; /* jl: less (signed <) */

loc_000E1432: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000E1435: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000E1450
 * Original: 0x000E1450 - 0x000E145C (12 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1450(void)
{

loc_000E1450: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax * 4 + 0x8EFCD0);
    esp += 4; return; /* ret */

}

/**
 * sub_000E1460
 * Original: 0x000E1460 - 0x000E14F8 (152 bytes, 59 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E1460: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    eax = MEM32(eax * 4 + 0x8F0040);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = 0;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;

loc_000E1486: ;
    edi = MEM32(esp + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000E1490: ;
    eax = MEM32(edi);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp;

loc_000E1498: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E14CD; /* jne: not equal / not zero */

loc_000E149C: ;
    _fa = (uint32_t)(MEM32(ecx + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E14CD; /* je: equal / zero */

loc_000E14A1: ;
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E14CD; /* je: equal / zero */

loc_000E14A6: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E14CD; /* je: equal / zero */

loc_000E14AA: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E14CD; /* je: equal / zero */

loc_000E14AF: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E14CD; /* je: equal / zero */

loc_000E14B4: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E14BB; /* jne: not equal / not zero */

loc_000E14B9: ;
    SET_LO8(edx, 1);

loc_000E14BB: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8A (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1498; /* jl: less (signed <) */

loc_000E14C9: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E14F2; /* je: equal / zero */

loc_000E14CD: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1490; /* jl: less (signed <) */

loc_000E14D6: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x18) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_000E1486; /* jl: less (signed <) */

loc_000E14EF: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E14F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E1520
 * Original: 0x000E1520 - 0x000E156C (76 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E1520: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax * 4 + 0x8F00F8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000E1540: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000E1548u); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_000E1548: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E155E; /* je: equal / zero */

loc_000E154C: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E155E; /* je: equal / zero */

loc_000E1554: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E155E; /* je: equal / zero */

loc_000E155A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E1567; /* jne: not equal / not zero */

loc_000E155E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1540; /* jl: less (signed <) */

loc_000E1564: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E1567: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E1580
 * Original: 0x000E1580 - 0x000E15B1 (49 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E1580: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax * 4 + 0x8F00F8);
    esi = 1;

loc_000E1592: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000E159Au); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_000E159A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E15AA; /* jne: not equal / not zero */

loc_000E159E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E1592; /* jl: less (signed <) */

loc_000E15A4: ;
    POP32(esp, edi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E15AA: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E15C0
 * Original: 0x000E15C0 - 0x000E15F9 (57 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E15C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000E15C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi * 4 + 0x8F00F8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E15D7u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E15D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E15EF; /* je: equal / zero */

loc_000E15DB: ;
    ecx = MEM32(esi * 4 + 0x8F00F8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E15E8u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E15E8: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E15EF: ;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E1610
 * Original: 0x000E1610 - 0x000E20B3 (2723 bytes, 762 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E1610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E1610: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x58));
    esp = esp - 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x60);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000E1622; /* jge: greater or equal (signed >=) */

loc_000E161C: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x60) = esi;

loc_000E1622: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi * 4 + 0x8F0040);
    PUSH32(esp, ebp);
    ebp = esi;
    _cf = 0; /* logical op clears CF */
    ebp = ebp ^ 1;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(ebp * 4 + 0x8F0040);
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    eax = 0xFFFFFFFDu;
    ecx = 0x8A;
    edi = 0x8EFCD0;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(esp + 0x70);
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x14) = ebx;
    MEM32(0x8EFD90) = edi;
    MEM32(0x8EFCE0) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000E1671; /* je: equal / zero */

loc_000E166C: ;
    MEM32(0x8EFCE0) = eax;

loc_000E1671: ;
    eax = MEM32(esp + 0x74);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E1687; /* jne: not equal / not zero */

loc_000E1679: ;
    PUSH32(esp, 0x8EFCD0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E1684u); RECOMP_ABI_CALL(0x000167D0u, sub_000167D0); /* call 0x000167D0 */

loc_000E1684: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E1687: ;
    ecx = MEM32(esi * 4 + 0x8F00F8);
    PUSH32(esp, 4);
    MEM32(0x8EFEF4) = eax;
    PUSH32(esp, 0x000E169Au); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E169A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E172D; /* je: equal / zero */

loc_000E16A2: ;
    _fa = (uint32_t)(MEM32(esp + 0x78)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x78), 0x2F (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = MEM32(esi * 4 + 0x8F00F8);
    PUSH32(esp, 4);
    if (CMP_NE(_fa, _fb)) goto loc_000E171D; /* jne: not equal / not zero */

loc_000E16B2: ;
    PUSH32(esp, 0x000E16B7u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E16B7: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    edx = MEM32(eax);
    MEM32(esp + 0x70) = ecx;
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000E16C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E16C3u); } /* indirect call */
    }

loc_000E16C6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E170A; /* je: equal / zero */

loc_000E16CA: ;
    esi = esi + esi * 4;
    MEM32(esp + 0x70) = edi;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x8E8FA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x8E8FA8)) >> 32) & 1);
    esi = esi + 0x8E8FA8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_000E16E0: ;
    ebx = MEM32(esi);
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000E16E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E16E6u); } /* indirect call */
    }

loc_000E16E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E16F3; /* je: equal / zero */

loc_000E16ED: ;
    _fa = (uint32_t)(MEM32(ebx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x28), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E16FE; /* jne: not equal / not zero */

loc_000E16F3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x14 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000E16E0; /* jl: less (signed <) */

loc_000E16FC: ;
    goto loc_000E1706;

loc_000E16FE: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x39);
    MEM32(esp + 0x70) = ecx;

loc_000E1706: ;
    esi = MEM32(esp + 0x6C);

loc_000E170A: ;
    edx = MEM32(esp + 0x70);
    ebx = MEM32(esp + 0x14);
    MEM32(0x8EFCF4) = edx;
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_000E1733;

loc_000E171D: ;
    PUSH32(esp, 0x000E1722u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1722: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    MEM32(0x8EFCF4) = eax;
    goto loc_000E1733;

loc_000E172D: ;
    MEM32(0x8EFCF4) = edi;

loc_000E1733: ;
    ecx = MEM32(esi * 4 + 0x8F00F8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E1741u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1741: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1759; /* je: equal / zero */

loc_000E1745: ;
    ecx = MEM32(esi * 4 + 0x8F00F8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E1753u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1753: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1760;

loc_000E1759: ;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E1760: ;
    ecx = MEM32(esi * 4 + 0x8F00F8);
    PUSH32(esp, 2);
    MEM32(0x8EFD00) = eax;
    PUSH32(esp, 0x000E1773u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1773: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E178B; /* je: equal / zero */

loc_000E1777: ;
    ecx = MEM32(esi * 4 + 0x8F00F8);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000E1785u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1785: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1792;

loc_000E178B: ;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E1792: ;
    ecx = MEM32(esi * 4 + 0x8F00F8);
    PUSH32(esp, 3);
    MEM32(0x8EFD04) = eax;
    PUSH32(esp, 0x000E17A5u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E17A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E17BD; /* je: equal / zero */

loc_000E17A9: ;
    ecx = MEM32(esi * 4 + 0x8F00F8);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000E17B7u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E17B7: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E17C4;

loc_000E17BD: ;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E17C4: ;
    ecx = MEM32(esi * 4 + 0x8F00F8);
    PUSH32(esp, 5);
    MEM32(0x8EFCF8) = eax;
    PUSH32(esp, 0x000E17D7u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E17D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E17EF; /* je: equal / zero */

loc_000E17DB: ;
    ecx = MEM32(esi * 4 + 0x8F00F8);
    PUSH32(esp, 5);
    PUSH32(esp, 0x000E17E9u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E17E9: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E17F6;

loc_000E17EF: ;
    eax = esi;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000E17F6: ;
    ecx = MEM32(0x8EFCE0);
    edx = MEM32(0x8EFD94);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x8EFEAC);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(0x8EFCF4);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x8EFCF8);
    MEM32(0x8EFCFC) = eax;
    MEM32(esp + 0x24) = edx;
    edx = MEM32(0x8EFD00);
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(0x8AC014);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(0x8EFD04);
    MEM32(0x8EFD94) = ecx;
    MEM32(esp + 0x30) = edx;
    edx = MEM32(ebx + 8);
    MEM32(esp + 0x34) = eax;
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    MEM32(0x8EFCEC) = eax;
    ecx = MEM32(ebx + 8);
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = esi + esi * 4;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x70) = esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x12 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E187F; /* jne: not equal / not zero */

loc_000E187A: ;
    _fb = (uint32_t)(0x13) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x13)) >> 32) & 1);
    esi = esi + 0x13;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E1882;

loc_000E187F: ;
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x12)) >> 32) & 1);
    esi = esi + 0x12;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E1882: ;
    edx = MEM32(esp + 0x10);
    MEM32(0x8EFCF0) = esi;
    eax = MEM32(edx + 8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    MEM32(0x8EFD44) = ecx;
    ecx = MEM32(ebp * 4 + 0x8F00F8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000E18A7u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E18A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E18C5; /* je: equal / zero */

loc_000E18AB: ;
    ecx = MEM32(ebp * 4 + 0x8F00F8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000E18B9u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E18B9: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    MEM32(0x8EFD48) = edx;
    goto loc_000E18ED;

loc_000E18C5: ;
    eax = MEM32(0x8EFD44);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E18D3u); RECOMP_ABI_CALL(0x00027CB0u, sub_00027CB0); /* call 0x00027CB0 */

loc_000E18D3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000E18E8; /* jge: greater or equal (signed >=) */

loc_000E18DA: ;
    PUSH32(esp, 0x8EFCD0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E18E5u); RECOMP_ABI_CALL(0x000167D0u, sub_000167D0); /* call 0x000167D0 */

loc_000E18E5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E18E8: ;
    MEM32(0x8EFD48) = eax;

loc_000E18ED: ;
    ecx = MEM32(ebp * 4 + 0x8F00F8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E18FBu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E18FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1919; /* je: equal / zero */

loc_000E18FF: ;
    ecx = MEM32(ebp * 4 + 0x8F00F8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E190Du); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E190D: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    MEM32(0x8EFD54) = ecx;
    goto loc_000E1942;

loc_000E1919: ;
    edx = MEM32(0x8EFD44);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E1928u); RECOMP_ABI_CALL(0x00027CB0u, sub_00027CB0); /* call 0x00027CB0 */

loc_000E1928: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000E193D; /* jge: greater or equal (signed >=) */

loc_000E192F: ;
    PUSH32(esp, 0x8EFCD0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E193Au); RECOMP_ABI_CALL(0x000167D0u, sub_000167D0); /* call 0x000167D0 */

loc_000E193A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E193D: ;
    MEM32(0x8EFD54) = eax;

loc_000E1942: ;
    ecx = MEM32(ebp * 4 + 0x8F00F8);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000E1950u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1950: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1968; /* je: equal / zero */

loc_000E1954: ;
    ecx = MEM32(ebp * 4 + 0x8F00F8);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000E1962u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1962: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E198C;

loc_000E1968: ;
    ecx = MEM32(0x8EFD44);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E1977u); RECOMP_ABI_CALL(0x00027CB0u, sub_00027CB0); /* call 0x00027CB0 */

loc_000E1977: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000E198C; /* jge: greater or equal (signed >=) */

loc_000E197E: ;
    PUSH32(esp, 0x8EFCD0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E1989u); RECOMP_ABI_CALL(0x000167D0u, sub_000167D0); /* call 0x000167D0 */

loc_000E1989: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E198C: ;
    ecx = MEM32(ebp * 4 + 0x8F00F8);
    PUSH32(esp, 3);
    MEM32(0x8EFD58) = eax;
    PUSH32(esp, 0x000E199Fu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E199F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E19BD; /* je: equal / zero */

loc_000E19A3: ;
    ecx = MEM32(ebp * 4 + 0x8F00F8);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000E19B1u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E19B1: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    MEM32(0x8EFD4C) = edx;
    goto loc_000E19E5;

loc_000E19BD: ;
    eax = MEM32(0x8EFD44);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E19CBu); RECOMP_ABI_CALL(0x00027CB0u, sub_00027CB0); /* call 0x00027CB0 */

loc_000E19CB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000E19E0; /* jge: greater or equal (signed >=) */

loc_000E19D2: ;
    PUSH32(esp, 0x8EFCD0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E19DDu); RECOMP_ABI_CALL(0x000167D0u, sub_000167D0); /* call 0x000167D0 */

loc_000E19DD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E19E0: ;
    MEM32(0x8EFD4C) = eax;

loc_000E19E5: ;
    ecx = MEM32(ebp * 4 + 0x8F00F8);
    PUSH32(esp, 5);
    PUSH32(esp, 0x000E19F3u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E19F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1A11; /* je: equal / zero */

loc_000E19F7: ;
    ecx = MEM32(ebp * 4 + 0x8F00F8);
    PUSH32(esp, 5);
    PUSH32(esp, 0x000E1A05u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1A05: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    MEM32(0x8EFD50) = ecx;
    goto loc_000E1A3A;

loc_000E1A11: ;
    edx = MEM32(0x8EFD44);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E1A20u); RECOMP_ABI_CALL(0x00027CB0u, sub_00027CB0); /* call 0x00027CB0 */

loc_000E1A20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_000E1A35; /* jge: greater or equal (signed >=) */

loc_000E1A27: ;
    PUSH32(esp, 0x8EFCD0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E1A32u); RECOMP_ABI_CALL(0x000167D0u, sub_000167D0); /* call 0x000167D0 */

loc_000E1A32: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E1A35: ;
    MEM32(0x8EFD50) = eax;

loc_000E1A3A: ;
    edi = MEM32(esp + 0x6C);
    PUSH32(esp, 8);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    eax = edi + 0x2E;
    PUSH32(esp, edi);
    ebx = 0x8EFD0C;
    MEM32(0x8EFD08) = eax;
    PUSH32(esp, 0x000E1A58u); RECOMP_ABI_CALL(0x000E1040u, sub_000E1040); /* call 0x000E1040 */

loc_000E1A58: ;
    PUSH32(esp, 0);
    eax = edi;
    PUSH32(esp, 0x000E1A61u); RECOMP_ABI_CALL(0x000E12B0u, sub_000E12B0); /* call 0x000E12B0 */

loc_000E1A61: ;
    MEM32(0x8EFD30) = eax;
    PUSH32(esp, 1);
    eax = edi;
    PUSH32(esp, 0x000E1A6Fu); RECOMP_ABI_CALL(0x000E12B0u, sub_000E12B0); /* call 0x000E12B0 */

loc_000E1A6F: ;
    MEM32(0x8EFD34) = eax;
    PUSH32(esp, 2);
    eax = edi;
    PUSH32(esp, 0x000E1A7Du); RECOMP_ABI_CALL(0x000E12B0u, sub_000E12B0); /* call 0x000E12B0 */

loc_000E1A7D: ;
    edx = MEM32(0x8AC018);
    MEM32(0x8EFD38) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(0x8EFEAC) = edx;
    ecx = MEM32(eax + 8);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    PUSH32(esp, 8);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    eax = ebp + 0x2E;
    PUSH32(esp, ebp);
    ebx = 0x8EFD60;
    MEM32(0x8EFD44) = edx;
    MEM32(0x8EFD5C) = eax;
    PUSH32(esp, 0x000E1AB9u); RECOMP_ABI_CALL(0x000E1040u, sub_000E1040); /* call 0x000E1040 */

loc_000E1AB9: ;
    PUSH32(esp, 0);
    eax = ebp;
    PUSH32(esp, 0x000E1AC2u); RECOMP_ABI_CALL(0x000E12B0u, sub_000E12B0); /* call 0x000E12B0 */

loc_000E1AC2: ;
    MEM32(0x8EFD84) = eax;
    PUSH32(esp, 1);
    eax = ebp;
    PUSH32(esp, 0x000E1AD0u); RECOMP_ABI_CALL(0x000E12B0u, sub_000E12B0); /* call 0x000E12B0 */

loc_000E1AD0: ;
    MEM32(0x8EFD88) = eax;
    PUSH32(esp, 2);
    eax = ebp;
    PUSH32(esp, 0x000E1ADEu); RECOMP_ABI_CALL(0x000E12B0u, sub_000E12B0); /* call 0x000E12B0 */

loc_000E1ADE: ;
    PUSH32(esp, 8);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    ebx = 0x8EFD9C;
    MEM32(0x8EFD8C) = eax;
    MEM32(0x8EFD98) = 0x2E;
    PUSH32(esp, 0x000E1B00u); RECOMP_ABI_CALL(0x000E1040u, sub_000E1040); /* call 0x000E1040 */

loc_000E1B00: ;
    ecx = MEM32(0x8F00F8);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x3C)) >> 32) & 1);
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    PUSH32(esp, 0x000E1B10u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1B10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1B27; /* je: equal / zero */

loc_000E1B14: ;
    ecx = MEM32(0x8F00F8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000E1B21u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1B21: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1B2A;

loc_000E1B27: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E1B2A: ;
    ecx = MEM32(0x8F00F8);
    PUSH32(esp, 3);
    MEM32(0x8EFDC0) = eax;
    PUSH32(esp, 0x000E1B3Cu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1B3C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1B53; /* je: equal / zero */

loc_000E1B40: ;
    ecx = MEM32(0x8F00F8);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000E1B4Du); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1B4D: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1B56;

loc_000E1B53: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E1B56: ;
    ecx = MEM32(0x8F00F8);
    PUSH32(esp, 5);
    MEM32(0x8EFDC4) = eax;
    PUSH32(esp, 0x000E1B68u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1B68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1B7F; /* je: equal / zero */

loc_000E1B6C: ;
    ecx = MEM32(0x8F00F8);
    PUSH32(esp, 5);
    PUSH32(esp, 0x000E1B79u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1B79: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1B82;

loc_000E1B7F: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E1B82: ;
    ecx = MEM32(0x8F00F8);
    PUSH32(esp, 1);
    MEM32(0x8EFDC8) = eax;
    PUSH32(esp, 0x000E1B94u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1B94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1BAB; /* je: equal / zero */

loc_000E1B98: ;
    ecx = MEM32(0x8F00F8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E1BA5u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1BA5: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1BAE;

loc_000E1BAB: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E1BAE: ;
    ecx = MEM32(0x8F00F8);
    PUSH32(esp, 2);
    MEM32(0x8EFDCC) = eax;
    PUSH32(esp, 0x000E1BC0u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1BC0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1BD7; /* je: equal / zero */

loc_000E1BC4: ;
    ecx = MEM32(0x8F00F8);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000E1BD1u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1BD1: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1BDA;

loc_000E1BD7: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E1BDA: ;
    MEM32(0x8EFDD0) = eax;
    eax = MEM32(0x8F0040);
    ecx = MEM32(eax + 8);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    PUSH32(esp, 8);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ebx = 0x8EFDE0;
    MEM32(0x8EFDD4) = edx;
    MEM32(0x8EFDDC) = 0x2F;
    PUSH32(esp, 0x000E1C0Eu); RECOMP_ABI_CALL(0x000E1040u, sub_000E1040); /* call 0x000E1040 */

loc_000E1C0E: ;
    ecx = MEM32(0x8F00FC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 4);
    PUSH32(esp, 0x000E1C1Eu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1C1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1C35; /* je: equal / zero */

loc_000E1C22: ;
    ecx = MEM32(0x8F00FC);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000E1C2Fu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1C2F: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1C3A;

loc_000E1C35: ;
    eax = 0xFFFFFFFEu;

loc_000E1C3A: ;
    ecx = MEM32(0x8F00FC);
    PUSH32(esp, 3);
    MEM32(0x8EFE04) = eax;
    PUSH32(esp, 0x000E1C4Cu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1C4C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1C63; /* je: equal / zero */

loc_000E1C50: ;
    ecx = MEM32(0x8F00FC);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000E1C5Du); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1C5D: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1C68;

loc_000E1C63: ;
    eax = 0xFFFFFFFEu;

loc_000E1C68: ;
    ecx = MEM32(0x8F00FC);
    PUSH32(esp, 5);
    MEM32(0x8EFE08) = eax;
    PUSH32(esp, 0x000E1C7Au); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1C7A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1C91; /* je: equal / zero */

loc_000E1C7E: ;
    ecx = MEM32(0x8F00FC);
    PUSH32(esp, 5);
    PUSH32(esp, 0x000E1C8Bu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1C8B: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1C96;

loc_000E1C91: ;
    eax = 0xFFFFFFFEu;

loc_000E1C96: ;
    ecx = MEM32(0x8F00FC);
    PUSH32(esp, 1);
    MEM32(0x8EFE0C) = eax;
    PUSH32(esp, 0x000E1CA8u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1CA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1CBF; /* je: equal / zero */

loc_000E1CAC: ;
    ecx = MEM32(0x8F00FC);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E1CB9u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1CB9: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1CC4;

loc_000E1CBF: ;
    eax = 0xFFFFFFFEu;

loc_000E1CC4: ;
    ecx = MEM32(0x8F00FC);
    PUSH32(esp, 2);
    MEM32(0x8EFE10) = eax;
    PUSH32(esp, 0x000E1CD6u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1CD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1CED; /* je: equal / zero */

loc_000E1CDA: ;
    ecx = MEM32(0x8F00FC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000E1CE7u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1CE7: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1CF2;

loc_000E1CED: ;
    eax = 0xFFFFFFFEu;

loc_000E1CF2: ;
    ecx = MEM32(0x8F0044);
    MEM32(0x8EFE14) = eax;
    edx = MEM32(ecx + 8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    ecx = MEM32(0x8F00FC);
    PUSH32(esp, 6);
    MEM32(0x8EFE18) = eax;
    PUSH32(esp, 0x000E1D16u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1D16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1D2D; /* je: equal / zero */

loc_000E1D1A: ;
    ecx = MEM32(0x8F00FC);
    PUSH32(esp, 6);
    PUSH32(esp, 0x000E1D27u); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1D27: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1D32;

loc_000E1D2D: ;
    eax = 0xFFFFFFFEu;

loc_000E1D32: ;
    MEM32(0x8EFE1C) = eax;
    eax = 0x29;
    MEM32(0x8EFE28) = eax;
    MEM32(0x8EFE2C) = eax;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8EFE24) = 0x28;
    MEM32(0x8EFE30) = 0x2A;
    MEM32(0x8EFE34) = 0x2B;
    MEM32(0x8EFE38) = 0x2C;
    MEM32(0x8EFE3C) = 0x2D;
    _fb = (uint32_t)(0x8F5C2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8F5C2C)) >> 32) & 1);
    eax = eax + 0x8F5C2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E1D90;

    /* nop */

loc_000E1D90: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000E1E39; /* jne: not equal / not zero */

loc_000E1D9B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x54)) >> 32) & 1);
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000E1D90; /* jl: less (signed <) */

loc_000E1DA4: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E1DA6: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    MEM32(0x8EFE84) = ecx;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x8F5C2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x8F5C2C)) >> 32) & 1);
    eax = eax + 0x8F5C2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E1DC0;

    /* nop */

loc_000E1DC0: ;
    edx = MEM32(eax);
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000E1E44; /* jne: not equal / not zero */

loc_000E1DC7: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x54)) >> 32) & 1);
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000E1DC0; /* jl: less (signed <) */

loc_000E1DD0: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E1DD2: ;
    ecx = MEM32(esp + 0x70);
    MEM32(0x8EFE88) = eax;
    eax = ebp + ebp * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = 0x8EFEB0;
    esi = 0x8EFE40;
    ebx = 0x12;

loc_000E1DF1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8EFE84)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x8EFE84) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1DFE; /* je: equal / zero */

loc_000E1DF9: ;
    MEM32(esi) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E1DFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x8EFE88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x8EFE88) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1E0B; /* je: equal / zero */

loc_000E1E06: ;
    MEM32(edx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E1E0B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E1DF1; /* jne: not equal / not zero */

loc_000E1E10: ;
    PUSH32(esp, 0x000E1E15u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_000E1E15: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_000E1E21; /* jns: not sign (positive) */

loc_000E1E1C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E1E21: ;
    ecx = MEM32(eax * 4 + 0x8F00F8);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000E1E2Fu); RECOMP_ABI_CALL(0x00029FBFu, sub_00029FBF); /* call 0x00029FBF */

loc_000E1E2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1E4D; /* je: equal / zero */

loc_000E1E33: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1E50;

loc_000E1E39: ;
    edx = MEM32(esp + 0x70);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(edx)) >> 32) & 1);
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E1DA6;

loc_000E1E44: ;
    eax = ebp + ebp * 4;
    eax = ecx + eax * 4;
    goto loc_000E1DD2;

loc_000E1E4D: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E1E50: ;
    ecx = (uint32_t)(int32_t)SMEM8(0x8F6F4C);
    edx = (uint32_t)(int32_t)SMEM8(0x8F6F4D);
    esi = MEM32(esp + 0x14);
    MEM32(0x8EFCD0) = eax;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6F4E);
    MEM32(0x8EFCD4) = ecx;
    MEM32(0x8EFCD8) = edx;
    MEM32(0x8EFCDC) = eax;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000E1E9E; /* je: equal / zero */

loc_000E1E8B: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1E9E; /* je: equal / zero */

loc_000E1E90: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E1E9E; /* jne: not equal / not zero */

loc_000E1E98: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1EC5;

loc_000E1E9E: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1EAB; /* je: equal / zero */

loc_000E1EA5: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1EAE;

loc_000E1EAB: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E1EAE: ;
    edx = MEM32(0x8EFCEC);
    PUSH32(esp, eax);
    eax = MEM32(0x8EFCE0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E1EC2u); RECOMP_ABI_CALL(0x00027CB0u, sub_00027CB0); /* call 0x00027CB0 */

loc_000E1EC2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E1EC5: ;
    MEM32(0x8EFCE4) = eax;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1EE4; /* je: equal / zero */

loc_000E1ED1: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1EE4; /* je: equal / zero */

loc_000E1ED6: ;
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E1EE4; /* jne: not equal / not zero */

loc_000E1EDE: ;
    eax = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    goto loc_000E1EFC;

loc_000E1EE4: ;
    ecx = MEM32(0x8EFCEC);
    edx = MEM32(0x8EFCE0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E1EF9u); RECOMP_ABI_CALL(0x00027CB0u, sub_00027CB0); /* call 0x00027CB0 */

loc_000E1EF9: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E1EFC: ;
    ecx = MEM32(esp + 0x10);
    MEM32(0x8EFCE8) = eax;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1F17; /* je: equal / zero */

loc_000E1F0C: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1F17; /* je: equal / zero */

loc_000E1F11: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1F3D;

loc_000E1F17: ;
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1F24; /* je: equal / zero */

loc_000E1F1E: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    goto loc_000E1F27;

loc_000E1F24: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E1F27: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    eax = MEM32(0x8EFD44);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E1F36u); RECOMP_ABI_CALL(0x00027CB0u, sub_00027CB0); /* call 0x00027CB0 */

loc_000E1F36: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E1F3D: ;
    MEM32(0x8EFD3C) = eax;
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1F5A; /* je: equal / zero */

loc_000E1F49: ;
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E1F5A; /* je: equal / zero */

loc_000E1F4E: ;
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    MEM32(0x8EFD40) = ecx;
    goto loc_000E1F72;

loc_000E1F5A: ;
    edx = MEM32(0x8EFD44);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E1F6Au); RECOMP_ABI_CALL(0x00027CB0u, sub_00027CB0); /* call 0x00027CB0 */

loc_000E1F6A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8EFD40) = eax;

loc_000E1F72: ;
    ecx = MEM32(0x8EB070);
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1FB3; /* je: equal / zero */

loc_000E1F7F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    MEM32(0x8EFDD8) = eax;
    ecx = MEM32(ecx + 0x58);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    MEM32(0x8EFE20) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000E1FA6; /* jne: not equal / not zero */

loc_000E1F99: ;
    MEM32(0x8EFCE0) = eax;
    MEM32(0x8EFEA4) = ecx;
    goto loc_000E1FC7;

loc_000E1FA6: ;
    MEM32(0x8EFCE0) = ecx;
    MEM32(0x8EFEA4) = eax;
    goto loc_000E1FC7;

loc_000E1FB3: ;
    MEM32(0x8EFDD8) = 0xFFFFFFFFu;
    MEM32(0x8EFE20) = 0xFFFFFFFEu;

loc_000E1FC7: ;
    eax = MEM32(0x895AE4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000E1FDC; /* je: equal / zero */

loc_000E1FD0: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    MEM32(0x8EFE90) = edx;
    goto loc_000E1FE6;

loc_000E1FDC: ;
    MEM32(0x8EFE90) = 0xFFFFFFFFu;

loc_000E1FE6: ;
    eax = (uint32_t)(int32_t)SMEM8(0x896178);
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(eax * 4 + 0x8F0040);
    edx = MEM32(ecx + 8);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x39);
    MEM32(0x8EFE8C) = eax;
    SET_LO16(eax, MEM16(0x8E9610));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000E201C; /* jl: less (signed <) */

loc_000E200D: ;
    eax = SX16(LO16(eax));
    ecx = MEM32(eax * 4 + 0x8E8EB8);
    _fa = (uint32_t)(MEM32(ecx + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x28), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000E206B; /* jne: not equal / not zero */

loc_000E201C: ;
    edx = MEM32(0x8EFE18);
    ecx = MEM32(0x8E8EB8);
    eax = MEM32(0x8EFDD4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x30);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E203Bu); RECOMP_ABI_CALL(0x00027CB0u, sub_00027CB0); /* call 0x00027CB0 */

loc_000E203B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x8EFE94) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000E2070; /* jne: not equal / not zero */

loc_000E2048: ;
    edx = MEM32(0x8E8EB8);
    ecx = MEM32(0x8EFDD4);
    PUSH32(esp, eax);
    eax = MEM32(0x8EFE18);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM8(edx + 0x30);
    PUSH32(esp, ecx);
    _cf = 0; /* logical op clears CF */
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2068u); RECOMP_ABI_CALL(0x00027CB0u, sub_00027CB0); /* call 0x00027CB0 */

loc_000E2068: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E206B: ;
    MEM32(0x8EFE94) = eax;

loc_000E2070: ;
    ecx = MEM32(0x8AC010);
    edx = MEM32(0x8AC014);
    esi = MEM32(esp + 0x70);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x8EFE98) = ecx;
    MEM32(0x8EFE9C) = edx;
    POP32(esp, ebx);
    /* nop */

loc_000E2090: ;
    PUSH32(esp, 0x000E2095u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_000E2095: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x12;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(0x8EFCE0);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(esi)) >> 32) & 1);
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(0x8EFEA8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2090; /* je: equal / zero */

loc_000E20AE: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x58)) >> 32) & 1);
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E2080
 * Original: 0x000E2080 - 0x000E20B3 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2080: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM32(0x8EFE98) = ecx;
    MEM32(0x8EFE9C) = edx;
    POP32(esp, ebx);
    /* nop */

loc_000E2090: ;
    PUSH32(esp, 0x000E2095u); RECOMP_ABI_CALL(0x005CC2E0u, sub_005CC2E0); /* call 0x005CC2E0 */

loc_000E2095: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x12;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(0x8EFCE0);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    MEM32(0x8EFEA8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E2090; /* je: equal / zero */

loc_000E20AE: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x58;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E2360
 * Original: 0x000E2360 - 0x000E2364 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2360(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E2360: ;
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2370
 * Original: 0x000E2370 - 0x000E2374 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2370(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E2370: ;
    fp_push(MEMF(ecx + 0x2C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2380
 * Original: 0x000E2380 - 0x000E2387 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2380(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E2380: ;
    fp_push(MEMF(ecx + 0x274)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2390
 * Original: 0x000E2390 - 0x000E2397 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2390(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E2390: ;
    fp_push(MEMF(ecx + 0x278)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E23A0
 * Original: 0x000E23A0 - 0x000E23A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E23A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E23A0: ;
    fp_push(MEMF(ecx + 0x480)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E23B0
 * Original: 0x000E23B0 - 0x000E23B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E23B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E23B0: ;
    fp_push(MEMF(0x7CC140)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E23C0
 * Original: 0x000E23C0 - 0x000E23C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E23C0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E23C0: ;
    fp_push(MEMF(0x7CC144)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E23D0
 * Original: 0x000E23D0 - 0x000E23DD (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E23D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E23D0: ;
    fp_push(MEMF(0x8E989C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7CC150)); /* fmul dword ptr [0x7cc150] */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E23E0
 * Original: 0x000E23E0 - 0x000E23E7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E23E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E23E0: ;
    fp_push(MEMF(0x7CC178)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E23F0
 * Original: 0x000E23F0 - 0x000E23F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E23F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E23F0: ;
    fp_push(MEMF(0x7CC17C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2400
 * Original: 0x000E2400 - 0x000E2407 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2400(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E2400: ;
    fp_push(MEMF(0x7CC170)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2410
 * Original: 0x000E2410 - 0x000E2427 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2410: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2421; /* je: equal / zero */

loc_000E2419: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2421; /* je: equal / zero */

loc_000E241E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000E2421: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2430
 * Original: 0x000E2430 - 0x000E2434 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2430(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E2430: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2440
 * Original: 0x000E2440 - 0x000E2449 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2440(void)
{

loc_000E2440: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2450
 * Original: 0x000E2450 - 0x000E245E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2450(void)
{

loc_000E2450: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2470
 * Original: 0x000E2470 - 0x000E2489 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2470: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2488; /* je: equal / zero */

loc_000E2476: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */

loc_000E2488: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2490
 * Original: 0x000E2490 - 0x000E2494 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2490(void)
{

loc_000E2490: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_000E24A0
 * Original: 0x000E24A0 - 0x000E24A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E24A0(void)
{

loc_000E24A0: ;
    eax = MEM32(ecx + 0x3C);
    esp += 4; return; /* ret */

}

/**
 * sub_000E24B0
 * Original: 0x000E24B0 - 0x000E24B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E24B0(void)
{

loc_000E24B0: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_000E24C0
 * Original: 0x000E24C0 - 0x000E24D2 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E24C0(void)
{

loc_000E24C0: ;
    MEM8(ecx + 0x3E0) = 0;
    MEM32(ecx + 0x3E8) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000E24E0
 * Original: 0x000E24E0 - 0x000E24E9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E24E0(void)
{

loc_000E24E0: ;
    eax = ecx;
    MEM32(eax) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_000E24F0
 * Original: 0x000E24F0 - 0x000E2537 (71 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E24F0(void)
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

loc_000E24F0: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x7AF57C)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2505; /* je: equal / zero */

loc_000E24FD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7BA2C4)); /* movss */

loc_000E2505: ;
    eax = MEM32(ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000E250Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E250Cu); } /* indirect call */
    }

loc_000E250F: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E251Cu); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_000E251C: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000E2533; /* jbe: below or equal (unsigned <=) */

loc_000E252F: ;
    SET_LO8(eax, 1);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000E2533: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2550
 * Original: 0x000E2550 - 0x000E25C1 (113 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2550: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E2572; /* jge: greater or equal (signed >=) */

loc_000E255A: ;
    eax = MEM32(0x8BFE50);
    ecx = 0x8BFE50;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000E2567u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2564u); } /* indirect call */
    }

loc_000E2567: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esi + 0xC) = eax;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */

loc_000E2572: ;
    ecx = MEM32(esi + 0x3C);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    eax = MEM32(0x8E8F84);
    _fa = (uint32_t)(MEM32(eax + 0xA8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xA8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E25A3; /* jne: not equal / not zero */

loc_000E2586: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    ecx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    MEM32(esi + 8) = ecx;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E25A3: ;
    edx = MEM32(0x8BFE50);
    ecx = 0x8BFE50;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000E25B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E25AEu); } /* indirect call */
    }

loc_000E25B1: ;
    _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_000E25BD; /* js: sign (negative) */

loc_000E25B6: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 8) = eax;

loc_000E25BD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E25E0
 * Original: 0x000E25E0 - 0x000E25E3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E25E0(void)
{

loc_000E25E0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E25F0
 * Original: 0x000E25F0 - 0x000E25F3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E25F0(void)
{

loc_000E25F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2600
 * Original: 0x000E2600 - 0x000E265E (94 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000E2600(void)
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

loc_000E2600: ;
    ecx = esi;
    PUSH32(esp, 0x000E2607u); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000E2607: ;
    fp_push(MEMF(0x7CC2AC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000E2619; /* jb: below (unsigned <) */

loc_000E2613: ;
    eax = 0x380;
    esp += 4; return; /* ret */

loc_000E2619: ;
    ecx = esi;
    PUSH32(esp, 0x000E2620u); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000E2620: ;
    fp_push(MEMF(0x7AA7E0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000E2632; /* jb: below (unsigned <) */

loc_000E262C: ;
    eax = 0x241;
    esp += 4; return; /* ret */

loc_000E2632: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E2644u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000E2644: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E265B; /* jl: less (signed <) */

loc_000E264B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E2655; /* jle: less or equal (signed <=) */

loc_000E2650: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E265B; /* jne: not equal / not zero */

loc_000E2655: ;
    eax = 0x37E;
    esp += 4; return; /* ret */

loc_000E265B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2680
 * Original: 0x000E2680 - 0x000E26CE (78 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2680: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CC2B0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AF5A0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AA7DC); /* addss */
    eax = MEM32(edi);
    ecx = edi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000E26A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E26A2u); } /* indirect call */
    }

loc_000E26A5: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(edi + 0x64));
    if (CMP_EQ(_fa, _fb)) goto loc_000E26BF; /* je: equal / zero */

loc_000E26B0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E26C3; /* jne: not equal / not zero */

loc_000E26B4: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp); /* subss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000E26BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E26B4; /* jne: not equal / not zero */

loc_000E26C3: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E26F0
 * Original: 0x000E26F0 - 0x000E26F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E26F0(void)
{

loc_000E26F0: ;
    MEM32(ecx) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2700
 * Original: 0x000E2700 - 0x000E2703 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2700(void)
{

loc_000E2700: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2710
 * Original: 0x000E2710 - 0x000E2713 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2710(void)
{

loc_000E2710: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2720
 * Original: 0x000E2720 - 0x000E2723 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2720(void)
{

loc_000E2720: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2730
 * Original: 0x000E2730 - 0x000E273A (10 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2730(void)
{

loc_000E2730: ;
    MEM32(ecx + 4) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2740
 * Original: 0x000E2740 - 0x000E2746 (6 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2740: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2750
 * Original: 0x000E2750 - 0x000E2754 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2750(void)
{

loc_000E2750: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_000E2760
 * Original: 0x000E2760 - 0x000E2768 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2760(void)
{

loc_000E2760: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2770
 * Original: 0x000E2770 - 0x000E2789 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2770: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC094) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x8AC094 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2783; /* je: equal / zero */

loc_000E2779: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2783; /* je: equal / zero */

loc_000E2780: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000E2783: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2790
 * Original: 0x000E2790 - 0x000E2799 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2790(void)
{

loc_000E2790: ;
    eax = ecx;
    MEM32(eax) = 0x7CC2B4;
    esp += 4; return; /* ret */

}

/**
 * sub_000E27A0
 * Original: 0x000E27A0 - 0x000E27A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E27A0(void)
{

loc_000E27A0: ;
    MEM32(ecx) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_000E27B0
 * Original: 0x000E27B0 - 0x000E27CF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E27B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E27B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CC298;
    if (TEST_Z(_fa, _fb)) goto loc_000E27C9; /* je: equal / zero */

loc_000E27C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E27C6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000E27C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E27C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E27E0
 * Original: 0x000E27E0 - 0x000E27FF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E27E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E27E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CC298;
    if (TEST_Z(_fa, _fb)) goto loc_000E27F9; /* je: equal / zero */

loc_000E27F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E27F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000E27F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E27F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2810
 * Original: 0x000E2810 - 0x000E2819 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2810(void)
{

loc_000E2810: ;
    eax = ecx;
    MEM32(eax) = 0x7CC2C8;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2820
 * Original: 0x000E2820 - 0x000E2827 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2820(void)
{

loc_000E2820: ;
    MEM32(ecx) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2830
 * Original: 0x000E2830 - 0x000E284F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2830: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CC298;
    if (TEST_Z(_fa, _fb)) goto loc_000E2849; /* je: equal / zero */

loc_000E2840: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E2846u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000E2846: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2849: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2860
 * Original: 0x000E2860 - 0x000E2869 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2860(void)
{

loc_000E2860: ;
    eax = ecx;
    MEM32(eax) = 0x7CC2DC;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2870
 * Original: 0x000E2870 - 0x000E2877 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2870(void)
{

loc_000E2870: ;
    MEM32(ecx) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2880
 * Original: 0x000E2880 - 0x000E289F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2880: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CC298;
    if (TEST_Z(_fa, _fb)) goto loc_000E2899; /* je: equal / zero */

loc_000E2890: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E2896u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000E2896: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2899: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E28B0
 * Original: 0x000E28B0 - 0x000E28B9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E28B0(void)
{

loc_000E28B0: ;
    eax = ecx;
    MEM32(eax) = 0x7CC2F0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E28C0
 * Original: 0x000E28C0 - 0x000E28C7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E28C0(void)
{

loc_000E28C0: ;
    MEM32(ecx) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_000E28D0
 * Original: 0x000E28D0 - 0x000E28EF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E28D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E28D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CC298;
    if (TEST_Z(_fa, _fb)) goto loc_000E28E9; /* je: equal / zero */

loc_000E28E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E28E6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000E28E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E28E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2900
 * Original: 0x000E2900 - 0x000E2909 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2900(void)
{

loc_000E2900: ;
    eax = ecx;
    MEM32(eax) = 0x7CC304;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2910
 * Original: 0x000E2910 - 0x000E2917 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2910(void)
{

loc_000E2910: ;
    MEM32(ecx) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2920
 * Original: 0x000E2920 - 0x000E293F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2920: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CC298;
    if (TEST_Z(_fa, _fb)) goto loc_000E2939; /* je: equal / zero */

loc_000E2930: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E2936u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000E2936: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2939: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E2950
 * Original: 0x000E2950 - 0x000E2959 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2950(void)
{

loc_000E2950: ;
    eax = ecx;
    MEM32(eax) = 0x7CC318;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2960
 * Original: 0x000E2960 - 0x000E2967 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2960(void)
{

loc_000E2960: ;
    MEM32(ecx) = 0x7CC298;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2970
 * Original: 0x000E2970 - 0x000E298F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E2970: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CC298;
    if (TEST_Z(_fa, _fb)) goto loc_000E2989; /* je: equal / zero */

loc_000E2980: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E2986u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000E2986: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E2989: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E29A0
 * Original: 0x000E29A0 - 0x000E2BEA (586 bytes, 201 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E29A0(void)
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

loc_000E29A0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    MEM8(esp + 0xB) = 0;
    PUSH32(esp, 0x000E29B1u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000E29B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2BE0; /* je: equal / zero */

loc_000E29B9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000E29C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E29BDu); } /* indirect call */
    }

loc_000E29C0: ;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E29D2u); RECOMP_ABI_CALL(0x00016235u, sub_00016235); /* call 0x00016235 */

loc_000E29D2: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E29DDu); RECOMP_ABI_CALL(0x00021B3Au, sub_00021B3A); /* call 0x00021B3A */

loc_000E29DD: ;
    ecx = MEM32(0x8E8F84);
    edx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    edi = eax;
    eax = esp + 0x24;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E29F7u); RECOMP_ABI_CALL(0x00016235u, sub_00016235); /* call 0x00016235 */

loc_000E29F7: ;
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E2A02u); RECOMP_ABI_CALL(0x00021B3Au, sub_00021B3A); /* call 0x00021B3A */

loc_000E2A02: ;
    edx = MEM32(esi + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x18)); /* movss */
    eax = MEM32(esi);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x000E2A1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2A1Au); } /* indirect call */
    }

loc_000E2A1D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2A30; /* je: equal / zero */

loc_000E2A21: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    goto loc_000E2A38;

loc_000E2A30: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */

loc_000E2A38: ;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E2A3E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_000E2A3A: ;
    SET_LO8(ebx, 1);
    goto loc_000E2A40;

loc_000E2A3E: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_000E2A40: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000E2A47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2A44u); } /* indirect call */
    }

loc_000E2A47: ;
    PUSH32(esp, eax);
    eax = MEM32(0x8E8F84);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2A53u); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_000E2A53: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2ABB; /* jne: not equal / not zero */

loc_000E2A5E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7ABE24)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E2AC4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x14)) */

loc_000E2A6D: ;
    ecx = MEM32(esi + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7A9980); /* comiss */
    if ((_fca > _fcb)) goto loc_000E2BE0; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7A9980)) */

loc_000E2A82: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000E2A89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2A86u); } /* indirect call */
    }

loc_000E2A89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2AA4; /* je: equal / zero */

loc_000E2A8D: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2A97u); RECOMP_ABI_CALL(0x0001F4A2u, sub_0001F4A2); /* call 0x0001F4A2 */

loc_000E2A97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0xB) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E2AA4: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E2AAEu); RECOMP_ABI_CALL(0x000329D5u, sub_000329D5); /* call 0x000329D5 */

loc_000E2AAE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0xB) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E2ABB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E2BE0; /* ja: above (unsigned >) */

loc_000E2AC4: ;
    { uint32_t _jt = MEM32(edi * 4 + 0xE2BEC); /* switch: 5 entries, 4 targets */
    if (_jt == 0x000E2ACBu) goto loc_000E2ACB;
    if (_jt == 0x000E2AE0u) goto loc_000E2AE0;
    if (_jt == 0x000E2B9Eu) goto loc_000E2B9E;
    if (_jt == 0x000E2BADu) goto loc_000E2BAD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000E2ACB: ;
    edx = MEM32(esi + 0x4C);
    xmm0 = XMM_SCALAR(MEMF(edx + 0x40)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7A9980); /* comiss */
    if ((_fca > _fcb)) goto loc_000E2BE0; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7A9980)) */

loc_000E2AE0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    edi = 0x8F95F4;
    if (CMP_NE(_fa, _fb)) goto loc_000E2AEE; /* jne: not equal / not zero */

loc_000E2AE9: ;
    edi = 0x8F95FC;

loc_000E2AEE: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x000E2AF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2AF2u); } /* indirect call */
    }

loc_000E2AF5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2B3F; /* je: equal / zero */

loc_000E2AF9: ;
    PUSH32(esp, 0x8F9600);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E2B0Du); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_000E2B0D: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x000E2B1Cu); RECOMP_ABI_CALL(0x00012EAAu, sub_00012EAA); /* call 0x00012EAA */

loc_000E2B1C: ;
    PUSH32(esp, ecx);
    ecx = esp;
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E2B2Fu); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_000E2B2F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    goto loc_000E2B83;

loc_000E2B3F: ;
    PUSH32(esp, 0x8F9608);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E2B53u); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_000E2B53: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    PUSH32(esp, 0x000E2B62u); RECOMP_ABI_CALL(0x00012EAAu, sub_00012EAA); /* call 0x00012EAA */

loc_000E2B62: ;
    PUSH32(esp, ecx);
    eax = esp;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2B75u); RECOMP_ABI_CALL(0x0001E796u, sub_0001E796); /* call 0x0001E796 */

loc_000E2B75: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);

loc_000E2B83: ;
    PUSH32(esp, 0x000E2B88u); RECOMP_ABI_CALL(0x0002F109u, sub_0002F109); /* call 0x0002F109 */

loc_000E2B88: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2B91u); RECOMP_ABI_CALL(0x00020E1Fu, sub_00020E1F); /* call 0x00020E1F */

loc_000E2B91: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0xB) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E2B9E: ;
    MEM8(esp + 0xB) = 1;
    SET_LO8(eax, MEM8(esp + 0xB));
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E2BAD: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000E2BB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2BB1u); } /* indirect call */
    }

loc_000E2BB4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2BCF; /* je: equal / zero */

loc_000E2BB8: ;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E2BC2u); RECOMP_ABI_CALL(0x000329D5u, sub_000329D5); /* call 0x000329D5 */

loc_000E2BC2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0xB) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E2BCF: ;
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E2BD9u); RECOMP_ABI_CALL(0x0001F4A2u, sub_0001F4A2); /* call 0x0001F4A2 */

loc_000E2BD9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esp + 0xB) = LO8(eax);

loc_000E2BE0: ;
    SET_LO8(eax, MEM8(esp + 0xB));
    POP32(esp, edi);
    POP32(esp, ebx);
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
 * sub_000E2BEA
 * Original: 0x000E2BEA - 0x000E2CA0 (182 bytes, 167 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2BEA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2BEA: ;
    edi = edi;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2CA0
 * Original: 0x000E2CA0 - 0x000E2D84 (228 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2CA0(void)
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

loc_000E2CA0: ;
    ecx = esi;
    PUSH32(esp, 0x000E2CA7u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000E2CA7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2CBA; /* jne: not equal / not zero */

loc_000E2CAB: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E2CBD; /* jge: greater or equal (signed >=) */

loc_000E2CBA: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000E2CBD: ;
    ecx = MEM32(eax * 4 + 0x8E9058);
    edx = MEM32(ecx + 0xF0);
    eax = MEM32(edx + 0x4C);
    PUSH32(esp, edi);
    edi = 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2CDB; /* je: equal / zero */

loc_000E2CD7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_000E2CDB: ;
    ecx = MEM32(0x8EACE4);
    PUSH32(esp, 0x000E2CE6u); RECOMP_ABI_CALL(0x0002A181u, sub_0002A181); /* call 0x0002A181 */

loc_000E2CE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D00; /* je: equal / zero */

loc_000E2CEA: ;
    ecx = MEM32(0x8EACE4);
    PUSH32(esp, 0x000E2CF5u); RECOMP_ABI_CALL(0x0002A181u, sub_0002A181); /* call 0x0002A181 */

loc_000E2CF5: ;
    eax = MEM32(eax + 0xF0);
    _fa = (uint32_t)(MEM32(eax + 0x4C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4C), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2CD7; /* jne: not equal / not zero */

loc_000E2D00: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x000E2D07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2D04u); } /* indirect call */
    }

loc_000E2D07: ;
    fp_push(MEMF(0x7B1DA8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000E2CD7; /* ja: above (unsigned >) */

loc_000E2D13: ;
    eax = MEM32(esi + 0xF0);
    ecx = MEM32(eax + 0x4C);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x000E2D25u); RECOMP_ABI_CALL(0x000378DBu, sub_000378DB); /* call 0x000378DB */

loc_000E2D25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E2D7F; /* je: equal / zero */

loc_000E2D2C: ;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E2D3Fu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000E2D3F: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E2D4E; /* jl: less (signed <) */

loc_000E2D49: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E2D7D; /* jle: less or equal (signed <=) */

loc_000E2D4E: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x000E2D55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2D52u); } /* indirect call */
    }

loc_000E2D55: ;
    eax = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E2D62u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000E2D62: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E2D7F; /* jl: less (signed <) */

loc_000E2D6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2D7F; /* jg: greater (signed >) */

loc_000E2D6F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E2D7F; /* jl: less (signed <) */

loc_000E2D73: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E2D7D; /* jle: less or equal (signed <=) */

loc_000E2D78: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2D7F; /* jne: not equal / not zero */

loc_000E2D7D: ;
    SET_LO8(ebx, 1);

loc_000E2D7F: ;
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2DC0
 * Original: 0x000E2DC0 - 0x000E2DCC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000E2DC0: ;
    PUSH32(esp, 0x000E2DC5u); RECOMP_ABI_CALL(0x000E2CA0u, sub_000E2CA0); /* call 0x000E2CA0 */

loc_000E2DC5: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000E2DD0
 * Original: 0x000E2DD0 - 0x000E2DFF (47 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2DD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E2DD0: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    edx = MEM32(ecx * 4 + 0x8F0040);
    SET_LO8(ecx, MEM8(edx + 0x130));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E2DFE; /* jg: greater (signed >) */

loc_000E2DE9: ;
    ecx = MEM32(eax + 0x3D8);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2DFE; /* jne: not equal / not zero */

loc_000E2DF5: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000320D4(); return; /* tail jmp 0x000320D4 */

loc_000E2DFE: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E2E10
 * Original: 0x000E2E10 - 0x000E2E86 (118 bytes, 33 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000E2E10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x000E2E1Au); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000E2E1A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2E7A; /* jne: not equal / not zero */

loc_000E2E1E: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E2E7A; /* jge: greater or equal (signed >=) */

loc_000E2E28: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2E6E; /* jne: not equal / not zero */

loc_000E2E2F: ;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 8;
    MEM32(esp + 8) = 0x7AF0D4;
    PUSH32(esp, 0x000E2E46u); RECOMP_ABI_CALL(0x0002128Eu, sub_0002128E); /* call 0x0002128E */

loc_000E2E46: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000E2E61; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000E2E5A: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_000E2E61: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E2E7A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E2E6E: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9918)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E2E7A: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9914)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E2EB0
 * Original: 0x000E2EB0 - 0x000E2F1C (108 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2EB0(void)
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

loc_000E2EB0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000E2EB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2EB5u); } /* indirect call */
    }

loc_000E2EB8: ;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    edx = edi;
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000E2ED7u); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000E2ED7: ;
    edx = MEM32(esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7CC2B0)); /* fmul dword ptr [0x7cc2b0] */
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AF5A0)); /* fmul dword ptr [0x7af5a0] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AA7DC)); /* fadd dword ptr [0x7aa7dc] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000E2EF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2EF0u); } /* indirect call */
    }

loc_000E2EF3: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x64));
    if (CMP_EQ(_fa, _fb)) goto loc_000E2F0D; /* je: equal / zero */

loc_000E2EFE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2F11; /* jne: not equal / not zero */

loc_000E2F02: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp); /* subss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000E2F0D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2F02; /* jne: not equal / not zero */

loc_000E2F11: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E2F40
 * Original: 0x000E2F40 - 0x000E3008 (200 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E2F40(void)
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

loc_000E2F40: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0xA8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E2F8E; /* jl: less (signed <) */

loc_000E2F53: ;
    eax = MEM32(eax * 4 + 0x8E8FA8);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    edx = edi;
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(edx + 8) = ecx;
    PUSH32(esp, 0x000E2F7Au); RECOMP_ABI_CALL(0x0001BF82u, sub_0001BF82); /* call 0x0001BF82 */

loc_000E2F7A: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
    goto loc_000E2FB1;

loc_000E2F8E: ;
    edx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx);
    eax = edi;
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x000E2FADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2FAAu); } /* indirect call */
    }

loc_000E2FAD: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_000E2FB1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CC2B0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AF5A0); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7AA7DC); /* addss */
    edx = MEM32(esi);
    ecx = esi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x000E2FDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E2FD8u); } /* indirect call */
    }

loc_000E2FDB: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(esi + 0x64));
    if (CMP_EQ(_fa, _fb)) goto loc_000E2FF7; /* je: equal / zero */

loc_000E2FE6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2FFB; /* jne: not equal / not zero */

loc_000E2FEA: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esp); /* subss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E2FF7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E2FEA; /* jne: not equal / not zero */

loc_000E2FFB: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
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
 * sub_000E3040
 * Original: 0x000E3040 - 0x000E323B (507 bytes, 135 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3040(void)
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

loc_000E3040: ;
    xmm0 = XMM_SCALAR(MEMF(0x7CC144)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    eax = MEM32(esi + 0xF0);
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E308D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x1C)) */

loc_000E3069: ;
    MEM32(ebx) = 1;

loc_000E306F: ;
    SET_LO8(ecx, MEM8(eax + 0x53));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3235; /* je: equal / zero */

loc_000E307A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7CC140)); /* movss */
    POP32(esp, esi);
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E308D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7CC1A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x1C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E30A3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x1C)) */

loc_000E309B: ;
    MEM32(ebx) = 2;
    goto loc_000E306F;

loc_000E30A3: ;
    ecx = esi;
    PUSH32(esp, 0x000E30AAu); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000E30AA: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7CC2AC)); /* fsub dword ptr [0x7cc2ac] */
    MEMF(esp + 0x20) = (float)fp_top(); /* fst */
    fp_push(MEMF(0x7AA840)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000E30C9; /* jbe: below or equal (unsigned <=) */

loc_000E30C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */

loc_000E30C9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E30D9u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000E30D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3192; /* je: equal / zero */

loc_000E30E1: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = 0x7AF0D4;
    PUSH32(esp, 0x000E30F9u); RECOMP_ABI_CALL(0x0002128Eu, sub_0002128E); /* call 0x0002128E */

loc_000E30F9: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AD3C8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E317D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AD3C8)) */

loc_000E3106: ;
    edi = MEM32(esi + 0x20);
    xmm1 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E311B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E3116: ;
    xmm0 = xmm1; /* movaps */
    goto loc_000E3120;

loc_000E311B: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x38); /* subss */

loc_000E3120: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7CC1A0); /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x7AF0E4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E317D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E3135: ;
    ecx = MEM32(edi + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E313Eu); RECOMP_ABI_CALL(0x00013648u, sub_00013648); /* call 0x00013648 */

loc_000E313E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7CC1A0)); /* fmul dword ptr [0x7cc1a0] */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x30)); /* movss */
    edx = esp + 0x18;
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, esi);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E3167u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000E3167: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E317D; /* jl: less (signed <) */

loc_000E316E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E3178; /* jle: less or equal (signed <=) */

loc_000E3173: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E317D; /* jne: not equal / not zero */

loc_000E3178: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_000E318B;

loc_000E317D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CC334); /* mulss */

loc_000E318B: ;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    POP32(esp, edi);

loc_000E3192: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7CC330)); /* fmul dword ptr [0x7cc330] */
    PUSH32(esp, 7);
    ecx = esi;
    MEMF(ebx + 4) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x7CC32C)); /* fsub dword ptr [0x7cc32c] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000E31BAu); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_000E31BA: ;
    PUSH32(esp, 6);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    PUSH32(esp, 0x000E31C7u); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_000E31C7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    PUSH32(esp, 5);
    ecx = esi;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000E31DEu); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_000E31DE: ;
    PUSH32(esp, 4);
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esi;
    PUSH32(esp, 0x000E31EBu); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_000E31EB: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    xmm0 = XMM_SCALAR(MEMF(0x7CC2AC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x20); /* comiss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x24)); /* fsub dword ptr [esp + 0x24] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E3218; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x20)) */

loc_000E320C: ;
    POP32(esp, esi);
    MEM32(ebx) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E3218: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x24); /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000E320C; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E322F: ;
    MEM32(ebx) = 2;

loc_000E3235: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_000E32C0
 * Original: 0x000E32C0 - 0x000E3375 (181 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E32C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E32C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3358; /* je: equal / zero */

loc_000E32D0: ;
    ecx = MEM32(eax + 0x248);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3358; /* jne: not equal / not zero */

loc_000E32DA: ;
    ecx = MEM32(0x8EADA0);
    edx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3358; /* jne: not equal / not zero */

loc_000E32E7: ;
    edx = MEM32(eax + 0x1D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E32F3u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000E32F3: ;
    eax = MEM32(eax + 0x28);
    edx = MEM32(eax);
    ecx = eax + 0xC;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3358; /* jne: not equal / not zero */

loc_000E3302: ;
    ecx = MEM32(eax + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3358; /* je: equal / zero */

loc_000E3309: ;
    eax = MEM32(esi);
    edx = esi + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3319; /* je: equal / zero */

loc_000E3312: ;
    ecx = esi + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E333B; /* jne: not equal / not zero */

loc_000E3319: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3328u); RECOMP_ABI_CALL(0x0001B2F3u, sub_0001B2F3); /* call 0x0001B2F3 */

loc_000E3328: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E333B; /* jne: not equal / not zero */

loc_000E332C: ;
    MEM32(esi + 4) = 0x8AC09C;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014D18(); return; /* tail jmp 0x00014D18 */

loc_000E333B: ;
    MEM32(esi + 8) = 2;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    MEM32(esi + 4) = 0x8AC088;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014D18(); return; /* tail jmp 0x00014D18 */

loc_000E3358: ;
    MEM32(esi + 8) = 2;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;
    MEM32(esi + 4) = 0x8AC088;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014D18(); return; /* tail jmp 0x00014D18 */

}

/**
 * sub_000E33B0
 * Original: 0x000E33B0 - 0x000E35E1 (561 bytes, 164 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E33B0(void)
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

loc_000E33B0: ;
    eax = MEM32(0x8E8F84);
    eax = MEM32(eax + 0xA8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000E33D7; /* jl: less (signed <) */

loc_000E33C5: ;
    ecx = MEM32(eax * 4 + 0x8E8EB8);
    edx = MEM32(esi + 0x3C);
    SET_LO8(eax, MEM8(ecx + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edx + 0x30)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edx + 0x30) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E33F1; /* jne: not equal / not zero */

loc_000E33D7: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x463B8000);
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x000E33E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E33E1u); } /* indirect call */
    }

loc_000E33E4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E33F1; /* je: equal / zero */

loc_000E33E8: ;
    ecx = MEM32(esi + 0x3C);
    _fa = (uint32_t)(MEM32(ecx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x58), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E33FA; /* jne: not equal / not zero */

loc_000E33F1: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E33FA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E3401u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000E3401: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebp = MEM32(esp + 0x18);
    ebx = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3597; /* je: equal / zero */

loc_000E3412: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x3C);
    SET_LO8(eax, MEM8(edi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E3596; /* jge: greater or equal (signed >=) */

loc_000E3424: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3596; /* je: equal / zero */

loc_000E342D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E347E; /* je: equal / zero */

loc_000E3433: ;
    ecx = esi + 0x2C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E344F; /* je: equal / zero */

loc_000E343A: ;
    edx = esi + 0x24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E344F; /* je: equal / zero */

loc_000E3441: ;
    ecx = esi + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E344F; /* je: equal / zero */

loc_000E3448: ;
    edx = esi + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E347E; /* jne: not equal / not zero */

loc_000E344F: ;
    ecx = MEM32(edi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x000E3457u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E3454u); } /* indirect call */
    }

loc_000E3457: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(edi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000E3463u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E3460u); } /* indirect call */
    }

loc_000E3463: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7ABD64)); /* fmul dword ptr [0x7abd64] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000E3596; /* jb: below (unsigned <) */

loc_000E3479: ;
    goto loc_000E358C;

loc_000E347E: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E349Fu); RECOMP_ABI_CALL(0x000348C0u, sub_000348C0); /* call 0x000348C0 */

loc_000E349F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E3596; /* ja: above (unsigned >) */

loc_000E34AB: ;
    ecx = ZX8(MEM8(ebp + 0xE35F0));
    { uint32_t _jt = MEM32(ecx * 4 + 0xE35E4); /* switch: 3 entries, 3 targets */
    if (_jt == 0x000E34B9u) goto loc_000E34B9;
    if (_jt == 0x000E351Cu) goto loc_000E351C;
    if (_jt == 0x000E3596u) goto loc_000E3596;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000E34B9: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3596; /* jne: not equal / not zero */

loc_000E34C3: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax + 0xF0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E34D2u); RECOMP_ABI_CALL(0x0001C6B2u, sub_0001C6B2); /* call 0x0001C6B2 */

loc_000E34D2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CC16C); /* mulss */
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E34EDu); RECOMP_ABI_CALL(0x0003199Fu, sub_0003199F); /* call 0x0003199F */

loc_000E34ED: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(0x8E989C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CC150); /* mulss */
    edi = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    PUSH32(esp, 0x21A);
    goto loc_000E357A;

loc_000E351C: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E358C; /* je: equal / zero */

loc_000E3523: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax + 0xF0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E3532u); RECOMP_ABI_CALL(0x0001C6B2u, sub_0001C6B2); /* call 0x0001C6B2 */

loc_000E3532: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CC16C); /* mulss */
    PUSH32(esp, ecx);
    ecx = eax;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E354Du); RECOMP_ABI_CALL(0x0003199Fu, sub_0003199F); /* call 0x0003199F */

loc_000E354D: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    eax = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    xmm0 = XMM_SCALAR(MEMF(0x8E989C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CC154); /* mulss */
    edi = eax;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    eax = (int32_t)MEMF(esp + 0x1C); /* cvttss2si */
    PUSH32(esp, 0x236);

loc_000E357A: ;
    PUSH32(esp, 0x7CC338);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3585u); RECOMP_ABI_CALL(0x00028B2Eu, sub_00028B2E); /* call 0x00028B2E */

loc_000E3585: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E3596; /* jle: less or equal (signed <=) */

loc_000E358C: ;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = 0xFFFFFFFFu;

loc_000E3596: ;
    POP32(esp, edi);

loc_000E3597: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E35D6; /* jne: not equal / not zero */

loc_000E359C: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E35AAu); RECOMP_ABI_CALL(0x0002DE1Cu, sub_0002DE1C); /* call 0x0002DE1C */

loc_000E35AA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E35CB; /* je: equal / zero */

loc_000E35B1: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E35D6; /* je: equal / zero */

loc_000E35B5: ;
    esi = MEM32(esi + 0x3C);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E35C4u); RECOMP_ABI_CALL(0x0002DE1Cu, sub_0002DE1C); /* call 0x0002DE1C */

loc_000E35C4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E35D6; /* jne: not equal / not zero */

loc_000E35CB: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_000E35D6: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
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
 * sub_000E3790
 * Original: 0x000E3790 - 0x000E383C (172 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3790: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E37AD; /* je: equal / zero */

loc_000E379B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */

loc_000E37AD: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000E37B6u); RECOMP_ABI_CALL(0x00030F68u, sub_00030F68); /* call 0x00030F68 */

loc_000E37B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E37C8; /* jne: not equal / not zero */

loc_000E37BA: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E37F5; /* je: equal / zero */

loc_000E37C2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E37D3; /* je: equal / zero */

loc_000E37C5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E3838; /* jne: not equal / not zero */

loc_000E37C8: ;
    ecx = esi;
    PUSH32(esp, 0x000E37CFu); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E37CF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E37D3: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E37DCu); RECOMP_ABI_CALL(0x0003594Bu, sub_0003594B); /* call 0x0003594B */

loc_000E37DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000E382C; /* je: equal / zero */

loc_000E37E6: ;
    eax = esi + 0x14;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000E37F1u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E37F1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E37F5: ;
    edx = MEM32(0x8E9B20);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E3804u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E3804: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3819; /* je: equal / zero */

loc_000E3808: ;
    eax = esi + 0x2C;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000E3815u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3815: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E3819: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3822u); RECOMP_ABI_CALL(0x0003594Bu, sub_0003594B); /* call 0x0003594B */

loc_000E3822: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3838; /* jne: not equal / not zero */

loc_000E382A: ;
    ecx = esi;

loc_000E382C: ;
    MEM32(esi + 4) = 0x8AC098;
    PUSH32(esp, 0x000E3838u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3838: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3870
 * Original: 0x000E3870 - 0x000E38AC (60 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E38A1; /* je: equal / zero */

loc_000E387D: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    ecx = MEM32(esi + 0x3C);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(0x8E9B20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E389Du); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E389D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E38A8; /* je: equal / zero */

loc_000E38A1: ;
    ecx = esi;
    PUSH32(esp, 0x000E38A8u); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E38A8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E38C0
 * Original: 0x000E38C0 - 0x000E3929 (105 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E38C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E38C0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E38DD; /* je: equal / zero */

loc_000E38CB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */

loc_000E38DD: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000E38E6u); RECOMP_ABI_CALL(0x00030F68u, sub_00030F68); /* call 0x00030F68 */

loc_000E38E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E38FB; /* jne: not equal / not zero */

loc_000E38EA: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3925; /* jl: less (signed <) */

loc_000E38F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E3906; /* jle: less or equal (signed <=) */

loc_000E38F6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3925; /* jne: not equal / not zero */

loc_000E38FB: ;
    ecx = esi;
    PUSH32(esp, 0x000E3902u); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E3902: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E3906: ;
    eax = MEM32(0x8E9B20);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3914u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E3914: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3925; /* je: equal / zero */

loc_000E3918: ;
    ecx = esi + 0x34;
    MEM32(esi + 4) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000E3925u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3925: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3950
 * Original: 0x000E3950 - 0x000E3A4A (250 bytes, 93 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3950: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), 2 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3971; /* je: equal / zero */

loc_000E395F: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    MEMF(edi + 0x10) = xmm0.f[0]; /* movss */

loc_000E3971: ;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(edi + 0x3C);
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x000E3980u); RECOMP_ABI_CALL(0x00030F68u, sub_00030F68); /* call 0x00030F68 */

loc_000E3980: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E39C1; /* jne: not equal / not zero */

loc_000E3984: ;
    eax = MEM32(0x8E993C);
    ecx = MEM32(esi + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E39C1; /* jg: greater (signed >) */

loc_000E3999: ;
    eax = MEM32(0x8E9B20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000E39A6u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E39A6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E39B4; /* je: equal / zero */

loc_000E39AC: ;
    _fa = (uint32_t)(MEM8(ebx + 0x1DC)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x1DC), LO8(ecx) (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E39C1; /* jl: less (signed <) */

loc_000E39B4: ;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E3A16; /* je: equal / zero */

loc_000E39BB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E39CE; /* je: equal / zero */

loc_000E39BE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E39C8; /* jne: not equal / not zero */

loc_000E39C1: ;
    ecx = edi;
    PUSH32(esp, 0x000E39C8u); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E39C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E39CE: ;
    MEM32(esi + 4) = ecx;
    edx = MEM32(0x8E9B20);
    ecx = MEM32(edi + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E39E0u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E39E0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E39C8; /* je: equal / zero */

loc_000E39E4: ;
    esi = MEM32(edi + 0x3C);
    PUSH32(esp, 0x000E39ECu); RECOMP_ABI_CALL(0x000E2CA0u, sub_000E2CA0); /* call 0x000E2CA0 */

loc_000E39EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3A03; /* jne: not equal / not zero */

loc_000E39F0: ;
    eax = edi + 0x24;
    ecx = edi;
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x000E39FDu); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E39FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E3A03: ;
    ecx = edi + 0x34;
    MEM32(edi + 4) = ecx;
    ecx = edi;
    PUSH32(esp, 0x000E3A10u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3A10: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E3A16: ;
    MEM32(esi + 4) = ecx;
    edx = MEM32(0x8E9B20);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x000E3A27u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E3A27: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E39C8; /* je: equal / zero */

loc_000E3A2B: ;
    esi = MEM32(edi + 0x3C);
    PUSH32(esp, 0x000E3A33u); RECOMP_ABI_CALL(0x000E2CA0u, sub_000E2CA0); /* call 0x000E2CA0 */

loc_000E3A33: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3A03; /* jne: not equal / not zero */

loc_000E3A37: ;
    eax = edi + 0x2C;
    ecx = edi;
    MEM32(edi + 4) = eax;
    PUSH32(esp, 0x000E3A44u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3A44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3A90
 * Original: 0x000E3A90 - 0x000E3B5F (207 bytes, 75 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3A90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3AB1; /* je: equal / zero */

loc_000E3A9F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */

loc_000E3AB1: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(esi + 0x3C);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x000E3AC0u); RECOMP_ABI_CALL(0x00030F68u, sub_00030F68); /* call 0x00030F68 */

loc_000E3AC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3B02; /* jne: not equal / not zero */

loc_000E3AC4: ;
    eax = MEM32(0x8E993C);
    ecx = MEM32(edi + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E3B02; /* jg: greater (signed >) */

loc_000E3AD9: ;
    eax = MEM32(0x8E9B20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000E3AE6u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E3AE6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3AF4; /* je: equal / zero */

loc_000E3AEA: ;
    SET_LO8(eax, MEM8(ebx + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3B02; /* jl: less (signed <) */

loc_000E3AF4: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E3B33; /* je: equal / zero */

loc_000E3AFC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E3B0F; /* je: equal / zero */

loc_000E3AFF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E3B09; /* jne: not equal / not zero */

loc_000E3B02: ;
    ecx = esi;
    PUSH32(esp, 0x000E3B09u); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E3B09: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E3B0F: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3B18u); RECOMP_ABI_CALL(0x0003594Bu, sub_0003594B); /* call 0x0003594B */

loc_000E3B18: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3B4B; /* je: equal / zero */

loc_000E3B20: ;
    ecx = esi + 0x14;
    MEM32(esi + 4) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000E3B2Du); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3B2D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E3B33: ;
    MEM32(edi + 4) = 0;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3B43u); RECOMP_ABI_CALL(0x0003594Bu, sub_0003594B); /* call 0x0003594B */

loc_000E3B43: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3B09; /* jne: not equal / not zero */

loc_000E3B4B: ;
    ecx = esi;
    MEM32(esi + 4) = 0x8AC098;
    PUSH32(esp, 0x000E3B59u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3B59: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3BA0
 * Original: 0x000E3BA0 - 0x000E3C67 (199 bytes, 62 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3BA0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3BBD; /* je: equal / zero */

loc_000E3BAB: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */

loc_000E3BBD: ;
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x000E3BC6u); RECOMP_ABI_CALL(0x00030F68u, sub_00030F68); /* call 0x00030F68 */

loc_000E3BC6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3C5C; /* jne: not equal / not zero */

loc_000E3BCE: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3C5C; /* je: equal / zero */

loc_000E3BD8: ;
    eax = MEM32(0x8E9B20);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3BE6u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E3BE6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3C39; /* je: equal / zero */

loc_000E3BEA: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x000E3BF5u); RECOMP_ABI_CALL(0x000E24F0u, sub_000E24F0); /* call 0x000E24F0 */

loc_000E3BF5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3C28; /* je: equal / zero */

loc_000E3BF9: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3C12; /* jne: not equal / not zero */

loc_000E3C00: ;
    ecx = esi;
    MEM32(esi + 4) = 0x8AC08C;
    PUSH32(esp, 0x000E3C0Eu); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3C0E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E3C12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3C63; /* jne: not equal / not zero */

loc_000E3C17: ;
    ecx = esi + 0x14;
    MEM32(esi + 4) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000E3C24u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3C24: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E3C28: ;
    edx = esi + 0x1C;
    ecx = esi;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x000E3C35u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3C35: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E3C39: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3C42u); RECOMP_ABI_CALL(0x0003594Bu, sub_0003594B); /* call 0x0003594B */

loc_000E3C42: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3C63; /* jne: not equal / not zero */

loc_000E3C4A: ;
    ecx = esi;
    MEM32(esi + 4) = 0x8AC098;
    PUSH32(esp, 0x000E3C58u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3C58: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E3C5C: ;
    ecx = esi;
    PUSH32(esp, 0x000E3C63u); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E3C63: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3CA0
 * Original: 0x000E3CA0 - 0x000E3DBA (282 bytes, 95 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3CC1; /* je: equal / zero */

loc_000E3CAF: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */

loc_000E3CC1: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(esi + 0x3C);
    PUSH32(esp, 3);
    ecx = esi;
    PUSH32(esp, 0x000E3CD0u); RECOMP_ABI_CALL(0x00030F68u, sub_00030F68); /* call 0x00030F68 */

loc_000E3CD0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3DAD; /* jne: not equal / not zero */

loc_000E3CD8: ;
    eax = MEM32(0x8E993C);
    ecx = MEM32(edi + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E3DAD; /* jg: greater (signed >) */

loc_000E3CF1: ;
    eax = MEM32(0x8E9B20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000E3CFEu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E3CFE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3D10; /* je: equal / zero */

loc_000E3D02: ;
    SET_LO8(eax, MEM8(ebx + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3DAD; /* jl: less (signed <) */

loc_000E3D10: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3DAD; /* je: equal / zero */

loc_000E3D1A: ;
    MEM32(edi + 4) = 0;
    ecx = MEM32(0x8E9B20);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x000E3D2Fu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E3D2F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3D88; /* je: equal / zero */

loc_000E3D33: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x000E3D3Eu); RECOMP_ABI_CALL(0x000E24F0u, sub_000E24F0); /* call 0x000E24F0 */

loc_000E3D3E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3D75; /* je: equal / zero */

loc_000E3D42: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3D5D; /* jne: not equal / not zero */

loc_000E3D49: ;
    ecx = esi;
    MEM32(esi + 4) = 0x8AC08C;
    PUSH32(esp, 0x000E3D57u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3D57: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E3D5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3DB4; /* jne: not equal / not zero */

loc_000E3D62: ;
    edx = esi + 0x14;
    ecx = esi;
    MEM32(esi + 4) = edx;
    PUSH32(esp, 0x000E3D6Fu); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3D6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E3D75: ;
    eax = esi + 0x1C;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000E3D82u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3D82: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E3D88: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3D91u); RECOMP_ABI_CALL(0x0003594Bu, sub_0003594B); /* call 0x0003594B */

loc_000E3D91: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3DB4; /* jne: not equal / not zero */

loc_000E3D99: ;
    ecx = esi;
    MEM32(esi + 4) = 0x8AC098;
    PUSH32(esp, 0x000E3DA7u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3DA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E3DAD: ;
    ecx = esi;
    PUSH32(esp, 0x000E3DB4u); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E3DB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E3E00
 * Original: 0x000E3E00 - 0x000E3EEF (239 bytes, 82 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3E00(void)
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

loc_000E3E00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3E20; /* je: equal / zero */

loc_000E3E0E: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */

loc_000E3E20: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, ebx);
    ebx = 2;
    PUSH32(esp, 0x000E3E31u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000E3E31: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3E50; /* jne: not equal / not zero */

loc_000E3E35: ;
    eax = MEM32(0x8E99C8);
    ecx = MEM32(esi + 0x3C);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x000E3E46u); RECOMP_ABI_CALL(0x0001C94Bu, sub_0001C94B); /* call 0x0001C94B */

loc_000E3E46: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000E3E5B; /* jbe: below or equal (unsigned <=) */

loc_000E3E50: ;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), 6 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E3E5B; /* jge: greater or equal (signed >=) */

loc_000E3E56: ;
    ebx = 1;

loc_000E3E5B: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x000E3E63u); RECOMP_ABI_CALL(0x00030F68u, sub_00030F68); /* call 0x00030F68 */

loc_000E3E63: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_000E3E76; /* jne: not equal / not zero */

loc_000E3E68: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E3ECB; /* je: equal / zero */

loc_000E3E70: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E3E82; /* je: equal / zero */

loc_000E3E73: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E3EEA; /* jne: not equal / not zero */

loc_000E3E76: ;
    ecx = esi;
    PUSH32(esp, 0x000E3E7Du); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E3E7D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E3E82: ;
    edx = MEM32(0x8E9B20);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E3E91u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E3E91: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3EA7; /* je: equal / zero */

loc_000E3E95: ;
    eax = esi + 0x24;
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000E3EA2u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3EA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E3EA7: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3EB0u); RECOMP_ABI_CALL(0x0003594Bu, sub_0003594B); /* call 0x0003594B */

loc_000E3EB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3EEA; /* jne: not equal / not zero */

loc_000E3EB8: ;
    ecx = esi;
    MEM32(esi + 4) = 0x8AC098;
    PUSH32(esp, 0x000E3EC6u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3EC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E3ECB: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3ED4u); RECOMP_ABI_CALL(0x0003594Bu, sub_0003594B); /* call 0x0003594B */

loc_000E3ED4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3EB8; /* je: equal / zero */

loc_000E3EDC: ;
    ecx = esi;
    MEM32(esi + 4) = 0x8AC08C;
    PUSH32(esp, 0x000E3EEAu); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3EEA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E3F30
 * Original: 0x000E3F30 - 0x000E3FFF (207 bytes, 75 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E3F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E3F30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E3F51; /* je: equal / zero */

loc_000E3F3F: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x7A9980); /* addss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */

loc_000E3F51: ;
    MEM32(edi + 4) = MEM32(edi + 4) + 1;
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(esi + 0x3C);
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x000E3F60u); RECOMP_ABI_CALL(0x00030F68u, sub_00030F68); /* call 0x00030F68 */

loc_000E3F60: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3FA2; /* jne: not equal / not zero */

loc_000E3F64: ;
    eax = MEM32(0x8E993C);
    ecx = MEM32(edi + 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E3FA2; /* jg: greater (signed >) */

loc_000E3F79: ;
    eax = MEM32(0x8E9B20);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000E3F86u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E3F86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3F94; /* je: equal / zero */

loc_000E3F8A: ;
    SET_LO8(eax, MEM8(ebx + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E3FA2; /* jl: less (signed <) */

loc_000E3F94: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E3FDB; /* je: equal / zero */

loc_000E3F9C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E3FAF; /* je: equal / zero */

loc_000E3F9F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000E3FA9; /* jne: not equal / not zero */

loc_000E3FA2: ;
    ecx = esi;
    PUSH32(esp, 0x000E3FA9u); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E3FA9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E3FAF: ;
    MEM32(edi + 4) = 0;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3FBFu); RECOMP_ABI_CALL(0x0003594Bu, sub_0003594B); /* call 0x0003594B */

loc_000E3FBF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E3FA9; /* jne: not equal / not zero */

loc_000E3FC7: ;
    ecx = esi;
    MEM32(esi + 4) = 0x8AC098;
    PUSH32(esp, 0x000E3FD5u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3FD5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E3FDB: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E3FE4u); RECOMP_ABI_CALL(0x0003594Bu, sub_0003594B); /* call 0x0003594B */

loc_000E3FE4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E3FC7; /* je: equal / zero */

loc_000E3FEC: ;
    ecx = esi + 0x2C;
    MEM32(esi + 4) = ecx;
    ecx = esi;
    PUSH32(esp, 0x000E3FF9u); RECOMP_ABI_CALL(0x00014D18u, sub_00014D18); /* call 0x00014D18 */

loc_000E3FF9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4040
 * Original: 0x000E4040 - 0x000E4062 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4040: ;
    eax = MEM32(0x8E9B20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E4053u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E4053: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E405E; /* je: equal / zero */

loc_000E4057: ;
    ecx = esi;
    PUSH32(esp, 0x000E405Eu); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E405E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4070
 * Original: 0x000E4070 - 0x000E41D4 (356 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4070(void)
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

loc_000E4070: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 0x1D4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E4084u); RECOMP_ABI_CALL(0x0001D030u, sub_0001D030); /* call 0x0001D030 */

loc_000E4084: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E41C6; /* je: equal / zero */

loc_000E408F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E40BB; /* je: equal / zero */

loc_000E4098: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x000E409Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E409Cu); } /* indirect call */
    }

loc_000E409F: ;
    ebx = eax;
    PUSH32(esp, 0x000E40A6u); RECOMP_ABI_CALL(0x0001A371u, sub_0001A371); /* call 0x0001A371 */

loc_000E40A6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E40BB; /* jne: not equal / not zero */

loc_000E40AA: ;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E40BB; /* je: equal / zero */

loc_000E40B1: ;
    _fa = (uint32_t)(MEM32(edi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x34), 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E41C4; /* jle: less or equal (signed <=) */

loc_000E40BB: ;
    edi = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E40CEu); RECOMP_ABI_CALL(0x000E2E10u, sub_000E2E10); /* call 0x000E2E10 */

loc_000E40CE: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    PUSH32(esp, ecx);
    ecx = edi;
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E40E1u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_000E40E1: ;
    eax = MEM32(esi + 0xF0);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x1C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7CC360); /* comiss */
    ebx = MEM32(esi + 0x4C);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E415B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7CC360)) */

loc_000E40F8: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E4114u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000E4114: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esp + 0xC;
    if (CMP_EQ(_fa, _fb)) goto loc_000E4123; /* je: equal / zero */

loc_000E411C: ;
    PUSH32(esp, 0x000E4121u); RECOMP_ABI_CALL(0x000E2EB0u, sub_000E2EB0); /* call 0x000E2EB0 */

loc_000E4121: ;
    goto loc_000E4128;

loc_000E4123: ;
    PUSH32(esp, 0x000E4128u); RECOMP_ABI_CALL(0x000E2F40u, sub_000E2F40); /* call 0x000E2F40 */

loc_000E4128: ;
    eax = MEM32(esi + 0x3D8);
    ecx = MEM32(eax);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AC094) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x8AC094 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4141; /* je: equal / zero */

loc_000E413A: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E4146; /* jne: not equal / not zero */

loc_000E4141: ;
    edx = 3;

loc_000E4146: ;
    PUSH32(esp, edx);
    edx = MEM32(0x8E9700);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000E415Bu); RECOMP_ABI_CALL(0x00037D54u, sub_00037D54); /* call 0x00037D54 */

loc_000E415B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0x40); /* comiss */
    if ((_fca >= _fcb)) goto loc_000E41C4; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs MEMF(ebx + 0x40)) */

loc_000E4164: ;
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7CC1BC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E41C4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7CC1BC)) */

loc_000E4175: ;
    PUSH32(esp, 2);
    ecx = esi;
    PUSH32(esp, 0x000E417Eu); RECOMP_ABI_CALL(0x00027B8Eu, sub_00027B8E); /* call 0x00027B8E */

loc_000E417E: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebx + 0x44); /* divss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7AA820)); /* fadd dword ptr [0x7aa820] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7CBE00); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E41C4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7CBE00)) */

loc_000E41AA: ;
    xmm1 = XMM_SCALAR(MEMF(0x8E96CC)); /* movss */
    PUSH32(esp, ecx);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000E41C4u); RECOMP_ABI_CALL(0x0002F7CBu, sub_0002F7CB); /* call 0x0002F7CB */

loc_000E41C4: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000E41C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E41CCu); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_000E41CC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
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
 * sub_000E4230
 * Original: 0x000E4230 - 0x000E4270 (64 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4230: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4268; /* je: equal / zero */

loc_000E423D: ;
    ecx = MEM32(0x8E9B10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE4070);
    PUSH32(esp, 0xE2DD0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x380);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E4265u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E4262u); } /* indirect call */
    }

loc_000E4265: ;
    esp += 8; return; /* ret 4 */

loc_000E4268: ;
    PUSH32(esp, 0x000E426Du); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E426D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4280
 * Original: 0x000E4280 - 0x000E42C0 (64 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4280: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E42B8; /* je: equal / zero */

loc_000E428D: ;
    ecx = MEM32(0x8E9B10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE4070);
    PUSH32(esp, 0xE2DD0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x243);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E42B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E42B2u); } /* indirect call */
    }

loc_000E42B5: ;
    esp += 8; return; /* ret 4 */

loc_000E42B8: ;
    PUSH32(esp, 0x000E42BDu); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E42BD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E42D0
 * Original: 0x000E42D0 - 0x000E431A (74 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E42D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E42D0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(MEM32(edx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4310; /* je: equal / zero */

loc_000E42DD: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    MEM32(ecx + 4) = 0;
    edx = MEM32(0x8E9B10);
    ecx = MEM32(eax + 0x3C);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE4070);
    PUSH32(esp, 0xE2DD0);
    PUSH32(esp, 9);
    PUSH32(esp, 0x243);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000E430Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E430Au); } /* indirect call */
    }

loc_000E430D: ;
    esp += 8; return; /* ret 4 */

loc_000E4310: ;
    ecx = eax;
    PUSH32(esp, 0x000E4317u); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E4317: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4330
 * Original: 0x000E4330 - 0x000E438F (95 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000E4330: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E4384; /* je: equal / zero */

loc_000E433E: ;
    MEM32(ecx + 4) = 0;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, 0x000E434Du); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000E434D: ;
    ecx = MEM32(esi + 0x3C);
    esi = MEM32(0x8E9B10);
    edx = MEM32(ecx);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, esi);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE4070);
    PUSH32(esp, 0xE2DD0);
    PUSH32(esp, 9);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x13E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x243) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x243)) >> 32) & 1);
    eax = eax + 0x243;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E4380u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E437Du); } /* indirect call */
    }

loc_000E4380: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E4384: ;
    ecx = esi;
    PUSH32(esp, 0x000E438Bu); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E438B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E43B0
 * Original: 0x000E43B0 - 0x000E43F0 (64 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E43B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E43B0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E43E8; /* je: equal / zero */

loc_000E43BD: ;
    ecx = MEM32(0x8E9B10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE4070);
    PUSH32(esp, 0xE2DD0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x37C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E43E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E43E2u); } /* indirect call */
    }

loc_000E43E5: ;
    esp += 8; return; /* ret 4 */

loc_000E43E8: ;
    PUSH32(esp, 0x000E43EDu); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E43ED: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4400
 * Original: 0x000E4400 - 0x000E444A (74 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4400: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x3C);
    _fa = (uint32_t)(MEM32(edx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4440; /* je: equal / zero */

loc_000E440D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    MEM32(ecx + 4) = 0;
    edx = MEM32(0x8E9B10);
    ecx = MEM32(eax + 0x3C);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE4070);
    PUSH32(esp, 0xE2DD0);
    PUSH32(esp, 1);
    PUSH32(esp, 0x37D);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000E443Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E443Au); } /* indirect call */
    }

loc_000E443D: ;
    esp += 8; return; /* ret 4 */

loc_000E4440: ;
    ecx = eax;
    PUSH32(esp, 0x000E4447u); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E4447: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4460
 * Original: 0x000E4460 - 0x000E4508 (168 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000E4460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4460: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp + 0x3C);
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E44FD; /* je: equal / zero */

loc_000E4472: ;
    PUSH32(esp, esi);
    MEM32(ecx + 4) = 0;
    esi = MEM32(ebp + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E4483u); RECOMP_ABI_CALL(0x000E2600u, sub_000E2600); /* call 0x000E2600 */

loc_000E4483: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E44F0; /* je: equal / zero */

loc_000E4489: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esi;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E4499u); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000E4499: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E44AB; /* jne: not equal / not zero */

loc_000E449D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD448)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000E44AB: ;
    eax = MEM32(0x8E9B10);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esi);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE4070);
    PUSH32(esp, 0xE2DD0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E44D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E44CEu); } /* indirect call */
    }

loc_000E44D1: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x000E44D9u); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_000E44D9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(eax + 0x3E0) = 0;
    MEM32(eax + 0x3E8) = 0xFFFFFFFFu;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000E44F0: ;
    ecx = ebp;
    PUSH32(esp, 0x000E44F7u); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E44F7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_000E44FD: ;
    ecx = ebp;
    PUSH32(esp, 0x000E4504u); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E4504: ;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4540
 * Original: 0x000E4540 - 0x000E460F (207 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4540(void)
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

loc_000E4540: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x3C);
    PUSH32(esp, esi);
    _fa = (uint32_t)(MEM32(edx + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x58), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000E4604; /* je: equal / zero */

loc_000E4552: ;
    MEM32(ecx + 4) = 0;
    esi = MEM32(eax + 0x3C);
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000E4564u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E4561u); } /* indirect call */
    }

loc_000E4564: ;
    _fb = (uint32_t)(0x242) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x242));
    eax = eax - 0x242;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E460B; /* je: equal / zero */

loc_000E456F: ;
    _fb = (uint32_t)(0x13D) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x13D));
    eax = eax - 0x13D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E460B; /* je: equal / zero */

loc_000E457A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E460B; /* je: equal / zero */

loc_000E4583: ;
    ecx = esi;
    PUSH32(esp, 0x000E458Au); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000E458A: ;
    fp_push(MEMF(0x7CC2AC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000E459D; /* jb: below (unsigned <) */

loc_000E4596: ;
    eax = 0x381;
    goto loc_000E45C3;

loc_000E459D: ;
    ecx = esi;
    PUSH32(esp, 0x000E45A4u); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000E45A4: ;
    fp_push(MEMF(0x7AA7E0)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000E45B7; /* jb: below (unsigned <) */

loc_000E45B0: ;
    eax = 0x242;
    goto loc_000E45C3;

loc_000E45B7: ;
    ecx = esi;
    PUSH32(esp, 0x000E45BEu); RECOMP_ABI_CALL(0x00015952u, sub_00015952); /* call 0x00015952 */

loc_000E45BE: ;
    eax = 0x37F;

loc_000E45C3: ;
    ecx = MEM32(0x8E9B10);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE4070);
    PUSH32(esp, 0xE2DD0);
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E45E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E45E4u); } /* indirect call */
    }

loc_000E45E7: ;
    ecx = MEM32(esi + 0x48);
    PUSH32(esp, 0x000E45EFu); RECOMP_ABI_CALL(0x00029290u, sub_00029290); /* call 0x00029290 */

loc_000E45EF: ;
    MEM8(eax + 0x3E0) = 0;
    MEM32(eax + 0x3E8) = 0xFFFFFFFFu;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_000E4604: ;
    ecx = eax;
    PUSH32(esp, 0x000E460Bu); RECOMP_ABI_CALL(0x0002F7A8u, sub_0002F7A8); /* call 0x0002F7A8 */

loc_000E460B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E4650
 * Original: 0x000E4650 - 0x000E467F (47 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4650(void)
{

loc_000E4650: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x3C);
    eax = MEM32(0x8E9B10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE4070);
    PUSH32(esp, 0x1231F);
    PUSH32(esp, 2);
    PUSH32(esp, 0x353);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E467Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E4679u); } /* indirect call */
    }

loc_000E467C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4690
 * Original: 0x000E4690 - 0x000E4697 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4690(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E4690: ;
    fp_push(MEMF(ecx + 0x50C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E46A0
 * Original: 0x000E46A0 - 0x000E46A7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E46A0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E46A0: ;
    fp_push(MEMF(ecx + 0x528)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E46B0
 * Original: 0x000E46B0 - 0x000E46B7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E46B0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E46B0: ;
    fp_push(MEMF(ecx + 0x4D0)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E46C0
 * Original: 0x000E46C0 - 0x000E473B (123 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E46C0(void)
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

loc_000E46C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E46D9u); RECOMP_ABI_CALL(0x00029EF2u, sub_00029EF2); /* call 0x00029EF2 */

loc_000E46D9: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x000E46E1u); RECOMP_ABI_CALL(0x0002F717u, sub_0002F717); /* call 0x0002F717 */

loc_000E46E1: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x8E9B70)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 4); /* addss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0xC); /* comiss */
    ecx = MEM32(esi + 0x20);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E470E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0xC)) */

loc_000E46FD: ;
    PUSH32(esp, 0x000E4702u); RECOMP_ABI_CALL(0x000237F5u, sub_000237F5); /* call 0x000237F5 */

loc_000E4702: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4708u); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_000E4708: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000E470E: ;
    PUSH32(esp, 0x000E4713u); RECOMP_ABI_CALL(0x0002A389u, sub_0002A389); /* call 0x0002A389 */

loc_000E4713: ;
    xmm0 = XMM_SCALAR(MEMF(0x8E9BAC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0xC); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E472Fu); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_000E472F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4735u); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_000E4735: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000E4760
 * Original: 0x000E4760 - 0x000E478B (43 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4760(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4760: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    ecx = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6C)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x8E9BAC); /* mulss */
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E4780u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_000E4780: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4786u); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_000E4786: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E47A0
 * Original: 0x000E47A0 - 0x000E4962 (450 bytes, 123 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E47A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E47A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(MEM32(esi + 0x258)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x258), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E48BC; /* jne: not equal / not zero */

loc_000E47B2: ;
    ecx = MEM32(esi + 0x44);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x000E47BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E47B7u); } /* indirect call */
    }

loc_000E47BA: ;
    _fb = (uint32_t)(0xFFFFFF18u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF18u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E4960; /* ja: above (unsigned >) */

loc_000E47C8: ;
    ecx = ZX8(MEM8(eax + 0xE4990));
    { uint32_t _jt = MEM32(ecx * 4 + 0xE4964); /* switch: 11 entries, 11 targets */
    if (_jt == 0x000E47D6u) goto loc_000E47D6;
    if (_jt == 0x000E47E5u) goto loc_000E47E5;
    if (_jt == 0x000E47EFu) goto loc_000E47EF;
    if (_jt == 0x000E47FEu) goto loc_000E47FE;
    if (_jt == 0x000E4808u) goto loc_000E4808;
    if (_jt == 0x000E4817u) goto loc_000E4817;
    if (_jt == 0x000E481Eu) goto loc_000E481E;
    if (_jt == 0x000E482Du) goto loc_000E482D;
    if (_jt == 0x000E4834u) goto loc_000E4834;
    if (_jt == 0x000E486Fu) goto loc_000E486F;
    if (_jt == 0x000E4960u) goto loc_000E4960;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000E47D6: ;
    ecx = esi;
    PUSH32(esp, 0x000E47DDu); RECOMP_ABI_CALL(0x00031391u, sub_00031391); /* call 0x00031391 */

loc_000E47DD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4960; /* je: equal / zero */

loc_000E47E5: ;
    eax = 0x10D;
    goto loc_000E4888;

loc_000E47EF: ;
    ecx = esi;
    PUSH32(esp, 0x000E47F6u); RECOMP_ABI_CALL(0x00031391u, sub_00031391); /* call 0x00031391 */

loc_000E47F6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4960; /* je: equal / zero */

loc_000E47FE: ;
    eax = 0x109;
    goto loc_000E4888;

loc_000E4808: ;
    ecx = esi;
    PUSH32(esp, 0x000E480Fu); RECOMP_ABI_CALL(0x00031391u, sub_00031391); /* call 0x00031391 */

loc_000E480F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4960; /* je: equal / zero */

loc_000E4817: ;
    eax = 0x106;
    goto loc_000E4888;

loc_000E481E: ;
    ecx = esi;
    PUSH32(esp, 0x000E4825u); RECOMP_ABI_CALL(0x00031391u, sub_00031391); /* call 0x00031391 */

loc_000E4825: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4960; /* je: equal / zero */

loc_000E482D: ;
    eax = 0xEE;
    goto loc_000E4888;

loc_000E4834: ;
    edx = MEM32(0x8E9B10);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x000E4842u); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E4842: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4960; /* je: equal / zero */

loc_000E484A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4850u); RECOMP_ABI_CALL(0x00035342u, sub_00035342); /* call 0x00035342 */

loc_000E4850: ;
    eax = MEM32(esi + 0x54);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi + 0x54);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(eax + 0xC) = 0;
    PUSH32(esp, 0x000E486Au); RECOMP_ABI_CALL(0x0001AF38u, sub_0001AF38); /* call 0x0001AF38 */

loc_000E486A: ;
    MEM32(esi + 0x2C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E486F: ;
    PUSH32(esp, 0x41700000);
    ecx = esi;
    PUSH32(esp, 0x000E487Bu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E487B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4960; /* je: equal / zero */

loc_000E4883: ;
    eax = 0xEB;

loc_000E4888: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE46C0);
    PUSH32(esp, 0xE47A0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E48AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E48A7u); } /* indirect call */
    }

loc_000E48AA: ;
    eax = MEM32(esi + 0x54);
    MEM32(eax + 0xC) = 8;
    esi = MEM32(esi + 0x54);
    MEM32(esi) = MEM32(esi) | 4;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E48BC: ;
    ecx = MEM32(0x8E9B10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000E48CAu); RECOMP_ABI_CALL(0x00028836u, sub_00028836); /* call 0x00028836 */

loc_000E48CA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4960; /* je: equal / zero */

loc_000E48D2: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x000E48DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E48D7u); } /* indirect call */
    }

loc_000E48DA: ;
    _fb = (uint32_t)(0xFFFFFF18u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF18u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x25) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x25 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E4915; /* ja: above (unsigned >) */

loc_000E48E4: ;
    eax = ZX8(MEM8(eax + 0xE49D8));
    { uint32_t _jt = MEM32(eax * 4 + 0xE49B8); /* switch: 8 entries, 7 targets */
    if (_jt == 0x000E48F2u) goto loc_000E48F2;
    if (_jt == 0x000E48F9u) goto loc_000E48F9;
    if (_jt == 0x000E4900u) goto loc_000E4900;
    if (_jt == 0x000E4907u) goto loc_000E4907;
    if (_jt == 0x000E490Eu) goto loc_000E490E;
    if (_jt == 0x000E4915u) goto loc_000E4915;
    if (_jt == 0x000E494Cu) goto loc_000E494C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000E48F2: ;
    eax = 0x10C;
    goto loc_000E491A;

loc_000E48F9: ;
    eax = 0x108;
    goto loc_000E491A;

loc_000E4900: ;
    eax = 0x105;
    goto loc_000E491A;

loc_000E4907: ;
    eax = 0xED;
    goto loc_000E491A;

loc_000E490E: ;
    eax = 0xE8;
    goto loc_000E491A;

loc_000E4915: ;
    eax = 0x10B;

loc_000E491A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE4760);
    PUSH32(esp, 0xE47A0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E493Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E4939u); } /* indirect call */
    }

loc_000E493C: ;
    eax = MEM32(esi + 0x54);
    MEM32(eax + 0xC) = 8;
    eax = MEM32(esi + 0x54);
    MEM32(eax) = MEM32(eax) | 4;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000E494C: ;
    SET_LO8(eax, MEM8(esi + 0x1DC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E4960; /* jge: greater or equal (signed >=) */

loc_000E4956: ;
    MEM32(esi + 0x258) = 1;

loc_000E4960: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4962
 * Original: 0x000E4962 - 0x000E49B5 (83 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4962(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4962: ;
    edi = edi;
    RECOMP_UNIMPL("outsd dx, dword ptr [esi]", 0x000E4964u); /* TODO: outsd dx, dword ptr [esi] */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + ecx * 2) = MEM8(eax + ecx * 2) + HI8(edx);
    _fa = (uint32_t)(MEM8(eax + ecx * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi) = MEM8(esi) + LO8(ebx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x8000E48) = MEM8(0x8000E48) + HI8(ecx);
    _fa = (uint32_t)(MEM8(0x8000E48)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi) = MEM8(edi) + LO8(edx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ebx, HI8(ebx) + HI8(ecx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + HI8(ebx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + LO8(edx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ecx, HI8(ecx) + HI8(eax));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 0x49) = MEM8(eax + 0x49) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + 0x49)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) | MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ecx, LO8(ecx) | MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, LO8(ecx) | MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, LO8(ecx) | MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, LO8(ecx) | MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, LO8(ecx) | MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, LO8(ecx) | MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, LO8(ecx) | MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, LO8(ecx) | MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, LO8(ecx) | MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, LO8(ecx) | MEM8(edx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) | MEM8(eax + 0x1070601));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(ecx, LO8(ecx) | MEM8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

}

/**
 * sub_000E4AA0
 * Original: 0x000E4AA0 - 0x000E4D20 (640 bytes, 135 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4AA0(void)
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

loc_000E4AA0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x14));
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6C)); /* movss */
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9BA4)); /* movss */
    PUSH32(esp, edi);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000E4ACDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E4ACAu); } /* indirect call */
    }

loc_000E4ACD: ;
    fp_push(MEMF(0x7AD448)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_000E4AE7; /* jb: below (unsigned <) */

loc_000E4ADF: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AD448); /* mulss */

loc_000E4AE7: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7C8); /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8AC0B0)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4B0A; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000E4B05: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000E4B47; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E4B0A: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4B1B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000E4B0F: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    goto loc_000E4B41;

loc_000E4B1B: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4B30; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000E4B24: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    goto loc_000E4B41;

loc_000E4B30: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x20) = xmm2.f[0]; /* movss */

loc_000E4B41: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */

loc_000E4B47: ;
    eax = MEM32(0x8E8F84);
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E4B5Eu); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_000E4B5E: ;
    edi = MEM32(esi + 0x20);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edi + 0x60); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(0x8AC0B0)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4B8C; /* jb: below (unsigned <) (xmm0.f[0] vs xmm1.f[0]) */

loc_000E4B7F: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4B8C; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000E4B84: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    goto loc_000E4BB4;

loc_000E4B8C: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4B9A; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000E4B91: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1 = xmm0; /* movaps */
    goto loc_000E4BAE;

loc_000E4B9A: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm1 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    if ((_fca >= _fcb)) goto loc_000E4BAE; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000E4BAA: ;
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */

loc_000E4BAE: ;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */

loc_000E4BB4: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E4BC3u); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_000E4BC3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4BDC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax)) */

loc_000E4BD1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    goto loc_000E4C64;

loc_000E4BDC: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7CC364); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x8AC0B0)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4C1C; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7CC364)) */

loc_000E4BF3: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4C1C; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E4BF8: ;
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E4C07u); RECOMP_ABI_CALL(0x0002F109u, sub_0002F109); /* call 0x0002F109 */

loc_000E4C07: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x8AC0B0)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */

loc_000E4C1C: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x60)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4C39; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000E4C34: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000E4C64; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E4C39: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4C44; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000E4C3E: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    goto loc_000E4C64;

loc_000E4C44: ;
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4C56; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_000E4C4D: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm1; /* movaps */
    goto loc_000E4C64;

loc_000E4C56: ;
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */

loc_000E4C64: ;
    MEMF(edi + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8E9BAC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x14); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x20);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E4C85u); RECOMP_ABI_CALL(0x0001ADE9u, sub_0001ADE9); /* call 0x0001ADE9 */

loc_000E4C85: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4C8Bu); RECOMP_ABI_CALL(0x00014719u, sub_00014719); /* call 0x00014719 */

loc_000E4C8B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000E4D20
 * Original: 0x000E4D20 - 0x000E4DE5 (197 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E4D20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x248);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E4DE3; /* jne: not equal / not zero */

loc_000E4D33: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4DE3; /* je: equal / zero */

loc_000E4D3D: ;
    eax = MEM32(esi + 0x54);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E4DE3; /* jne: not equal / not zero */

loc_000E4D49: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4DE3; /* je: equal / zero */

loc_000E4D53: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E4D61; /* je: equal / zero */

loc_000E4D5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E4D76; /* jne: not equal / not zero */

loc_000E4D61: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4D73u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000E4D73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E4D76: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_000E4D92; /* ja: above (unsigned >) */

loc_000E4D7D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xE4DE8); /* switch: 6 entries, 3 targets */
    if (_jt == 0x000E4D84u) goto loc_000E4D84;
    if (_jt == 0x000E4D8Bu) goto loc_000E4D8B;
    if (_jt == 0x000E4D92u) goto loc_000E4D92;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000E4D84: ;
    edi = 0x107;
    goto loc_000E4D97;

loc_000E4D8B: ;
    edi = 0x104;
    goto loc_000E4D97;

loc_000E4D92: ;
    edi = 0x10B;

loc_000E4D97: ;
    edx = MEM32(0x8E9BC8);
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E4DA6u); RECOMP_ABI_CALL(0x000200DCu, sub_000200DC); /* call 0x000200DC */

loc_000E4DA6: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0xE4AA0);
    PUSH32(esp, 0xE47A0);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x000E4DC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E4DC5u); } /* indirect call */
    }

loc_000E4DC8: ;
    ecx = MEM32(esi + 0x54);
    MEM32(esi + 0x258) = 0;
    MEM32(ecx + 0xC) = 8;
    esi = MEM32(esi + 0x54);
    MEM32(esi) = MEM32(esi) | 4;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);

loc_000E4DE3: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E4E50
 * Original: 0x000E4E50 - 0x000E4E57 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4E50(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E4E50: ;
    fp_push(MEMF(0x7CCB58)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E4E60
 * Original: 0x000E4E60 - 0x000E4E67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4E60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E4E60: ;
    fp_push(MEMF(0x7CCB54)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E4E70
 * Original: 0x000E4E70 - 0x000E4E77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4E70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E4E70: ;
    fp_push(MEMF(0x7CCB50)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E4E80
 * Original: 0x000E4E80 - 0x000E4E91 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4E80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4E80: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x7CCC48;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E4EA0
 * Original: 0x000E4EA0 - 0x000E4EC4 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E4EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7CCC48;
    PUSH32(esp, 0x000E4EAEu); RECOMP_ABI_CALL(0x00022AD0u, sub_00022AD0); /* call 0x00022AD0 */

loc_000E4EAE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E4EBE; /* je: equal / zero */

loc_000E4EB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E4EBBu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000E4EBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E4EBE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4ED0
 * Original: 0x000E4ED0 - 0x000E4F61 (145 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4ED0(void)
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

loc_000E4ED0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + 4);
    xmm1 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4EEA; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E4EE3: ;
    fp_push(MEMF(ebx + 4)); /* fld float */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E4EEA: ;
    eax = MEM32(ecx + 8);
    edx = eax + eax * 2;
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + edx * 4 + -12); /* comiss */
    edx = ebx + edx * 4;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4F01; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebx + edx * 4 + -12)) */

loc_000E4EFA: ;
    fp_push(MEMF(edx + -8)); /* fld float */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000E4F01: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax + -2;

loc_000E4F08: ;
    eax = edi + esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = eax + eax * 2;
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + edx * 4); /* comiss */
    edx = ebx + edx * 4;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4F23; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ebx + edx * 4)) */

loc_000E4F19: ;
    xmm1 = XMM_SCALAR(MEMF(edx + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000E4F36; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E4F23: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E4F31; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E4F2C: ;
    edi = eax + -1;
    goto loc_000E4F08;

loc_000E4F31: ;
    esi = eax + 1;
    goto loc_000E4F08;

loc_000E4F36: ;
    ecx = MEM32(ecx + 4);
    fp_push(MEMF(esp + 0x10)); /* fld float */
    eax = eax + eax * 2;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + eax * 4)); /* fsub dword ptr [ecx + eax*4] */
    eax = ecx + eax * 4;
    POP32(esp, edi);
    POP32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_push(MEMF(0x7A9980)); /* fld float */
    POP32(esp, ebx);
    fp_top() = RECOMP_FP_PC(fp_top() - fp_st1()); /* fsub st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0x10)); /* fmul dword ptr [eax + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E4F90
 * Original: 0x000E4F90 - 0x000E4FA0 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4F90(void)
{

loc_000E4F90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E4F9Du); RECOMP_ABI_CALL(0x000139C2u, sub_000139C2); /* call 0x000139C2 */

loc_000E4F9D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4FB0
 * Original: 0x000E4FB0 - 0x000E4FC0 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4FB0(void)
{

loc_000E4FB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E4FBDu); RECOMP_ABI_CALL(0x000139C2u, sub_000139C2); /* call 0x000139C2 */

loc_000E4FBD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4FD0
 * Original: 0x000E4FD0 - 0x000E4FE0 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4FD0(void)
{

loc_000E4FD0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E4FDDu); RECOMP_ABI_CALL(0x000139C2u, sub_000139C2); /* call 0x000139C2 */

loc_000E4FDD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E4FF0
 * Original: 0x000E4FF0 - 0x000E5000 (16 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E4FF0(void)
{

loc_000E4FF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(ecx + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E4FFDu); RECOMP_ABI_CALL(0x000139C2u, sub_000139C2); /* call 0x000139C2 */

loc_000E4FFD: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5010
 * Original: 0x000E5010 - 0x000E5056 (70 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5010: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5020; /* je: equal / zero */

loc_000E501A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E5020u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E501Eu); } /* indirect call */
    }

loc_000E5020: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E502D; /* je: equal / zero */

loc_000E5027: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E502Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E502Bu); } /* indirect call */
    }

loc_000E502D: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E503A; /* je: equal / zero */

loc_000E5034: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E503Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5038u); } /* indirect call */
    }

loc_000E503A: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5047; /* je: equal / zero */

loc_000E5041: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E5047u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5045u); } /* indirect call */
    }

loc_000E5047: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E5055; /* je: equal / zero */

loc_000E504F: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E5055u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5053u); } /* indirect call */
    }

loc_000E5055: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5070
 * Original: 0x000E5070 - 0x000E50CA (90 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5070: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5080; /* je: equal / zero */

loc_000E507A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E5080u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E507Eu); } /* indirect call */
    }

loc_000E5080: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E508D; /* je: equal / zero */

loc_000E5087: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E508Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E508Bu); } /* indirect call */
    }

loc_000E508D: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E509A; /* je: equal / zero */

loc_000E5094: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E509Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5098u); } /* indirect call */
    }

loc_000E509A: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E50A7; /* je: equal / zero */

loc_000E50A1: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E50A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E50A5u); } /* indirect call */
    }

loc_000E50A7: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E50B4; /* je: equal / zero */

loc_000E50AE: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E50B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E50B2u); } /* indirect call */
    }

loc_000E50B4: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000E50C4; /* je: equal / zero */

loc_000E50BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E50C1u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000E50C1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E50C4: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E50E0
 * Original: 0x000E50E0 - 0x000E5101 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E50E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000E50E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x000E50ECu); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000E50EC: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 8);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E50FDu); RECOMP_ABI_CALL(0x000139C2u, sub_000139C2); /* call 0x000139C2 */

loc_000E50FD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E5110
 * Original: 0x000E5110 - 0x000E5145 (53 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5110: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000E511Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E511Cu); } /* indirect call */
    }

loc_000E511F: ;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E512Cu); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000E512C: ;
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E5140u); RECOMP_ABI_CALL(0x000139C2u, sub_000139C2); /* call 0x000139C2 */

loc_000E5140: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5160
 * Original: 0x000E5160 - 0x000E5186 (38 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5160(void)
{

loc_000E5160: ;
    eax = MEM32(0x8EACE4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(ecx + 0x18);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CCC4C); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E5183u); RECOMP_ABI_CALL(0x000139C2u, sub_000139C2); /* call 0x000139C2 */

loc_000E5183: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5190
 * Original: 0x000E5190 - 0x000E51AC (28 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5190(void)
{

loc_000E5190: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000E51C0
 * Original: 0x000E51C0 - 0x000E54F1 (817 bytes, 217 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E51C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E51C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    esi = ecx;
    PUSH32(esp, 0x000E51CEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000E51CE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E51E3; /* je: equal / zero */

loc_000E51D5: ;
    MEM32(eax) = 0x7CCC48;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    goto loc_000E51E5;

loc_000E51E3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E51E5: ;
    PUSH32(esp, 6);
    ecx = eax;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x000E51F1u); RECOMP_ABI_CALL(0x00012EC8u, sub_00012EC8); /* call 0x00012EC8 */

loc_000E51F1: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x41A00000);
    PUSH32(esp, 0x44A58000);
    PUSH32(esp, 0x000E5203u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E5203: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x420C0000);
    PUSH32(esp, 0x44E18000);
    PUSH32(esp, 0x000E5215u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E5215: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0x450EC000);
    PUSH32(esp, 0x000E5227u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E5227: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x42820000);
    PUSH32(esp, 0x452CC000);
    PUSH32(esp, 0x000E5239u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E5239: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x42AA0000);
    PUSH32(esp, 0x454AC000);
    PUSH32(esp, 0x000E524Bu); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E524B: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x4568C000);
    PUSH32(esp, 0x000E525Du); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E525D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000E5265u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000E5265: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E527A; /* je: equal / zero */

loc_000E526C: ;
    MEM32(eax) = 0x7CCC48;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    goto loc_000E527C;

loc_000E527A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E527C: ;
    PUSH32(esp, 6);
    ecx = eax;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x000E5288u); RECOMP_ABI_CALL(0x00012EC8u, sub_00012EC8); /* call 0x00012EC8 */

loc_000E5288: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x428C0000);
    PUSH32(esp, 0x42480000);
    PUSH32(esp, 0x000E529Au); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E529A: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x42A80000);
    PUSH32(esp, 0x42A00000);
    PUSH32(esp, 0x000E52ACu); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E52AC: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x42AC0000);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, 0x000E52BEu); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E52BE: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x42B00000);
    PUSH32(esp, 0x42BE0000);
    PUSH32(esp, 0x000E52D0u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E52D0: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, 0x42C80000);
    PUSH32(esp, 0x000E52E2u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E52E2: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, 0x42B80000);
    PUSH32(esp, 0x42F00000);
    PUSH32(esp, 0x000E52F4u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E52F4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000E52FCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000E52FC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5311; /* je: equal / zero */

loc_000E5303: ;
    MEM32(eax) = 0x7CCC48;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    goto loc_000E5313;

loc_000E5311: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E5313: ;
    PUSH32(esp, 5);
    ecx = eax;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x000E531Fu); RECOMP_ABI_CALL(0x00012EC8u, sub_00012EC8); /* call 0x00012EC8 */

loc_000E531F: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E532Du); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E532D: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, 0x43F00000);
    PUSH32(esp, 0x000E533Fu); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E533F: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x42A00000);
    PUSH32(esp, 0x44960000);
    PUSH32(esp, 0x000E5351u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E5351: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x428C0000);
    PUSH32(esp, 0x44F00000);
    PUSH32(esp, 0x000E5363u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E5363: ;
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x42200000);
    PUSH32(esp, 0x45340000);
    PUSH32(esp, 0x000E5375u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E5375: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000E537Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000E537D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5392; /* je: equal / zero */

loc_000E5384: ;
    MEM32(eax) = 0x7CCC48;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    goto loc_000E5394;

loc_000E5392: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E5394: ;
    PUSH32(esp, 8);
    ecx = eax;
    MEM32(esi + 0x20) = eax;
    PUSH32(esp, 0x000E53A0u); RECOMP_ABI_CALL(0x00012EC8u, sub_00012EC8); /* call 0x00012EC8 */

loc_000E53A0: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x42B60000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E53AEu); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E53AE: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x42B60000);
    PUSH32(esp, 0x3F800000);
    PUSH32(esp, 0x000E53C0u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E53C0: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 0x000E53D2u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E53D2: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x42AE0000);
    PUSH32(esp, 0x40400000);
    PUSH32(esp, 0x000E53E4u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E53E4: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x42AA0000);
    PUSH32(esp, 0x40800000);
    PUSH32(esp, 0x000E53F6u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E53F6: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x42AE0000);
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 0x000E5408u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E5408: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x42B40000);
    PUSH32(esp, 0x40C00000);
    PUSH32(esp, 0x000E541Au); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E541A: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x42B60000);
    PUSH32(esp, 0x40E00000);
    PUSH32(esp, 0x000E542Cu); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E542C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x000E5434u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000E5434: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5449; /* je: equal / zero */

loc_000E543B: ;
    MEM32(eax) = 0x7CCC48;
    MEM32(eax + 4) = edi;
    MEM32(eax + 8) = edi;
    goto loc_000E544B;

loc_000E5449: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E544B: ;
    PUSH32(esp, 7);
    ecx = eax;
    MEM32(esi + 0x24) = eax;
    PUSH32(esp, 0x000E5457u); RECOMP_ABI_CALL(0x00012EC8u, sub_00012EC8); /* call 0x00012EC8 */

loc_000E5457: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x42B50000);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E5465u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E5465: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x42B50000);
    PUSH32(esp, 0x3E99999A);
    PUSH32(esp, 0x000E5477u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E5477: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x42B3CCCD);
    PUSH32(esp, 0x3F19999A);
    PUSH32(esp, 0x000E5489u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E5489: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x42AE0000);
    PUSH32(esp, 0x3F4CCCCD);
    PUSH32(esp, 0x000E549Bu); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E549B: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x42A80000);
    PUSH32(esp, 0x3F8CCCCD);
    PUSH32(esp, 0x000E54ADu); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E54AD: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x429A0000);
    PUSH32(esp, 0x3FA66666);
    PUSH32(esp, 0x000E54BFu); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E54BF: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x425C0000);
    PUSH32(esp, 0x3FC66666);
    PUSH32(esp, 0x000E54D1u); RECOMP_ABI_CALL(0x00030103u, sub_00030103); /* call 0x00030103 */

loc_000E54D1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, edi);
    MEMF(esi) = xmm0.f[0]; /* movss */
    MEMF(esi + 4) = xmm0.f[0]; /* movss */
    MEMF(esi + 8) = xmm0.f[0]; /* movss */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E55C0
 * Original: 0x000E55C0 - 0x000E55F8 (56 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E55C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E55C0: ;
    eax = MEM32(0x8EFF68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E55F5; /* jne: not equal / not zero */

loc_000E55C9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x000E55D2u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000E55D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E55E8; /* je: equal / zero */

loc_000E55D9: ;
    ecx = eax;
    PUSH32(esp, 0x000E55E0u); RECOMP_ABI_CALL(0x0003603Fu, sub_0003603F); /* call 0x0003603F */

loc_000E55E0: ;
    MEM32(0x8EFF68) = eax;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000E55E8: ;
    MEM32(0x8EFF68) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000E55F5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E5610
 * Original: 0x000E5610 - 0x000E5677 (103 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5610: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8EFF68);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5673; /* je: equal / zero */

loc_000E561B: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5628; /* je: equal / zero */

loc_000E5622: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E5628u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5626u); } /* indirect call */
    }

loc_000E5628: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5635; /* je: equal / zero */

loc_000E562F: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E5635u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5633u); } /* indirect call */
    }

loc_000E5635: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5642; /* je: equal / zero */

loc_000E563C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E5642u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5640u); } /* indirect call */
    }

loc_000E5642: ;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E564F; /* je: equal / zero */

loc_000E5649: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E564Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E564Du); } /* indirect call */
    }

loc_000E564F: ;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E565C; /* je: equal / zero */

loc_000E5656: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E565Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E565Au); } /* indirect call */
    }

loc_000E565C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E5662u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_000E5662: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8EFF68) = 0;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E5673: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5690
 * Original: 0x000E5690 - 0x000E56F8 (104 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5690: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000E56A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E569Du); } /* indirect call */
    }

loc_000E56A0: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E56B2u); RECOMP_ABI_CALL(0x00012BCBu, sub_00012BCB); /* call 0x00012BCB */

loc_000E56B2: ;
    PUSH32(esp, eax);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E56BDu); RECOMP_ABI_CALL(0x0001F6E6u, sub_0001F6E6); /* call 0x0001F6E6 */

loc_000E56BD: ;
    SET_LO8(eax, MEM8(esi + 0x64));
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000E56E5; /* jne: not equal / not zero */

loc_000E56D3: ;
    xmm1 = XMM_SCALAR(MEMF(0x7CC7D0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */

loc_000E56E5: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x24);
    PUSH32(esp, 0x000E56F2u); RECOMP_ABI_CALL(0x000139C2u, sub_000139C2); /* call 0x000139C2 */

loc_000E56F2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5720
 * Original: 0x000E5720 - 0x000E581C (252 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5720(void)
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

loc_000E5720: ;
    eax = MEM32(0x8EACE4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(0x8EFF68);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CCC4C); /* mulss */
    PUSH32(esp, ecx);
    ecx = MEM32(edi + 0x18);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E574Eu); RECOMP_ABI_CALL(0x000139C2u, sub_000139C2); /* call 0x000139C2 */

loc_000E574E: ;
    ebx = MEM32(esp + 0x10);
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebx;
    PUSH32(esp, 0x000E575Bu); RECOMP_ABI_CALL(0x0002152Cu, sub_0002152C); /* call 0x0002152C */

loc_000E575B: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edi + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E576Cu); RECOMP_ABI_CALL(0x000139C2u, sub_000139C2); /* call 0x000139C2 */

loc_000E576C: ;
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x000E5776u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5773u); } /* indirect call */
    }

loc_000E5776: ;
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000E5783u); RECOMP_ABI_CALL(0x000294B6u, sub_000294B6); /* call 0x000294B6 */

loc_000E5783: ;
    ecx = MEM32(edi + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E5797u); RECOMP_ABI_CALL(0x000139C2u, sub_000139C2); /* call 0x000139C2 */

loc_000E5797: ;
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x000E57A2u); RECOMP_ABI_CALL(0x000219D2u, sub_000219D2); /* call 0x000219D2 */

loc_000E57A2: ;
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    MEMF(esi + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7CCB58); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7CCB54); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7CCB5C); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7CCB50); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(0x7AB8B0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_000E5804; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000E57FC: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E580D; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E5804: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_000E580D: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    POP32(esp, edi);
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000E5860
 * Original: 0x000E5860 - 0x000E5867 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5860(void)
{

loc_000E5860: ;
    eax = MEM32(ecx + 0x404);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5870
 * Original: 0x000E5870 - 0x000E5877 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5870(void)
{

loc_000E5870: ;
    eax = MEM32(ecx + 0x408);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5880
 * Original: 0x000E5880 - 0x000E5887 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5880(void)
{

loc_000E5880: ;
    MEM32(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5890
 * Original: 0x000E5890 - 0x000E589B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E5890: ;
    _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x21C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001E8A4(); return; /* tail jmp 0x0001E8A4 */

}

/**
 * sub_000E58A0
 * Original: 0x000E58A0 - 0x000E58AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E58A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E58A0: ;
    _fb = (uint32_t)(0x21C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x21C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00035428(); return; /* tail jmp 0x00035428 */

}

/**
 * sub_000E58B0
 * Original: 0x000E58B0 - 0x000E58B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E58B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E58B0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00022BCF(); return; /* tail jmp 0x00022BCF */

}

/**
 * sub_000E58C0
 * Original: 0x000E58C0 - 0x000E58D0 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E58C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E58C0: ;
    PUSH32(esp, 0x000E58C5u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_000E58C5: ;
    ecx = eax + 0x21C;
    g_seh_ebp = ebp; sub_0001E8A4(); return; /* tail jmp 0x0001E8A4 */

}

/**
 * sub_000E58E0
 * Original: 0x000E58E0 - 0x000E58F0 (16 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E58E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E58E0: ;
    PUSH32(esp, 0x000E58E5u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_000E58E5: ;
    ecx = eax + 0x21C;
    g_seh_ebp = ebp; sub_00035428(); return; /* tail jmp 0x00035428 */

}

/**
 * sub_000E5900
 * Original: 0x000E5900 - 0x000E5907 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5900(void)
{

loc_000E5900: ;
    SET_LO8(eax, MEM8(ecx + 0xAC));
    esp += 4; return; /* ret */

}

/**
 * sub_000E5910
 * Original: 0x000E5910 - 0x000E5917 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5910(void)
{

loc_000E5910: ;
    SET_LO8(eax, MEM8(ecx + 0x99));
    esp += 4; return; /* ret */

}

/**
 * sub_000E5920
 * Original: 0x000E5920 - 0x000E592D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5920(void)
{

loc_000E5920: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x774) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5930
 * Original: 0x000E5930 - 0x000E593F (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5930(void)
{

loc_000E5930: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx + 0x21C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5950
 * Original: 0x000E5950 - 0x000E5958 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5950(void)
{

loc_000E5950: ;
    MEM8(ecx + 0x1DC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5960
 * Original: 0x000E5960 - 0x000E5968 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5960(void)
{

loc_000E5960: ;
    MEM8(ecx + 0x1DC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5970
 * Original: 0x000E5970 - 0x000E5974 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5970(void)
{

loc_000E5970: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5980
 * Original: 0x000E5980 - 0x000E598A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5980(void)
{

loc_000E5980: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E5990
 * Original: 0x000E5990 - 0x000E59B8 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5990: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E59A3; /* jne: not equal / not zero */

loc_000E59A0: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000E59A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E59B5; /* jne: not equal / not zero */

loc_000E59A8: ;
    SET_LO8(eax, MEM8(0x8F6A24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E59A0; /* jl: less (signed <) */

loc_000E59B1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E59A0; /* jg: greater (signed >) */

loc_000E59B5: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E59D0
 * Original: 0x000E59D0 - 0x000E59DA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E59D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E59D0: ;
    PUSH32(esp, 0x000E59D5u); RECOMP_ABI_CALL(0x0002A046u, sub_0002A046); /* call 0x0002A046 */

loc_000E59D5: ;
    g_seh_ebp = ebp; sub_00023A52(); return; /* tail jmp 0x00023A52 */

}

/**
 * sub_000E59E0
 * Original: 0x000E59E0 - 0x000E59F8 (24 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E59E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E59E0: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E59F1; /* je: equal / zero */

loc_000E59EA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC158); PUSH32(esp, 0x000E59F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E59EAu); } /* indirect call */
    }

loc_000E59F1: ;
    MEM32(0x8EFF94) = MEM32(0x8EFF94) + 1;
    _fa = (uint32_t)(MEM32(0x8EFF94)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000E5A00
 * Original: 0x000E5A00 - 0x000E5A40 (64 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5A00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E5A00: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5A11; /* je: equal / zero */

loc_000E5A0A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E5A11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5A0Au); } /* indirect call */
    }

loc_000E5A11: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    eax = esi;
    MEM32(0x8EFF88) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000E5A29; /* je: equal / zero */

loc_000E5A1D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi * 4 + 0x8AC128); PUSH32(esp, 0x000E5A24u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5A1Du); } /* indirect call */
    }

loc_000E5A24: ;
    eax = MEM32(0x8EFF88);

loc_000E5A29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E5A3F; /* je: equal / zero */

loc_000E5A38: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8AC158)); return; /* indirect tail jmp */

loc_000E5A3F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5A50
 * Original: 0x000E5A50 - 0x000E5AB2 (98 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E5A50: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x000E5A57u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_000E5A57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5A6A; /* je: equal / zero */

loc_000E5A5E: ;
    PUSH32(esp, 0x000E5A63u); RECOMP_ABI_CALL(0x00029FD8u, sub_00029FD8); /* call 0x00029FD8 */

loc_000E5A63: ;
    ecx = eax;
    PUSH32(esp, 0x000E5A6Au); RECOMP_ABI_CALL(0x0002C459u, sub_0002C459); /* call 0x0002C459 */

loc_000E5A6A: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x000E5A75u); RECOMP_ABI_CALL(0x00015029u, sub_00015029); /* call 0x00015029 */

loc_000E5A75: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5A86; /* je: equal / zero */

loc_000E5A7F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E5A86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5A7Fu); } /* indirect call */
    }

loc_000E5A86: ;
    MEM32(0x8EFF88) = 3;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC134); PUSH32(esp, 0x000E5A96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5A90u); } /* indirect call */
    }

loc_000E5A96: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E5AB1; /* je: equal / zero */

loc_000E5AAA: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8AC158)); return; /* indirect tail jmp */

loc_000E5AB1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5AD0
 * Original: 0x000E5AD0 - 0x000E5AD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5AD0(void)
{

loc_000E5AD0: ;
    eax = MEM32(0x8EFFAC);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5AE0
 * Original: 0x000E5AE0 - 0x000E5B1D (61 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E5AE0: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5AF1; /* je: equal / zero */

loc_000E5AEA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E5AF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5AEAu); } /* indirect call */
    }

loc_000E5AF1: ;
    MEM32(0x8EFF88) = 4;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC138); PUSH32(esp, 0x000E5B01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E5AFBu); } /* indirect call */
    }

loc_000E5B01: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E5B1C; /* je: equal / zero */

loc_000E5B15: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8AC158)); return; /* indirect tail jmp */

loc_000E5B1C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5B30
 * Original: 0x000E5B30 - 0x000E5B3F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5B30: ;
    ecx = MEM32(0x8EFF88);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000E5B50
 * Original: 0x000E5B50 - 0x000E5BAC (92 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5B50: ;
    _fa = (uint32_t)(MEM8(0x8EFF9C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x8EFF9C), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E5BA9; /* jne: not equal / not zero */

loc_000E5B59: ;
    PUSH32(esp, 0x000E5B5Eu); RECOMP_ABI_CALL(0x00019561u, sub_00019561); /* call 0x00019561 */

loc_000E5B5E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5BA9; /* jne: not equal / not zero */

loc_000E5B62: ;
    SET_LO8(eax, MEM8(0x8EFF9C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_000E5B87; /* jns: not sign (positive) */

loc_000E5B6B: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x000E5B76u); RECOMP_ABI_CALL(0x00029178u, sub_00029178); /* call 0x00029178 */

loc_000E5B76: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5B87; /* je: equal / zero */

loc_000E5B7A: ;
    MEM32(0x8EFF9C) = MEM32(0x8EFF9C) & 0xFFFFFF7Fu;
    _fa = (uint32_t)(MEM32(0x8EFF9C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000E5B87: ;
    _fa = (uint32_t)(MEM32(0x8EFF8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFF8C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5BA9; /* jne: not equal / not zero */

loc_000E5B90: ;
    eax = MEM32(0x8EFF9C);
    eax = eax | 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8EFF8C) = 2;
    MEM32(0x8EFF9C) = eax;

loc_000E5BA9: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E5BD0
 * Original: 0x000E5BD0 - 0x000E5BE4 (20 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5BD0: ;
    _fa = (uint32_t)(MEM32(0x8EFF8C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFF8C), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5BE3; /* je: equal / zero */

loc_000E5BD9: ;
    MEM32(0x8EFF8C) = 1;

loc_000E5BE3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5BF0
 * Original: 0x000E5BF0 - 0x000E5BFB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5BF0(void)
{

loc_000E5BF0: ;
    MEM32(0x8EFF8C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5C00
 * Original: 0x000E5C00 - 0x000E5C15 (21 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5C00(void)
{

loc_000E5C00: ;
    MEM32(0x8EFF88) = 3;
    MEM32(0x8EFF94) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5C20
 * Original: 0x000E5C20 - 0x000E5C35 (21 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5C20: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E5C32; /* jl: less (signed <) */

loc_000E5C2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E5C32; /* jg: greater (signed >) */

loc_000E5C2F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000E5C32: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5C40
 * Original: 0x000E5C40 - 0x000E5C4F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5C40: ;
    ecx = MEM32(0x8EFFB0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000E5C60
 * Original: 0x000E5C60 - 0x000E5C6F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5C60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5C60: ;
    ecx = MEM32(0x8EFFB0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000E5C80
 * Original: 0x000E5C80 - 0x000E5CAD (45 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5C80: ;
    PUSH32(esp, 0x000E5C85u); RECOMP_ABI_CALL(0x00019561u, sub_00019561); /* call 0x00019561 */

loc_000E5C85: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5CAC; /* jne: not equal / not zero */

loc_000E5C89: ;
    eax = MEM32(0x8EFFAC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E5CAC; /* je: equal / zero */

loc_000E5C92: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E5C9Cu); RECOMP_ABI_CALL(0x00032C00u, sub_00032C00); /* call 0x00032C00 */

loc_000E5C9C: ;
    eax = MEM32(0x8EFF9C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax | 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8EFF9C) = eax;

loc_000E5CAC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E5CC0
 * Original: 0x000E5CC0 - 0x000E5CC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5CC0(void)
{

loc_000E5CC0: ;
    eax = MEM32(0x8EFF90);
    esp += 4; return; /* ret */

}

/**
 * sub_000E5CD0
 * Original: 0x000E5CD0 - 0x000E5CDF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E5CD0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E5CF0
 * Original: 0x000E5CF0 - 0x000E5FBD (717 bytes, 220 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E5CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E5CF0: ;
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebp;

loc_000E5D00: ;
    eax = ebp + ebp * 4;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x18) = eax;
    edx = esp + eax + 0x24;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x190);
    ecx = ebp + ebp * 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esp + 0x1C) = eax;
    eax = eax + 0x8F6C38;
    MEM32(esp + 0x10) = ecx;
    goto loc_000E5D34;

loc_000E5D30: ;
    ecx = MEM32(esp + 0x10);

loc_000E5D34: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(edx + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000E5D59; /* jne: not equal / not zero */

loc_000E5D3F: ;
    SET_LO16(ecx, MEM16(0x8F6BD2));
    _fa = (uint32_t)(MEM16(0x8F6B76)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x8F6B76), LO16(ecx) (16-bit) */
    edi = 2;
    if (CMP_L(_fas, _fbs)) goto loc_000E5D59; /* jl: less (signed <) */

loc_000E5D54: ;
    edi = 4;

loc_000E5D59: ;
    ecx = MEM32(eax);
    ebp = ZX8(MEM8(eax + -9));
    esi = ecx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x13) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi + ebp * 2;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi + esi * 2;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(eax + -10));
    ecx = ecx + ecx * 4;
    ecx = esi + ecx * 2;
    esi = ZX8(MEM8(eax + -5));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ZX8(MEM8(eax + 1));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM8(eax + -7);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E5D9D; /* jle: less or equal (signed <=) */

loc_000E5D96: ;
    ecx = 3;
    goto loc_000E5DA7;

loc_000E5D9D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFDu (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E5DA7; /* jge: greater or equal (signed >=) */

loc_000E5DA2: ;
    ecx = 0xFFFFFFFDu;

loc_000E5DA7: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = ecx + ebx + 1;
    MEM32(edx + 4) = ecx;
    ecx = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5DDA; /* jne: not equal / not zero */

loc_000E5DC0: ;
    SET_LO16(ecx, MEM16(0x8F6BD2));
    _fa = (uint32_t)(MEM16(0x8F6B76)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x8F6B76), LO16(ecx) (16-bit) */
    edi = 2;
    if (CMP_L(_fas, _fbs)) goto loc_000E5DDA; /* jl: less (signed <) */

loc_000E5DD5: ;
    edi = 4;

loc_000E5DDA: ;
    ecx = MEM32(eax + 0x14);
    ebp = ZX8(MEM8(eax + 0xB));
    esi = ecx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x13) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi + ebp * 2;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi + esi * 2;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(eax + 0xA));
    ecx = ecx + ecx * 4;
    ecx = esi + ecx * 2;
    esi = ZX8(MEM8(eax + 0x15));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ZX8(MEM8(eax + 0xF));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xD);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E5E1F; /* jle: less or equal (signed <=) */

loc_000E5E18: ;
    ecx = 3;
    goto loc_000E5E29;

loc_000E5E1F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFDu (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E5E29; /* jge: greater or equal (signed >=) */

loc_000E5E24: ;
    ecx = 0xFFFFFFFDu;

loc_000E5E29: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = ecx;
    ecx = MEM32(esp + 0x10);
    ecx = ecx + ebx + 2;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5E5D; /* jne: not equal / not zero */

loc_000E5E43: ;
    SET_LO16(ecx, MEM16(0x8F6BD2));
    _fa = (uint32_t)(MEM16(0x8F6B76)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x8F6B76), LO16(ecx) (16-bit) */
    edi = 2;
    if (CMP_L(_fas, _fbs)) goto loc_000E5E5D; /* jl: less (signed <) */

loc_000E5E58: ;
    edi = 4;

loc_000E5E5D: ;
    ecx = MEM32(eax + 0x28);
    ebp = ZX8(MEM8(eax + 0x1F));
    esi = ecx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x12) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x13) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = esi + ebp * 2;
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi + esi * 2;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX8(MEM8(eax + 0x1E));
    ecx = ecx + ecx * 4;
    ecx = esi + ecx * 2;
    esi = ZX8(MEM8(eax + 0x29));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ZX8(MEM8(eax + 0x23));
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x21);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E5EA2; /* jle: less or equal (signed <=) */

loc_000E5E9B: ;
    ecx = 3;
    goto loc_000E5EAC;

loc_000E5EA2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFDu (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000E5EAC; /* jge: greater or equal (signed >=) */

loc_000E5EA7: ;
    ecx = 0xFFFFFFFDu;

loc_000E5EAC: ;
    ebp = MEM32(esp + 0x14);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x10) = ecx;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E5D30; /* jl: less (signed <) */

loc_000E5EC7: ;
    ebx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x12;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + edx + 0xB4;
    ecx = ecx + 0x8F6D9A;
    MEM32(esp + 0x10) = 2;
    goto loc_000E5EF0;

    /* nop */

loc_000E5EF0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    eax = ZX16(MEM16(ecx + -4));
    MEM32(edx + -4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_000E5F11; /* jne: not equal / not zero */

loc_000E5EFB: ;
    SET_LO16(esi, MEM16(0x8F6BD2));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x8F6B76)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x8F6B76), LO16(esi) (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E5F11; /* jl: less (signed <) */

loc_000E5F0E: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E5F11: ;
    esi = ZX8(MEM8(ecx));
    edi = esi;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000E5F30; /* je: equal / zero */

loc_000E5F1B: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E5F2D; /* je: equal / zero */

loc_000E5F1E: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E5F28; /* je: equal / zero */

loc_000E5F21: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0xFFFFFFF6u);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E5F30;

loc_000E5F28: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_000E5F30;

loc_000E5F2D: ;
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_000E5F30: ;
    _fa = (uint32_t)(MEM16(ecx + -6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + -6), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E5F3C; /* jne: not equal / not zero */

loc_000E5F37: ;
    eax = 0xFFFFFC18u;

loc_000E5F3C: ;
    MEM32(edx) = eax;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x10) = eax;
    if ((_fa != 0)) goto loc_000E5EF0; /* jne: not equal / not zero */

loc_000E5F50: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    MEM32(esp + 0x14) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_000E5D00; /* jl: less (signed <) */

loc_000E5F5E: ;
    PUSH32(esp, 0xE5CD0);
    PUSH32(esp, 8);
    edx = esp + 0x28;
    PUSH32(esp, 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E5F71u); RECOMP_ABI_CALL(0x005CC050u, sub_005CC050); /* call 0x005CC050 */

loc_000E5F71: ;
    eax = MEM32(esp + 0x174);
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x38);
    esi = MEM32(esp + 0x40);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x178);
    MEM32(ecx) = edx;
    edx = MEM32(esp + 0x17C);
    MEM32(edx) = esi;
    SET_LO8(eax, MEM8(eax));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM8(0x8F6F4C) = LO8(eax);
    SET_LO8(ecx, MEM8(ecx));
    POP32(esp, esi);
    MEM8(0x8F6F4D) = LO8(ecx);
    SET_LO8(edx, MEM8(edx));
    POP32(esp, ebp);
    MEM8(0x8F6F4E) = LO8(edx);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x150) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x150;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6070
 * Original: 0x000E6070 - 0x000E60C3 (83 bytes, 23 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6070(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E6070: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E60AC; /* je: equal / zero */

loc_000E6079: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E60AC; /* je: equal / zero */

loc_000E607D: ;
    PUSH32(esp, 0x000E6082u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000E6082: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E60B7; /* jne: not equal / not zero */

loc_000E6086: ;
    PUSH32(esp, 0x000E608Bu); RECOMP_ABI_CALL(0x00014C46u, sub_00014C46); /* call 0x00014C46 */

loc_000E608B: ;
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x896178) = LO8(eax);
    PUSH32(esp, 0x000E6097u); RECOMP_ABI_CALL(0x00014C46u, sub_00014C46); /* call 0x00014C46 */

loc_000E6097: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E609Du); RECOMP_ABI_CALL(0x000216A8u, sub_000216A8); /* call 0x000216A8 */

loc_000E609D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E60A5u); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_000E60A5: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0001B541(); return; /* tail jmp 0x0001B541 */

loc_000E60AC: ;
    ecx = MEM32(0x8F0650);
    PUSH32(esp, 0x000E60B7u); RECOMP_ABI_CALL(0x000158E9u, sub_000158E9); /* call 0x000158E9 */

loc_000E60B7: ;
    PUSH32(esp, 0x000E60BCu); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_000E60BC: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0001B541(); return; /* tail jmp 0x0001B541 */

}

/**
 * sub_000E60E0
 * Original: 0x000E60E0 - 0x000E60E1 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E60E0(void)
{

loc_000E60E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E60F0
 * Original: 0x000E60F0 - 0x000E60F1 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E60F0(void)
{

loc_000E60F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6100
 * Original: 0x000E6100 - 0x000E6154 (84 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6100: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000E6107u); RECOMP_ABI_CALL(0x0001D1DEu, sub_0001D1DE); /* call 0x0001D1DE */

loc_000E6107: ;
    ecx = MEM32(0x8E8F84);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x000E6117u); RECOMP_ABI_CALL(0x0001B0F5u, sub_0001B0F5); /* call 0x0001B0F5 */

loc_000E6117: ;
    PUSH32(esp, 0x000E611Cu); RECOMP_ABI_CALL(0x0003389Eu, sub_0003389E); /* call 0x0003389E */

loc_000E611C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6153; /* je: equal / zero */

loc_000E6120: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E6127u); RECOMP_ABI_CALL(0x0001D1DEu, sub_0001D1DE); /* call 0x0001D1DE */

loc_000E6127: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x000E6134u); RECOMP_ABI_CALL(0x00032886u, sub_00032886); /* call 0x00032886 */

loc_000E6134: ;
    eax = MEM32(0x8EB070);
    ecx = MEM32(eax + 0x58);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0x39);
    eax = MEM32(eax + 0x24);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x39);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x000E6153u); RECOMP_ABI_CALL(0x0001E4F3u, sub_0001E4F3); /* call 0x0001E4F3 */

loc_000E6153: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6170
 * Original: 0x000E6170 - 0x000E6186 (22 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6170(void)
{

loc_000E6170: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x000E617Bu); RECOMP_ABI_CALL(0x00015029u, sub_00015029); /* call 0x00015029 */

loc_000E617B: ;
    MEM32(0x8EFFB0) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6190
 * Original: 0x000E6190 - 0x000E61D6 (70 bytes, 14 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6190(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E6190: ;
    _fa = (uint32_t)(MEM32(0x8EFF94)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFF94), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E61D5; /* jle: less or equal (signed <=) */

loc_000E6199: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E61AA; /* je: equal / zero */

loc_000E61A3: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E61AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E61A3u); } /* indirect call */
    }

loc_000E61AA: ;
    MEM32(0x8EFF88) = 0xA;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC150); PUSH32(esp, 0x000E61BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E61B4u); } /* indirect call */
    }

loc_000E61BA: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E61D5; /* je: equal / zero */

loc_000E61CE: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8AC158)); return; /* indirect tail jmp */

loc_000E61D5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E61F0
 * Original: 0x000E61F0 - 0x000E6236 (70 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E61F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E61F0: ;
    PUSH32(esp, 0x000E61F5u); RECOMP_ABI_CALL(0x00025D07u, sub_00025D07); /* call 0x00025D07 */

loc_000E61F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6235; /* je: equal / zero */

loc_000E61F9: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E620A; /* je: equal / zero */

loc_000E6203: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E620Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E6203u); } /* indirect call */
    }

loc_000E620A: ;
    MEM32(0x8EFF88) = 2;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC130); PUSH32(esp, 0x000E621Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E6214u); } /* indirect call */
    }

loc_000E621A: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E6235; /* je: equal / zero */

loc_000E622E: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8AC158)); return; /* indirect tail jmp */

loc_000E6235: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6250
 * Original: 0x000E6250 - 0x000E629B (75 bytes, 18 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E6250: ;
    PUSH32(esp, 0x000E6255u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_000E6255: ;
    PUSH32(esp, 0x000E625Au); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_000E625A: ;
    PUSH32(esp, 4);
    ecx = eax + 0x21C;
    PUSH32(esp, 0x000E6267u); RECOMP_ABI_CALL(0x0001E8A4u, sub_0001E8A4); /* call 0x0001E8A4 */

loc_000E6267: ;
    PUSH32(esp, 0x000E626Cu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_000E626C: ;
    PUSH32(esp, 4);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x000E6276u); RECOMP_ABI_CALL(0x00022BCFu, sub_00022BCF); /* call 0x00022BCF */

loc_000E6276: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6296; /* je: equal / zero */

loc_000E627A: ;
    PUSH32(esp, 0x000E627Fu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_000E627F: ;
    PUSH32(esp, 0x000E6284u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_000E6284: ;
    PUSH32(esp, 4);
    ecx = eax + 0x21C;
    PUSH32(esp, 0x000E6291u); RECOMP_ABI_CALL(0x00035428u, sub_00035428); /* call 0x00035428 */

loc_000E6291: ;
    g_seh_ebp = ebp; sub_000376B5(); return; /* tail jmp 0x000376B5 */

loc_000E6296: ;
    g_seh_ebp = ebp; sub_00034965(); return; /* tail jmp 0x00034965 */

}

/**
 * sub_000E62B0
 * Original: 0x000E62B0 - 0x000E62E9 (57 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E62B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E62B0: ;
    _fa = (uint32_t)(MEM32(0x8EFF94)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFF94), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E62C2; /* je: equal / zero */

loc_000E62B9: ;
    PUSH32(esp, 0x000E62BEu); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000E62BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E62C7; /* jne: not equal / not zero */

loc_000E62C2: ;
    PUSH32(esp, 0x000E62C7u); RECOMP_ABI_CALL(0x00018463u, sub_00018463); /* call 0x00018463 */

loc_000E62C7: ;
    PUSH32(esp, 0x000E62CCu); RECOMP_ABI_CALL(0x00031968u, sub_00031968); /* call 0x00031968 */

loc_000E62CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E62E8; /* jne: not equal / not zero */

loc_000E62D0: ;
    PUSH32(esp, 0x000E62D5u); RECOMP_ABI_CALL(0x00013D0Fu, sub_00013D0F); /* call 0x00013D0F */

loc_000E62D5: ;
    ecx = MEM32(0x8EADA0);
    PUSH32(esp, 0x000E62E0u); RECOMP_ABI_CALL(0x0001C7F7u, sub_0001C7F7); /* call 0x0001C7F7 */

loc_000E62E0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E62E7u); RECOMP_ABI_CALL(0x00012EEBu, sub_00012EEB); /* call 0x00012EEB */

loc_000E62E7: ;
    POP32(esp, ecx);

loc_000E62E8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6300
 * Original: 0x000E6300 - 0x000E6301 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6300(void)
{

loc_000E6300: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6310
 * Original: 0x000E6310 - 0x000E63B2 (162 bytes, 35 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E6310: ;
    PUSH32(esp, 0x000E6315u); RECOMP_ABI_CALL(0x00025D07u, sub_00025D07); /* call 0x00025D07 */

loc_000E6315: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E63B1; /* je: equal / zero */

loc_000E631D: ;
    PUSH32(esp, 0x000E6322u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_000E6322: ;
    PUSH32(esp, 0x000E6327u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_000E6327: ;
    PUSH32(esp, 5);
    ecx = eax + 0x21C;
    PUSH32(esp, 0x000E6334u); RECOMP_ABI_CALL(0x0001E8A4u, sub_0001E8A4); /* call 0x0001E8A4 */

loc_000E6334: ;
    PUSH32(esp, 0x000E6339u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_000E6339: ;
    PUSH32(esp, 5);
    ecx = eax + 0x1C;
    PUSH32(esp, 0x000E6343u); RECOMP_ABI_CALL(0x00022BCFu, sub_00022BCF); /* call 0x00022BCF */

loc_000E6343: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E63B1; /* je: equal / zero */

loc_000E6347: ;
    PUSH32(esp, 0x000E634Cu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_000E634C: ;
    PUSH32(esp, 0x000E6351u); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_000E6351: ;
    PUSH32(esp, 5);
    ecx = eax + 0x21C;
    PUSH32(esp, 0x000E635Eu); RECOMP_ABI_CALL(0x00035428u, sub_00035428); /* call 0x00035428 */

loc_000E635E: ;
    eax = MEM32(0x901E28);
    MEM8(eax + 0x115) = 0;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x000E6375u); RECOMP_ABI_CALL(0x00012F4Au, sub_00012F4A); /* call 0x00012F4A */

loc_000E6375: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6386; /* je: equal / zero */

loc_000E637F: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E6386u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E637Fu); } /* indirect call */
    }

loc_000E6386: ;
    MEM32(0x8EFF88) = 7;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC144); PUSH32(esp, 0x000E6396u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E6390u); } /* indirect call */
    }

loc_000E6396: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E63B1; /* je: equal / zero */

loc_000E63AA: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8AC158)); return; /* indirect tail jmp */

loc_000E63B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E63E0
 * Original: 0x000E63E0 - 0x000E63E1 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E63E0(void)
{

loc_000E63E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E63F0
 * Original: 0x000E63F0 - 0x000E642D (61 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E63F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E63F0: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6401; /* je: equal / zero */

loc_000E63FA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E6401u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E63FAu); } /* indirect call */
    }

loc_000E6401: ;
    MEM32(0x8EFF88) = 0xA;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC150); PUSH32(esp, 0x000E6411u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E640Bu); } /* indirect call */
    }

loc_000E6411: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E642C; /* je: equal / zero */

loc_000E6425: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8AC158)); return; /* indirect tail jmp */

loc_000E642C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6440
 * Original: 0x000E6440 - 0x000E6441 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6440(void)
{

loc_000E6440: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6450
 * Original: 0x000E6450 - 0x000E6472 (34 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6450: ;
    PUSH32(esp, 0x000E6455u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000E6455: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6471; /* jne: not equal / not zero */

loc_000E6459: ;
    PUSH32(esp, 0x000E645Eu); RECOMP_ABI_CALL(0x00014C46u, sub_00014C46); /* call 0x00014C46 */

loc_000E645E: ;
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(0x896178) = LO8(eax);
    PUSH32(esp, 0x000E646Au); RECOMP_ABI_CALL(0x00014C46u, sub_00014C46); /* call 0x00014C46 */

loc_000E646A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E6470u); RECOMP_ABI_CALL(0x000216A8u, sub_000216A8); /* call 0x000216A8 */

loc_000E6470: ;
    POP32(esp, ecx);

loc_000E6471: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6480
 * Original: 0x000E6480 - 0x000E648D (13 bytes, 3 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6480: ;
    MEM32(0x8EFFB4) = MEM32(0x8EFFB4) + 1;
    _fa = (uint32_t)(MEM32(0x8EFFB4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x8EFFB8) = MEM32(0x8EFFB8) + 1;
    _fa = (uint32_t)(MEM32(0x8EFFB8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6490
 * Original: 0x000E6490 - 0x000E6491 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6490(void)
{

loc_000E6490: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E64A0
 * Original: 0x000E64A0 - 0x000E64A1 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E64A0(void)
{

loc_000E64A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E64B0
 * Original: 0x000E64B0 - 0x000E64B1 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E64B0(void)
{

loc_000E64B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E64C0
 * Original: 0x000E64C0 - 0x000E64C1 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E64C0(void)
{

loc_000E64C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E64D0
 * Original: 0x000E64D0 - 0x000E64D9 (9 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E64D0(void)
{

loc_000E64D0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E64D7u); RECOMP_ABI_CALL(0x0001D1DEu, sub_0001D1DE); /* call 0x0001D1DE */

loc_000E64D7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E64E0
 * Original: 0x000E64E0 - 0x000E64E1 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E64E0(void)
{

loc_000E64E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E64F0
 * Original: 0x000E64F0 - 0x000E64FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E64F0(void)
{

loc_000E64F0: ;
    MEM32(0x8EFF98) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6500
 * Original: 0x000E6500 - 0x000E652C (44 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6500: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x8EFF70) = eax;
    MEM32(0x8EFF74) = eax;
    MEM32(0x8EFF78) = eax;
    MEM32(0x8EFF7C) = eax;
    MEM32(0x8EFF80) = eax;
    MEM32(0x8EFF84) = eax;
    MEM32(0x8EFF6C) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6540
 * Original: 0x000E6540 - 0x000E6575 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6540: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x000E654Bu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_000E654B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000E6552u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E654Fu); } /* indirect call */
    }

loc_000E6552: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E655Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E655Au); } /* indirect call */
    }

loc_000E655C: ;
    _fa = (uint32_t)(MEM8(0x8F6A24)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8F6A24), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6572; /* jne: not equal / not zero */

loc_000E6565: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E656F; /* je: equal / zero */

loc_000E656A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6572; /* jne: not equal / not zero */

loc_000E656F: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000E6572: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6590
 * Original: 0x000E6590 - 0x000E65C0 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6590: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x000E659Bu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_000E659B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000E65A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E659Fu); } /* indirect call */
    }

loc_000E65A2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E65ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E65AAu); } /* indirect call */
    }

loc_000E65AC: ;
    _fa = (uint32_t)(MEM8(0x8F6A24)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8F6A24), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E65BD; /* jne: not equal / not zero */

loc_000E65B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E65BD; /* jne: not equal / not zero */

loc_000E65BA: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_000E65BD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E65D0
 * Original: 0x000E65D0 - 0x000E6631 (97 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E65D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E65D0: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E65DDu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_000E65DD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000E65E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E65E1u); } /* indirect call */
    }

loc_000E65E4: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E65F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E65EEu); } /* indirect call */
    }

loc_000E65F0: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 1);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E65FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E65FAu); } /* indirect call */
    }

loc_000E65FC: ;
    _fa = (uint32_t)(MEM8(0x8F6A24)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8F6A24), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E662C; /* jne: not equal / not zero */

loc_000E6605: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    SET_LO16(ecx, MEM16(0x8F6BD2));
    SET_LO16(edx, MEM16(0x8F6B76));
    if (CMP_NE(_fa, _fb)) goto loc_000E661D; /* jne: not equal / not zero */

loc_000E6618: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ecx) (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E6627; /* jg: greater (signed >) */

loc_000E661D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E662C; /* jne: not equal / not zero */

loc_000E6622: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E662C; /* jle: less or equal (signed <=) */

loc_000E6627: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E662C: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E6650
 * Original: 0x000E6650 - 0x000E66C2 (114 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6650: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E665Du); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_000E665D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x000E6664u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E6661u); } /* indirect call */
    }

loc_000E6664: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x000E6670u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E666Eu); } /* indirect call */
    }

loc_000E6670: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 1);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E667Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E667Au); } /* indirect call */
    }

loc_000E667C: ;
    SET_LO8(ecx, MEM8(0x8F6A24));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6696; /* je: equal / zero */

loc_000E6687: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6696; /* je: equal / zero */

loc_000E668C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6696; /* je: equal / zero */

loc_000E6691: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 6 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E66BD; /* jne: not equal / not zero */

loc_000E6696: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    SET_LO16(ecx, MEM16(0x8F6BD2));
    SET_LO16(edx, MEM16(0x8F6B76));
    if (CMP_NE(_fa, _fb)) goto loc_000E66AE; /* jne: not equal / not zero */

loc_000E66A9: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ecx) (16-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E66B8; /* jg: greater (signed >) */

loc_000E66AE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E66BD; /* jne: not equal / not zero */

loc_000E66B3: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E66BD; /* jle: less or equal (signed <=) */

loc_000E66B8: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E66BD: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E66E0
 * Original: 0x000E66E0 - 0x000E66F6 (22 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E66E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E66E0: ;
    ecx = MEM32(0x8E9048);
    PUSH32(esp, 0x000E66EBu); RECOMP_ABI_CALL(0x00027E45u, sub_00027E45); /* call 0x00027E45 */

loc_000E66EB: ;
    ecx = MEM32(0x8E91A0);
    g_seh_ebp = ebp; sub_00027E45(); return; /* tail jmp 0x00027E45 */

}

/**
 * sub_000E6700
 * Original: 0x000E6700 - 0x000E6716 (22 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E6700: ;
    ecx = MEM32(0x8E9048);
    PUSH32(esp, 0x000E670Bu); RECOMP_ABI_CALL(0x00027E45u, sub_00027E45); /* call 0x00027E45 */

loc_000E670B: ;
    ecx = MEM32(0x8E91A0);
    g_seh_ebp = ebp; sub_00027E45(); return; /* tail jmp 0x00027E45 */

}

/**
 * sub_000E6720
 * Original: 0x000E6720 - 0x000E67BB (155 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E6720: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E6726u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000E6726: ;
    ecx = eax;
    PUSH32(esp, 0x000E672Du); RECOMP_ABI_CALL(0x0001FC9Au, sub_0001FC9A); /* call 0x0001FC9A */

loc_000E672D: ;
    eax = SX16(LO16(eax));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E67B9; /* jle: less or equal (signed <=) */

loc_000E6738: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 8), 1 (8-bit) */
    SET_LO16(ecx, MEM16(0x896160));
    if (CMP_NE(_fa, _fb)) goto loc_000E6770; /* jne: not equal / not zero */

loc_000E6746: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6770; /* jne: not equal / not zero */

loc_000E674B: ;
    _fa = (uint32_t)(MEM16(0x896162)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896162), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6770; /* jne: not equal / not zero */

loc_000E6754: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000E6761u); RECOMP_ABI_CALL(0x00023304u, sub_00023304); /* call 0x00023304 */

loc_000E6761: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00020906(); return; /* tail jmp 0x00020906 */

loc_000E6770: ;
    PUSH32(esp, esi);
    edx = SX16(LO16(ecx));
    esi = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    xmm0.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_000E67AA; /* jne: not equal / not zero */

loc_000E6790: ;
    eax = MEM32(0x8EFFB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E67AA; /* jne: not equal / not zero */

loc_000E6799: ;
    _fa = (uint32_t)(MEM32(0x8EFF88)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFF88), 0xA (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E67AA; /* jne: not equal / not zero */

loc_000E67A2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_000E67AA: ;
    eax = MEM32(esp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00020906(); return; /* tail jmp 0x00020906 */

loc_000E67B9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000E67F0
 * Original: 0x000E67F0 - 0x000E6812 (34 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E67F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E67F0: ;
    PUSH32(esp, 0x000E67F5u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000E67F5: ;
    ecx = eax;
    PUSH32(esp, 0x000E67FCu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_000E67FC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6803; /* je: equal / zero */

loc_000E6800: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000E6803: ;
    ecx = MEM32(0x8EFF90);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6820
 * Original: 0x000E6820 - 0x000E685C (60 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6820: ;
    SET_LO16(eax, MEM16(0x896160));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x4B0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x4B0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6856; /* je: equal / zero */

loc_000E682C: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(3) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 3 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6859; /* jne: not equal / not zero */

loc_000E6836: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x12C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x12C (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6859; /* jne: not equal / not zero */

loc_000E683C: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6856; /* je: equal / zero */

loc_000E684C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6856; /* je: equal / zero */

loc_000E6851: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6859; /* jne: not equal / not zero */

loc_000E6856: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000E6859: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_000E6870
 * Original: 0x000E6870 - 0x000E688E (30 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6870(void)
{

loc_000E6870: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(0x8EFFA0) = eax;
    MEM32(0x8EFFA4) = ecx;
    MEM32(0x8EFFA8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000E68A0
 * Original: 0x000E68A0 - 0x000E68B5 (21 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E68A0(void)
{

loc_000E68A0: ;
    MEM32(0x8EFFA0) = 0xFFFFFFFFu;
    MEM32(0x8EFFA8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E68C0
 * Original: 0x000E68C0 - 0x000E68CF (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E68C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E68C0: ;
    ecx = MEM32(0x8EFF88);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_000E68E0
 * Original: 0x000E68E0 - 0x000E691D (61 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E68E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E68E0: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E68F1; /* je: equal / zero */

loc_000E68EA: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E68F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E68EAu); } /* indirect call */
    }

loc_000E68F1: ;
    MEM32(0x8EFF88) = 1;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC12C); PUSH32(esp, 0x000E6901u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E68FBu); } /* indirect call */
    }

loc_000E6901: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E691C; /* je: equal / zero */

loc_000E6915: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax * 4 + 0x8AC158)); return; /* indirect tail jmp */

loc_000E691C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6930
 * Original: 0x000E6930 - 0x000E6931 (1 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6930(void)
{

loc_000E6930: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6940
 * Original: 0x000E6940 - 0x000E6956 (22 bytes, 4 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E6940: ;
    ecx = MEM32(0x8E9048);
    PUSH32(esp, 0x000E694Bu); RECOMP_ABI_CALL(0x00027E45u, sub_00027E45); /* call 0x00027E45 */

loc_000E694B: ;
    ecx = MEM32(0x8E91A0);
    g_seh_ebp = ebp; sub_00027E45(); return; /* tail jmp 0x00027E45 */

}

/**
 * sub_000E6960
 * Original: 0x000E6960 - 0x000E6978 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6960: ;
    eax = MEM32(0x8EFF90);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6972; /* je: equal / zero */

loc_000E696A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6972; /* je: equal / zero */

loc_000E696F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000E6972: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6980
 * Original: 0x000E6980 - 0x000E6988 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6980(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6980: ;
    MEM32(0x8EFF9C) = MEM32(0x8EFF9C) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(0x8EFF9C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6990
 * Original: 0x000E6990 - 0x000E69B2 (34 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6990(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6990: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E69A2; /* jne: not equal / not zero */

loc_000E6998: ;
    eax = MEM32(esp + 8);
    MEM32(0x8EFFC4) = eax;
    esp += 4; return; /* ret */

loc_000E69A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E69B1; /* jne: not equal / not zero */

loc_000E69A7: ;
    ecx = MEM32(esp + 8);
    MEM32(0x8EFFC0) = ecx;

loc_000E69B1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E69C0
 * Original: 0x000E69C0 - 0x000E69D3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E69C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E69C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x8EFFC4);
    if (CMP_EQ(_fa, _fb)) goto loc_000E69D2; /* je: equal / zero */

loc_000E69CD: ;
    eax = MEM32(0x8EFFC0);

loc_000E69D2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E69E0
 * Original: 0x000E69E0 - 0x000E6C20 (576 bytes, 246 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E69E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E69E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E69E9u); RECOMP_ABI_CALL(0x000278DCu, sub_000278DC); /* call 0x000278DC */

loc_000E69E9: ;
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x000E69F2u); RECOMP_ABI_CALL(0x00028CCDu, sub_00028CCD); /* call 0x00028CCD */

loc_000E69F2: ;
    ecx = MEM32(0x8F9CCC);
    esi = eax;
    PUSH32(esp, 0x000E69FFu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_000E69FF: ;
    ecx = 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    SET_LO8(ebx, 1);
    ebp = 3;
    if (CMP_G(_fas, _fbs)) goto loc_000E6A22; /* jg: greater (signed >) */

loc_000E6A0F: ;
    MEM16(0x896168) = LO16(esi);
    MEM16(0x896166) = LO16(esi);
    goto loc_000E6AED;

loc_000E6A22: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6A4E; /* jne: not equal / not zero */

loc_000E6A26: ;
    MEM16(0x896168) = LO16(ecx);
    MEM16(0x896166) = LO16(ecx);
    MEM16(0x896160) = 0x12C;
    PUSH32(esp, 0x000E6A42u); RECOMP_ABI_CALL(0x000278DCu, sub_000278DC); /* call 0x000278DC */

loc_000E6A42: ;
    ecx = eax;
    PUSH32(esp, 0x000E6A49u); RECOMP_ABI_CALL(0x0001AB9Bu, sub_0001AB9B); /* call 0x0001AB9B */

loc_000E6A49: ;
    goto loc_000E6AED;

loc_000E6A4E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x000E6A55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E6A52u); } /* indirect call */
    }

loc_000E6A55: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x000E6A5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E6A5Bu); } /* indirect call */
    }

loc_000E6A5D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000E6ACD; /* ja: above (unsigned >) */

loc_000E6A62: ;
    { uint32_t _jt = MEM32(eax * 4 + 0xE6B8C); /* switch: 6 entries, 4 targets */
    if (_jt == 0x000E6A69u) goto loc_000E6A69;
    if (_jt == 0x000E6AAAu) goto loc_000E6AAA;
    if (_jt == 0x000E6AC8u) goto loc_000E6AC8;
    if (_jt == 0x000E6ACDu) goto loc_000E6ACD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000E6A69: ;
    eax = 0xFF;
    MEM16(0x896166) = LO16(eax);
    MEM16(0x896168) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM8(0x8F6F51) = LO8(ebx);
    MEM8(0x896176) = LO8(ebx);
    MEM8(0x896177) = LO8(ebx);
    MEM16(0x89616A) = LO16(eax);
    MEM16(0x89616C) = LO16(eax);
    MEM8(0x896178) = LO8(eax);
    PUSH32(esp, 0x000E6AA5u); RECOMP_ABI_CALL(0x000216A8u, sub_000216A8); /* call 0x000216A8 */

loc_000E6AA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000E6ADB;

loc_000E6AAA: ;
    MEM16(0x896168) = LO16(ebp);
    MEM16(0x896166) = LO16(ebp);
    PUSH32(esp, 0x000E6ABDu); RECOMP_ABI_CALL(0x000E5990u, sub_000E5990); /* call 0x000E5990 */

loc_000E6ABD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E6ADB; /* je: equal / zero */

loc_000E6AC1: ;
    PUSH32(esp, 0x000E6AC6u); RECOMP_ABI_CALL(0x0003765Bu, sub_0003765B); /* call 0x0003765B */

loc_000E6AC6: ;
    goto loc_000E6ADB;

loc_000E6AC8: ;
    PUSH32(esp, 0x000E6ACDu); RECOMP_ABI_CALL(0x0003765Bu, sub_0003765B); /* call 0x0003765B */

loc_000E6ACD: ;
    MEM16(0x896168) = LO16(ebp);
    MEM16(0x896166) = LO16(ebp);

loc_000E6ADB: ;
    PUSH32(esp, 0x000E6AE0u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000E6AE0: ;
    ecx = eax;
    PUSH32(esp, 0x000E6AE7u); RECOMP_ABI_CALL(0x0001FC9Au, sub_0001FC9A); /* call 0x0001FC9A */

loc_000E6AE7: ;
    MEM16(0x896160) = LO16(eax);

loc_000E6AED: ;
    SET_LO16(eax, MEM16(0x896166));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebp)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebp) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6B0A; /* jne: not equal / not zero */

loc_000E6AF8: ;
    _fa = (uint32_t)(MEM32(0x8F6A68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x700000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x8F6A68), 0x700000 (32-bit) */
    MEM8(0x8F6F50) = LO8(ebx);
    if (TEST_NZ(_fa, _fb)) goto loc_000E6B1E; /* jne: not equal / not zero */

loc_000E6B0A: ;
    eax = SX16(LO16(eax));
    eax = eax & 0x80000001u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_000E6B19; /* jns: not sign (positive) */

loc_000E6B14: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000E6B19: ;
    MEM8(0x896172) = LO8(eax);

loc_000E6B1E: ;
    PUSH32(esp, 0x000E6B23u); RECOMP_ABI_CALL(0x000308C9u, sub_000308C9); /* call 0x000308C9 */

loc_000E6B23: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E6B2Fu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_000E6B2F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E6B35u); RECOMP_ABI_CALL(0x000142A5u, sub_000142A5); /* call 0x000142A5 */

loc_000E6B35: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E6B3Du); RECOMP_ABI_CALL(0x00021865u, sub_00021865); /* call 0x00021865 */

loc_000E6B3D: ;
    ecx = edi;
    PUSH32(esp, 0x000E6B44u); RECOMP_ABI_CALL(0x00016708u, sub_00016708); /* call 0x00016708 */

loc_000E6B44: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E6B50;

    /* nop */
    /* nop */

loc_000E6B50: ;
    ecx = MEM32(esi + 0x8E8FA8);
    edx = MEM32(ecx + 0x230);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1F00000 (32-bit) */
    if (CMP_A(_fa & _fb, 0)) goto loc_000E6B6D; /* ja: above (unsigned >) */

loc_000E6B66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000000 (32-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_000E6B76; /* jbe: below or equal (unsigned <=) */

loc_000E6B6D: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000E6B73u); RECOMP_ABI_CALL(0x0002A69Fu, sub_0002A69F); /* call 0x0002A69F */

loc_000E6B73: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E6B76: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E6B50; /* jl: less (signed <) */

loc_000E6B81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0001DE59(); return; /* tail jmp 0x0001DE59 */

    edi = edi;
    RECOMP_UNIMPL("int 0x6a", 0x000E6B8Cu); /* TODO: int 0x6a */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0x6A) = MEM8(ecx + 0x6A) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ecx + 0x6A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:cs */);
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + -939520406) = MEM8(edx + -939520406) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edx + -939520406)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0xE);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ecx, HI8(ecx) + LO8(ecx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0xE);
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ecx, HI8(ecx) + LO8(ecx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, 0xE);
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

}

/**
 * sub_000E6C20
 * Original: 0x000E6C20 - 0x000E6C67 (71 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6C20: ;
    ecx = MEM32(0x8F0040);
    SET_LO16(edx, MEM16(ecx + 0x18));
    ecx = MEM32(0x8F0044);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x18)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 0x18) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6C66; /* jne: not equal / not zero */

loc_000E6C36: ;
    ecx = MEM32(eax * 4 + 0x8F0040);
    MEM16(ecx + 0x18) = MEM16(ecx + 0x18) + 1;
    _fa = (uint32_t)(MEM16(ecx + 0x18)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x5C);
    MEM16(edx + 0x8F6B76) = MEM16(edx + 0x8F6B76) + 1;
    _fa = (uint32_t)(MEM16(edx + 0x8F6B76)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5C);
    MEM16(eax + 0x8F6B78) = MEM16(eax + 0x8F6B78) + 1;
    _fa = (uint32_t)(MEM16(eax + 0x8F6B78)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = edx + 0x8F6B76;
    eax = eax + 0x8F6B78;

loc_000E6C66: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E6C80
 * Original: 0x000E6C80 - 0x000E6C9A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6C80: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E6C96u); RECOMP_ABI_CALL(0x0003531Fu, sub_0003531F); /* call 0x0003531F */

loc_000E6C96: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6CA0
 * Original: 0x000E6CA0 - 0x000E6DBA (282 bytes, 69 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E6CA0: ;
    edx = MEM32(0x8EFF9C);
    eax = MEM32(0x8EFF88);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    MEM8(0x8FC5D8) = LO8(ebx);
    MEM32(0x8EFFB0) = ebx;
    MEM32(0x8EFF8C) = ebx;
    MEM32(0x8EFF90) = ebx;
    MEM32(0x8EFF94) = ebx;
    MEM32(0x8EFF98) = ebx;
    MEM32(0x8EFF9C) = edx;
    MEM32(0x8EFFAC) = 1;
    MEM32(0x8EFFA0) = 0xFFFFFFFFu;
    MEM32(0x8EFFA8) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E6D02; /* je: equal / zero */

loc_000E6CFB: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E6D02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E6CFBu); } /* indirect call */
    }

loc_000E6D02: ;
    MEM32(0x8EFF88) = 2;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC130); PUSH32(esp, 0x000E6D12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E6D0Cu); } /* indirect call */
    }

loc_000E6D12: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_000E6D29; /* je: equal / zero */

loc_000E6D22: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC158); PUSH32(esp, 0x000E6D29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E6D22u); } /* indirect call */
    }

loc_000E6D29: ;
    PUSH32(esp, 0x000E6D2Eu); RECOMP_ABI_CALL(0x0002E7AEu, sub_0002E7AE); /* call 0x0002E7AE */

loc_000E6D2E: ;
    PUSH32(esp, 0x000E6D33u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000E6D33: ;
    ecx = eax;
    PUSH32(esp, 0x000E6D3Au); RECOMP_ABI_CALL(0x00021C9Du, sub_00021C9D); /* call 0x00021C9D */

loc_000E6D3A: ;
    ecx = MEM32(0x8F0040);
    SET_LO8(eax, 5);
    MEM8(ecx + 0xD2) = LO8(eax);
    edx = MEM32(0x8F0044);
    MEM8(edx + 0xD2) = LO8(eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000E6D60;

    /* nop */
    /* nop */

loc_000E6D60: ;
    eax = MEM32(esi * 4 + 0x8F0040);
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6D76; /* jne: not equal / not zero */

loc_000E6D6C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E6D73u); RECOMP_ABI_CALL(0x00034415u, sub_00034415); /* call 0x00034415 */

loc_000E6D73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E6D76: ;
    ecx = MEM32(esi * 4 + 0x8F6A6C);
    PUSH32(esp, ebx);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 1);
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E6D8Du); RECOMP_ABI_CALL(0x00033DDAu, sub_00033DDA); /* call 0x00033DDA */

loc_000E6D8D: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E6D60; /* jl: less (signed <) */

loc_000E6D96: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000E6DA5; /* je: equal / zero */

loc_000E6DA1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E6DB0; /* jne: not equal / not zero */

loc_000E6DA5: ;
    ecx = MEM32(0x8F0650);
    PUSH32(esp, 0x000E6DB0u); RECOMP_ABI_CALL(0x000158E9u, sub_000158E9); /* call 0x000158E9 */

loc_000E6DB0: ;
    ecx = 0x8F0CF4;
    g_seh_ebp = ebp; sub_00035DD3(); return; /* tail jmp 0x00035DD3 */

}

/**
 * sub_000E6E00
 * Original: 0x000E6E00 - 0x000E6E30 (48 bytes, 16 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E6E00: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000E6E16u); RECOMP_ABI_CALL(0x0003531Fu, sub_0003531F); /* call 0x0003531F */

loc_000E6E16: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0x2E2EF);
    PUSH32(esp, 0x000E6E25u); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_000E6E25: ;
    ecx = eax;
    PUSH32(esp, 0x000E6E2Cu); RECOMP_ABI_CALL(0x0001F4CAu, sub_0001F4CA); /* call 0x0001F4CA */

loc_000E6E2C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E6E40
 * Original: 0x000E6E40 - 0x000E7109 (713 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E6E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_000E6E40: ;
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0 = xmm2; /* movaps */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    MEMF(ecx + 4) = xmm2.f[0]; /* movss */
    MEMF(ecx + 8) = xmm2.f[0]; /* movss */
    eax = 8;
    PUSH32(esp, ebx);

loc_000E6E62: ;
    edx = MEM32(eax + 0x8E8FA0);
    SET_LO8(ebx, MEM8(edx + 0x1DC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000E6E9E; /* jl: less (signed <) */

loc_000E6E72: ;
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    edx = MEM32(eax + 0x8E8FA0);
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000E6E9E: ;
    edx = MEM32(eax + 0x8E8FA4);
    SET_LO8(ebx, MEM8(edx + 0x1DC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000E6EDA; /* jl: less (signed <) */

loc_000E6EAE: ;
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    edx = MEM32(eax + 0x8E8FA4);
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000E6EDA: ;
    edx = MEM32(eax + 0x8E8FA8);
    SET_LO8(ebx, MEM8(edx + 0x1DC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000E6F16; /* jl: less (signed <) */

loc_000E6EEA: ;
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    edx = MEM32(eax + 0x8E8FA8);
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000E6F16: ;
    edx = MEM32(eax + 0x8E8FAC);
    SET_LO8(ebx, MEM8(edx + 0x1DC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000E6F52; /* jl: less (signed <) */

loc_000E6F26: ;
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    edx = MEM32(eax + 0x8E8FAC);
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000E6F52: ;
    edx = MEM32(eax + 0x8E8FB0);
    SET_LO8(ebx, MEM8(edx + 0x1DC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000E6F8E; /* jl: less (signed <) */

loc_000E6F62: ;
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    edx = MEM32(eax + 0x8E8FB0);
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000E6F8E: ;
    edx = MEM32(eax + 0x8E8FB4);
    SET_LO8(ebx, MEM8(edx + 0x1DC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000E6FCA; /* jl: less (signed <) */

loc_000E6F9E: ;
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    edx = MEM32(eax + 0x8E8FB4);
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000E6FCA: ;
    edx = MEM32(eax + 0x8E8FB8);
    SET_LO8(ebx, MEM8(edx + 0x1DC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000E7006; /* jl: less (signed <) */

loc_000E6FDA: ;
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    edx = MEM32(eax + 0x8E8FB8);
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000E7006: ;
    edx = MEM32(eax + 0x8E8FBC);
    SET_LO8(ebx, MEM8(edx + 0x1DC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000E7042; /* jl: less (signed <) */

loc_000E7016: ;
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    edx = MEM32(eax + 0x8E8FBC);
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000E7042: ;
    edx = MEM32(eax + 0x8E8FC0);
    SET_LO8(ebx, MEM8(edx + 0x1DC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000E707E; /* jl: less (signed <) */

loc_000E7052: ;
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    edx = MEM32(eax + 0x8E8FC0);
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000E707E: ;
    edx = MEM32(eax + 0x8E8FC4);
    SET_LO8(ebx, MEM8(edx + 0x1DC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_000E70BA; /* jl: less (signed <) */

loc_000E708E: ;
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx); /* addss */
    MEMF(ecx) = xmm3.f[0]; /* movss */
    edx = MEM32(eax + 0x8E8FC4);
    edx = MEM32(edx + 0x20);
    xmm3 = XMM_SCALAR(MEMF(edx + 0x38)); /* movss */
    xmm3.f[0] = xmm3.f[0] + MEMF(ecx + 8); /* addss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000E70BA: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x28)) >> 32) & 1);
    eax = eax + 0x28;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_000E6E62; /* jl: less (signed <) */

loc_000E70C8: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000E70EC; /* jnp: not parity */

loc_000E70D2: ;
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    esp += 4; return; /* ret */

loc_000E70EC: ;
    eax = MEM32(0x8E8F84);
    edx = MEM32(eax + 0x20);
    eax = MEM32(edx + 0x30);
    MEM32(ecx) = eax;
    edx = MEM32(0x8E8F84);
    eax = MEM32(edx + 0x20);
    edx = MEM32(eax + 0x38);
    MEM32(ecx + 8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000E71C0
 * Original: 0x000E71C0 - 0x000E7356 (406 bytes, 125 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E71C0(void)
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

loc_000E71C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x8EFF98) = 0xFFFFFFFFu;
    PUSH32(esp, 0x000E71D3u); RECOMP_ABI_CALL(0x000324C6u, sub_000324C6); /* call 0x000324C6 */

loc_000E71D3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000E71DAu); RECOMP_ABI_CALL(0x0002BD15u, sub_0002BD15); /* call 0x0002BD15 */

loc_000E71DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000E71E0: ;
    eax = MEM32(esi + 0x8F0040);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E71ECu); RECOMP_ABI_CALL(0x0001C6C1u, sub_0001C6C1); /* call 0x0001C6C1 */

loc_000E71EC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E71E0; /* jl: less (signed <) */

loc_000E71F7: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7219; /* je: equal / zero */

loc_000E7207: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E723C; /* jne: not equal / not zero */

loc_000E720C: ;
    SET_LO8(eax, MEM8(0x8F6A24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E7219; /* jl: less (signed <) */

loc_000E7215: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E723C; /* jle: less or equal (signed <=) */

loc_000E7219: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 2 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E723C; /* jne: not equal / not zero */

loc_000E7223: ;
    _fa = (uint32_t)(MEM16(0x896160)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896160), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E723C; /* jne: not equal / not zero */

loc_000E722D: ;
    _fa = (uint32_t)(MEM16(0x896162)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896162), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E723C; /* jne: not equal / not zero */

loc_000E7237: ;
    PUSH32(esp, 0x000E723Cu); RECOMP_ABI_CALL(0x0003765Bu, sub_0003765B); /* call 0x0003765B */

loc_000E723C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x000E7243u); RECOMP_ABI_CALL(0x0001D1DEu, sub_0001D1DE); /* call 0x0001D1DE */

loc_000E7243: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 1;
    /* nop */

loc_000E7250: ;
    edi = MEM32(ebx + 0x8F00F8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E7258: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000E7260u); RECOMP_ABI_CALL(0x00020E7Eu, sub_00020E7E); /* call 0x00020E7E */

loc_000E7260: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E72C4; /* je: equal / zero */

loc_000E7264: ;
    _fa = (uint32_t)(MEM32(eax + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x28), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E72C4; /* je: equal / zero */

loc_000E7269: ;
    ecx = MEM32(eax + 0x20);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E727B; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E7279: ;
    goto loc_000E7283;

loc_000E727B: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x30); /* subss */

loc_000E7283: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E7292; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000E728D: ;
    xmm0 = xmm2; /* movaps */
    goto loc_000E7297;

loc_000E7292: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + 0x38); /* subss */

loc_000E7297: ;
    xmm2 = XMM_SCALAR(MEMF(0x7B04A0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E72C4; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000E72A4: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7C222C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E72C4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7C222C)) */

loc_000E72AD: ;
    xmm1 = XMM_SCALAR(MEMF(0x7BA2E8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000E72C4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000E72BA: ;
    ecx = MEM32(eax + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000E72C4u); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_000E72C4: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E7258; /* jl: less (signed <) */

loc_000E72CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E7250; /* jl: less (signed <) */

loc_000E72D6: ;
    ecx = MEM32(0x8E9248);
    ecx = MEM32(ecx + 0x3C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000E72E6u); RECOMP_ABI_CALL(0x0001AD71u, sub_0001AD71); /* call 0x0001AD71 */

loc_000E72E6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000E72EFu); RECOMP_ABI_CALL(0x00033F7Eu, sub_00033F7E); /* call 0x00033F7E */

loc_000E72EF: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x000E72F7u); RECOMP_ABI_CALL(0x00033F7Eu, sub_00033F7E); /* call 0x00033F7E */

loc_000E72F7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x000E7300u); RECOMP_ABI_CALL(0x00033F7Eu, sub_00033F7E); /* call 0x00033F7E */

loc_000E7300: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x000E7309u); RECOMP_ABI_CALL(0x00033F7Eu, sub_00033F7E); /* call 0x00033F7E */

loc_000E7309: ;
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x000E7312u); RECOMP_ABI_CALL(0x00033F7Eu, sub_00033F7E); /* call 0x00033F7E */

loc_000E7312: ;
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x000E731Bu); RECOMP_ABI_CALL(0x00033F7Eu, sub_00033F7E); /* call 0x00033F7E */

loc_000E731B: ;
    eax = MEM32(0x8F0650);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000E733B; /* je: equal / zero */

loc_000E732B: ;
    eax = MEM32(eax + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7348; /* je: equal / zero */

loc_000E7336: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7348; /* je: equal / zero */

loc_000E733B: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000E7348u); RECOMP_ABI_CALL(0x0001B0F5u, sub_0001B0F5); /* call 0x0001B0F5 */

loc_000E7348: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x000E7355u); RECOMP_ABI_CALL(0x00019575u, sub_00019575); /* call 0x00019575 */

loc_000E7355: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E73C0
 * Original: 0x000E73C0 - 0x000E73E9 (41 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E73C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E73C0: ;
    PUSH32(esp, esi);
    MEM32(0x8EFF98) = 0xFFFFFFFFu;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000E73D0: ;
    eax = MEM32(esi + 0x8F0040);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000E73DCu); RECOMP_ABI_CALL(0x0001C6C1u, sub_0001C6C1); /* call 0x0001C6C1 */

loc_000E73DC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E73D0; /* jl: less (signed <) */

loc_000E73E7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E7400
 * Original: 0x000E7400 - 0x000E7449 (73 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7400: ;
    PUSH32(esp, 0x000E7405u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000E7405: ;
    ecx = eax;
    PUSH32(esp, 0x000E740Cu); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_000E740C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7445; /* jne: not equal / not zero */

loc_000E7410: ;
    _fa = (uint32_t)(MEM32(0x8EFF90)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFF90), 2 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7445; /* je: equal / zero */

loc_000E741E: ;
    PUSH32(esp, 0x000E7423u); RECOMP_ABI_CALL(0x0001ED4Au, sub_0001ED4A); /* call 0x0001ED4A */

loc_000E7423: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7445; /* je: equal / zero */

loc_000E7427: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000E7432u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_000E7432: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E743E; /* jne: not equal / not zero */

loc_000E7439: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E743E: ;
    eax = esi;
    eax = eax ^ 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E7445: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7460
 * Original: 0x000E7460 - 0x000E7509 (169 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7460: ;
    _fa = (uint32_t)(MEM32(0x8EFF90)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFF90), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7508; /* je: equal / zero */

loc_000E746D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000E7475u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_000E7475: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7494; /* je: equal / zero */

loc_000E747C: ;
    eax = MEM32(0x8F6A6C);
    eax = eax & 0x300;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7494; /* jne: not equal / not zero */

loc_000E748D: ;
    esi = 1;
    goto loc_000E7496;

loc_000E7494: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E7496: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E749Du); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_000E749D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E74B8; /* je: equal / zero */

loc_000E74A4: ;
    ecx = MEM32(0x8F6A70);
    ecx = ecx & 0x300;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x100 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E74DD; /* je: equal / zero */

loc_000E74B8: ;
    eax = MEM32(0x8EFF90);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E74CFu); RECOMP_ABI_CALL(0x00018A49u, sub_00018A49); /* call 0x00018A49 */

loc_000E74CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0x000E74DAu); RECOMP_ABI_CALL(0x00033DDAu, sub_00033DDA); /* call 0x00033DDA */

loc_000E74DA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E74DD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7507; /* jne: not equal / not zero */

loc_000E74E1: ;
    esi = MEM32(0x8EFF90);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000E74F9u); RECOMP_ABI_CALL(0x00018A49u, sub_00018A49); /* call 0x00018A49 */

loc_000E74F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000E7504u); RECOMP_ABI_CALL(0x00033DDAu, sub_00033DDA); /* call 0x00033DDA */

loc_000E7504: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E7507: ;
    POP32(esp, esi);

loc_000E7508: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7540
 * Original: 0x000E7540 - 0x000E7562 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7540: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 6;
    MEM32(eax) = 0x7CD0E8;
    MEM16(eax + 0x1C) = LO16(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E7570
 * Original: 0x000E7570 - 0x000E7576 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7570(void)
{

loc_000E7570: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7580
 * Original: 0x000E7580 - 0x000E7586 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7580(void)
{

loc_000E7580: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7590
 * Original: 0x000E7590 - 0x000E75C6 (54 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7590: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x000E759Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000E759D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E75C1; /* je: equal / zero */

loc_000E75A6: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000E75AEu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000E75AE: ;
    MEM32(esi) = 0x7CD0E8;
    SET_LO16(eax, MEM16(edi + 0x1C));
    MEM16(esi + 0x1C) = LO16(eax);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E75C1: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E75E0
 * Original: 0x000E75E0 - 0x000E7602 (34 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E75E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E75E0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO16(ecx, MEM16(esp + 4));
    MEM16(eax + 0xC) = 6;
    MEM16(eax + 0x1C) = LO16(ecx);
    MEM32(eax) = 0x7CD0F8;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000E7610
 * Original: 0x000E7610 - 0x000E7637 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7610(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7610: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM16(eax + 0xC) = 0x48;
    MEM32(eax) = 0x7CD108;
    MEM8(eax + 0x1C) = LO8(ecx);
    MEM8(eax + 0x1D) = LO8(edx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E7640
 * Original: 0x000E7640 - 0x000E7646 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7640(void)
{

loc_000E7640: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7650
 * Original: 0x000E7650 - 0x000E7656 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7650(void)
{

loc_000E7650: ;
    eax = 0x20;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7660
 * Original: 0x000E7660 - 0x000E769A (58 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7660: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    edi = ecx;
    PUSH32(esp, 0x000E766Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000E766D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7695; /* je: equal / zero */

loc_000E7676: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000E767Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000E767E: ;
    MEM32(esi) = 0x7CD108;
    SET_LO8(eax, MEM8(edi + 0x1C));
    MEM8(esi + 0x1C) = LO8(eax);
    SET_LO8(ecx, MEM8(edi + 0x1D));
    POP32(esp, edi);
    MEM8(esi + 0x1D) = LO8(ecx);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E7695: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E76B0
 * Original: 0x000E76B0 - 0x000E76DE (46 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E76B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E76B0: ;
    SET_LO8(edx, MEM8(esp + 8));
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x1C) = LO8(ecx);
    ecx = MEM32(esp + 0xC);
    MEM16(eax + 0xC) = 0x48;
    MEM8(eax + 0x1D) = LO8(edx);
    MEM32(eax) = 0x7CD118;
    MEM32(eax + 0x20) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000E76F0
 * Original: 0x000E76F0 - 0x000E7707 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E76F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E76F0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x49;
    MEM32(eax) = 0x7CD128;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7710
 * Original: 0x000E7710 - 0x000E7713 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000E7710(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7710: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7720
 * Original: 0x000E7720 - 0x000E7726 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7720(void)
{

loc_000E7720: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7730
 * Original: 0x000E7730 - 0x000E775E (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7730: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    edi = ecx;
    PUSH32(esp, 0x000E773Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000E773D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7759; /* je: equal / zero */

loc_000E7746: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000E774Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000E774E: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7CD128;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E7759: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E7770
 * Original: 0x000E7770 - 0x000E77B3 (67 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7770: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x1C) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0x20) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0x24) = ecx;
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x28) = edx;
    edx = MEM32(esp + 0x18);
    MEM16(eax + 0xC) = 0x49;
    MEM32(eax) = 0x7CD138;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    esp += 28; return; /* ret 24 */

}

/**
 * sub_000E77D0
 * Original: 0x000E77D0 - 0x000E77E7 (23 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E77D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E77D0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM16(eax + 0xC) = 0x46;
    MEM32(eax) = 0x7CD148;
    esp += 4; return; /* ret */

}

/**
 * sub_000E77F0
 * Original: 0x000E77F0 - 0x000E77F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000E77F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E77F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7800
 * Original: 0x000E7800 - 0x000E7806 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7800(void)
{

loc_000E7800: ;
    eax = 0x1C;
    esp += 4; return; /* ret */

}

/**
 * sub_000E7810
 * Original: 0x000E7810 - 0x000E783E (46 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7810: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x1C);
    edi = ecx;
    PUSH32(esp, 0x000E781Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_000E781D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7839; /* je: equal / zero */

loc_000E7826: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x000E782Eu); RECOMP_ABI_CALL(0x00027242u, sub_00027242); /* call 0x00027242 */

loc_000E782E: ;
    POP32(esp, edi);
    MEM32(esi) = 0x7CD148;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000E7839: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000E7850
 * Original: 0x000E7850 - 0x000E7877 (39 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7850: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM16(eax + 0xC) = 0x46;
    MEM32(eax) = 0x7CD158;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000E7880
 * Original: 0x000E7880 - 0x000E79CC (332 bytes, 69 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7880: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E788Au); RECOMP_ABI_CALL(0x00015D8Au, sub_00015D8A); /* call 0x00015D8A */

loc_000E788A: ;
    PUSH32(esp, 0x000E788Fu); RECOMP_ABI_CALL(0x0002833Bu, sub_0002833B); /* call 0x0002833B */

loc_000E788F: ;
    PUSH32(esp, 0x000E7894u); RECOMP_ABI_CALL(0x00011A0Fu, sub_00011A0F); /* call 0x00011A0F */

loc_000E7894: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x8EFF70) = edi;
    MEM32(0x8EFF74) = edi;
    MEM32(0x8EFF78) = edi;
    MEM32(0x8EFF7C) = edi;
    MEM32(0x8EFF80) = edi;
    MEM32(0x8EFF84) = edi;
    MEM32(0x8EFF6C) = esi;
    PUSH32(esp, 0x000E78C8u); RECOMP_ABI_CALL(0x0002E452u, sub_0002E452); /* call 0x0002E452 */

loc_000E78C8: ;
    ecx = MEM32(0x8EADA0);
    MEM16(0x896166) = LO16(edi);
    MEM16(0x896168) = LO16(edi);
    PUSH32(esp, 0x000E78E1u); RECOMP_ABI_CALL(0x00032E49u, sub_00032E49); /* call 0x00032E49 */

loc_000E78E1: ;
    PUSH32(esp, 0x000E78E6u); RECOMP_ABI_CALL(0x000370ACu, sub_000370AC); /* call 0x000370AC */

loc_000E78E6: ;
    eax = MEM32(0x8EFF9C);
    eax = eax & 0xFFFFFFFBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFFFF1Cu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0xFFFFFFE7u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8EFF88) = esi;
    MEM32(0x8EFF8C) = esi;
    MEM32(0x8EFFAC) = 1;
    MEM32(0x8EFF90) = esi;
    MEM32(0x8EFF94) = esi;
    MEM32(0x8EFF98) = esi;
    MEM32(0x8EFFB4) = esi;
    MEM32(0x8EFFB8) = esi;
    MEM32(0x8EFFB0) = esi;
    MEM32(0x8EFF9C) = eax;
    MEM32(0x8EFFA0) = edi;
    MEM32(0x8EFFA4) = edi;
    MEM32(0x8EFFA8) = esi;
    PUSH32(esp, 0x000E794Cu); RECOMP_ABI_CALL(0x0001448Fu, sub_0001448F); /* call 0x0001448F */

loc_000E794C: ;
    PUSH32(esp, 0x000E7951u); RECOMP_ABI_CALL(0x0001A970u, sub_0001A970); /* call 0x0001A970 */

loc_000E7951: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E795A; /* je: equal / zero */

loc_000E7955: ;
    PUSH32(esp, 0x000E795Au); RECOMP_ABI_CALL(0x00030617u, sub_00030617); /* call 0x00030617 */

loc_000E795A: ;
    ecx = esp + 8;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 8) = 0x7ABE10;
    MEM16(esp + 0x14) = 0xC;
    PUSH32(esp, 0x000E797Au); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E797A: ;
    _fa = (uint32_t)(MEM16(0x8F6A2C)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x8F6A2C), 1 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7989; /* je: equal / zero */

loc_000E7984: ;
    PUSH32(esp, 0x000E7989u); RECOMP_ABI_CALL(0x00035437u, sub_00035437); /* call 0x00035437 */

loc_000E7989: ;
    MEM32(0x8EFF88) = edi;
    PUSH32(esp, 0x000E7994u); RECOMP_ABI_CALL(0x0001DFB2u, sub_0001DFB2); /* call 0x0001DFB2 */

loc_000E7994: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E79A4; /* je: equal / zero */

loc_000E799D: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E79A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E799Du); } /* indirect call */
    }

loc_000E79A4: ;
    MEM32(0x8EFF88) = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC128); PUSH32(esp, 0x000E79B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E79AAu); } /* indirect call */
    }

loc_000E79B0: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    MEM32(0x8EFF94) = esi;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000E79C8; /* je: equal / zero */

loc_000E79C1: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC158); PUSH32(esp, 0x000E79C8u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000E79C1u); } /* indirect call */
    }

loc_000E79C8: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7A20
 * Original: 0x000E7A20 - 0x000E7BF7 (471 bytes, 158 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E7A20: ;
    eax = MEM32(0x8F0650);
    SET_LO16(edx, MEM16(0x896162));
    SET_LO16(ecx, MEM16(0x896160));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7A4A; /* je: equal / zero */

loc_000E7A3A: ;
    eax = MEM32(eax + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7A67; /* je: equal / zero */

loc_000E7A45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7A67; /* je: equal / zero */

loc_000E7A4A: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7A57; /* je: equal / zero */

loc_000E7A53: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7A67; /* jne: not equal / not zero */

loc_000E7A57: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7A67; /* jne: not equal / not zero */

loc_000E7A5C: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7A67; /* jne: not equal / not zero */

loc_000E7A61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E7A67: ;
    eax = (uint32_t)(int32_t)SMEM16(0x896166);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    if ((_fa == 0)) goto loc_000E7BAF; /* je: equal / zero */

loc_000E7A78: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_000E7B6A; /* je: equal / zero */

loc_000E7A7F: ;
    _fb = (uint32_t)(0xFC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xFC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000E7BED; /* jne: not equal / not zero */

loc_000E7A8A: ;
    PUSH32(esp, 0x000E7A8Fu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000E7A8F: ;
    ecx = eax;
    PUSH32(esp, 0x000E7A96u); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_000E7A96: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7BED; /* je: equal / zero */

loc_000E7A9E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000E7AA6u); RECOMP_ABI_CALL(0x00019101u, sub_00019101); /* call 0x00019101 */

loc_000E7AA6: ;
    esi = eax;
    PUSH32(esp, 0x000E7AADu); RECOMP_ABI_CALL(0x00014C46u, sub_00014C46); /* call 0x00014C46 */

loc_000E7AAD: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E7B5D; /* jle: less or equal (signed <=) */

loc_000E7AB7: ;
    eax = MEM32(0x8F0040);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0x1A);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x8F0044);
    ebp = (uint32_t)(int32_t)SMEM16(edx + 0x1A);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(esp + 0x10) = eax;
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_000E7B36; /* jle: less or equal (signed <=) */

loc_000E7AF3: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000E7B26; /* jne: not equal / not zero */

loc_000E7AF8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7B12; /* je: equal / zero */

loc_000E7AFC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */

loc_000E7B03: ;
    PUSH32(esp, 0x000E7B08u); RECOMP_ABI_CALL(0x000E6C20u, sub_000E6C20); /* call 0x000E6C20 */

loc_000E7B08: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E7B12: ;
    eax = 1;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000E7B24u); RECOMP_ABI_CALL(0x00011631u, sub_00011631); /* call 0x00011631 */

loc_000E7B24: ;
    goto loc_000E7B36;

loc_000E7B26: ;
    MEM32(esp + 0x10) = 0;
    MEM32(esp + 0x14) = 1;

loc_000E7B36: ;
    eax = 1;
    edx = esp + 0x1C;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000E7B41: ;
    esi = MEM32(esp + ecx + 0x10);
    ebx = MEM32(esp + ecx + 0x18);
    edi = MEM32(edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000E7B03; /* jl: less (signed <) */

loc_000E7B51: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000E7B41; /* jg: greater (signed >) */

loc_000E7B5D: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = 2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E7B6A: ;
    eax = MEM32(0x8F0040);
    SET_LO16(eax, MEM16(eax + 0x18));
    esi = MEM32(0x8F0044);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(esi + 0x18)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(esi + 0x18) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7B86; /* je: equal / zero */

loc_000E7B7F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E7B86: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BED; /* jne: not equal / not zero */

loc_000E7B8B: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BED; /* jne: not equal / not zero */

loc_000E7B90: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7B7F; /* je: equal / zero */

loc_000E7BA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7B7F; /* je: equal / zero */

loc_000E7BA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BED; /* jne: not equal / not zero */

loc_000E7BAA: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E7BAF: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BED; /* jne: not equal / not zero */

loc_000E7BB4: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BED; /* jne: not equal / not zero */

loc_000E7BB9: ;
    ecx = MEM32(0x8F0040);
    SET_LO16(edx, MEM16(ecx + 0x18));
    eax = MEM32(0x8F0044);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(eax + 0x18)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(eax + 0x18) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7B7F; /* jne: not equal / not zero */

loc_000E7BCE: ;
    eax = MEM32(0x8F6A68);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7B7F; /* je: equal / zero */

loc_000E7BDE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7BED; /* jne: not equal / not zero */

loc_000E7BE3: ;
    eax = 2;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E7BED: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7C70
 * Original: 0x000E7C70 - 0x000E7CB1 (65 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7C70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000E7C70: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7C81; /* je: equal / zero */

loc_000E7C7A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E7C81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E7C7Au); } /* indirect call */
    }

loc_000E7C81: ;
    MEM32(0x8EFF88) = 8;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC148); PUSH32(esp, 0x000E7C91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E7C8Bu); } /* indirect call */
    }

loc_000E7C91: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E7CAC; /* je: equal / zero */

loc_000E7CA5: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC158); PUSH32(esp, 0x000E7CACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E7CA5u); } /* indirect call */
    }

loc_000E7CAC: ;
    g_seh_ebp = ebp; sub_000E7460(); return; /* tail jmp 0x000E7460 */

}

/**
 * sub_000E7CD0
 * Original: 0x000E7CD0 - 0x000E7D0B (59 bytes, 15 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7CD0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(esp + 0x2C));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    SET_LO8(eax, MEM8(esp + 0x28));
    MEM8(esp + 0x1D) = LO8(ecx);
    ecx = esp;
    MEM16(esp + 0xC) = 0x48;
    MEM8(esp + 0x1C) = LO8(eax);
    MEM32(esp) = 0x7CD118;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x000E7D07u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E7D07: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7D20
 * Original: 0x000E7D20 - 0x000E7D5A (58 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7D20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7D20: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM16(esp + 0xC) = 0x58;
    MEM32(esp + 0x1C) = 2;
    MEM32(esp) = 0x7C2754;
    PUSH32(esp, 0x000E7D4Bu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E7D4B: ;
    ecx = MEM32(0x8EB3BC);
    PUSH32(esp, 0x000E7D56u); RECOMP_ABI_CALL(0x00011D02u, sub_00011D02); /* call 0x00011D02 */

loc_000E7D56: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7D70
 * Original: 0x000E7D70 - 0x000E7DE4 (116 bytes, 25 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7D70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7D70: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000E7D78u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000E7D78: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7DAB; /* jne: not equal / not zero */

loc_000E7D7C: ;
    _fa = (uint32_t)(MEM32(0x8EFF90)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFF90), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7DAB; /* jne: not equal / not zero */

loc_000E7D85: ;
    ecx = esp;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp) = 0x7ABE10;
    MEM16(esp + 0xC) = 0xC;
    PUSH32(esp, 0x000E7DABu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E7DAB: ;
    PUSH32(esp, 0x000E7DB0u); RECOMP_ABI_CALL(0x00013382u, sub_00013382); /* call 0x00013382 */

loc_000E7DB0: ;
    eax = MEM32(0x8FC1D0);
    PUSH32(esp, 1);
    MEM32(eax + 0x21C) = 0;
    PUSH32(esp, 0x000E7DC6u); RECOMP_ABI_CALL(0x0001D1DEu, sub_0001D1DE); /* call 0x0001D1DE */

loc_000E7DC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x000E7DD3u); RECOMP_ABI_CALL(0x00032886u, sub_00032886); /* call 0x00032886 */

loc_000E7DD3: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 5);
    PUSH32(esp, 0x000E7DE0u); RECOMP_ABI_CALL(0x00019575u, sub_00019575); /* call 0x00019575 */

loc_000E7DE0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7E10
 * Original: 0x000E7E10 - 0x000E7EDE (206 bytes, 49 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7E10: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7EDA; /* je: equal / zero */

loc_000E7E20: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7EDA; /* je: equal / zero */

loc_000E7E28: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7E47; /* jne: not equal / not zero */

loc_000E7E32: ;
    PUSH32(esp, 0x000E7E37u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000E7E37: ;
    ecx = eax;
    PUSH32(esp, 0x000E7E3Eu); RECOMP_ABI_CALL(0x0001A907u, sub_0001A907); /* call 0x0001A907 */

loc_000E7E3E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7E47; /* jne: not equal / not zero */

loc_000E7E42: ;
    PUSH32(esp, 0x000E7E47u); RECOMP_ABI_CALL(0x00505F20u, sub_00505F20); /* call 0x00505F20 */

loc_000E7E47: ;
    PUSH32(esp, 0x000E7E4Cu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_000E7E4C: ;
    ecx = eax;
    PUSH32(esp, 0x000E7E53u); RECOMP_ABI_CALL(0x0002BC02u, sub_0002BC02); /* call 0x0002BC02 */

loc_000E7E53: ;
    SET_LO8(eax, MEM8(0x896177));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7E84; /* je: equal / zero */

loc_000E7E5C: ;
    PUSH32(esp, 0x000E7E61u); RECOMP_ABI_CALL(0x00011EABu, sub_00011EAB); /* call 0x00011EAB */

loc_000E7E61: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0x000E7E6Cu); RECOMP_ABI_CALL(0x000295E2u, sub_000295E2); /* call 0x000295E2 */

loc_000E7E6C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x10029);
    PUSH32(esp, 0x8B21B8);
    PUSH32(esp, 0x000E7E81u); RECOMP_ABI_CALL(0x0001A26Du, sub_0001A26D); /* call 0x0001A26D */

loc_000E7E81: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000E7E84: ;
    PUSH32(esp, 0x000E7E89u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000E7E89: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7EC3; /* jne: not equal / not zero */

loc_000E7E8D: ;
    _fa = (uint32_t)(MEM32(0x8EFF90)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8EFF90), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7EBE; /* jne: not equal / not zero */

loc_000E7E96: ;
    ecx = esp;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM32(esp) = 0x7ABE10;
    MEM16(esp + 0xC) = 5;
    PUSH32(esp, 0x000E7EBCu); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E7EBC: ;
    goto loc_000E7EC3;

loc_000E7EBE: ;
    PUSH32(esp, 0x000E7EC3u); RECOMP_ABI_CALL(0x00024254u, sub_00024254); /* call 0x00024254 */

loc_000E7EC3: ;
    eax = MEM32(0x8EFF9C);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x8E960C) = 0;
    MEM32(0x8EFF9C) = eax;

loc_000E7EDA: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7F20
 * Original: 0x000E7F20 - 0x000E7F91 (113 bytes, 28 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7F20: ;
    eax = MEM32(0x8EFF90);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000E7F48; /* jne: not equal / not zero */

loc_000E7F2D: ;
    PUSH32(esp, 0x000E7F32u); RECOMP_ABI_CALL(0x0001F67Du, sub_0001F67D); /* call 0x0001F67D */

loc_000E7F32: ;
    ecx = MEM32(0x901E28);
    MEM8(0x896177) = 1;
    PUSH32(esp, 0x000E7F44u); RECOMP_ABI_CALL(0x00031D2Du, sub_00031D2D); /* call 0x00031D2D */

loc_000E7F44: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000E7F48: ;
    PUSH32(esp, 0x000E7F4Du); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_000E7F4D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E7F82; /* je: equal / zero */

loc_000E7F51: ;
    PUSH32(esp, 0x000E7F56u); RECOMP_ABI_CALL(0x00014C46u, sub_00014C46); /* call 0x00014C46 */

loc_000E7F56: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000E7F82; /* jle: less or equal (signed <=) */

loc_000E7F5A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esp;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM16(esp + 0xC) = 0x58;
    MEM32(esp + 0x1C) = 4;
    MEM32(esp) = 0x7C2754;
    PUSH32(esp, 0x000E7F82u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E7F82: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x000E7F8Du); RECOMP_ABI_CALL(0x00031D2Du, sub_00031D2D); /* call 0x00031D2D */

loc_000E7F8D: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000E7FB0
 * Original: 0x000E7FB0 - 0x000E804C (156 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E7FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E7FB0: ;
    PUSH32(esp, 1);
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x000E7FBCu); RECOMP_ABI_CALL(0x00026DB0u, sub_00026DB0); /* call 0x00026DB0 */

loc_000E7FBC: ;
    PUSH32(esp, 0x000E7FC1u); RECOMP_ABI_CALL(0x0001C3D8u, sub_0001C3D8); /* call 0x0001C3D8 */

loc_000E7FC1: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x000E7FC8u); RECOMP_ABI_CALL(0x00029DF8u, sub_00029DF8); /* call 0x00029DF8 */

loc_000E7FC8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000E7FD0u); RECOMP_ABI_CALL(0x00035437u, sub_00035437); /* call 0x00035437 */

loc_000E7FD0: ;
    PUSH32(esp, 0x000E7FD5u); RECOMP_ABI_CALL(0x000E7460u, sub_000E7460); /* call 0x000E7460 */

loc_000E7FD5: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x000E7FDFu); RECOMP_ABI_CALL(0x00026AD1u, sub_00026AD1); /* call 0x00026AD1 */

loc_000E7FDF: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x000E7FEAu); RECOMP_ABI_CALL(0x00031D2Du, sub_00031D2D); /* call 0x00031D2D */

loc_000E7FEA: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x000E7FF5u); RECOMP_ABI_CALL(0x0002EF29u, sub_0002EF29); /* call 0x0002EF29 */

loc_000E7FF5: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000E8006; /* je: equal / zero */

loc_000E7FFF: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC188); PUSH32(esp, 0x000E8006u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E7FFFu); } /* indirect call */
    }

loc_000E8006: ;
    MEM32(0x8EFF88) = 0xA;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(0x8AC150); PUSH32(esp, 0x000E8016u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E8010u); } /* indirect call */
    }

loc_000E8016: ;
    eax = MEM32(0x8EFF88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(0x8EFF94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000E803E; /* je: equal / zero */

loc_000E802A: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8AC158); PUSH32(esp, 0x000E8031u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000E802Au); } /* indirect call */
    }

loc_000E8031: ;
    eax = MEM32(0x8FC1D0);
    MEM8(eax + 0x1DC) = 0;
    esp += 4; return; /* ret */

loc_000E803E: ;
    ecx = MEM32(0x8FC1D0);
    MEM8(ecx + 0x1DC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000E8080
 * Original: 0x000E8080 - 0x000E80CA (74 bytes, 13 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000E8080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000E8080: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(esp + 4) = 0;
    MEM32(esp + 8) = 0;
    MEM16(esp + 0xC) = 0x58;
    MEM32(esp + 0x1C) = 3;
    MEM32(esp) = 0x7C2754;
    PUSH32(esp, 0x000E80B1u); RECOMP_ABI_CALL(0x0001DF08u, sub_0001DF08); /* call 0x0001DF08 */

loc_000E80B1: ;
    ecx = MEM32(0x901E28);
    MEM32(0x8EFFBC) = 0;
    PUSH32(esp, 0x000E80C6u); RECOMP_ABI_CALL(0x0002EF29u, sub_0002EF29); /* call 0x0002EF29 */

loc_000E80C6: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
