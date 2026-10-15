/**
 * nhl_07_recomp - Recompiled code chunk 114
 * Functions: 250 (0x0014F600 - 0x0015A740)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0014F600
 * Original: 0x0014F600 - 0x0014F69E (158 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F600: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8C);
    PUSH32(esp, edi);
    eax = esp + 0x4C;
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0014F624u); RECOMP_ABI_CALL(0x0002167Bu, sub_0002167B); /* call 0x0002167B */

loc_0014F624: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F690; /* je: equal / zero */

loc_0014F62B: ;
    edx = edi + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F639u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0014F639: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F690; /* jne: not equal / not zero */

loc_0014F640: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F663; /* je: equal / zero */

loc_0014F648: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014F656u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0014F656: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F672; /* je: equal / zero */

loc_0014F65D: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F648; /* jne: not equal / not zero */

loc_0014F663: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0014F672: ;
    eax = MEM32(esp + 0x98);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x0014F681u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014F67Eu); } /* indirect call */
    }

loc_0014F681: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0014F690: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014F6D0
 * Original: 0x0014F6D0 - 0x0014F6E8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F6D0: ;
    ecx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F6E7; /* je: equal / zero */

loc_0014F6D9: ;
    /* nop */

loc_0014F6E0: ;
    ecx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F6E0; /* jne: not equal / not zero */

loc_0014F6E7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014F6F0
 * Original: 0x0014F6F0 - 0x0014F719 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F6F0: ;
    eax = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F70B; /* je: equal / zero */

loc_0014F6F9: ;
    ecx = MEM32(esp + 4);
    /* nop */

loc_0014F700: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F713; /* je: equal / zero */

loc_0014F704: ;
    eax = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F700; /* jne: not equal / not zero */

loc_0014F70B: ;
    eax = 0x7E1A38;
    esp += 8; return; /* ret 4 */

loc_0014F713: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F730
 * Original: 0x0014F730 - 0x0014F78C (92 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F730: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x7E1AB4;
    if (CMP_EQ(_fa, _fb)) goto loc_0014F753; /* je: equal / zero */

loc_0014F740: ;
    PUSH32(esp, esi);

loc_0014F741: ;
    esi = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F749u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0014F749: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0014F741; /* jne: not equal / not zero */

loc_0014F752: ;
    POP32(esp, esi);

loc_0014F753: ;
    MEM32(edi) = 0x7DF53C;
    eax = MEM32(0x8F06F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F76C; /* jne: not equal / not zero */

loc_0014F762: ;
    eax = MEM32(edi + 4);
    MEM32(0x8F06F8) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0014F76C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F78A; /* je: equal / zero */

loc_0014F770: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F77F; /* je: equal / zero */

loc_0014F777: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F770; /* jne: not equal / not zero */

loc_0014F77D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0014F77F: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F78A; /* jne: not equal / not zero */

loc_0014F784: ;
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;

loc_0014F78A: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F7B0
 * Original: 0x0014F7B0 - 0x0014F7FA (74 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F7B0: ;
    eax = ecx;
    MEM32(eax) = 0x7DF53C;
    ecx = MEM32(0x8F06F8);
    MEM32(eax + 4) = ecx;
    MEM32(0x8F06F8) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax) = 0x7E1AD8;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = 0;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edx = eax + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_0014F7F3; /* je: equal / zero */

loc_0014F7E8: ;
    MEM8(edx) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F7E8; /* jne: not equal / not zero */

loc_0014F7F3: ;
    MEM8(edx) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F810
 * Original: 0x0014F810 - 0x0014F814 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F810(void)
{

loc_0014F810: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014F820
 * Original: 0x0014F820 - 0x0014F8BE (158 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014F820: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8C);
    PUSH32(esp, edi);
    eax = esp + 0x4C;
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0014F844u); RECOMP_ABI_CALL(0x0002167Bu, sub_0002167B); /* call 0x0002167B */

loc_0014F844: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F8B0; /* je: equal / zero */

loc_0014F84B: ;
    edx = edi + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F859u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0014F859: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F8B0; /* jne: not equal / not zero */

loc_0014F860: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F883; /* je: equal / zero */

loc_0014F868: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014F876u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0014F876: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F892; /* je: equal / zero */

loc_0014F87D: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F868; /* jne: not equal / not zero */

loc_0014F883: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0014F892: ;
    eax = MEM32(esp + 0x98);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x0014F8A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014F89Eu); } /* indirect call */
    }

loc_0014F8A1: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0014F8B0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014F8F0
 * Original: 0x0014F8F0 - 0x0014F908 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F8F0: ;
    ecx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F907; /* je: equal / zero */

loc_0014F8F9: ;
    /* nop */

loc_0014F900: ;
    ecx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F900; /* jne: not equal / not zero */

loc_0014F907: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014F910
 * Original: 0x0014F910 - 0x0014F939 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F910: ;
    eax = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F92B; /* je: equal / zero */

loc_0014F919: ;
    ecx = MEM32(esp + 4);
    /* nop */

loc_0014F920: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F933; /* je: equal / zero */

loc_0014F924: ;
    eax = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F920; /* jne: not equal / not zero */

loc_0014F92B: ;
    eax = 0x7E1A38;
    esp += 8; return; /* ret 4 */

loc_0014F933: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014F950
 * Original: 0x0014F950 - 0x0014F9AC (92 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F950: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x7E1AD8;
    if (CMP_EQ(_fa, _fb)) goto loc_0014F973; /* je: equal / zero */

loc_0014F960: ;
    PUSH32(esp, esi);

loc_0014F961: ;
    esi = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014F969u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0014F969: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0014F961; /* jne: not equal / not zero */

loc_0014F972: ;
    POP32(esp, esi);

loc_0014F973: ;
    MEM32(edi) = 0x7DF53C;
    eax = MEM32(0x8F06F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F98C; /* jne: not equal / not zero */

loc_0014F982: ;
    eax = MEM32(edi + 4);
    MEM32(0x8F06F8) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0014F98C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F9AA; /* je: equal / zero */

loc_0014F990: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014F99F; /* je: equal / zero */

loc_0014F997: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F990; /* jne: not equal / not zero */

loc_0014F99D: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0014F99F: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014F9AA; /* jne: not equal / not zero */

loc_0014F9A4: ;
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;

loc_0014F9AA: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014F9D0
 * Original: 0x0014F9D0 - 0x0014FA1A (74 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014F9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014F9D0: ;
    eax = ecx;
    MEM32(eax) = 0x7DF53C;
    ecx = MEM32(0x8F06F8);
    MEM32(eax + 4) = ecx;
    MEM32(0x8F06F8) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax) = 0x7E1AFC;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = 0;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edx = eax + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_0014FA13; /* je: equal / zero */

loc_0014FA08: ;
    MEM8(edx) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FA08; /* jne: not equal / not zero */

loc_0014FA13: ;
    MEM8(edx) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FA30
 * Original: 0x0014FA30 - 0x0014FA34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FA30(void)
{

loc_0014FA30: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014FA40
 * Original: 0x0014FA40 - 0x0014FADE (158 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014FA40: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8C);
    PUSH32(esp, edi);
    eax = esp + 0x4C;
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0014FA64u); RECOMP_ABI_CALL(0x0002167Bu, sub_0002167B); /* call 0x0002167B */

loc_0014FA64: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FAD0; /* je: equal / zero */

loc_0014FA6B: ;
    edx = edi + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FA79u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0014FA79: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FAD0; /* jne: not equal / not zero */

loc_0014FA80: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FAA3; /* je: equal / zero */

loc_0014FA88: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014FA96u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0014FA96: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FAB2; /* je: equal / zero */

loc_0014FA9D: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FA88; /* jne: not equal / not zero */

loc_0014FAA3: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0014FAB2: ;
    eax = MEM32(esp + 0x98);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x0014FAC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014FABEu); } /* indirect call */
    }

loc_0014FAC1: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0014FAD0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014FB10
 * Original: 0x0014FB10 - 0x0014FB28 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FB10: ;
    ecx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FB27; /* je: equal / zero */

loc_0014FB19: ;
    /* nop */

loc_0014FB20: ;
    ecx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FB20; /* jne: not equal / not zero */

loc_0014FB27: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014FB30
 * Original: 0x0014FB30 - 0x0014FB59 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FB30: ;
    eax = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FB4B; /* je: equal / zero */

loc_0014FB39: ;
    ecx = MEM32(esp + 4);
    /* nop */

loc_0014FB40: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FB53; /* je: equal / zero */

loc_0014FB44: ;
    eax = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FB40; /* jne: not equal / not zero */

loc_0014FB4B: ;
    eax = 0x7E1A38;
    esp += 8; return; /* ret 4 */

loc_0014FB53: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FB70
 * Original: 0x0014FB70 - 0x0014FBCC (92 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FB70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FB70: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x7E1AFC;
    if (CMP_EQ(_fa, _fb)) goto loc_0014FB93; /* je: equal / zero */

loc_0014FB80: ;
    PUSH32(esp, esi);

loc_0014FB81: ;
    esi = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FB89u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0014FB89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0014FB81; /* jne: not equal / not zero */

loc_0014FB92: ;
    POP32(esp, esi);

loc_0014FB93: ;
    MEM32(edi) = 0x7DF53C;
    eax = MEM32(0x8F06F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FBAC; /* jne: not equal / not zero */

loc_0014FBA2: ;
    eax = MEM32(edi + 4);
    MEM32(0x8F06F8) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0014FBAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FBCA; /* je: equal / zero */

loc_0014FBB0: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FBBF; /* je: equal / zero */

loc_0014FBB7: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FBB0; /* jne: not equal / not zero */

loc_0014FBBD: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0014FBBF: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FBCA; /* jne: not equal / not zero */

loc_0014FBC4: ;
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;

loc_0014FBCA: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014FBF0
 * Original: 0x0014FBF0 - 0x0014FC3A (74 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FBF0: ;
    eax = ecx;
    MEM32(eax) = 0x7DF53C;
    ecx = MEM32(0x8F06F8);
    MEM32(eax + 4) = ecx;
    MEM32(0x8F06F8) = eax;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM32(eax) = 0x7E1B20;
    MEM32(eax + 8) = 0;
    MEM32(eax + 0xC) = 0;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    edx = eax + 0x10;
    if (CMP_EQ(_fa, _fb)) goto loc_0014FC33; /* je: equal / zero */

loc_0014FC28: ;
    MEM8(edx) = LO8(ecx);
    SET_LO8(ecx, MEM8(esi + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FC28; /* jne: not equal / not zero */

loc_0014FC33: ;
    MEM8(edx) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FC50
 * Original: 0x0014FC50 - 0x0014FC54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FC50(void)
{

loc_0014FC50: ;
    eax = ecx + 0x10;
    esp += 4; return; /* ret */

}

/**
 * sub_0014FC60
 * Original: 0x0014FC60 - 0x0014FCFE (158 bytes, 64 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0014FC60: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x8C);
    PUSH32(esp, edi);
    eax = esp + 0x4C;
    edi = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x0014FC84u); RECOMP_ABI_CALL(0x0002167Bu, sub_0002167B); /* call 0x0002167B */

loc_0014FC84: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FCF0; /* je: equal / zero */

loc_0014FC8B: ;
    edx = edi + 0x10;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FC99u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0014FC99: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FCF0; /* jne: not equal / not zero */

loc_0014FCA0: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FCC3; /* je: equal / zero */

loc_0014FCA8: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    edx = esi + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0014FCB6u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_0014FCB6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FCD2; /* je: equal / zero */

loc_0014FCBD: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FCA8; /* jne: not equal / not zero */

loc_0014FCC3: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0014FCD2: ;
    eax = MEM32(esp + 0x98);
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x0014FCE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0014FCDEu); } /* indirect call */
    }

loc_0014FCE1: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0014FCF0: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0014FD30
 * Original: 0x0014FD30 - 0x0014FD48 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FD30: ;
    ecx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FD47; /* je: equal / zero */

loc_0014FD39: ;
    /* nop */

loc_0014FD40: ;
    ecx = MEM32(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FD40; /* jne: not equal / not zero */

loc_0014FD47: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0014FD50
 * Original: 0x0014FD50 - 0x0014FD79 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FD50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FD50: ;
    eax = MEM32(ecx + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FD6B; /* je: equal / zero */

loc_0014FD59: ;
    ecx = MEM32(esp + 4);
    /* nop */

loc_0014FD60: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FD73; /* je: equal / zero */

loc_0014FD64: ;
    eax = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FD60; /* jne: not equal / not zero */

loc_0014FD6B: ;
    eax = 0x7E1A38;
    esp += 8; return; /* ret 4 */

loc_0014FD73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FD90
 * Original: 0x0014FD90 - 0x0014FDEC (92 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FD90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FD90: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x7E1B20;
    if (CMP_EQ(_fa, _fb)) goto loc_0014FDB3; /* je: equal / zero */

loc_0014FDA0: ;
    PUSH32(esp, esi);

loc_0014FDA1: ;
    esi = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0014FDA9u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0014FDA9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0014FDA1; /* jne: not equal / not zero */

loc_0014FDB2: ;
    POP32(esp, esi);

loc_0014FDB3: ;
    MEM32(edi) = 0x7DF53C;
    eax = MEM32(0x8F06F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FDCC; /* jne: not equal / not zero */

loc_0014FDC2: ;
    eax = MEM32(edi + 4);
    MEM32(0x8F06F8) = eax;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0014FDCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FDEA; /* je: equal / zero */

loc_0014FDD0: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FDDF; /* je: equal / zero */

loc_0014FDD7: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FDD0; /* jne: not equal / not zero */

loc_0014FDDD: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0014FDDF: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0014FDEA; /* jne: not equal / not zero */

loc_0014FDE4: ;
    ecx = MEM32(edi + 4);
    MEM32(eax + 4) = ecx;

loc_0014FDEA: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014FE10
 * Original: 0x0014FE10 - 0x0014FE5C (76 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FE10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C);
    PUSH32(esp, 0x0014FE1Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0014FE1D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FE4E; /* je: equal / zero */

loc_0014FE26: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014FE32u); RECOMP_ABI_CALL(0x00024CAEu, sub_00024CAE); /* call 0x00024CAE */

loc_0014FE32: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x108) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(esi) = 0x7E0B9C;
    PUSH32(esp, 0x0014FE4Cu); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_0014FE4C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014FE4E: ;
    ecx = MEM32(esp + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014FE5Au); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_0014FE5A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014FE70
 * Original: 0x0014FE70 - 0x0014FEBC (76 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FE70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C);
    PUSH32(esp, 0x0014FE7Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0014FE7D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FEAE; /* je: equal / zero */

loc_0014FE86: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014FE92u); RECOMP_ABI_CALL(0x00024CAEu, sub_00024CAE); /* call 0x00024CAE */

loc_0014FE92: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x108) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(esi) = 0x7E0BAC;
    PUSH32(esp, 0x0014FEACu); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_0014FEAC: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014FEAE: ;
    ecx = MEM32(esp + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014FEBAu); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_0014FEBA: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014FED0
 * Original: 0x0014FED0 - 0x0014FF1C (76 bytes, 26 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FED0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C);
    PUSH32(esp, 0x0014FEDDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0014FEDD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0014FF0E; /* je: equal / zero */

loc_0014FEE6: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0014FEF2u); RECOMP_ABI_CALL(0x00024CAEu, sub_00024CAE); /* call 0x00024CAE */

loc_0014FEF2: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x108) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    MEM32(esi) = 0x7E0BBC;
    PUSH32(esp, 0x0014FF0Cu); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_0014FF0C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0014FF0E: ;
    ecx = MEM32(esp + 8);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014FF1Au); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_0014FF1A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0014FF30
 * Original: 0x0014FF30 - 0x0014FF4E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FF30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014FF38u); RECOMP_ABI_CALL(0x00019F2Fu, sub_00019F2F); /* call 0x00019F2F */

loc_0014FF38: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FF48; /* je: equal / zero */

loc_0014FF3F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014FF45u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0014FF45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014FF48: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FF60
 * Original: 0x0014FF60 - 0x0014FF7E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FF60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014FF68u); RECOMP_ABI_CALL(0x00029448u, sub_00029448); /* call 0x00029448 */

loc_0014FF68: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FF78; /* je: equal / zero */

loc_0014FF6F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014FF75u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0014FF75: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014FF78: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FF90
 * Original: 0x0014FF90 - 0x0014FFAE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FF90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014FF98u); RECOMP_ABI_CALL(0x0001D7FBu, sub_0001D7FB); /* call 0x0001D7FB */

loc_0014FF98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FFA8; /* je: equal / zero */

loc_0014FF9F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014FFA5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0014FFA5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014FFA8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FFC0
 * Original: 0x0014FFC0 - 0x0014FFDE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014FFC8u); RECOMP_ABI_CALL(0x000337E0u, sub_000337E0); /* call 0x000337E0 */

loc_0014FFC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0014FFD8; /* je: equal / zero */

loc_0014FFCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0014FFD5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0014FFD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0014FFD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FFF0
 * Original: 0x0014FFF0 - 0x0015000E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FFF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FFF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0014FFF8u); RECOMP_ABI_CALL(0x00018030u, sub_00018030); /* call 0x00018030 */

loc_0014FFF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00150008; /* je: equal / zero */

loc_0014FFFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00150005u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00150005: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150008: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FFF3
 * Original: 0x0014FFF3 - 0x0015000E (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FFF3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FFF3: ;
    PUSH32(esp, 0x0014FFF8u); RECOMP_ABI_CALL(0x00018030u, sub_00018030); /* call 0x00018030 */

loc_0014FFF8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00150008; /* je: equal / zero */

loc_0014FFFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00150005u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00150005: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150008: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0014FFFF
 * Original: 0x0014FFFF - 0x0015000E (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0014FFFF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0014FFFF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00150005u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00150005: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150000
 * Original: 0x00150000 - 0x0015000E (14 bytes, 5 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150000: ;
    PUSH32(esp, 0x00150005u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00150005: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150020
 * Original: 0x00150020 - 0x0015003E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150020: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00150028u); RECOMP_ABI_CALL(0x000153F3u, sub_000153F3); /* call 0x000153F3 */

loc_00150028: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00150038; /* je: equal / zero */

loc_0015002F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00150035u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00150035: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150038: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150050
 * Original: 0x00150050 - 0x0015006E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150050: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00150058u); RECOMP_ABI_CALL(0x00028499u, sub_00028499); /* call 0x00028499 */

loc_00150058: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00150068; /* je: equal / zero */

loc_0015005F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00150065u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00150065: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150068: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150080
 * Original: 0x00150080 - 0x0015009E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150080: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00150088u); RECOMP_ABI_CALL(0x00012CCAu, sub_00012CCA); /* call 0x00012CCA */

loc_00150088: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00150098; /* je: equal / zero */

loc_0015008F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00150095u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00150095: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150098: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001500B0
 * Original: 0x001500B0 - 0x001500CF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001500B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001500B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DFBE8;
    if (TEST_Z(_fa, _fb)) goto loc_001500C9; /* je: equal / zero */

loc_001500C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001500C6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001500C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001500C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001500E0
 * Original: 0x001500E0 - 0x001500FF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001500E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001500E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DFBE8;
    if (TEST_Z(_fa, _fb)) goto loc_001500F9; /* je: equal / zero */

loc_001500F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001500F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001500F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001500F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150110
 * Original: 0x00150110 - 0x0015012F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150110: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7DFBE8;
    if (TEST_Z(_fa, _fb)) goto loc_00150129; /* je: equal / zero */

loc_00150120: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00150126u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00150126: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00150129: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150140
 * Original: 0x00150140 - 0x00150174 (52 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150140(void)
{

loc_00150140: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0015014Du); RECOMP_ABI_CALL(0x00024CFEu, sub_00024CFE); /* call 0x00024CFE */

loc_0015014D: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x7E1B68);
    MEM32(esi + 0x50) = ecx;
    PUSH32(esp, 0x2F320);
    ecx = esi;
    MEM32(esi) = 0x7E1B44;
    MEM32(esi + 0xC) = esi;
    PUSH32(esp, 0x0015016Eu); RECOMP_ABI_CALL(0x0002D331u, sub_0002D331); /* call 0x0002D331 */

loc_0015016E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00150190
 * Original: 0x00150190 - 0x00150410 (640 bytes, 154 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150190(void)
{

loc_00150190: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0015019Du); RECOMP_ABI_CALL(0x00014B29u, sub_00014B29); /* call 0x00014B29 */

loc_0015019D: ;
    PUSH32(esp, 0x7E1F00);
    PUSH32(esp, 0x35554);
    ecx = esi;
    MEM32(esi) = 0x7E1EDC;
    MEM32(esi + 0xC) = esi;
    PUSH32(esp, 0x001501B7u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001501B7: ;
    PUSH32(esp, 0x7E1EB8);
    PUSH32(esp, 0x1C48C);
    ecx = esi;
    PUSH32(esp, 0x001501C8u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001501C8: ;
    PUSH32(esp, 0x7E1EAC);
    PUSH32(esp, 0x14534);
    ecx = esi;
    PUSH32(esp, 0x001501D9u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001501D9: ;
    PUSH32(esp, 0x7E1E88);
    PUSH32(esp, 0x1DB7F);
    ecx = esi;
    PUSH32(esp, 0x001501EAu); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001501EA: ;
    PUSH32(esp, 0x7E1E70);
    PUSH32(esp, 0x18701);
    ecx = esi;
    PUSH32(esp, 0x001501FBu); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001501FB: ;
    PUSH32(esp, 0x7E1E60);
    PUSH32(esp, 0x26F40);
    ecx = esi;
    PUSH32(esp, 0x0015020Cu); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_0015020C: ;
    PUSH32(esp, 0x7E1E50);
    PUSH32(esp, 0x1A178);
    ecx = esi;
    PUSH32(esp, 0x0015021Du); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_0015021D: ;
    PUSH32(esp, 0x7E1E34);
    PUSH32(esp, 0x1660E);
    ecx = esi;
    PUSH32(esp, 0x0015022Eu); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_0015022E: ;
    PUSH32(esp, 0x7E1E20);
    PUSH32(esp, 0x37EEE);
    ecx = esi;
    PUSH32(esp, 0x0015023Fu); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_0015023F: ;
    PUSH32(esp, 0x7E1E08);
    PUSH32(esp, 0x246DC);
    ecx = esi;
    PUSH32(esp, 0x00150250u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_00150250: ;
    PUSH32(esp, 0x7E1DEC);
    PUSH32(esp, 0x280FC);
    ecx = esi;
    PUSH32(esp, 0x00150261u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_00150261: ;
    PUSH32(esp, 0x7E1DDC);
    PUSH32(esp, 0x1DE31);
    ecx = esi;
    PUSH32(esp, 0x00150272u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_00150272: ;
    PUSH32(esp, 0x7E1DB4);
    PUSH32(esp, 0x3416D);
    ecx = esi;
    PUSH32(esp, 0x00150283u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_00150283: ;
    PUSH32(esp, 0x7E1D9C);
    PUSH32(esp, 0x26031);
    ecx = esi;
    PUSH32(esp, 0x00150294u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_00150294: ;
    PUSH32(esp, 0x7E1D84);
    PUSH32(esp, 0x111B8);
    ecx = esi;
    PUSH32(esp, 0x001502A5u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001502A5: ;
    PUSH32(esp, 0x7E1D70);
    PUSH32(esp, 0x37F66);
    ecx = esi;
    PUSH32(esp, 0x001502B6u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001502B6: ;
    PUSH32(esp, 0x7E1D50);
    PUSH32(esp, 0x16046);
    ecx = esi;
    PUSH32(esp, 0x001502C7u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001502C7: ;
    PUSH32(esp, 0x7E1D2C);
    PUSH32(esp, 0x36AA8);
    ecx = esi;
    PUSH32(esp, 0x001502D8u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001502D8: ;
    PUSH32(esp, 0x7E1D0C);
    PUSH32(esp, 0x1831E);
    ecx = esi;
    PUSH32(esp, 0x001502E9u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001502E9: ;
    PUSH32(esp, 0x7E1CEC);
    PUSH32(esp, 0x2343A);
    ecx = esi;
    PUSH32(esp, 0x001502FAu); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001502FA: ;
    PUSH32(esp, 0x7E1CD0);
    PUSH32(esp, 0x338F3);
    ecx = esi;
    PUSH32(esp, 0x0015030Bu); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_0015030B: ;
    PUSH32(esp, 0x7E1CC4);
    PUSH32(esp, 0x2BCF7);
    ecx = esi;
    PUSH32(esp, 0x0015031Cu); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_0015031C: ;
    PUSH32(esp, 0x7E1CB4);
    PUSH32(esp, 0x2CF94);
    ecx = esi;
    PUSH32(esp, 0x0015032Du); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_0015032D: ;
    PUSH32(esp, 0x7E1C98);
    PUSH32(esp, 0x1CC1B);
    ecx = esi;
    PUSH32(esp, 0x0015033Eu); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_0015033E: ;
    PUSH32(esp, 0x7E1C8C);
    PUSH32(esp, 0x32679);
    ecx = esi;
    PUSH32(esp, 0x0015034Fu); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_0015034F: ;
    PUSH32(esp, 0x7E1C74);
    PUSH32(esp, 0x1DE63);
    ecx = esi;
    PUSH32(esp, 0x00150360u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_00150360: ;
    PUSH32(esp, 0x7E1C60);
    PUSH32(esp, 0x1F0A6);
    ecx = esi;
    PUSH32(esp, 0x00150371u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_00150371: ;
    PUSH32(esp, 0x7E1C44);
    PUSH32(esp, 0x1B613);
    ecx = esi;
    PUSH32(esp, 0x00150382u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_00150382: ;
    PUSH32(esp, 0x7E1C2C);
    PUSH32(esp, 0x2C42C);
    ecx = esi;
    PUSH32(esp, 0x00150393u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_00150393: ;
    PUSH32(esp, 0x7E1C08);
    PUSH32(esp, 0x333EE);
    ecx = esi;
    PUSH32(esp, 0x001503A4u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001503A4: ;
    PUSH32(esp, 0x7E1BE8);
    PUSH32(esp, 0x147D2);
    ecx = esi;
    PUSH32(esp, 0x001503B5u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001503B5: ;
    PUSH32(esp, 0x7E1BD8);
    PUSH32(esp, 0x32039);
    ecx = esi;
    PUSH32(esp, 0x001503C6u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001503C6: ;
    PUSH32(esp, 0x7E1BC8);
    PUSH32(esp, 0x17A18);
    ecx = esi;
    PUSH32(esp, 0x001503D7u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001503D7: ;
    PUSH32(esp, 0x7E1BB8);
    PUSH32(esp, 0x1F7E5);
    ecx = esi;
    PUSH32(esp, 0x001503E8u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001503E8: ;
    PUSH32(esp, 0x7E1B98);
    PUSH32(esp, 0x1B72B);
    ecx = esi;
    PUSH32(esp, 0x001503F9u); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_001503F9: ;
    PUSH32(esp, 0x7E1B78);
    PUSH32(esp, 0x2C698);
    ecx = esi;
    PUSH32(esp, 0x0015040Au); RECOMP_ABI_CALL(0x0002501Eu, sub_0002501E); /* call 0x0002501E */

loc_0015040A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001504B0
 * Original: 0x001504B0 - 0x00150554 (164 bytes, 42 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001504B0(void)
{

loc_001504B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x001504BDu); RECOMP_ABI_CALL(0x000228AAu, sub_000228AA); /* call 0x000228AA */

loc_001504BD: ;
    PUSH32(esp, 0x7E1FC4);
    PUSH32(esp, 0x238DB);
    ecx = esi;
    MEM32(esi) = 0x7E1FA0;
    MEM32(esi + 0xC) = esi;
    PUSH32(esp, 0x001504D7u); RECOMP_ABI_CALL(0x00012B94u, sub_00012B94); /* call 0x00012B94 */

loc_001504D7: ;
    PUSH32(esp, 0x7E1F90);
    PUSH32(esp, 0x2C80F);
    ecx = esi;
    PUSH32(esp, 0x001504E8u); RECOMP_ABI_CALL(0x00012B94u, sub_00012B94); /* call 0x00012B94 */

loc_001504E8: ;
    PUSH32(esp, 0x7E1F78);
    PUSH32(esp, 0x16F96);
    ecx = esi;
    PUSH32(esp, 0x001504F9u); RECOMP_ABI_CALL(0x00012B94u, sub_00012B94); /* call 0x00012B94 */

loc_001504F9: ;
    PUSH32(esp, 0x7E1F68);
    PUSH32(esp, 0x14656);
    ecx = esi;
    PUSH32(esp, 0x0015050Au); RECOMP_ABI_CALL(0x00012B94u, sub_00012B94); /* call 0x00012B94 */

loc_0015050A: ;
    PUSH32(esp, 0x7E1F58);
    PUSH32(esp, 0x35C75);
    ecx = esi;
    PUSH32(esp, 0x0015051Bu); RECOMP_ABI_CALL(0x00012B94u, sub_00012B94); /* call 0x00012B94 */

loc_0015051B: ;
    PUSH32(esp, 0x7E1F44);
    PUSH32(esp, 0x22A08);
    ecx = esi;
    PUSH32(esp, 0x0015052Cu); RECOMP_ABI_CALL(0x00012B94u, sub_00012B94); /* call 0x00012B94 */

loc_0015052C: ;
    PUSH32(esp, 0x7E1F28);
    PUSH32(esp, 0x19B24);
    ecx = esi;
    PUSH32(esp, 0x0015053Du); RECOMP_ABI_CALL(0x00012B94u, sub_00012B94); /* call 0x00012B94 */

loc_0015053D: ;
    PUSH32(esp, 0x7E1F10);
    PUSH32(esp, 0x24B82);
    ecx = esi;
    PUSH32(esp, 0x0015054Eu); RECOMP_ABI_CALL(0x00012B94u, sub_00012B94); /* call 0x00012B94 */

loc_0015054E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150580
 * Original: 0x00150580 - 0x001507A8 (552 bytes, 157 insns)
 * Category: game_ui
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00150580: ;
    eax = MEM32(0x8F0754);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001507A7; /* jne: not equal / not zero */

loc_0015058D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00150596u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00150596: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001505A6; /* je: equal / zero */

loc_0015059D: ;
    ecx = eax;
    PUSH32(esp, 0x001505A4u); RECOMP_ABI_CALL(0x0002ED80u, sub_0002ED80); /* call 0x0002ED80 */

loc_001505A4: ;
    goto loc_001505A8;

loc_001505A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001505A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C);
    MEM32(0x8F0754) = eax;
    edi = eax;
    PUSH32(esp, 0x001505BDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001505BD: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001505E4; /* je: equal / zero */

loc_001505C6: ;
    PUSH32(esp, 0x7E0D48);
    ecx = esi;
    PUSH32(esp, 0x001505D2u); RECOMP_ABI_CALL(0x00024CAEu, sub_00024CAE); /* call 0x00024CAE */

loc_001505D2: ;
    MEM32(esi) = 0x7E0B9C;
    MEM32(esi + 0x108) = 0x8AEDA8;
    goto loc_001505E6;

loc_001505E4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001505E6: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001505EEu); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_001505EE: ;
    edi = MEM32(0x8F0754);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C);
    PUSH32(esp, 0x00150600u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00150600: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150627; /* je: equal / zero */

loc_00150609: ;
    PUSH32(esp, 0x7E0D34);
    ecx = esi;
    PUSH32(esp, 0x00150615u); RECOMP_ABI_CALL(0x00024CAEu, sub_00024CAE); /* call 0x00024CAE */

loc_00150615: ;
    MEM32(esi) = 0x7E0BAC;
    MEM32(esi + 0x108) = 0x8F0770;
    goto loc_00150629;

loc_00150627: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00150629: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00150631u); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_00150631: ;
    edi = MEM32(0x8F0754);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C);
    PUSH32(esp, 0x00150643u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00150643: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015066A; /* je: equal / zero */

loc_0015064C: ;
    PUSH32(esp, 0x7E0D28);
    ecx = esi;
    PUSH32(esp, 0x00150658u); RECOMP_ABI_CALL(0x00024CAEu, sub_00024CAE); /* call 0x00024CAE */

loc_00150658: ;
    MEM32(esi) = 0x7E0BAC;
    MEM32(esi + 0x108) = 0x8F0774;
    goto loc_0015066C;

loc_0015066A: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015066C: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00150674u); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_00150674: ;
    edi = MEM32(0x8F0754);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C);
    PUSH32(esp, 0x00150686u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00150686: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001506AD; /* je: equal / zero */

loc_0015068F: ;
    PUSH32(esp, 0x7E0D18);
    ecx = esi;
    PUSH32(esp, 0x0015069Bu); RECOMP_ABI_CALL(0x00024CAEu, sub_00024CAE); /* call 0x00024CAE */

loc_0015069B: ;
    MEM32(esi) = 0x7E0B9C;
    MEM32(esi + 0x108) = 0x8AEDAC;
    goto loc_001506AF;

loc_001506AD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001506AF: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001506B7u); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_001506B7: ;
    edi = MEM32(0x8F0754);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C);
    PUSH32(esp, 0x001506C9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001506C9: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001506F0; /* je: equal / zero */

loc_001506D2: ;
    PUSH32(esp, 0x7E0D00);
    ecx = esi;
    PUSH32(esp, 0x001506DEu); RECOMP_ABI_CALL(0x00024CAEu, sub_00024CAE); /* call 0x00024CAE */

loc_001506DE: ;
    MEM32(esi) = 0x7E0BBC;
    MEM32(esi + 0x108) = 0x8AF104;
    goto loc_001506F2;

loc_001506F0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001506F2: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001506FAu); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_001506FA: ;
    edi = MEM32(0x8F0754);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C);
    PUSH32(esp, 0x0015070Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0015070C: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150733; /* je: equal / zero */

loc_00150715: ;
    PUSH32(esp, 0x7E0CF0);
    ecx = esi;
    PUSH32(esp, 0x00150721u); RECOMP_ABI_CALL(0x00024CAEu, sub_00024CAE); /* call 0x00024CAE */

loc_00150721: ;
    MEM32(esi) = 0x7E0BAC;
    MEM32(esi + 0x108) = 0x8AEDB0;
    goto loc_00150735;

loc_00150733: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00150735: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0015073Du); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_0015073D: ;
    SET_LO8(eax, MEM8(0x8FC1CD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015074F; /* jne: not equal / not zero */

loc_00150746: ;
    SET_LO8(eax, MEM8(0x8FC1CB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00150759; /* je: equal / zero */

loc_0015074F: ;
    MEM32(0x8AEDB4) = 0x7DFA84;

loc_00150759: ;
    edi = MEM32(0x8F0754);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10C);
    PUSH32(esp, 0x0015076Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0015076B: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015079B; /* je: equal / zero */

loc_00150774: ;
    PUSH32(esp, 0x7E0CE4);
    ecx = esi;
    PUSH32(esp, 0x00150780u); RECOMP_ABI_CALL(0x00024CAEu, sub_00024CAE); /* call 0x00024CAE */

loc_00150780: ;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esi) = 0x7E0B9C;
    MEM32(esi + 0x108) = 0x8AEDB4;
    PUSH32(esp, 0x00150798u); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_00150798: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0015079B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x001507A5u); RECOMP_ABI_CALL(0x000202C1u, sub_000202C1); /* call 0x000202C1 */

loc_001507A5: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001507A7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00150840
 * Original: 0x00150840 - 0x00150906 (198 bytes, 50 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150840(void)
{

loc_00150840: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0015084Du); RECOMP_ABI_CALL(0x000252C1u, sub_000252C1); /* call 0x000252C1 */

loc_0015084D: ;
    PUSH32(esp, 0x7E20AC);
    PUSH32(esp, 0x36896);
    ecx = esi;
    MEM32(esi) = 0x7E2088;
    MEM32(esi + 0xC) = esi;
    PUSH32(esp, 0x00150867u); RECOMP_ABI_CALL(0x0002E533u, sub_0002E533); /* call 0x0002E533 */

loc_00150867: ;
    PUSH32(esp, 0x7E2074);
    PUSH32(esp, 0x2490C);
    ecx = esi;
    PUSH32(esp, 0x00150878u); RECOMP_ABI_CALL(0x0002E533u, sub_0002E533); /* call 0x0002E533 */

loc_00150878: ;
    PUSH32(esp, 0x7E2060);
    PUSH32(esp, 0x12C66);
    ecx = esi;
    PUSH32(esp, 0x00150889u); RECOMP_ABI_CALL(0x0002E533u, sub_0002E533); /* call 0x0002E533 */

loc_00150889: ;
    PUSH32(esp, 0x7E2050);
    PUSH32(esp, 0x32011);
    ecx = esi;
    PUSH32(esp, 0x0015089Au); RECOMP_ABI_CALL(0x0002E533u, sub_0002E533); /* call 0x0002E533 */

loc_0015089A: ;
    PUSH32(esp, 0x7E203C);
    PUSH32(esp, 0x35B3A);
    ecx = esi;
    PUSH32(esp, 0x001508ABu); RECOMP_ABI_CALL(0x0002E533u, sub_0002E533); /* call 0x0002E533 */

loc_001508AB: ;
    PUSH32(esp, 0x7E2020);
    PUSH32(esp, 0x1B131);
    ecx = esi;
    PUSH32(esp, 0x001508BCu); RECOMP_ABI_CALL(0x0002E533u, sub_0002E533); /* call 0x0002E533 */

loc_001508BC: ;
    PUSH32(esp, 0x7E2004);
    PUSH32(esp, 0x2E80D);
    ecx = esi;
    PUSH32(esp, 0x001508CDu); RECOMP_ABI_CALL(0x0002E533u, sub_0002E533); /* call 0x0002E533 */

loc_001508CD: ;
    PUSH32(esp, 0x7E1FF8);
    PUSH32(esp, 0x1D080);
    ecx = esi;
    PUSH32(esp, 0x001508DEu); RECOMP_ABI_CALL(0x0002E533u, sub_0002E533); /* call 0x0002E533 */

loc_001508DE: ;
    PUSH32(esp, 0x7E1FEC);
    PUSH32(esp, 0x17B03);
    ecx = esi;
    PUSH32(esp, 0x001508EFu); RECOMP_ABI_CALL(0x0002E533u, sub_0002E533); /* call 0x0002E533 */

loc_001508EF: ;
    PUSH32(esp, 0x7E1FCC);
    PUSH32(esp, 0x210DB);
    ecx = esi;
    PUSH32(esp, 0x00150900u); RECOMP_ABI_CALL(0x0002E533u, sub_0002E533); /* call 0x0002E533 */

loc_00150900: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150940
 * Original: 0x00150940 - 0x00150A82 (322 bytes, 79 insns)
 * Category: game_audio
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150940(void)
{

loc_00150940: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0015094Du); RECOMP_ABI_CALL(0x0002BE73u, sub_0002BE73); /* call 0x0002BE73 */

loc_0015094D: ;
    PUSH32(esp, 0x7E21D0);
    MEM32(esi) = 0x7E21AC;
    MEM32(esi + 0x50) = 0xFFFFFFFFu;
    MEM8(esi + 0x54) = 0;
    MEM8(0x8F0778) = 1;
    PUSH32(esp, 0x378D6);
    ecx = esi;
    MEM32(esi + 0xC) = esi;
    PUSH32(esp, 0x00150979u); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_00150979: ;
    PUSH32(esp, 0x7E219C);
    PUSH32(esp, 0x207EE);
    ecx = esi;
    PUSH32(esp, 0x0015098Au); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_0015098A: ;
    PUSH32(esp, 0x7E218C);
    PUSH32(esp, 0x34889);
    ecx = esi;
    PUSH32(esp, 0x0015099Bu); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_0015099B: ;
    PUSH32(esp, 0x7E217C);
    PUSH32(esp, 0x2468C);
    ecx = esi;
    PUSH32(esp, 0x001509ACu); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_001509AC: ;
    PUSH32(esp, 0x7E216C);
    PUSH32(esp, 0x1C2F2);
    ecx = esi;
    PUSH32(esp, 0x001509BDu); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_001509BD: ;
    PUSH32(esp, 0x7E215C);
    PUSH32(esp, 0x16D89);
    ecx = esi;
    PUSH32(esp, 0x001509CEu); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_001509CE: ;
    PUSH32(esp, 0x7E214C);
    PUSH32(esp, 0x25ED8);
    ecx = esi;
    PUSH32(esp, 0x001509DFu); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_001509DF: ;
    PUSH32(esp, 0x7E213C);
    PUSH32(esp, 0x19953);
    ecx = esi;
    PUSH32(esp, 0x001509F0u); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_001509F0: ;
    PUSH32(esp, 0x7E212C);
    PUSH32(esp, 0x256EF);
    ecx = esi;
    PUSH32(esp, 0x00150A01u); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_00150A01: ;
    PUSH32(esp, 0x7E211C);
    PUSH32(esp, 0x27C1A);
    ecx = esi;
    PUSH32(esp, 0x00150A12u); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_00150A12: ;
    PUSH32(esp, 0x7E2108);
    PUSH32(esp, 0x36305);
    ecx = esi;
    PUSH32(esp, 0x00150A23u); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_00150A23: ;
    PUSH32(esp, 0x7E20F8);
    PUSH32(esp, 0x33DD0);
    ecx = esi;
    PUSH32(esp, 0x00150A34u); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_00150A34: ;
    PUSH32(esp, 0x7E20E8);
    PUSH32(esp, 0x14BBF);
    ecx = esi;
    PUSH32(esp, 0x00150A45u); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_00150A45: ;
    PUSH32(esp, 0x7E20D8);
    PUSH32(esp, 0x13E3B);
    ecx = esi;
    PUSH32(esp, 0x00150A56u); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_00150A56: ;
    PUSH32(esp, 0x7E20BC);
    PUSH32(esp, 0x18A5D);
    ecx = esi;
    PUSH32(esp, 0x00150A67u); RECOMP_ABI_CALL(0x000345CDu, sub_000345CD); /* call 0x000345CD */

loc_00150A67: ;
    PUSH32(esp, 0x00150A6Cu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00150A6C: ;
    edx = MEM32(eax + 0x1C);
    ecx = eax + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, 0x1C77F);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00150A7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00150A79u); } /* indirect call */
    }

loc_00150A7C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00150AE0
 * Original: 0x00150AE0 - 0x00150B03 (35 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00150AE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7E21AC;
    PUSH32(esp, 0x00150AEEu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00150AEE: ;
    ecx = eax + 0x1C;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C77F);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00150AFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00150AF8u); } /* indirect call */
    }

loc_00150AFB: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00028499(); return; /* tail jmp 0x00028499 */

}

/**
 * sub_00150B10
 * Original: 0x00150B10 - 0x00150B39 (41 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150B10(void)
{

loc_00150B10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7DE67C);
    esi = ecx;
    PUSH32(esp, 0x00150B25u); RECOMP_ABI_CALL(0x0003707Fu, sub_0003707F); /* call 0x0003707F */

loc_00150B25: ;
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7DE674);
    ecx = esi;
    PUSH32(esp, 0x00150B34u); RECOMP_ABI_CALL(0x0003707Fu, sub_0003707F); /* call 0x0003707F */

loc_00150B34: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00150B50
 * Original: 0x00150B50 - 0x00150B9E (78 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00150B50: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    esi = ecx;
    PUSH32(esp, 0x00150B5Au); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00150B5A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00150B6A; /* jne: not equal / not zero */

loc_00150B61: ;
    ecx = esi;
    PUSH32(esp, 0x00150B68u); RECOMP_ABI_CALL(0x0001923Cu, sub_0001923C); /* call 0x0001923C */

loc_00150B68: ;
    goto loc_00150B79;

loc_00150B6A: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00150B71u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00150B71: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00150B79: ;
    eax = MEM32(eax * 4 + 0x8F0040);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ZX8(LO8(eax));
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x7E21DC);
    PUSH32(esp, 0x00150B9Au); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00150B9A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00150BC0
 * Original: 0x00150BC0 - 0x001511C5 (1541 bytes, 366 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00150BC0(void)
{

loc_00150BC0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00150BCDu); RECOMP_ABI_CALL(0x0001A33Fu, sub_0001A33F); /* call 0x0001A33F */

loc_00150BCD: ;
    PUSH32(esp, 0x7E2A4C);
    PUSH32(esp, 0x1699C);
    ecx = esi;
    MEM32(esi) = 0x7E2A28;
    MEM32(esi + 0xC) = esi;
    PUSH32(esp, 0x00150BE7u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150BE7: ;
    PUSH32(esp, 0x7E2A1C);
    PUSH32(esp, 0x34712);
    ecx = esi;
    PUSH32(esp, 0x00150BF8u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150BF8: ;
    PUSH32(esp, 0x7E2A0C);
    PUSH32(esp, 0x3691D);
    ecx = esi;
    PUSH32(esp, 0x00150C09u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150C09: ;
    PUSH32(esp, 0x7E29FC);
    PUSH32(esp, 0x28854);
    ecx = esi;
    PUSH32(esp, 0x00150C1Au); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150C1A: ;
    PUSH32(esp, 0x7E29EC);
    PUSH32(esp, 0x222BF);
    ecx = esi;
    PUSH32(esp, 0x00150C2Bu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150C2B: ;
    PUSH32(esp, 0x7E29DC);
    PUSH32(esp, 0x1B645);
    ecx = esi;
    PUSH32(esp, 0x00150C3Cu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150C3C: ;
    PUSH32(esp, 0x7E29CC);
    PUSH32(esp, 0x181FC);
    ecx = esi;
    PUSH32(esp, 0x00150C4Du); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150C4D: ;
    PUSH32(esp, 0x7E29C0);
    PUSH32(esp, 0x1D8C3);
    ecx = esi;
    PUSH32(esp, 0x00150C5Eu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150C5E: ;
    PUSH32(esp, 0x7E29B4);
    PUSH32(esp, 0x17CC0);
    ecx = esi;
    PUSH32(esp, 0x00150C6Fu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150C6F: ;
    PUSH32(esp, 0x7E29A4);
    PUSH32(esp, 0x23084);
    ecx = esi;
    PUSH32(esp, 0x00150C80u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150C80: ;
    PUSH32(esp, 0x7E2994);
    PUSH32(esp, 0x288D1);
    ecx = esi;
    PUSH32(esp, 0x00150C91u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150C91: ;
    PUSH32(esp, 0x7E2984);
    PUSH32(esp, 0x148D1);
    ecx = esi;
    PUSH32(esp, 0x00150CA2u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150CA2: ;
    PUSH32(esp, 0x7E2970);
    PUSH32(esp, 0x22C1F);
    ecx = esi;
    PUSH32(esp, 0x00150CB3u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150CB3: ;
    PUSH32(esp, 0x7E2958);
    PUSH32(esp, 0x211DF);
    ecx = esi;
    PUSH32(esp, 0x00150CC4u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150CC4: ;
    PUSH32(esp, 0x7E2938);
    PUSH32(esp, 0x32C82);
    ecx = esi;
    PUSH32(esp, 0x00150CD5u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150CD5: ;
    PUSH32(esp, 0x7E291C);
    PUSH32(esp, 0x30BD0);
    ecx = esi;
    PUSH32(esp, 0x00150CE6u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150CE6: ;
    PUSH32(esp, 0x7E290C);
    PUSH32(esp, 0x35B30);
    ecx = esi;
    PUSH32(esp, 0x00150CF7u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150CF7: ;
    PUSH32(esp, 0x7E28FC);
    PUSH32(esp, 0x216C1);
    ecx = esi;
    PUSH32(esp, 0x00150D08u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150D08: ;
    PUSH32(esp, 0x7E28E8);
    PUSH32(esp, 0x36F80);
    ecx = esi;
    PUSH32(esp, 0x00150D19u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150D19: ;
    PUSH32(esp, 0x7E28D0);
    PUSH32(esp, 0x2DA6B);
    ecx = esi;
    PUSH32(esp, 0x00150D2Au); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150D2A: ;
    PUSH32(esp, 0x7E28B8);
    PUSH32(esp, 0x11294);
    ecx = esi;
    PUSH32(esp, 0x00150D3Bu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150D3B: ;
    PUSH32(esp, 0x7E28A0);
    PUSH32(esp, 0x25942);
    ecx = esi;
    PUSH32(esp, 0x00150D4Cu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150D4C: ;
    PUSH32(esp, 0x7E2888);
    PUSH32(esp, 0x1E5DE);
    ecx = esi;
    PUSH32(esp, 0x00150D5Du); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150D5D: ;
    PUSH32(esp, 0x7E2870);
    PUSH32(esp, 0x27FC6);
    ecx = esi;
    PUSH32(esp, 0x00150D6Eu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150D6E: ;
    PUSH32(esp, 0x7E2858);
    PUSH32(esp, 0x15C54);
    ecx = esi;
    PUSH32(esp, 0x00150D7Fu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150D7F: ;
    PUSH32(esp, 0x7E2840);
    PUSH32(esp, 0x1794B);
    ecx = esi;
    PUSH32(esp, 0x00150D90u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150D90: ;
    PUSH32(esp, 0x7E2828);
    PUSH32(esp, 0x1A3A8);
    ecx = esi;
    PUSH32(esp, 0x00150DA1u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150DA1: ;
    PUSH32(esp, 0x7E2810);
    PUSH32(esp, 0x31C42);
    ecx = esi;
    PUSH32(esp, 0x00150DB2u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150DB2: ;
    PUSH32(esp, 0x7E27F8);
    PUSH32(esp, 0x1A3E9);
    ecx = esi;
    PUSH32(esp, 0x00150DC3u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150DC3: ;
    PUSH32(esp, 0x7E27E0);
    PUSH32(esp, 0x2F0A5);
    ecx = esi;
    PUSH32(esp, 0x00150DD4u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150DD4: ;
    PUSH32(esp, 0x7E27C8);
    PUSH32(esp, 0x25EF6);
    ecx = esi;
    PUSH32(esp, 0x00150DE5u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150DE5: ;
    PUSH32(esp, 0x7E27B0);
    PUSH32(esp, 0x322CD);
    ecx = esi;
    PUSH32(esp, 0x00150DF6u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150DF6: ;
    PUSH32(esp, 0x7E2798);
    PUSH32(esp, 0x2FC9E);
    ecx = esi;
    PUSH32(esp, 0x00150E07u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150E07: ;
    PUSH32(esp, 0x7E2784);
    PUSH32(esp, 0x1C2E3);
    ecx = esi;
    PUSH32(esp, 0x00150E18u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150E18: ;
    PUSH32(esp, 0x7E2770);
    PUSH32(esp, 0x16091);
    ecx = esi;
    PUSH32(esp, 0x00150E29u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150E29: ;
    PUSH32(esp, 0x7E1FF8);
    PUSH32(esp, 0x11582);
    ecx = esi;
    PUSH32(esp, 0x00150E3Au); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150E3A: ;
    PUSH32(esp, 0x7E1FEC);
    PUSH32(esp, 0x30A9A);
    ecx = esi;
    PUSH32(esp, 0x00150E4Bu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150E4B: ;
    PUSH32(esp, 0x7E2758);
    PUSH32(esp, 0x138B9);
    ecx = esi;
    PUSH32(esp, 0x00150E5Cu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150E5C: ;
    PUSH32(esp, 0x7E2738);
    PUSH32(esp, 0x343CF);
    ecx = esi;
    PUSH32(esp, 0x00150E6Du); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150E6D: ;
    PUSH32(esp, 0x7E2720);
    PUSH32(esp, 0x12A9F);
    ecx = esi;
    PUSH32(esp, 0x00150E7Eu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150E7E: ;
    PUSH32(esp, 0x7E2708);
    PUSH32(esp, 0x2ED1C);
    ecx = esi;
    PUSH32(esp, 0x00150E8Fu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150E8F: ;
    PUSH32(esp, 0x7E26F0);
    PUSH32(esp, 0x21BF3);
    ecx = esi;
    PUSH32(esp, 0x00150EA0u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150EA0: ;
    PUSH32(esp, 0x7E26E0);
    PUSH32(esp, 0x14BE2);
    ecx = esi;
    PUSH32(esp, 0x00150EB1u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150EB1: ;
    PUSH32(esp, 0x7E26D0);
    PUSH32(esp, 0x13BD9);
    ecx = esi;
    PUSH32(esp, 0x00150EC2u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150EC2: ;
    PUSH32(esp, 0x7E26C0);
    PUSH32(esp, 0x2EC5E);
    ecx = esi;
    PUSH32(esp, 0x00150ED3u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150ED3: ;
    PUSH32(esp, 0x7E26A4);
    PUSH32(esp, 0x1A5BA);
    ecx = esi;
    PUSH32(esp, 0x00150EE4u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150EE4: ;
    PUSH32(esp, 0x7E2688);
    PUSH32(esp, 0x2EFC4);
    ecx = esi;
    PUSH32(esp, 0x00150EF5u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150EF5: ;
    PUSH32(esp, 0x7E266C);
    PUSH32(esp, 0x2D0B1);
    ecx = esi;
    PUSH32(esp, 0x00150F06u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150F06: ;
    PUSH32(esp, 0x7E2650);
    PUSH32(esp, 0x30333);
    ecx = esi;
    PUSH32(esp, 0x00150F17u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150F17: ;
    PUSH32(esp, 0x7E2638);
    PUSH32(esp, 0x35874);
    ecx = esi;
    PUSH32(esp, 0x00150F28u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150F28: ;
    PUSH32(esp, 0x7E2624);
    PUSH32(esp, 0x18873);
    ecx = esi;
    PUSH32(esp, 0x00150F39u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150F39: ;
    PUSH32(esp, 0x7E2610);
    PUSH32(esp, 0x186C0);
    ecx = esi;
    PUSH32(esp, 0x00150F4Au); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150F4A: ;
    PUSH32(esp, 0x7E2604);
    PUSH32(esp, 0x124FF);
    ecx = esi;
    PUSH32(esp, 0x00150F5Bu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150F5B: ;
    PUSH32(esp, 0x7E25F4);
    PUSH32(esp, 0x19B79);
    ecx = esi;
    PUSH32(esp, 0x00150F6Cu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150F6C: ;
    PUSH32(esp, 0x7E25E0);
    PUSH32(esp, 0x211F8);
    ecx = esi;
    PUSH32(esp, 0x00150F7Du); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150F7D: ;
    PUSH32(esp, 0x7E25C4);
    PUSH32(esp, 0x1D210);
    ecx = esi;
    PUSH32(esp, 0x00150F8Eu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150F8E: ;
    PUSH32(esp, 0x7E25B4);
    PUSH32(esp, 0x1C455);
    ecx = esi;
    PUSH32(esp, 0x00150F9Fu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150F9F: ;
    PUSH32(esp, 0x7E2598);
    PUSH32(esp, 0x1F529);
    ecx = esi;
    PUSH32(esp, 0x00150FB0u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150FB0: ;
    PUSH32(esp, 0x7E2578);
    PUSH32(esp, 0x29C22);
    ecx = esi;
    PUSH32(esp, 0x00150FC1u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150FC1: ;
    PUSH32(esp, 0x7E2550);
    PUSH32(esp, 0x1E93F);
    ecx = esi;
    PUSH32(esp, 0x00150FD2u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150FD2: ;
    PUSH32(esp, 0x7E2528);
    PUSH32(esp, 0x30E69);
    ecx = esi;
    PUSH32(esp, 0x00150FE3u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150FE3: ;
    PUSH32(esp, 0x7E24F4);
    PUSH32(esp, 0x21414);
    ecx = esi;
    PUSH32(esp, 0x00150FF4u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00150FF4: ;
    PUSH32(esp, 0x7E24D8);
    PUSH32(esp, 0x20A0F);
    ecx = esi;
    PUSH32(esp, 0x00151005u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00151005: ;
    PUSH32(esp, 0x7E24A8);
    PUSH32(esp, 0x1C563);
    ecx = esi;
    PUSH32(esp, 0x00151016u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00151016: ;
    PUSH32(esp, 0x7E2478);
    PUSH32(esp, 0x25F05);
    ecx = esi;
    PUSH32(esp, 0x00151027u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00151027: ;
    PUSH32(esp, 0x7E2458);
    PUSH32(esp, 0x12B0D);
    ecx = esi;
    PUSH32(esp, 0x00151038u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00151038: ;
    PUSH32(esp, 0x7E2438);
    PUSH32(esp, 0x30C66);
    ecx = esi;
    PUSH32(esp, 0x00151049u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00151049: ;
    PUSH32(esp, 0x7E2418);
    PUSH32(esp, 0x31742);
    ecx = esi;
    PUSH32(esp, 0x0015105Au); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_0015105A: ;
    PUSH32(esp, 0x7E23F4);
    PUSH32(esp, 0x2CE9F);
    ecx = esi;
    PUSH32(esp, 0x0015106Bu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_0015106B: ;
    PUSH32(esp, 0x7E23E0);
    PUSH32(esp, 0x1BE01);
    ecx = esi;
    PUSH32(esp, 0x0015107Cu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_0015107C: ;
    PUSH32(esp, 0x7E23C8);
    PUSH32(esp, 0x36788);
    ecx = esi;
    PUSH32(esp, 0x0015108Du); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_0015108D: ;
    PUSH32(esp, 0x7E23B8);
    PUSH32(esp, 0x24C13);
    ecx = esi;
    PUSH32(esp, 0x0015109Eu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_0015109E: ;
    PUSH32(esp, 0x7E2394);
    PUSH32(esp, 0x15178);
    ecx = esi;
    PUSH32(esp, 0x001510AFu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_001510AF: ;
    PUSH32(esp, 0x7E237C);
    PUSH32(esp, 0x16D61);
    ecx = esi;
    PUSH32(esp, 0x001510C0u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_001510C0: ;
    PUSH32(esp, 0x7E2358);
    PUSH32(esp, 0x2AB86);
    ecx = esi;
    PUSH32(esp, 0x001510D1u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_001510D1: ;
    PUSH32(esp, 0x7E2338);
    PUSH32(esp, 0x20B77);
    ecx = esi;
    PUSH32(esp, 0x001510E2u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_001510E2: ;
    PUSH32(esp, 0x7E231C);
    PUSH32(esp, 0x1DFD5);
    ecx = esi;
    PUSH32(esp, 0x001510F3u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_001510F3: ;
    PUSH32(esp, 0x7E22E4);
    PUSH32(esp, 0x36DC3);
    ecx = esi;
    PUSH32(esp, 0x00151104u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00151104: ;
    PUSH32(esp, 0x7E22C4);
    PUSH32(esp, 0x3400A);
    ecx = esi;
    PUSH32(esp, 0x00151115u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00151115: ;
    PUSH32(esp, 0x7E22B4);
    PUSH32(esp, 0x11D16);
    ecx = esi;
    PUSH32(esp, 0x00151126u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00151126: ;
    PUSH32(esp, 0x7E2294);
    PUSH32(esp, 0x1D549);
    ecx = esi;
    PUSH32(esp, 0x00151137u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00151137: ;
    PUSH32(esp, 0x7E2278);
    PUSH32(esp, 0x2C652);
    ecx = esi;
    PUSH32(esp, 0x00151148u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00151148: ;
    PUSH32(esp, 0x7E1C74);
    PUSH32(esp, 0x1A7FE);
    ecx = esi;
    PUSH32(esp, 0x00151159u); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_00151159: ;
    PUSH32(esp, 0x7E2260);
    PUSH32(esp, 0x2D3C2);
    ecx = esi;
    PUSH32(esp, 0x0015116Au); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_0015116A: ;
    PUSH32(esp, 0x7E224C);
    PUSH32(esp, 0x313A5);
    ecx = esi;
    PUSH32(esp, 0x0015117Bu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_0015117B: ;
    PUSH32(esp, 0x7E2234);
    PUSH32(esp, 0x11447);
    ecx = esi;
    PUSH32(esp, 0x0015118Cu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_0015118C: ;
    PUSH32(esp, 0x7E221C);
    PUSH32(esp, 0x30356);
    ecx = esi;
    PUSH32(esp, 0x0015119Du); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_0015119D: ;
    PUSH32(esp, 0x7E2200);
    PUSH32(esp, 0x257F3);
    ecx = esi;
    PUSH32(esp, 0x001511AEu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_001511AE: ;
    PUSH32(esp, 0x7E21E8);
    PUSH32(esp, 0x25596);
    ecx = esi;
    PUSH32(esp, 0x001511BFu); RECOMP_ABI_CALL(0x00031D6Eu, sub_00031D6E); /* call 0x00031D6E */

loc_001511BF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151350
 * Original: 0x00151350 - 0x00151364 (20 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151350(void)
{

loc_00151350: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00151361u); RECOMP_ABI_CALL(0x00023895u, sub_00023895); /* call 0x00023895 */

loc_00151361: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00151370
 * Original: 0x00151370 - 0x00151384 (20 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151370(void)
{

loc_00151370: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00151381u); RECOMP_ABI_CALL(0x00023895u, sub_00023895); /* call 0x00023895 */

loc_00151381: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00151390
 * Original: 0x00151390 - 0x001513A4 (20 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151390(void)
{

loc_00151390: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x27);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001513A1u); RECOMP_ABI_CALL(0x00023895u, sub_00023895); /* call 0x00023895 */

loc_001513A1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001513B0
 * Original: 0x001513B0 - 0x001513C4 (20 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001513B0(void)
{

loc_001513B0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001513C1u); RECOMP_ABI_CALL(0x00023895u, sub_00023895); /* call 0x00023895 */

loc_001513C1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001513D0
 * Original: 0x001513D0 - 0x001513E4 (20 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001513D0(void)
{

loc_001513D0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001513E1u); RECOMP_ABI_CALL(0x00023895u, sub_00023895); /* call 0x00023895 */

loc_001513E1: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001513F0
 * Original: 0x001513F0 - 0x00151404 (20 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001513F0(void)
{

loc_001513F0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00151401u); RECOMP_ABI_CALL(0x00023895u, sub_00023895); /* call 0x00023895 */

loc_00151401: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00151410
 * Original: 0x00151410 - 0x00151830 (1056 bytes, 253 insns)
 * Category: game_vehicle
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151410: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0015141Du); RECOMP_ABI_CALL(0x0001BDF2u, sub_0001BDF2); /* call 0x0001BDF2 */

loc_0015141D: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x7E2F1C);
    PUSH32(esp, 0x2A19F);
    ecx = esi;
    MEM32(esi) = 0x7E2EF8;
    MEM8(esi + 0x50) = LO8(eax);
    MEM8(esi + 0x51) = LO8(eax);
    MEM32(esi + 0xC) = esi;
    PUSH32(esp, 0x0015143Fu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015143F: ;
    PUSH32(esp, 0x7E2EEC);
    PUSH32(esp, 0x356D5);
    ecx = esi;
    PUSH32(esp, 0x00151450u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151450: ;
    PUSH32(esp, 0x7E2EDC);
    PUSH32(esp, 0x2AF50);
    ecx = esi;
    PUSH32(esp, 0x00151461u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151461: ;
    PUSH32(esp, 0x7E2ED0);
    PUSH32(esp, 0x32269);
    ecx = esi;
    PUSH32(esp, 0x00151472u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151472: ;
    PUSH32(esp, 0x7E2EC4);
    PUSH32(esp, 0x14AB1);
    ecx = esi;
    PUSH32(esp, 0x00151483u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151483: ;
    PUSH32(esp, 0x7E2EB8);
    PUSH32(esp, 0x26784);
    ecx = esi;
    PUSH32(esp, 0x00151494u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151494: ;
    PUSH32(esp, 0x7E2EA8);
    PUSH32(esp, 0x17761);
    ecx = esi;
    PUSH32(esp, 0x001514A5u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001514A5: ;
    PUSH32(esp, 0x7E2E90);
    PUSH32(esp, 0x23BBF);
    ecx = esi;
    PUSH32(esp, 0x001514B6u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001514B6: ;
    PUSH32(esp, 0x7E2E78);
    PUSH32(esp, 0x2B63A);
    ecx = esi;
    PUSH32(esp, 0x001514C7u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001514C7: ;
    PUSH32(esp, 0x7E2E68);
    PUSH32(esp, 0x1BE3D);
    ecx = esi;
    PUSH32(esp, 0x001514D8u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001514D8: ;
    PUSH32(esp, 0x7E2E58);
    PUSH32(esp, 0x129F5);
    ecx = esi;
    PUSH32(esp, 0x001514E9u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001514E9: ;
    PUSH32(esp, 0x7E28D0);
    PUSH32(esp, 0x33BC3);
    ecx = esi;
    PUSH32(esp, 0x001514FAu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001514FA: ;
    PUSH32(esp, 0x7E28B8);
    PUSH32(esp, 0x3776E);
    ecx = esi;
    PUSH32(esp, 0x0015150Bu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015150B: ;
    PUSH32(esp, 0x7E2E4C);
    PUSH32(esp, 0x2A35C);
    ecx = esi;
    PUSH32(esp, 0x0015151Cu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015151C: ;
    PUSH32(esp, 0x7E2E3C);
    PUSH32(esp, 0x2956F);
    ecx = esi;
    PUSH32(esp, 0x0015152Du); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015152D: ;
    PUSH32(esp, 0x7E2E2C);
    PUSH32(esp, 0x27E68);
    ecx = esi;
    PUSH32(esp, 0x0015153Eu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015153E: ;
    PUSH32(esp, 0x7E2E10);
    PUSH32(esp, 0x314B8);
    ecx = esi;
    PUSH32(esp, 0x0015154Fu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015154F: ;
    PUSH32(esp, 0x7E2DE8);
    PUSH32(esp, 0x251C2);
    ecx = esi;
    PUSH32(esp, 0x00151560u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151560: ;
    PUSH32(esp, 0x7E2DD4);
    PUSH32(esp, 0x1D300);
    ecx = esi;
    PUSH32(esp, 0x00151571u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151571: ;
    PUSH32(esp, 0x7E1FF8);
    PUSH32(esp, 0x2C5A8);
    ecx = esi;
    PUSH32(esp, 0x00151582u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151582: ;
    PUSH32(esp, 0x7E1FEC);
    PUSH32(esp, 0x27E5E);
    ecx = esi;
    PUSH32(esp, 0x00151593u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151593: ;
    PUSH32(esp, 0x7E2DC4);
    PUSH32(esp, 0x2E4B6);
    ecx = esi;
    PUSH32(esp, 0x001515A4u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001515A4: ;
    PUSH32(esp, 0x7E2DB4);
    PUSH32(esp, 0x1979B);
    ecx = esi;
    PUSH32(esp, 0x001515B5u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001515B5: ;
    PUSH32(esp, 0x7E2DA4);
    PUSH32(esp, 0x31DF0);
    ecx = esi;
    PUSH32(esp, 0x001515C6u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001515C6: ;
    PUSH32(esp, 0x7E2D94);
    PUSH32(esp, 0x2F7C1);
    ecx = esi;
    PUSH32(esp, 0x001515D7u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001515D7: ;
    PUSH32(esp, 0x7E2D84);
    PUSH32(esp, 0x26315);
    ecx = esi;
    PUSH32(esp, 0x001515E8u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001515E8: ;
    PUSH32(esp, 0x7E2D64);
    PUSH32(esp, 0x2C062);
    ecx = esi;
    PUSH32(esp, 0x001515F9u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001515F9: ;
    PUSH32(esp, 0x7E2D4C);
    PUSH32(esp, 0x24E7A);
    ecx = esi;
    PUSH32(esp, 0x0015160Au); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015160A: ;
    PUSH32(esp, 0x7E2D34);
    PUSH32(esp, 0x36BC0);
    ecx = esi;
    PUSH32(esp, 0x0015161Bu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015161B: ;
    PUSH32(esp, 0x7E2D14);
    PUSH32(esp, 0x14E53);
    ecx = esi;
    PUSH32(esp, 0x0015162Cu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015162C: ;
    PUSH32(esp, 0x7E2CF8);
    PUSH32(esp, 0x1F880);
    ecx = esi;
    PUSH32(esp, 0x0015163Du); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015163D: ;
    PUSH32(esp, 0x7E2CD8);
    PUSH32(esp, 0x23156);
    ecx = esi;
    PUSH32(esp, 0x0015164Eu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015164E: ;
    PUSH32(esp, 0x7E2CC0);
    PUSH32(esp, 0x3186E);
    ecx = esi;
    PUSH32(esp, 0x0015165Fu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015165F: ;
    PUSH32(esp, 0x7E2CA8);
    PUSH32(esp, 0x336B4);
    ecx = esi;
    PUSH32(esp, 0x00151670u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151670: ;
    PUSH32(esp, 0x7E2C94);
    PUSH32(esp, 0x379AD);
    ecx = esi;
    PUSH32(esp, 0x00151681u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151681: ;
    PUSH32(esp, 0x7E2C74);
    PUSH32(esp, 0x2A032);
    ecx = esi;
    PUSH32(esp, 0x00151692u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151692: ;
    PUSH32(esp, 0x7E2C50);
    PUSH32(esp, 0x25EEC);
    ecx = esi;
    PUSH32(esp, 0x001516A3u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001516A3: ;
    PUSH32(esp, 0x7E2C28);
    PUSH32(esp, 0x187F1);
    ecx = esi;
    PUSH32(esp, 0x001516B4u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001516B4: ;
    PUSH32(esp, 0x7E2BFC);
    PUSH32(esp, 0x2C2CE);
    ecx = esi;
    PUSH32(esp, 0x001516C5u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001516C5: ;
    PUSH32(esp, 0x7E2BE0);
    PUSH32(esp, 0x13DC3);
    ecx = esi;
    PUSH32(esp, 0x001516D6u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001516D6: ;
    PUSH32(esp, 0x7E2BB8);
    PUSH32(esp, 0x11C12);
    ecx = esi;
    PUSH32(esp, 0x001516E7u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001516E7: ;
    PUSH32(esp, 0x7E2BA8);
    PUSH32(esp, 0x2B47D);
    ecx = esi;
    PUSH32(esp, 0x001516F8u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001516F8: ;
    PUSH32(esp, 0x7E2B78);
    PUSH32(esp, 0x36A71);
    ecx = esi;
    PUSH32(esp, 0x00151709u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151709: ;
    PUSH32(esp, 0x7E2B5C);
    PUSH32(esp, 0x12C8E);
    ecx = esi;
    PUSH32(esp, 0x0015171Au); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015171A: ;
    PUSH32(esp, 0x7E2B4C);
    PUSH32(esp, 0x33BAA);
    ecx = esi;
    PUSH32(esp, 0x0015172Bu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015172B: ;
    PUSH32(esp, 0x7E2B40);
    PUSH32(esp, 0x15D99);
    ecx = esi;
    PUSH32(esp, 0x0015173Cu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015173C: ;
    PUSH32(esp, 0x7E2050);
    PUSH32(esp, 0x1D0E4);
    ecx = esi;
    PUSH32(esp, 0x0015174Du); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015174D: ;
    PUSH32(esp, 0x7E2B30);
    PUSH32(esp, 0x2B42D);
    ecx = esi;
    PUSH32(esp, 0x0015175Eu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015175E: ;
    PUSH32(esp, 0x7E2B1C);
    PUSH32(esp, 0x34A23);
    ecx = esi;
    PUSH32(esp, 0x0015176Fu); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015176F: ;
    PUSH32(esp, 0x7E2B08);
    PUSH32(esp, 0x18738);
    ecx = esi;
    PUSH32(esp, 0x00151780u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151780: ;
    PUSH32(esp, 0x7E2AF8);
    PUSH32(esp, 0x328EA);
    ecx = esi;
    PUSH32(esp, 0x00151791u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151791: ;
    PUSH32(esp, 0x7E2AE8);
    PUSH32(esp, 0x30CD9);
    ecx = esi;
    PUSH32(esp, 0x001517A2u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001517A2: ;
    PUSH32(esp, 0x7E2AD4);
    PUSH32(esp, 0x13F58);
    ecx = esi;
    PUSH32(esp, 0x001517B3u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001517B3: ;
    PUSH32(esp, 0x7E2AC0);
    PUSH32(esp, 0x27AE4);
    ecx = esi;
    PUSH32(esp, 0x001517C4u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001517C4: ;
    PUSH32(esp, 0x7E2AB0);
    PUSH32(esp, 0x1B654);
    ecx = esi;
    PUSH32(esp, 0x001517D5u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001517D5: ;
    PUSH32(esp, 0x7E2AA0);
    PUSH32(esp, 0x31D5F);
    ecx = esi;
    PUSH32(esp, 0x001517E6u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001517E6: ;
    PUSH32(esp, 0x7E2A8C);
    PUSH32(esp, 0x260A9);
    ecx = esi;
    PUSH32(esp, 0x001517F7u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_001517F7: ;
    PUSH32(esp, 0x7E2A7C);
    PUSH32(esp, 0x230C5);
    ecx = esi;
    PUSH32(esp, 0x00151808u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151808: ;
    PUSH32(esp, 0x7E2A6C);
    PUSH32(esp, 0x35162);
    ecx = esi;
    PUSH32(esp, 0x00151819u); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_00151819: ;
    PUSH32(esp, 0x7E2A5C);
    PUSH32(esp, 0x17E3C);
    ecx = esi;
    PUSH32(esp, 0x0015182Au); RECOMP_ABI_CALL(0x00036E7Cu, sub_00036E7C); /* call 0x00036E7C */

loc_0015182A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151940
 * Original: 0x00151940 - 0x00151979 (57 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00151940: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = 0x7E2EF8;
    esi = 0x8AF090;
    /* nop */

loc_00151950: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151965; /* je: equal / zero */

loc_00151956: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015195Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0015195C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_00151965: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x8AF0E4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x8AF0E4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00151950; /* jl: less (signed <) */

loc_00151970: ;
    ecx = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000337E0(); return; /* tail jmp 0x000337E0 */

}

/**
 * sub_00151990
 * Original: 0x00151990 - 0x00151ADE (334 bytes, 82 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151990(void)
{

loc_00151990: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0015199Du); RECOMP_ABI_CALL(0x0001D675u, sub_0001D675); /* call 0x0001D675 */

loc_0015199D: ;
    PUSH32(esp, 0x7E30AC);
    PUSH32(esp, 0x242EF);
    ecx = esi;
    MEM32(esi) = 0x7E3088;
    MEM32(esi + 0xC) = esi;
    PUSH32(esp, 0x001519B7u); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_001519B7: ;
    PUSH32(esp, 0x7E3078);
    PUSH32(esp, 0x1A2BD);
    ecx = esi;
    PUSH32(esp, 0x001519C8u); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_001519C8: ;
    PUSH32(esp, 0x7E3068);
    PUSH32(esp, 0x2DBC4);
    ecx = esi;
    PUSH32(esp, 0x001519D9u); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_001519D9: ;
    PUSH32(esp, 0x7E305C);
    PUSH32(esp, 0x2C274);
    ecx = esi;
    PUSH32(esp, 0x001519EAu); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_001519EA: ;
    PUSH32(esp, 0x7E3044);
    PUSH32(esp, 0x2348A);
    ecx = esi;
    PUSH32(esp, 0x001519FBu); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_001519FB: ;
    PUSH32(esp, 0x7E3024);
    PUSH32(esp, 0x36EF9);
    ecx = esi;
    PUSH32(esp, 0x00151A0Cu); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_00151A0C: ;
    PUSH32(esp, 0x7E3008);
    PUSH32(esp, 0x2FD98);
    ecx = esi;
    PUSH32(esp, 0x00151A1Du); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_00151A1D: ;
    PUSH32(esp, 0x7E2FF0);
    PUSH32(esp, 0x2DBA1);
    ecx = esi;
    PUSH32(esp, 0x00151A2Eu); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_00151A2E: ;
    PUSH32(esp, 0x7E2FD8);
    PUSH32(esp, 0x18927);
    ecx = esi;
    PUSH32(esp, 0x00151A3Fu); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_00151A3F: ;
    PUSH32(esp, 0x7E2FC0);
    PUSH32(esp, 0x22193);
    ecx = esi;
    PUSH32(esp, 0x00151A50u); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_00151A50: ;
    PUSH32(esp, 0x7E1FF8);
    PUSH32(esp, 0x1A858);
    ecx = esi;
    PUSH32(esp, 0x00151A61u); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_00151A61: ;
    PUSH32(esp, 0x7E2B40);
    PUSH32(esp, 0x32FF7);
    ecx = esi;
    PUSH32(esp, 0x00151A72u); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_00151A72: ;
    PUSH32(esp, 0x7E2FAC);
    PUSH32(esp, 0x26F9A);
    ecx = esi;
    PUSH32(esp, 0x00151A83u); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_00151A83: ;
    PUSH32(esp, 0x7E2F9C);
    PUSH32(esp, 0x1A100);
    ecx = esi;
    PUSH32(esp, 0x00151A94u); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_00151A94: ;
    PUSH32(esp, 0x7E2F7C);
    PUSH32(esp, 0x1A687);
    ecx = esi;
    PUSH32(esp, 0x00151AA5u); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_00151AA5: ;
    PUSH32(esp, 0x7E2F60);
    PUSH32(esp, 0x1EDDB);
    ecx = esi;
    PUSH32(esp, 0x00151AB6u); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_00151AB6: ;
    PUSH32(esp, 0x7E2F44);
    PUSH32(esp, 0x13981);
    ecx = esi;
    PUSH32(esp, 0x00151AC7u); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_00151AC7: ;
    PUSH32(esp, 0x7E2F2C);
    PUSH32(esp, 0x327C3);
    ecx = esi;
    PUSH32(esp, 0x00151AD8u); RECOMP_ABI_CALL(0x000227ABu, sub_000227AB); /* call 0x000227AB */

loc_00151AD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151B40
 * Original: 0x00151B40 - 0x00151B5E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151B40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00151B48u); RECOMP_ABI_CALL(0x00019F2Fu, sub_00019F2F); /* call 0x00019F2F */

loc_00151B48: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00151B58; /* je: equal / zero */

loc_00151B4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00151B55u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00151B55: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00151B58: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151B70
 * Original: 0x00151B70 - 0x00151B8E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151B70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00151B78u); RECOMP_ABI_CALL(0x00029448u, sub_00029448); /* call 0x00029448 */

loc_00151B78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00151B88; /* je: equal / zero */

loc_00151B7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00151B85u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00151B85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00151B88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151BA0
 * Original: 0x00151BA0 - 0x00151BBE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151BA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00151BA8u); RECOMP_ABI_CALL(0x0001D7FBu, sub_0001D7FB); /* call 0x0001D7FB */

loc_00151BA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00151BB8; /* je: equal / zero */

loc_00151BAF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00151BB5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00151BB5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00151BB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00151BD0
 * Original: 0x00151BD0 - 0x0015207B (1195 bytes, 341 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00151BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00151BD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x5C);
    MEM32(0x8F06F4) = eax;
    PUSH32(esp, 0x00151BE5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151BE5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151BFF; /* je: equal / zero */

loc_00151BEC: ;
    PUSH32(esp, 0x7E3250);
    ecx = eax;
    PUSH32(esp, 0x00151BF8u); RECOMP_ABI_CALL(0x00013D2Du, sub_00013D2D); /* call 0x00013D2D */

loc_00151BF8: ;
    MEM32(0x8F070C) = eax;
    goto loc_00151C05;

loc_00151BFF: ;
    MEM32(0x8F070C) = edi;

loc_00151C05: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x00151C0Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151C0D: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151C4B; /* je: equal / zero */

loc_00151C16: ;
    PUSH32(esp, 0x7E3244);
    ecx = esi;
    PUSH32(esp, 0x00151C22u); RECOMP_ABI_CALL(0x00024CFEu, sub_00024CFE); /* call 0x00024CFE */

loc_00151C22: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x7E1B68);
    MEM32(esi + 0x50) = ecx;
    PUSH32(esp, 0x2F320);
    ecx = esi;
    MEM32(esi) = 0x7E1B44;
    MEM32(esi + 0xC) = esi;
    PUSH32(esp, 0x00151C43u); RECOMP_ABI_CALL(0x0002D331u, sub_0002D331); /* call 0x0002D331 */

loc_00151C43: ;
    MEM32(0x8F0710) = esi;
    goto loc_00151C51;

loc_00151C4B: ;
    MEM32(0x8F0710) = edi;

loc_00151C51: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x00151C59u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151C59: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151C73; /* je: equal / zero */

loc_00151C60: ;
    PUSH32(esp, 0x7E322C);
    ecx = eax;
    PUSH32(esp, 0x00151C6Cu); RECOMP_ABI_CALL(0x00016082u, sub_00016082); /* call 0x00016082 */

loc_00151C6C: ;
    MEM32(0x8F0714) = eax;
    goto loc_00151C79;

loc_00151C73: ;
    MEM32(0x8F0714) = edi;

loc_00151C79: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xD4);
    PUSH32(esp, 0x00151C84u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151C84: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151C9E; /* je: equal / zero */

loc_00151C8B: ;
    PUSH32(esp, 0x7E321C);
    ecx = eax;
    PUSH32(esp, 0x00151C97u); RECOMP_ABI_CALL(0x000151CDu, sub_000151CD); /* call 0x000151CD */

loc_00151C97: ;
    MEM32(0x8F0718) = eax;
    goto loc_00151CA4;

loc_00151C9E: ;
    MEM32(0x8F0718) = edi;

loc_00151CA4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x60);
    PUSH32(esp, 0x00151CACu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151CAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151CC6; /* je: equal / zero */

loc_00151CB3: ;
    PUSH32(esp, 0x7E320C);
    ecx = eax;
    PUSH32(esp, 0x00151CBFu); RECOMP_ABI_CALL(0x0001486Du, sub_0001486D); /* call 0x0001486D */

loc_00151CBF: ;
    MEM32(0x8F0720) = eax;
    goto loc_00151CCC;

loc_00151CC6: ;
    MEM32(0x8F0720) = edi;

loc_00151CCC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x00151CD4u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151CD4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151CEE; /* je: equal / zero */

loc_00151CDB: ;
    PUSH32(esp, 0x7E31F0);
    ecx = eax;
    PUSH32(esp, 0x00151CE7u); RECOMP_ABI_CALL(0x0001CFF9u, sub_0001CFF9); /* call 0x0001CFF9 */

loc_00151CE7: ;
    MEM32(0x8F071C) = eax;
    goto loc_00151CF4;

loc_00151CEE: ;
    MEM32(0x8F071C) = edi;

loc_00151CF4: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x00151CFCu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151CFC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151D16; /* je: equal / zero */

loc_00151D03: ;
    PUSH32(esp, 0x7E31E0);
    ecx = eax;
    PUSH32(esp, 0x00151D0Fu); RECOMP_ABI_CALL(0x00015F0Bu, sub_00015F0B); /* call 0x00015F0B */

loc_00151D0F: ;
    MEM32(0x8F0724) = eax;
    goto loc_00151D1C;

loc_00151D16: ;
    MEM32(0x8F0724) = edi;

loc_00151D1C: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x13994);
    PUSH32(esp, 0x00151D27u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151D27: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151D41; /* je: equal / zero */

loc_00151D2E: ;
    PUSH32(esp, 0x7E31D4);
    ecx = eax;
    PUSH32(esp, 0x00151D3Au); RECOMP_ABI_CALL(0x0001F259u, sub_0001F259); /* call 0x0001F259 */

loc_00151D3A: ;
    MEM32(0x8F072C) = eax;
    goto loc_00151D47;

loc_00151D41: ;
    MEM32(0x8F072C) = edi;

loc_00151D47: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x00151D4Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151D4F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151D69; /* je: equal / zero */

loc_00151D56: ;
    PUSH32(esp, 0x7E31C4);
    ecx = eax;
    PUSH32(esp, 0x00151D62u); RECOMP_ABI_CALL(0x00030EB9u, sub_00030EB9); /* call 0x00030EB9 */

loc_00151D62: ;
    MEM32(0x8F0730) = eax;
    goto loc_00151D6F;

loc_00151D69: ;
    MEM32(0x8F0730) = edi;

loc_00151D6F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x00151D77u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151D77: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151D91; /* je: equal / zero */

loc_00151D7E: ;
    PUSH32(esp, 0x7E31B0);
    ecx = eax;
    PUSH32(esp, 0x00151D8Au); RECOMP_ABI_CALL(0x0002952Eu, sub_0002952E); /* call 0x0002952E */

loc_00151D8A: ;
    MEM32(0x8F0734) = eax;
    goto loc_00151D97;

loc_00151D91: ;
    MEM32(0x8F0734) = edi;

loc_00151D97: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x00151D9Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151D9F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151DB9; /* je: equal / zero */

loc_00151DA6: ;
    PUSH32(esp, 0x7E31A0);
    ecx = eax;
    PUSH32(esp, 0x00151DB2u); RECOMP_ABI_CALL(0x000225DAu, sub_000225DA); /* call 0x000225DA */

loc_00151DB2: ;
    MEM32(0x8F0738) = eax;
    goto loc_00151DBF;

loc_00151DB9: ;
    MEM32(0x8F0738) = edi;

loc_00151DBF: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x00151DC7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151DC7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151DE1; /* je: equal / zero */

loc_00151DCE: ;
    PUSH32(esp, 0x7E3194);
    ecx = eax;
    PUSH32(esp, 0x00151DDAu); RECOMP_ABI_CALL(0x00015B55u, sub_00015B55); /* call 0x00015B55 */

loc_00151DDA: ;
    MEM32(0x8F0744) = eax;
    goto loc_00151DE7;

loc_00151DE1: ;
    MEM32(0x8F0744) = edi;

loc_00151DE7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x00151DEFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151DEF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151E09; /* je: equal / zero */

loc_00151DF6: ;
    PUSH32(esp, 0x7E3184);
    ecx = eax;
    PUSH32(esp, 0x00151E02u); RECOMP_ABI_CALL(0x00025B0Eu, sub_00025B0E); /* call 0x00025B0E */

loc_00151E02: ;
    MEM32(0x8F0748) = eax;
    goto loc_00151E0F;

loc_00151E09: ;
    MEM32(0x8F0748) = edi;

loc_00151E0F: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x2050);
    PUSH32(esp, 0x00151E1Au); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151E1A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151E34; /* je: equal / zero */

loc_00151E21: ;
    PUSH32(esp, 0x7E3170);
    ecx = eax;
    PUSH32(esp, 0x00151E2Du); RECOMP_ABI_CALL(0x0001FA0Bu, sub_0001FA0B); /* call 0x0001FA0B */

loc_00151E2D: ;
    MEM32(0x8F074C) = eax;
    goto loc_00151E3A;

loc_00151E34: ;
    MEM32(0x8F074C) = edi;

loc_00151E3A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x00151E42u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151E42: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151E5C; /* je: equal / zero */

loc_00151E49: ;
    PUSH32(esp, 0x7E315C);
    ecx = eax;
    PUSH32(esp, 0x00151E55u); RECOMP_ABI_CALL(0x0002F898u, sub_0002F898); /* call 0x0002F898 */

loc_00151E55: ;
    MEM32(0x8F0750) = eax;
    goto loc_00151E62;

loc_00151E5C: ;
    MEM32(0x8F0750) = edi;

loc_00151E62: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xCD8);
    PUSH32(esp, 0x00151E6Du); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151E6D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151E87; /* je: equal / zero */

loc_00151E74: ;
    PUSH32(esp, 0x7E3148);
    ecx = eax;
    PUSH32(esp, 0x00151E80u); RECOMP_ABI_CALL(0x0002FDFCu, sub_0002FDFC); /* call 0x0002FDFC */

loc_00151E80: ;
    MEM32(0x8F0758) = eax;
    goto loc_00151E8D;

loc_00151E87: ;
    MEM32(0x8F0758) = edi;

loc_00151E8D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x00151E95u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151E95: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151EAF; /* je: equal / zero */

loc_00151E9C: ;
    PUSH32(esp, 0x7E3134);
    ecx = eax;
    PUSH32(esp, 0x00151EA8u); RECOMP_ABI_CALL(0x0002C503u, sub_0002C503); /* call 0x0002C503 */

loc_00151EA8: ;
    MEM32(0x8F075C) = eax;
    goto loc_00151EB5;

loc_00151EAF: ;
    MEM32(0x8F075C) = edi;

loc_00151EB5: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x54);
    PUSH32(esp, 0x00151EBDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151EBD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151ED7; /* je: equal / zero */

loc_00151EC4: ;
    PUSH32(esp, 0x7E3120);
    ecx = eax;
    PUSH32(esp, 0x00151ED0u); RECOMP_ABI_CALL(0x000156C3u, sub_000156C3); /* call 0x000156C3 */

loc_00151ED0: ;
    MEM32(0x8F0760) = eax;
    goto loc_00151EDD;

loc_00151ED7: ;
    MEM32(0x8F0760) = edi;

loc_00151EDD: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x00151EE5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151EE5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151EFF; /* je: equal / zero */

loc_00151EEC: ;
    PUSH32(esp, 0x7E3114);
    ecx = eax;
    PUSH32(esp, 0x00151EF8u); RECOMP_ABI_CALL(0x00031599u, sub_00031599); /* call 0x00031599 */

loc_00151EF8: ;
    MEM32(0x8F0764) = eax;
    goto loc_00151F05;

loc_00151EFF: ;
    MEM32(0x8F0764) = edi;

loc_00151F05: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x9CEC);
    PUSH32(esp, 0x00151F10u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151F10: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151F2A; /* je: equal / zero */

loc_00151F17: ;
    PUSH32(esp, 0x7E30F8);
    ecx = eax;
    PUSH32(esp, 0x00151F23u); RECOMP_ABI_CALL(0x00027F17u, sub_00027F17); /* call 0x00027F17 */

loc_00151F23: ;
    MEM32(0x8F0768) = eax;
    goto loc_00151F30;

loc_00151F2A: ;
    MEM32(0x8F0768) = edi;

loc_00151F30: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x00151F38u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151F38: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151F52; /* je: equal / zero */

loc_00151F3F: ;
    PUSH32(esp, 0x7E30E8);
    ecx = eax;
    PUSH32(esp, 0x00151F4Bu); RECOMP_ABI_CALL(0x000280F2u, sub_000280F2); /* call 0x000280F2 */

loc_00151F4B: ;
    MEM32(0x8F076C) = eax;
    goto loc_00151F58;

loc_00151F52: ;
    MEM32(0x8F076C) = edi;

loc_00151F58: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0xBC8);
    PUSH32(esp, 0x00151F63u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151F63: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00151F7D; /* je: equal / zero */

loc_00151F6A: ;
    PUSH32(esp, 0x7E30D4);
    ecx = eax;
    PUSH32(esp, 0x00151F76u); RECOMP_ABI_CALL(0x00029349u, sub_00029349); /* call 0x00029349 */

loc_00151F76: ;
    MEM32(0x8F073C) = eax;
    goto loc_00151F83;

loc_00151F7D: ;
    MEM32(0x8F073C) = edi;

loc_00151F83: ;
    PUSH32(esp, 0x00151F88u); RECOMP_ABI_CALL(0x0002045Bu, sub_0002045B); /* call 0x0002045B */

loc_00151F88: ;
    _fa = (uint32_t)(MEM32(0x8F0700)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F0700), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152078; /* je: equal / zero */

loc_00151F94: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x108);
    PUSH32(esp, 0x00151F9Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151F9F: ;
    esi = eax;
    edx = esi + 4;
    PUSH32(esp, 0x7E30BC);
    PUSH32(esp, edx);
    MEM32(esi + 0x104) = 0x36EC2;
    PUSH32(esp, 0x00151FB9u); RECOMP_ABI_CALL(0x000220FDu, sub_000220FD); /* call 0x000220FD */

loc_00151FB9: ;
    eax = MEM32(0x8F0700);
    ecx = MEM32(eax + 8);
    MEM32(esi) = ecx;
    edx = MEM32(0x8F0700);
    PUSH32(esp, edi);
    PUSH32(esp, 0x108);
    MEM32(edx + 8) = esi;
    PUSH32(esp, 0x00151FD7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00151FD7: ;
    esi = eax;
    eax = esi + 4;
    PUSH32(esp, 0x7E2B4C);
    PUSH32(esp, eax);
    MEM32(esi + 0x104) = 0x22125;
    PUSH32(esp, 0x00151FF1u); RECOMP_ABI_CALL(0x000220FDu, sub_000220FD); /* call 0x000220FD */

loc_00151FF1: ;
    ecx = MEM32(0x8F0700);
    edx = MEM32(ecx + 8);
    MEM32(esi) = edx;
    eax = MEM32(0x8F0700);
    PUSH32(esp, edi);
    PUSH32(esp, 0x108);
    MEM32(eax + 8) = esi;
    PUSH32(esp, 0x0015200Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0015200F: ;
    esi = eax;
    ecx = esi + 4;
    PUSH32(esp, 0x7E2B40);
    PUSH32(esp, ecx);
    MEM32(esi + 0x104) = 0x145CF;
    PUSH32(esp, 0x00152029u); RECOMP_ABI_CALL(0x000220FDu, sub_000220FD); /* call 0x000220FD */

loc_00152029: ;
    edx = MEM32(0x8F0700);
    eax = MEM32(edx + 8);
    MEM32(esi) = eax;
    ecx = MEM32(0x8F0700);
    PUSH32(esp, edi);
    PUSH32(esp, 0x108);
    MEM32(ecx + 8) = esi;
    PUSH32(esp, 0x00152048u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00152048: ;
    esi = eax;
    edx = esi + 4;
    PUSH32(esp, 0x7E2050);
    PUSH32(esp, edx);
    MEM32(esi + 0x104) = 0x2D313;
    PUSH32(esp, 0x00152062u); RECOMP_ABI_CALL(0x000220FDu, sub_000220FD); /* call 0x000220FD */

loc_00152062: ;
    eax = MEM32(0x8F0700);
    ecx = MEM32(eax + 8);
    MEM32(esi) = ecx;
    edx = MEM32(0x8F0700);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 8) = esi;

loc_00152078: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001521B0
 * Original: 0x001521B0 - 0x0015225E (174 bytes, 55 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001521B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001521B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x50);
    MEM32(0x8F06F4) = eax;
    PUSH32(esp, 0x001521C4u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001521C4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001521DE; /* je: equal / zero */

loc_001521CB: ;
    PUSH32(esp, 0x7E3264);
    ecx = eax;
    PUSH32(esp, 0x001521D7u); RECOMP_ABI_CALL(0x000350C2u, sub_000350C2); /* call 0x000350C2 */

loc_001521D7: ;
    MEM32(0x8F0728) = eax;
    goto loc_001521E4;

loc_001521DE: ;
    MEM32(0x8F0728) = esi;

loc_001521E4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x001521ECu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001521EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152206; /* je: equal / zero */

loc_001521F3: ;
    PUSH32(esp, 0x7E3194);
    ecx = eax;
    PUSH32(esp, 0x001521FFu); RECOMP_ABI_CALL(0x00015B55u, sub_00015B55); /* call 0x00015B55 */

loc_001521FF: ;
    MEM32(0x8F0744) = eax;
    goto loc_0015220C;

loc_00152206: ;
    MEM32(0x8F0744) = esi;

loc_0015220C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x00152214u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00152214: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015222E; /* je: equal / zero */

loc_0015221B: ;
    PUSH32(esp, 0x7E31C4);
    ecx = eax;
    PUSH32(esp, 0x00152227u); RECOMP_ABI_CALL(0x00030EB9u, sub_00030EB9); /* call 0x00030EB9 */

loc_00152227: ;
    MEM32(0x8F0730) = eax;
    goto loc_00152234;

loc_0015222E: ;
    MEM32(0x8F0730) = esi;

loc_00152234: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x50);
    PUSH32(esp, 0x0015223Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0015223C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152256; /* je: equal / zero */

loc_00152243: ;
    PUSH32(esp, 0x7E31B0);
    ecx = eax;
    PUSH32(esp, 0x0015224Fu); RECOMP_ABI_CALL(0x0002952Eu, sub_0002952E); /* call 0x0002952E */

loc_0015224F: ;
    MEM32(0x8F0734) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00152256: ;
    MEM32(0x8F0734) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00152290
 * Original: 0x00152290 - 0x001522AE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152290: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00152298u); RECOMP_ABI_CALL(0x00012CCAu, sub_00012CCA); /* call 0x00012CCA */

loc_00152298: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001522A8; /* je: equal / zero */

loc_0015229F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001522A5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001522A5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001522A8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001522C0
 * Original: 0x001522C0 - 0x001522F8 (56 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001522C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001522C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7E21AC;
    PUSH32(esp, 0x001522CEu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001522CE: ;
    ecx = eax + 0x1C;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1C77F);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001522DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001522D8u); } /* indirect call */
    }

loc_001522DB: ;
    ecx = esi;
    PUSH32(esp, 0x001522E2u); RECOMP_ABI_CALL(0x00028499u, sub_00028499); /* call 0x00028499 */

loc_001522E2: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001522F2; /* je: equal / zero */

loc_001522E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001522EFu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001522EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001522F2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00152310
 * Original: 0x00152310 - 0x0015232E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152310: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00152318u); RECOMP_ABI_CALL(0x00018030u, sub_00018030); /* call 0x00018030 */

loc_00152318: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00152328; /* je: equal / zero */

loc_0015231F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00152325u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00152325: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00152328: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00152340
 * Original: 0x00152340 - 0x0015235E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152340: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00152348u); RECOMP_ABI_CALL(0x0002C922u, sub_0002C922); /* call 0x0002C922 */

loc_00152348: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00152358; /* je: equal / zero */

loc_0015234F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00152355u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00152355: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00152358: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00152370
 * Original: 0x00152370 - 0x0015238E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152370: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00152378u); RECOMP_ABI_CALL(0x000153F3u, sub_000153F3); /* call 0x000153F3 */

loc_00152378: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00152388; /* je: equal / zero */

loc_0015237F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00152385u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00152385: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00152388: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001523A0
 * Original: 0x001523A0 - 0x001523A9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001523A0(void)
{

loc_001523A0: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001523B0
 * Original: 0x001523B0 - 0x001523BB (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001523B0(void)
{

loc_001523B0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001523C0
 * Original: 0x001523C0 - 0x001523DF (31 bytes, 13 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001523C0(void)
{

loc_001523C0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x001523D9u); RECOMP_ABI_CALL(0x00017E6Eu, sub_00017E6E); /* call 0x00017E6E */

loc_001523D9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001523F0
 * Original: 0x001523F0 - 0x001523FD (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001523F0(void)
{

loc_001523F0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00152400
 * Original: 0x00152400 - 0x00152403 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152400(void)
{

loc_00152400: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00152410
 * Original: 0x00152410 - 0x0015241F (15 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152410: ;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00152430
 * Original: 0x00152430 - 0x0015243F (15 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152430: ;
    ecx = MEM32(ecx);
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00152450
 * Original: 0x00152450 - 0x0015245F (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152450(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152450: ;
    eax = ecx;
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00152470
 * Original: 0x00152470 - 0x0015247F (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152470(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00152470: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00152490
 * Original: 0x00152490 - 0x0015249E (14 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00152490: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001524B0
 * Original: 0x001524B0 - 0x001524BF (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001524B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001524B0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), eax (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001524D0
 * Original: 0x001524D0 - 0x001524DE (14 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001524D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001524D0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001524F0
 * Original: 0x001524F0 - 0x00152500 (16 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001524F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_001524F0: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(ecx)));
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00152510
 * Original: 0x00152510 - 0x0015251D (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152510(void)
{

loc_00152510: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx);
    MEM32(eax) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00152520
 * Original: 0x00152520 - 0x0015253E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152520(void)
{

loc_00152520: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00152539u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_00152539: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00152550
 * Original: 0x00152550 - 0x0015256E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152550(void)
{

loc_00152550: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00152569u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_00152569: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00152580
 * Original: 0x00152580 - 0x0015259E (30 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152580(void)
{

loc_00152580: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esp + 0x10) = 0;
    PUSH32(esp, 0x00152599u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_00152599: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001525B0
 * Original: 0x001525B0 - 0x001525E7 (55 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001525B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001525B0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x24) = ecx;
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = ecx;
    MEM32(eax + 0x34) = ecx;
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x3C) = ecx;
    MEM32(eax + 0x40) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00152600
 * Original: 0x00152600 - 0x00152604 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152600(void)
{

loc_00152600: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_00152610
 * Original: 0x00152610 - 0x00152620 (16 bytes, 4 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152610(void)
{

loc_00152610: ;
    SET_LO16(eax, MEM16(esp + 8));
    edx = MEM32(esp + 4);
    MEM16(ecx + edx * 2) = LO16(eax);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00152630
 * Original: 0x00152630 - 0x00152634 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152630(void)
{

loc_00152630: ;
    eax = ecx + 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00152640
 * Original: 0x00152640 - 0x00152644 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152640(void)
{

loc_00152640: ;
    eax = ecx + 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00152650
 * Original: 0x00152650 - 0x0015266B (27 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152650(void)
{

loc_00152650: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015265Au); RECOMP_ABI_CALL(0x00033588u, sub_00033588); /* call 0x00033588 */

loc_0015265A: ;
    SET_LO16(ecx, MEM16(esp + 0xC));
    edx = MEM32(esp + 8);
    MEM16(eax + edx * 2 + 2) = LO16(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00152680
 * Original: 0x00152680 - 0x00152681 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152680(void)
{

loc_00152680: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00152690
 * Original: 0x00152690 - 0x0015270A (122 bytes, 41 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00152690: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001526CD; /* je: equal / zero */

loc_00152694: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00152704; /* ja: above (unsigned >) */

loc_00152699: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x15270C); /* switch: 17 entries, 16 targets */
    if (_jt == 0x001526A0u) goto loc_001526A0;
    if (_jt == 0x001526A3u) goto loc_001526A3;
    if (_jt == 0x001526A9u) goto loc_001526A9;
    if (_jt == 0x001526AFu) goto loc_001526AF;
    if (_jt == 0x001526B5u) goto loc_001526B5;
    if (_jt == 0x001526BBu) goto loc_001526BB;
    if (_jt == 0x001526C1u) goto loc_001526C1;
    if (_jt == 0x001526C7u) goto loc_001526C7;
    if (_jt == 0x001526DAu) goto loc_001526DA;
    if (_jt == 0x001526E0u) goto loc_001526E0;
    if (_jt == 0x001526E6u) goto loc_001526E6;
    if (_jt == 0x001526ECu) goto loc_001526EC;
    if (_jt == 0x001526F2u) goto loc_001526F2;
    if (_jt == 0x001526F8u) goto loc_001526F8;
    if (_jt == 0x001526FEu) goto loc_001526FE;
    if (_jt == 0x00152704u) goto loc_00152704;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001526A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001526A3: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_001526A9: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_001526AF: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_001526B5: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_001526BB: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_001526C1: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_001526C7: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_001526CD: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00152704; /* ja: above (unsigned >) */

loc_001526D3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x15272C); /* switch: 9 entries, 8 targets */
    if (_jt == 0x001526DAu) goto loc_001526DA;
    if (_jt == 0x001526E0u) goto loc_001526E0;
    if (_jt == 0x001526E6u) goto loc_001526E6;
    if (_jt == 0x001526ECu) goto loc_001526EC;
    if (_jt == 0x001526F2u) goto loc_001526F2;
    if (_jt == 0x001526F8u) goto loc_001526F8;
    if (_jt == 0x001526FEu) goto loc_001526FE;
    if (_jt == 0x00152704u) goto loc_00152704;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001526DA: ;
    eax = 8;
    esp += 4; return; /* ret */

loc_001526E0: ;
    eax = 9;
    esp += 4; return; /* ret */

loc_001526E6: ;
    eax = 0xA;
    esp += 4; return; /* ret */

loc_001526EC: ;
    eax = 0xB;
    esp += 4; return; /* ret */

loc_001526F2: ;
    eax = 0xC;
    esp += 4; return; /* ret */

loc_001526F8: ;
    eax = 0xD;
    esp += 4; return; /* ret */

loc_001526FE: ;
    eax = 0xE;
    esp += 4; return; /* ret */

loc_00152704: ;
    eax = 0xF;
    esp += 4; return; /* ret */

}

/**
 * sub_0015270A
 * Original: 0x0015270A - 0x00152780 (118 bytes, 62 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015270A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015270A: ;
    edi = edi;
    SET_LO8(eax, MEM8(0xA3001526u));
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1526A900) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + -1258285786)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edi + -1258285786) = MEM8(edi + -1258285786) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edi + -1258285786)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1526BB00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1526C700) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1526DA00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15270400) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + HI8(eax));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1526EC00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + HI8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1526F800) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(edx)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_HI8(edx, HI8(edx) + HI8(ebx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xCCCCCC00u) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00152780
 * Original: 0x00152780 - 0x001527B9 (57 bytes, 19 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00152780: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001527B3; /* ja: above (unsigned >) */

loc_00152785: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1527BC); /* switch: 16 entries, 8 targets */
    if (_jt == 0x0015278Cu) goto loc_0015278C;
    if (_jt == 0x0015278Fu) goto loc_0015278F;
    if (_jt == 0x00152795u) goto loc_00152795;
    if (_jt == 0x0015279Bu) goto loc_0015279B;
    if (_jt == 0x001527A1u) goto loc_001527A1;
    if (_jt == 0x001527A7u) goto loc_001527A7;
    if (_jt == 0x001527ADu) goto loc_001527AD;
    if (_jt == 0x001527B3u) goto loc_001527B3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015278C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0015278F: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00152795: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_0015279B: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_001527A1: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_001527A7: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_001527AD: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_001527B3: ;
    eax = 2;
    esp += 4; return; /* ret */

}

/**
 * sub_00152820
 * Original: 0x00152820 - 0x0015285E (62 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152820(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00152820: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x7E6374);
    ecx = esi;
    PUSH32(esp, 0x00152831u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00152831: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152845; /* je: equal / zero */

loc_00152835: ;
    PUSH32(esp, 0x7E6374);
    ecx = esi;
    PUSH32(esp, 0x00152841u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00152841: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) { g_seh_ebp = ebp; sub_0015285E(); return; } /* jge: greater or equal (signed >=) */

loc_00152845: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E043C);
    PUSH32(esp, 0x7DFB44);
    PUSH32(esp, 0x0015285Au); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015285A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015285E
 * Original: 0x0015285E - 0x001528AB (77 bytes, 24 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015285E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015285E: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00152865: ;
    eax = MEM32(esi + 0x8AF470);
    PUSH32(esp, 0x00152870u); RECOMP_ABI_CALL(0x00152780u, sub_00152780); /* call 0x00152780 */

loc_00152870: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x8AF468);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0015287Fu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015287F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00152865; /* jb: below (unsigned <) */

loc_0015288A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E635C);
    ecx = edi;
    PUSH32(esp, 0x00152898u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00152898: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7E01D8);
    ecx = edi;
    PUSH32(esp, 0x001528A6u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001528A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001528D0
 * Original: 0x001528D0 - 0x0015293A (106 bytes, 33 insns)
 * Category: game_debug
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001528D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001528D0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x7E6374);
    ecx = esi;
    PUSH32(esp, 0x001528E1u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_001528E1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001528F5; /* je: equal / zero */

loc_001528E5: ;
    PUSH32(esp, 0x7E6374);
    ecx = esi;
    PUSH32(esp, 0x001528F1u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001528F1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015290E; /* jge: greater or equal (signed >=) */

loc_001528F5: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E043C);
    PUSH32(esp, 0x7DFB44);
    PUSH32(esp, 0x0015290Au); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015290A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0015290E: ;
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00152917u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00152917: ;
    ecx = eax;
    PUSH32(esp, 0x0015291Eu); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_0015291E: ;
    eax = ZX8(MEM8(eax));
    ecx = MEM32(esp + 0xC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E01D8);
    PUSH32(esp, 0x00152936u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00152936: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00152960
 * Original: 0x00152960 - 0x00152A0C (172 bytes, 59 insns)
 * Category: game_debug
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152960: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x7E6374);
    ecx = edi;
    PUSH32(esp, 0x00152971u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00152971: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015298E; /* jne: not equal / not zero */

loc_00152975: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E043C);
    PUSH32(esp, 0x7DFB44);
    PUSH32(esp, 0x0015298Au); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015298A: ;
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_0015298E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7E6374);
    ecx = edi;
    PUSH32(esp, 0x0015299Bu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015299B: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001529BB; /* jge: greater or equal (signed >=) */

loc_001529A1: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E043C);
    PUSH32(esp, 0x7DFB44);
    PUSH32(esp, 0x001529B6u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001529B6: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

loc_001529BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E01D8);
    ecx = edi;
    PUSH32(esp, 0x001529C8u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001529C8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebx = ZX8(LO8(ebx));
    PUSH32(esp, eax);
    PUSH32(esp, 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x001529DBu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001529DB: ;
    ecx = eax;
    PUSH32(esp, 0x001529E2u); RECOMP_ABI_CALL(0x00030EAAu, sub_00030EAA); /* call 0x00030EAA */

loc_001529E2: ;
    PUSH32(esp, 0x7E637C);
    ecx = edi;
    PUSH32(esp, 0x001529EEu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001529EE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00152A07; /* je: equal / zero */

loc_001529F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152A07; /* je: equal / zero */

loc_001529F7: ;
    PUSH32(esp, 0x40000000);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00152A04u); RECOMP_ABI_CALL(0x00032D31u, sub_00032D31); /* call 0x00032D31 */

loc_00152A04: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00152A07: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00152A40
 * Original: 0x00152A40 - 0x00152B3B (251 bytes, 85 insns)
 * Category: game_debug
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00152A40: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x7E6374);
    ecx = esi;
    PUSH32(esp, 0x00152A51u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00152A51: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152A6E; /* jne: not equal / not zero */

loc_00152A55: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E043C);
    PUSH32(esp, 0x7DFB44);
    PUSH32(esp, 0x00152A6Au); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00152A6A: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00152A6E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7E6374);
    ecx = esi;
    PUSH32(esp, 0x00152A7Bu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00152A7B: ;
    ebx = eax;
    PUSH32(esp, 0x00152A82u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00152A82: ;
    esi = ZX8(LO8(ebx));
    PUSH32(esp, esi);
    ecx = eax;
    MEM32(esp + 0x10) = esi;
    PUSH32(esp, 0x00152A91u); RECOMP_ABI_CALL(0x000217E8u, sub_000217E8); /* call 0x000217E8 */

loc_00152A91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00152AAA; /* jne: not equal / not zero */

loc_00152A95: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7DFB44);
    PUSH32(esp, 0x00152AA5u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00152AA5: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00152AAA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00152AB2u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00152AB2: ;
    ecx = eax;
    PUSH32(esp, 0x00152AB9u); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_00152AB9: ;
    ebp = MEM32(esp + 0x18);
    ebx = eax;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00152AC6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x8AF46C));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00152ADEu); RECOMP_ABI_CALL(0x00018562u, sub_00018562); /* call 0x00018562 */

loc_00152ADE: ;
    PUSH32(esp, 0x00152AE3u); RECOMP_ABI_CALL(0x00152780u, sub_00152780); /* call 0x00152780 */

loc_00152AE3: ;
    edx = MEM32(esi + 0x8AF468);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00152AF2u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00152AF2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC0 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00152AC6; /* jb: below (unsigned <) */

loc_00152AFE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E635C);
    ecx = ebp;
    PUSH32(esp, 0x00152B0Cu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00152B0C: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00152B16u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00152B16: ;
    ecx = eax;
    PUSH32(esp, 0x00152B1Du); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_00152B1D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(eax));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E01D8);
    ecx = ebp;
    PUSH32(esp, 0x00152B34u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00152B34: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00152B80
 * Original: 0x00152B80 - 0x00152C34 (180 bytes, 60 insns)
 * Category: game_debug
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00152B80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, 0x7E6374);
    ecx = ebx;
    PUSH32(esp, 0x00152B92u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00152B92: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152BA6; /* je: equal / zero */

loc_00152B96: ;
    PUSH32(esp, 0x7E6374);
    ecx = ebx;
    PUSH32(esp, 0x00152BA2u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00152BA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00152BC0; /* jge: greater or equal (signed >=) */

loc_00152BA6: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E043C);
    PUSH32(esp, 0x7DFB44);
    PUSH32(esp, 0x00152BBBu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00152BBB: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00152BC0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = ZX8(LO8(eax));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00152BE0;

loc_00152BD0: ;
    ebx = MEM32(esp + 0x18);
    goto loc_00152BE0;

    /* nop */
    /* nop */

loc_00152BE0: ;
    ecx = MEM32(esi + 0x8AF468);
    SET_LO16(ebp, MEM16(esi + 0x8AF46C));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    SET_LO8(eax, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM8(esp + 0x20) = LO8(eax);
    PUSH32(esp, 0x00152BFFu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00152BFF: ;
    SET_LO8(ecx, MEM8(esp + 0x1C));
    PUSH32(esp, 0x00152C08u); RECOMP_ABI_CALL(0x00152690u, sub_00152690); /* call 0x00152690 */

loc_00152C08: ;
    ebx = eax;
    PUSH32(esp, 0x00152C0Fu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00152C0F: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00152C1Bu); RECOMP_ABI_CALL(0x00033588u, sub_00033588); /* call 0x00033588 */

loc_00152C1B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC0 (32-bit) */
    MEM16(eax + ebx * 2 + 2) = LO16(ebp);
    if (CMP_B(_fa, _fb)) goto loc_00152BD0; /* jb: below (unsigned <) */

loc_00152C2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00152C70
 * Original: 0x00152C70 - 0x00152CB2 (66 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152C70: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E6374);
    PUSH32(esp, 0x00152C80u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00152C80: ;
    ebx = eax;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x00152C8Au); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_00152C8A: ;
    ecx = ZX8(LO8(ebx));
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00152C95u); RECOMP_ABI_CALL(0x000217E8u, sub_000217E8); /* call 0x000217E8 */

loc_00152C95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00152C9E; /* je: equal / zero */

loc_00152C99: ;
    esi = 1;

loc_00152C9E: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E6390);
    PUSH32(esp, 0x00152CADu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00152CAD: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00152CD0
 * Original: 0x00152CD0 - 0x00152DC8 (248 bytes, 74 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00152CD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152CD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E01F8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152CEBu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00152CEB: ;
    ecx = MEM32(0x7E639C);
    edx = MEM32(0x7E63A0);
    esi = eax;
    eax = MEM32(0x7E6398);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(0x7E63A4);
    MEM32(esp + 0x2C) = ecx;
    SET_LO8(ecx, MEM8(0x7E63A8));
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    MEM8(esp + 0x38) = LO8(ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1B;
    edi = esp + 0x39;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 8) = edx;
    MEM32(esp + 0xC) = edx;
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM32(esp + 0x10) = edx;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    MEM32(esp + 0x14) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x18) = edx;
    ecx = 0x20;
    edi = esp + 0xA8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM32(esp + 0x1C) = edx;
    eax = esp + 8;
    MEM32(esp + 0x20) = edx;
    PUSH32(esp, 0x7E0218);
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152D6Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00152D6E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0xAC;
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152D85u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00152D85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152D8Eu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00152D8E: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152D95u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00152D95: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    eax = esp + 0xAC;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152DA9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00152DA9: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E0208);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00152DC0u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00152DC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00152E10
 * Original: 0x00152E10 - 0x00152E30 (32 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152E10(void)
{

loc_00152E10: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00152E40
 * Original: 0x00152E40 - 0x00152E47 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152E40(void)
{

loc_00152E40: ;
    eax = MEM32(ecx + 0xE0);
    esp += 4; return; /* ret */

}

/**
 * sub_00152E50
 * Original: 0x00152E50 - 0x00152E58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152E50(void)
{

loc_00152E50: ;
    eax = ZX8(MEM8(ecx + 0x260));
    esp += 4; return; /* ret */

}

/**
 * sub_00152E60
 * Original: 0x00152E60 - 0x00152E71 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152E60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152E60: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 1;
    MEM32(eax + 4) = ecx;
    MEM8(eax + 8) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00152E80
 * Original: 0x00152E80 - 0x00152F17 (151 bytes, 54 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152E80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00152E80: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x50) = eax;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00152EB9; /* je: equal / zero */

loc_00152E94: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    MEM32(esi + 0x50) = eax;
    edx = MEM32(ecx);
    POP32(esp, esi);
    MEM32(esp + 0xC) = 0;
    MEM32(esp + 8) = 1;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

loc_00152EB9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00152EC3; /* je: equal / zero */

loc_00152EBD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    goto loc_00152F00;

loc_00152EC3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00152EFC; /* je: equal / zero */

loc_00152EC7: ;
    eax = MEM32(esp + 8);
    MEM32(esi + 0x54) = eax;
    PUSH32(esp, 0x00152ED3u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00152ED3: ;
    ecx = eax;
    PUSH32(esp, 0x00152EDAu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00152EDA: ;
    ecx = MEM32(esi + 0x54);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00152EE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00152EE2u); } /* indirect call */
    }

loc_00152EE8: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00152EF8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00152EF5u); } /* indirect call */
    }

loc_00152EF8: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_00152EFC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);

loc_00152F00: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x50) = eax;
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00152F13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00152F10u); } /* indirect call */
    }

loc_00152F13: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00152F40
 * Original: 0x00152F40 - 0x0015303F (255 bytes, 75 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00152F40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00152F40: ;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x220);
    PUSH32(esp, 0x7E63E4);
    PUSH32(esp, 0x00152F5Au); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00152F5A: ;
    MEM32(esi + 0x50) = eax;
    PUSH32(esp, 0x00152F62u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00152F62: ;
    ecx = eax;
    PUSH32(esp, 0x00152F69u); RECOMP_ABI_CALL(0x00021F45u, sub_00021F45); /* call 0x00021F45 */

loc_00152F69: ;
    edx = MEM32(eax);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x50);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00152F7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00152F7Bu); } /* indirect call */
    }

loc_00152F7E: ;
    PUSH32(esp, 0x00152F83u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00152F83: ;
    esi = eax;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00152FFE; /* jl: less (signed <) */

loc_00152F8E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x17) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x17 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00152FFE; /* jg: greater (signed >) */

loc_00152F93: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x120;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E63CC);
    PUSH32(esp, 0x00152FAAu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00152FAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00152FB5u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00152FB5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    MEM32(esp + 0x1C) = eax;
    eax = 1;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    eax = esp + 0x128;
    PUSH32(esp, eax);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 2);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00152FF9u); RECOMP_ABI_CALL(0x00015A3Du, sub_00015A3D); /* call 0x00015A3D */

loc_00152FF9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015301D;

loc_00152FFE: ;
    PUSH32(esp, 0x100);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63BC);
    PUSH32(esp, 0x00153012u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00153012: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0015301Du); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0015301D: ;
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x22C);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x00153035u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00153035: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00153080
 * Original: 0x00153080 - 0x001530EC (108 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153080(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153080: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(esp + 0x10C);
    PUSH32(esp, 0x7E63E4);
    PUSH32(esp, 0x0015309Bu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015309B: ;
    MEM32(edi + 0x50) = eax;
    PUSH32(esp, 0x001530A3u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001530A3: ;
    ecx = eax;
    PUSH32(esp, 0x001530AAu); RECOMP_ABI_CALL(0x00021F45u, sub_00021F45); /* call 0x00021F45 */

loc_001530AA: ;
    ecx = MEM32(edi + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001530BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001530BAu); } /* indirect call */
    }

loc_001530BD: ;
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x38);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001530CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001530C8u); } /* indirect call */
    }

loc_001530CB: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x114);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x001530E1u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001530E1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00153110
 * Original: 0x00153110 - 0x00153249 (313 bytes, 105 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153110: ;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x138);
    PUSH32(esp, 0x7E63E4);
    PUSH32(esp, 0x0015312Bu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015312B: ;
    MEM32(esi + 0x50) = eax;
    PUSH32(esp, 0x00153133u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00153133: ;
    ecx = eax;
    PUSH32(esp, 0x0015313Au); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_0015313A: ;
    ebx = eax;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00153143u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153140u); } /* indirect call */
    }

loc_00153143: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015323E; /* jl: less (signed <) */

loc_0015314B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00153152u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00153152: ;
    edx = MEM32(ebx);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x50);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00153164u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015315Eu); } /* indirect call */
    }

loc_00153164: ;
    MEM32(esp + 0x18) = eax;
    MEM8(esp + 0x13) = 1;
    MEM8(esp + 0x3C) = 0;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00153174: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xD8); PUSH32(esp, 0x00153184u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015317Eu); } /* indirect call */
    }

loc_00153184: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015321A; /* je: equal / zero */

loc_0015318C: ;
    edx = MEM32(ebp * 4 + 0x8AF528);
    PUSH32(esp, 0x20);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001531A0u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_001531A0: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001531ADu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_001531AD: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001531CF; /* je: equal / zero */

loc_001531B5: ;
    MEM8(esp + 0x13) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001531C0: ;
    SET_LO8(ecx, MEM8(esp + eax + 0x1C));
    MEM8(esp + eax + 0x3C) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001531C0; /* jne: not equal / not zero */

loc_001531CD: ;
    goto loc_0015321A;

loc_001531CF: ;
    edi = esp + 0x3C;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001531D4: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001531D4; /* jne: not equal / not zero */

loc_001531DC: ;
    SET_LO16(eax, MEM16(0x7E63EC));
    SET_LO8(ecx, MEM8(0x7E63EE));
    MEM16(edi) = LO16(eax);
    eax = esp + 0x1C;
    MEM8(edi + 2) = LO8(ecx);
    edx = eax;

loc_001531F4: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001531F4; /* jne: not equal / not zero */

loc_001531FB: ;
    edi = esp + 0x3C;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00153202: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153202; /* jne: not equal / not zero */

loc_0015320A: ;
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = edx;
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
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */

loc_0015321A: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x13 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00153174; /* jl: less (signed <) */

loc_00153224: ;
    ecx = MEM32(esp + 0x144);
    PUSH32(esp, 0);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x0015323Cu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015323C: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0015323E: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001532A0
 * Original: 0x001532A0 - 0x001533A7 (263 bytes, 86 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001532A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001532A0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10C);
    if (CMP_A(_fa, _fb)) goto loc_0015338F; /* ja: above (unsigned >) */

loc_001532BC: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1533A8); /* switch: 14 entries, 9 targets */
    if (_jt == 0x001532C3u) goto loc_001532C3;
    if (_jt == 0x001532E0u) goto loc_001532E0;
    if (_jt == 0x001532FDu) goto loc_001532FD;
    if (_jt == 0x00153317u) goto loc_00153317;
    if (_jt == 0x00153331u) goto loc_00153331;
    if (_jt == 0x0015334Bu) goto loc_0015334B;
    if (_jt == 0x00153365u) goto loc_00153365;
    if (_jt == 0x0015337Fu) goto loc_0015337F;
    if (_jt == 0x0015338Fu) goto loc_0015338F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001532C3: ;
    ecx = MEM32(esp + 0x114);
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x47);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001532D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001532D3u); } /* indirect call */
    }

loc_001532D6: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    goto loc_00153381;

loc_001532E0: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x51);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001532F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001532F0u); } /* indirect call */
    }

loc_001532F3: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    goto loc_00153381;

loc_001532FD: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x53);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00153310u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015330Du); } /* indirect call */
    }

loc_00153310: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    goto loc_00153381;

loc_00153317: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x55);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0015332Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153327u); } /* indirect call */
    }

loc_0015332A: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    goto loc_00153381;

loc_00153331: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x50);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00153344u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153341u); } /* indirect call */
    }

loc_00153344: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    goto loc_00153381;

loc_0015334B: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x4A);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0015335Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015335Bu); } /* indirect call */
    }

loc_0015335E: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    goto loc_00153381;

loc_00153365: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x52);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00153378u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153375u); } /* indirect call */
    }

loc_00153378: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    goto loc_00153381;

loc_0015337F: ;
    PUSH32(esp, 0);

loc_00153381: ;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015338Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015338C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015338F: ;
    eax = esi;
    edx = eax + 1;
    POP32(esp, esi);

loc_00153395: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153395; /* jne: not equal / not zero */

loc_0015339C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00153430
 * Original: 0x00153430 - 0x001535A9 (377 bytes, 115 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153430: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x100));
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10C);
    if (CMP_A(_fa, _fb)) goto loc_00153591; /* ja: above (unsigned >) */

loc_0015344C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1535AC); /* switch: 14 entries, 13 targets */
    if (_jt == 0x00153453u) goto loc_00153453;
    if (_jt == 0x00153470u) goto loc_00153470;
    if (_jt == 0x0015348Cu) goto loc_0015348C;
    if (_jt == 0x001534A8u) goto loc_001534A8;
    if (_jt == 0x001534C4u) goto loc_001534C4;
    if (_jt == 0x001534E0u) goto loc_001534E0;
    if (_jt == 0x001534FCu) goto loc_001534FC;
    if (_jt == 0x00153515u) goto loc_00153515;
    if (_jt == 0x0015352Fu) goto loc_0015352F;
    if (_jt == 0x00153533u) goto loc_00153533;
    if (_jt == 0x0015354Du) goto loc_0015354D;
    if (_jt == 0x00153567u) goto loc_00153567;
    if (_jt == 0x00153591u) goto loc_00153591;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00153453: ;
    ecx = MEM32(esp + 0x114);
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x22);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00153466u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153463u); } /* indirect call */
    }

loc_00153466: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    goto loc_00153583;

loc_00153470: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x26);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00153483u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153480u); } /* indirect call */
    }

loc_00153483: ;
    ecx = MEM32(esp + 4);
    goto loc_00153582;

loc_0015348C: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x31);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0015349Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015349Cu); } /* indirect call */
    }

loc_0015349F: ;
    ecx = MEM32(esp + 4);
    goto loc_00153582;

loc_001534A8: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001534BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001534B8u); } /* indirect call */
    }

loc_001534BB: ;
    ecx = MEM32(esp + 4);
    goto loc_00153582;

loc_001534C4: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x36);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001534D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001534D4u); } /* indirect call */
    }

loc_001534D7: ;
    ecx = MEM32(esp + 4);
    goto loc_00153582;

loc_001534E0: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2A);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001534F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001534F0u); } /* indirect call */
    }

loc_001534F3: ;
    ecx = MEM32(esp + 4);
    goto loc_00153582;

loc_001534FC: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3B);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0015350Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015350Cu); } /* indirect call */
    }

loc_0015350F: ;
    ecx = MEM32(esp + 4);
    goto loc_00153582;

loc_00153515: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3C);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00153528u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153525u); } /* indirect call */
    }

loc_00153528: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x5A (32-bit) */
    _cf = (int)(_fa < _fb);
    goto loc_0015357F;

loc_0015352F: ;
    PUSH32(esp, 0);
    goto loc_00153583;

loc_00153533: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2B);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00153546u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153543u); } /* indirect call */
    }

loc_00153546: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x58 (32-bit) */
    _cf = (int)(_fa < _fb);
    goto loc_0015357F;

loc_0015354D: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x2C);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00153560u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015355Du); } /* indirect call */
    }

loc_00153560: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x58 (32-bit) */
    _cf = (int)(_fa < _fb);
    goto loc_0015357F;

loc_00153567: ;
    ecx = MEM32(esp + 0x114);
    edx = MEM32(ecx);
    eax = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x26);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0015357Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153577u); } /* indirect call */
    }

loc_0015357A: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0x5C (32-bit) */
    _cf = (int)(_fa < _fb);

loc_0015357F: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00153582: ;
    PUSH32(esp, ecx);

loc_00153583: ;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015358Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015358E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00153591: ;
    eax = esi;
    edx = eax + 1;
    POP32(esp, esi);

loc_00153597: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00153597; /* jne: not equal / not zero */

loc_0015359E: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x100)) >> 32) & 1);
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00153660
 * Original: 0x00153660 - 0x001536E1 (129 bytes, 56 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153660: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_A(_fa, _fb)) goto loc_001536CF; /* ja: above (unsigned >) */

loc_00153671: ;
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(ecx * 4 + 0x1536E4); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00153679u) goto loc_00153679;
    if (_jt == 0x00153681u) goto loc_00153681;
    if (_jt == 0x00153689u) goto loc_00153689;
    if (_jt == 0x00153691u) goto loc_00153691;
    if (_jt == 0x00153699u) goto loc_00153699;
    if (_jt == 0x001536A1u) goto loc_001536A1;
    if (_jt == 0x001536A9u) goto loc_001536A9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00153679: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    goto loc_001536AF;

loc_00153681: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    goto loc_001536AF;

loc_00153689: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    goto loc_001536AF;

loc_00153691: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    goto loc_001536AF;

loc_00153699: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    goto loc_001536AF;

loc_001536A1: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    goto loc_001536AF;

loc_001536A9: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 6);

loc_001536AF: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(eax + 0x54);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x001536BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001536B9u); } /* indirect call */
    }

loc_001536BF: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001536CBu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001536CB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_001536CF: ;
    eax = esi;
    edx = eax + 1;
    POP32(esp, esi);

loc_001536D5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001536D5; /* jne: not equal / not zero */

loc_001536DC: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00153730
 * Original: 0x00153730 - 0x001537B1 (129 bytes, 56 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153730: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    if (CMP_A(_fa, _fb)) goto loc_0015379F; /* ja: above (unsigned >) */

loc_00153741: ;
    PUSH32(esp, edi);
    { uint32_t _jt = MEM32(ecx * 4 + 0x1537B4); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00153749u) goto loc_00153749;
    if (_jt == 0x00153751u) goto loc_00153751;
    if (_jt == 0x00153759u) goto loc_00153759;
    if (_jt == 0x00153761u) goto loc_00153761;
    if (_jt == 0x00153769u) goto loc_00153769;
    if (_jt == 0x00153771u) goto loc_00153771;
    if (_jt == 0x00153779u) goto loc_00153779;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00153749: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    goto loc_0015377F;

loc_00153751: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    goto loc_0015377F;

loc_00153759: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 2);
    goto loc_0015377F;

loc_00153761: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    goto loc_0015377F;

loc_00153769: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    goto loc_0015377F;

loc_00153771: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    goto loc_0015377F;

loc_00153779: ;
    edi = MEM32(eax + 0x58);
    PUSH32(esp, edi);
    PUSH32(esp, 6);

loc_0015377F: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(eax + 0x54);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x0015378Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153789u); } /* indirect call */
    }

loc_0015378F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015379Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015379B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_0015379F: ;
    eax = esi;
    edx = eax + 1;
    POP32(esp, esi);

loc_001537A5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001537A5; /* jne: not equal / not zero */

loc_001537AC: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00153800
 * Original: 0x00153800 - 0x00153892 (146 bytes, 45 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153800(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153800: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153835; /* jne: not equal / not zero */

loc_0015380F: ;
    ecx = MEM32(esp + 0x114);
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10C);
    edx = MEM32(edx * 4 + 0x7E39A8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0015382Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015382Cu); } /* indirect call */
    }

loc_0015382F: ;
    eax = MEM32(esp + 4);
    goto loc_00153862;

loc_00153835: ;
    PUSH32(esp, 0x0015383Au); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015383A: ;
    ecx = eax;
    PUSH32(esp, 0x00153841u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00153841: ;
    ecx = MEM32(esi + 0x58);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10C);
    ecx = MEM32(ecx * 4 + 0x7E3970);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00153862u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015385Cu); } /* indirect call */
    }

loc_00153862: ;
    esi = MEM32(esp + 0x10C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00153875u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00153875: ;
    eax = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    POP32(esp, esi);
    edi = edi;

loc_00153880: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153880; /* jne: not equal / not zero */

loc_00153887: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001538C0
 * Original: 0x001538C0 - 0x00153952 (146 bytes, 45 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001538C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001538C0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001538F5; /* jne: not equal / not zero */

loc_001538CF: ;
    ecx = MEM32(esp + 0x114);
    eax = MEM32(ecx);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x10C);
    edx = MEM32(edx * 4 + 0x7E3A08);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001538EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001538ECu); } /* indirect call */
    }

loc_001538EF: ;
    eax = MEM32(esp + 4);
    goto loc_00153922;

loc_001538F5: ;
    PUSH32(esp, 0x001538FAu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001538FA: ;
    ecx = eax;
    PUSH32(esp, 0x00153901u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00153901: ;
    ecx = MEM32(esi + 0x58);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10C);
    ecx = MEM32(ecx * 4 + 0x7E39E0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x54);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00153922u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015391Cu); } /* indirect call */
    }

loc_00153922: ;
    esi = MEM32(esp + 0x10C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00153935u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00153935: ;
    eax = esi;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    POP32(esp, esi);
    edi = edi;

loc_00153940: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153940; /* jne: not equal / not zero */

loc_00153947: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00153980
 * Original: 0x00153980 - 0x00153AA1 (289 bytes, 96 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153980: ;
    _fb = (uint32_t)(0x30C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x314);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x114;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xE);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001539A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015399Du); } /* indirect call */
    }

loc_001539A0: ;
    edx = MEM32(esi);
    eax = esp + 0x214;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001539B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001539AEu); } /* indirect call */
    }

loc_001539B1: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001539BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001539BCu); } /* indirect call */
    }

loc_001539BF: ;
    PUSH32(esp, 0x001539C4u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001539C4: ;
    ecx = eax;
    PUSH32(esp, 0x001539CBu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_001539CB: ;
    esi = eax;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001539D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001539D6u); } /* indirect call */
    }

loc_001539D9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x001539F5u); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_001539F5: ;
    edi = MEM32(esp + 8);
    PUSH32(esp, 0x001539FEu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001539FE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00153A05u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153A02u); } /* indirect call */
    }

loc_00153A05: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00153A0Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153A09u); } /* indirect call */
    }

loc_00153A0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153A49; /* jne: not equal / not zero */

loc_00153A11: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x108); PUSH32(esp, 0x00153A1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153A16u); } /* indirect call */
    }

loc_00153A1C: ;
    edx = MEM32(esi);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00153A28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153A22u); } /* indirect call */
    }

loc_00153A28: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x100); PUSH32(esp, 0x00153A34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153A2Eu); } /* indirect call */
    }

loc_00153A34: ;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x00153A40u); RECOMP_ABI_CALL(0x00017E6Eu, sub_00017E6E); /* call 0x00017E6E */

loc_00153A40: ;
    ecx = MEM32(esp + 0xC);
    MEM32(esp + 0x10) = ecx;
    POP32(esp, ebx);

loc_00153A49: ;
    edx = MEM32(esp + 0x114);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00153A6Eu); RECOMP_ABI_CALL(0x00025677u, sub_00025677); /* call 0x00025677 */

loc_00153A6E: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x214);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00153A89u); RECOMP_ABI_CALL(0x00017E6Eu, sub_00017E6E); /* call 0x00017E6E */

loc_00153A89: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00153A94; /* jbe: below or equal (unsigned <=) */

loc_00153A93: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00153A94: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x30C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00153AF0
 * Original: 0x00153AF0 - 0x00153B47 (87 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153AF0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x108);
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, 0x7E63F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00153B0Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00153B0E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00153B1Du); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00153B1D: ;
    ecx = eax;
    PUSH32(esp, 0x00153B24u); RECOMP_ABI_CALL(0x0001C720u, sub_0001C720); /* call 0x0001C720 */

loc_00153B24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00153B3D; /* je: equal / zero */

loc_00153B28: ;
    SET_LO8(eax, MEM8(esp + 0x10C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153B3D; /* jne: not equal / not zero */

loc_00153B33: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00153B3D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00153B60
 * Original: 0x00153B60 - 0x00153B61 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153B60(void)
{

loc_00153B60: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00153B70
 * Original: 0x00153B70 - 0x00153BCF (95 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153B70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00153B70: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x100));
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E63FC);
    PUSH32(esp, 0x00153B85u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00153B85: ;
    esi = eax;
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, 0x7E63F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00153B97u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00153B97: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00153BA6u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_00153BA6: ;
    ecx = eax;
    PUSH32(esp, 0x00153BADu); RECOMP_ABI_CALL(0x0001C720u, sub_0001C720); /* call 0x0001C720 */

loc_00153BAD: ;
    ecx = MEM32(esp + 0x10C);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63FC);
    PUSH32(esp, 0x00153BC5u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00153BC5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x100)) >> 32) & 1);
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00153BF0
 * Original: 0x00153BF0 - 0x00153C09 (25 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153BF0(void)
{

loc_00153BF0: ;
    PUSH32(esp, 0x00153BF5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00153BF5: ;
    ecx = eax;
    PUSH32(esp, 0x00153BFCu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00153BFC: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x13C); PUSH32(esp, 0x00153C06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153C00u); } /* indirect call */
    }

loc_00153C06: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00153C10
 * Original: 0x00153C10 - 0x00153CAE (158 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153C10: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E05CC);
    PUSH32(esp, 0x00153C27u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00153C27: ;
    edi = eax;
    PUSH32(esp, 0x00153C2Eu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00153C2E: ;
    ecx = eax;
    PUSH32(esp, 0x00153C35u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00153C35: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00153C3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153C3Cu); } /* indirect call */
    }

loc_00153C3F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00153C46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153C43u); } /* indirect call */
    }

loc_00153C46: ;
    ecx = MEM32(esp + 0x114);
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7E640C);
    PUSH32(esp, 0x00153C5Au); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00153C5A: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00153CA2; /* jle: less or equal (signed <=) */

loc_00153C60: ;
    PUSH32(esp, ebx);

loc_00153C61: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, 0x7E0618);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00153C71u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00153C71: ;
    ebx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0x14C); PUSH32(esp, 0x00153C81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153C7Bu); } /* indirect call */
    }

loc_00153C81: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(ebx + 0xB0); PUSH32(esp, 0x00153C8Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153C84u); } /* indirect call */
    }

loc_00153C8A: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x120);
    PUSH32(esp, 0x00153C9Cu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00153C9C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00153C61; /* jl: less (signed <) */

loc_00153CA1: ;
    POP32(esp, ebx);

loc_00153CA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00153CE0
 * Original: 0x00153CE0 - 0x00153D6E (142 bytes, 56 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153CE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00153CE8u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00153CE8: ;
    ecx = eax;
    PUSH32(esp, 0x00153CEFu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00153CEF: ;
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x7E0DD0);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x00153D01u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00153D01: ;
    PUSH32(esp, 0x7E6414);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x00153D0Fu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00153D0F: ;
    edi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xE0); PUSH32(esp, 0x00153D1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153D16u); } /* indirect call */
    }

loc_00153D1C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = MEM32(esi);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00153D60; /* je: equal / zero */

loc_00153D24: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x00153D2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153D26u); } /* indirect call */
    }

loc_00153D2C: ;
    ebp = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x00153D39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153D33u); } /* indirect call */
    }

loc_00153D39: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0xE4); PUSH32(esp, 0x00153D49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153D43u); } /* indirect call */
    }

loc_00153D49: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xE4); PUSH32(esp, 0x00153D59u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153D53u); } /* indirect call */
    }

loc_00153D59: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00153D60: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xE4); PUSH32(esp, 0x00153D68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153D62u); } /* indirect call */
    }

loc_00153D68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00153DA0
 * Original: 0x00153DA0 - 0x00153E74 (212 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153DA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153DA0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00153DACu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00153DAC: ;
    ecx = eax;
    PUSH32(esp, 0x00153DB3u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00153DB3: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x15C); PUSH32(esp, 0x00153DBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153DB9u); } /* indirect call */
    }

loc_00153DBF: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 0x10) = edi;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xF0); PUSH32(esp, 0x00153DD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153DCAu); } /* indirect call */
    }

loc_00153DD0: ;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    edx = esp + 0x24;
    ebx = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xF4); PUSH32(esp, 0x00153DE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153DE0u); } /* indirect call */
    }

loc_00153DE6: ;
    eax = MEM32(esi);
    ecx = esi;
    MEM32(esp + 0x14) = edi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x1C) = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x6C); PUSH32(esp, 0x00153DF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153DF6u); } /* indirect call */
    }

loc_00153DF9: ;
    ebp = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00153E33; /* jle: less or equal (signed <=) */

loc_00153E01: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14C); PUSH32(esp, 0x00153E0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153E08u); } /* indirect call */
    }

loc_00153E0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153E18; /* jne: not equal / not zero */

loc_00153E12: ;
    MEM32(esp + 0x14) = edi;
    goto loc_00153E2E;

loc_00153E18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153E24; /* jne: not equal / not zero */

loc_00153E1E: ;
    MEM32(esp + 0x18) = edi;
    goto loc_00153E2E;

loc_00153E24: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00153E2E; /* jne: not equal / not zero */

loc_00153E2A: ;
    MEM32(esp + 0x1C) = edi;

loc_00153E2E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00153E01; /* jl: less (signed <) */

loc_00153E33: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x2C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6444);
    ecx = esi;
    PUSH32(esp, 0x00153E48u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00153E48: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6434);
    ecx = esi;
    PUSH32(esp, 0x00153E59u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00153E59: ;
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E6424);
    ecx = esi;
    PUSH32(esp, 0x00153E6Au); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00153E6A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00153EB0
 * Original: 0x00153EB0 - 0x00153F0E (94 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153EB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153EB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E6470);
    ecx = esi;
    PUSH32(esp, 0x00153EC4u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00153EC4: ;
    PUSH32(esp, 0x7E6460);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00153ED2u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00153ED2: ;
    PUSH32(esp, 0x7E6450);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x00153EE0u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00153EE0: ;
    ebp = eax;
    PUSH32(esp, 0x00153EE7u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00153EE7: ;
    ecx = eax;
    PUSH32(esp, 0x00153EEEu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00153EEE: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xE8); PUSH32(esp, 0x00153EFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153EF5u); } /* indirect call */
    }

loc_00153EFB: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xEC); PUSH32(esp, 0x00153F07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153F01u); } /* indirect call */
    }

loc_00153F07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00153F30
 * Original: 0x00153F30 - 0x00153FAB (123 bytes, 42 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153F30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00153F30: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00153F3Eu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00153F3E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00153F45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153F42u); } /* indirect call */
    }

loc_00153F45: ;
    edi = MEM32(esp + 0x110);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00153F5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153F5Au); } /* indirect call */
    }

loc_00153F5D: ;
    ebx = MEM32(esp + 0x114);
    PUSH32(esp, 0);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E051C);
    ecx = ebx;
    PUSH32(esp, 0x00153F77u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00153F77: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x90;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00153F89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00153F86u); } /* indirect call */
    }

loc_00153F89: ;
    PUSH32(esp, 0);
    edx = esp + 0x90;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E0510);
    ecx = ebx;
    PUSH32(esp, 0x00153F9Fu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00153F9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00153FD0
 * Original: 0x00153FD0 - 0x00153FE6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153FD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153FD0: ;
    PUSH32(esp, 0x00153FD5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00153FD5: ;
    ecx = eax;
    PUSH32(esp, 0x00153FDCu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00153FDC: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x94)); return; /* indirect tail jmp */

}

/**
 * sub_00153FF0
 * Original: 0x00153FF0 - 0x00154282 (658 bytes, 212 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00153FF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00153FF0: ;
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E05CC);
    PUSH32(esp, 0x00154005u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00154005: ;
    esi = eax;
    PUSH32(esp, 0x0015400Cu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015400C: ;
    ecx = eax;
    PUSH32(esp, 0x00154013u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00154013: ;
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0015401Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015401Au); } /* indirect call */
    }

loc_0015401D: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00154027u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154021u); } /* indirect call */
    }

loc_00154027: ;
    ebp = MEM32(esp + 0x8C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E64D4);
    esi = eax;
    PUSH32(esp, 0x7E64C8);
    ecx = ebp;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x00154047u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00154047: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E64BC);
    PUSH32(esp, 0x7E64B0);
    ecx = ebp;
    PUSH32(esp, 0x0015405Au); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015405A: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x7E16C8);
    ecx = ebp;
    PUSH32(esp, 0x00154068u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00154068: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E16BC);
    ecx = ebp;
    PUSH32(esp, 0x00154075u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00154075: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00154161; /* jle: less or equal (signed <=) */

loc_0015407F: ;
    /* nop */

loc_00154080: ;
    edx = MEM32(edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x3C) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x44) = eax;
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x001540ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001540A7u); } /* indirect call */
    }

loc_001540AD: ;
    ebp = eax;
    PUSH32(esp, 0x001540B4u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001540B4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001540BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001540B8u); } /* indirect call */
    }

loc_001540BB: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x28;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001540CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001540C9u); } /* indirect call */
    }

loc_001540CC: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x58); PUSH32(esp, 0x001540D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001540D3u); } /* indirect call */
    }

loc_001540D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00154120; /* je: equal / zero */

loc_001540DA: ;
    PUSH32(esp, 0x40);
    eax = esp + 0x48;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001540E8u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001540E8: ;
    ecx = esp + 0x31;
    PUSH32(esp, ecx);
    edx = esp + 0x54;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001540FCu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001540FC: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x20);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x4C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00154110u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00154110: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00154119u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00154119: ;
    ecx = eax;
    PUSH32(esp, 0x00154120u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00154120: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    edx = esp + 0x1C;
    PUSH32(esp, 0x7E169C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00154132u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154132: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x98);
    PUSH32(esp, 0x0015414Du); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015414D: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00154080; /* jl: less (signed <) */

loc_0015415A: ;
    ebp = MEM32(esp + 0x8C);

loc_00154161: ;
    ebx = MEM32(esp + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00154278; /* jle: less or equal (signed <=) */

loc_0015416F: ;
    /* nop */

loc_00154170: ;
    eax = MEM32(edi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = edx;
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x38) = edx;
    MEM32(esp + 0x3C) = edx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esp + 0x44) = edx;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x0015419Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154197u); } /* indirect call */
    }

loc_0015419D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001541F2; /* ja: above (unsigned >) */

loc_001541A2: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x154284); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001541A9u) goto loc_001541A9;
    if (_jt == 0x001541B5u) goto loc_001541B5;
    if (_jt == 0x001541C1u) goto loc_001541C1;
    if (_jt == 0x001541C8u) goto loc_001541C8;
    if (_jt == 0x001541D4u) goto loc_001541D4;
    if (_jt == 0x001541E0u) goto loc_001541E0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001541A9: ;
    PUSH32(esp, 0x7E64A8);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    goto loc_001541EA;

loc_001541B5: ;
    PUSH32(esp, 0x7E64A0);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    goto loc_001541EA;

loc_001541C1: ;
    PUSH32(esp, 0x7E6498);
    goto loc_001541E5;

loc_001541C8: ;
    PUSH32(esp, 0x7E6490);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    goto loc_001541EA;

loc_001541D4: ;
    PUSH32(esp, 0x7E6488);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    goto loc_001541EA;

loc_001541E0: ;
    PUSH32(esp, 0x7E6480);

loc_001541E5: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);

loc_001541EA: ;
    PUSH32(esp, 0x001541EFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001541EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001541F2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x50) = ecx;
    MEM32(esp + 0x54) = ecx;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x48;
    MEM32(esp + 0x5C) = ecx;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    MEM32(esp + 0x64) = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x6C) = ecx;
    PUSH32(esp, 0x00154225u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00154225: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015422Eu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0015422E: ;
    ecx = eax;
    PUSH32(esp, 0x00154235u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00154235: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 1);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = ecx;
    edx = esp + 0x1C;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x7E169C);
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = ecx;
    PUSH32(esp, 0x00154259u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154259: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0015426Fu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015426F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00154170; /* jl: less (signed <) */

loc_00154278: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154282
 * Original: 0x00154282 - 0x00154357 (213 bytes, 189 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154282(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00154282: ;
    edi = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB5001541u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xB5001541u (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1541C100) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1541D400) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xCCCCCC00u) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(ecx + 0x9C90);
    esp += 4; return; /* ret */

}

/**
 * sub_00154360
 * Original: 0x00154360 - 0x0015436D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154360(void)
{

loc_00154360: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x9C90) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00154370
 * Original: 0x00154370 - 0x00154371 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154370(void)
{

loc_00154370: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00154380
 * Original: 0x00154380 - 0x001543C1 (65 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154380(void)
{

loc_00154380: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E05CC);
    PUSH32(esp, 0x00154390u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00154390: ;
    edi = eax;
    PUSH32(esp, 0x00154397u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154397: ;
    ecx = eax;
    PUSH32(esp, 0x0015439Eu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_0015439E: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x001543A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001543A5u); } /* indirect call */
    }

loc_001543A8: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001543B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001543B2u); } /* indirect call */
    }

loc_001543B5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x001543BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001543B9u); } /* indirect call */
    }

loc_001543BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001543E0
 * Original: 0x001543E0 - 0x00154457 (119 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001543E0(void)
{

loc_001543E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001543E8u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001543E8: ;
    ecx = eax;
    PUSH32(esp, 0x001543EFu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_001543EF: ;
    esi = eax;
    PUSH32(esp, 0x001543F6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001543F6: ;
    ecx = eax;
    PUSH32(esp, 0x001543FDu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_001543FD: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x19C); PUSH32(esp, 0x00154409u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154403u); } /* indirect call */
    }

loc_00154409: ;
    edx = MEM32(ebx);
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00154416u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154410u); } /* indirect call */
    }

loc_00154416: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x110); PUSH32(esp, 0x00154421u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015441Bu); } /* indirect call */
    }

loc_00154421: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x12C); PUSH32(esp, 0x0015442Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154425u); } /* indirect call */
    }

loc_0015442B: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x10C); PUSH32(esp, 0x00154436u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154430u); } /* indirect call */
    }

loc_00154436: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0015443Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015443Au); } /* indirect call */
    }

loc_0015443D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x13C); PUSH32(esp, 0x00154447u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154441u); } /* indirect call */
    }

loc_00154447: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1A0); PUSH32(esp, 0x00154451u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015444Bu); } /* indirect call */
    }

loc_00154451: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154480
 * Original: 0x00154480 - 0x0015452D (173 bytes, 59 insns)
 * Category: game_network
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154480: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015448Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015448F: ;
    ecx = eax;
    PUSH32(esp, 0x00154496u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00154496: ;
    ecx = MEM32(esp + 0x114);
    PUSH32(esp, 0x7E650C);
    edi = eax;
    PUSH32(esp, 0x001544A9u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001544A9: ;
    ebp = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x001544B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001544B0u); } /* indirect call */
    }

loc_001544B3: ;
    ecx = MEM32(esp + 0x118);
    ebx = eax;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7E64FC);
    PUSH32(esp, 0x001544C7u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001544C7: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00154503; /* jle: less or equal (signed <=) */

loc_001544CD: ;
    /* nop */

loc_001544D0: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x7E64E8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001544E0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001544E0: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001544ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001544E9u); } /* indirect call */
    }

loc_001544EC: ;
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001544FEu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001544FE: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001544D0; /* jl: less (signed <) */

loc_00154503: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x0015450Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154508u); } /* indirect call */
    }

loc_0015450E: ;
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E64DC);
    PUSH32(esp, 0x00154520u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00154520: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154560
 * Original: 0x00154560 - 0x00154584 (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154560(void)
{

loc_00154560: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00154566u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154566: ;
    ecx = eax;
    PUSH32(esp, 0x0015456Du); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_0015456D: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xF8); PUSH32(esp, 0x00154579u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154573u); } /* indirect call */
    }

loc_00154579: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00154580u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015457Du); } /* indirect call */
    }

loc_00154580: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154590
 * Original: 0x00154590 - 0x001545BC (44 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154590(void)
{

loc_00154590: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00154596u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154596: ;
    ecx = eax;
    PUSH32(esp, 0x0015459Du); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_0015459D: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x7E0DD0);
    esi = eax;
    PUSH32(esp, 0x001545ADu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001545AD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x11C); PUSH32(esp, 0x001545B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001545B2u); } /* indirect call */
    }

loc_001545B8: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001545D0
 * Original: 0x001545D0 - 0x001545FC (44 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001545D0(void)
{

loc_001545D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001545D6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001545D6: ;
    ecx = eax;
    PUSH32(esp, 0x001545DDu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_001545DD: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x7E0DD0);
    esi = eax;
    PUSH32(esp, 0x001545EDu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001545ED: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x001545F8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001545F2u); } /* indirect call */
    }

loc_001545F8: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154610
 * Original: 0x00154610 - 0x001546E1 (209 bytes, 78 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154610: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0x7E650C);
    ecx = edi;
    PUSH32(esp, 0x00154624u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00154624: ;
    PUSH32(esp, 0x7E0DD0);
    ecx = edi;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00154634u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00154634: ;
    PUSH32(esp, 0x7E6520);
    ecx = edi;
    ebp = eax;
    PUSH32(esp, 0x00154642u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00154642: ;
    ebx = eax;
    PUSH32(esp, 0x00154649u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154649: ;
    ecx = eax;
    PUSH32(esp, 0x00154650u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00154650: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00154683; /* jne: not equal / not zero */

loc_00154657: ;
    PUSH32(esp, 0x7E6514);
    ecx = edi;
    PUSH32(esp, 0x00154663u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00154663: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001546DA; /* je: equal / zero */

loc_00154667: ;
    PUSH32(esp, 0x7E6514);
    ecx = edi;
    PUSH32(esp, 0x00154673u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00154673: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00154681u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015467Eu); } /* indirect call */
    }

loc_00154681: ;
    goto loc_001546C9;

loc_00154683: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x0015468Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154688u); } /* indirect call */
    }

loc_0015468E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001546A5; /* je: equal / zero */

loc_00154692: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x114); PUSH32(esp, 0x001546A3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015469Du); } /* indirect call */
    }

loc_001546A3: ;
    goto loc_001546C9;

loc_001546A5: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x001546B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001546AAu); } /* indirect call */
    }

loc_001546B0: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x114); PUSH32(esp, 0x001546BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001546B8u); } /* indirect call */
    }

loc_001546BE: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x11C); PUSH32(esp, 0x001546C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001546C3u); } /* indirect call */
    }

loc_001546C9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x001546D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001546CDu); } /* indirect call */
    }

loc_001546D0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x12C); PUSH32(esp, 0x001546DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001546D4u); } /* indirect call */
    }

loc_001546DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154720
 * Original: 0x00154720 - 0x001548D5 (437 bytes, 127 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154720: ;
    _fb = (uint32_t)(0x524) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x524;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM8(esp + 0x330) = LO8(ebx);
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00154743u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154743: ;
    ecx = eax;
    PUSH32(esp, 0x0015474Au); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_0015474A: ;
    edx = MEM32(eax);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1A4); PUSH32(esp, 0x00154763u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015475Du); } /* indirect call */
    }

loc_00154763: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001548A0; /* je: equal / zero */

loc_0015476D: ;
    PUSH32(esp, 0x00154772u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00154772: ;
    esi = eax;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001547E6; /* ja: above (unsigned >) */

loc_0015477C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1548D8); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00154783u) goto loc_00154783;
    if (_jt == 0x00154794u) goto loc_00154794;
    if (_jt == 0x001547A5u) goto loc_001547A5;
    if (_jt == 0x001547B6u) goto loc_001547B6;
    if (_jt == 0x001547C7u) goto loc_001547C7;
    if (_jt == 0x001547E6u) goto loc_001547E6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00154783: ;
    PUSH32(esp, 0x80);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E65F8);
    goto loc_001547D6;

loc_00154794: ;
    PUSH32(esp, 0x80);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E65DC);
    goto loc_001547D6;

loc_001547A5: ;
    PUSH32(esp, 0x80);
    ecx = esp + 0x34;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E65B8);
    goto loc_001547D6;

loc_001547B6: ;
    PUSH32(esp, 0x80);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E6594);
    goto loc_001547D6;

loc_001547C7: ;
    PUSH32(esp, 0x80);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6578);

loc_001547D6: ;
    PUSH32(esp, 0x001547DBu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_001547DB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001547E6u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_001547E6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154807; /* jne: not equal / not zero */

loc_001547EB: ;
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    edx = esp + 0x134;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00154802u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154802: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0015484B;

loc_00154807: ;
    PUSH32(esp, 0x80);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6554);
    PUSH32(esp, 0x0015481Eu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0015481E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00154829u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00154829: ;
    ecx = esp + 0xB0;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x138;
    PUSH32(esp, 0x7E654C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00154848u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154848: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0015484B: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x200);
    eax = 1;
    MEM32(esp + 0x20) = ecx;
    ecx = esp + 0x338;
    PUSH32(esp, ecx);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(esp + 0x28) = edx;
    edx = esp + 0x13C;
    PUSH32(esp, edx);
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 3);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015489Du); RECOMP_ABI_CALL(0x00015A3Du, sub_00015A3D); /* call 0x00015A3D */

loc_0015489D: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001548A0: ;
    esi = MEM32(esp + 0x538);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E653C);
    ecx = esi;
    PUSH32(esp, 0x001548B4u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001548B4: ;
    PUSH32(esp, ebx);
    edx = esp + 0x334;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E6530);
    ecx = esi;
    PUSH32(esp, 0x001548C9u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001548C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x524) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x524;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154970
 * Original: 0x00154970 - 0x00154A10 (160 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154970: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015497Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015497F: ;
    ecx = eax;
    PUSH32(esp, 0x00154986u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00154986: ;
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_00154990: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x60); PUSH32(esp, 0x00154998u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154995u); } /* indirect call */
    }

loc_00154998: ;
    ebp = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001549D4; /* jle: less or equal (signed <=) */

loc_001549A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x7E6614);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001549B1u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001549B1: ;
    edx = MEM32(ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x001549BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001549BAu); } /* indirect call */
    }

loc_001549BD: ;
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001549CFu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001549CF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001549A0; /* jl: less (signed <) */

loc_001549D4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x13 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00154990; /* jl: less (signed <) */

loc_001549DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154A10
 * Original: 0x00154A10 - 0x00154AB5 (165 bytes, 66 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154A10: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00154A18u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154A18: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00154A1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154A1Cu); } /* indirect call */
    }

loc_00154A1F: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00154A28u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154A25u); } /* indirect call */
    }

loc_00154A28: ;
    edi = eax;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x130); PUSH32(esp, 0x00154A34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154A2Eu); } /* indirect call */
    }

loc_00154A34: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154A9F; /* jne: not equal / not zero */

loc_00154A38: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x134); PUSH32(esp, 0x00154A42u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154A3Cu); } /* indirect call */
    }

loc_00154A42: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154A9F; /* jne: not equal / not zero */

loc_00154A46: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00154A4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154A4Au); } /* indirect call */
    }

loc_00154A4D: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xE);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00154A58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154A55u); } /* indirect call */
    }

loc_00154A58: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00154A9F; /* jne: not equal / not zero */

loc_00154A5C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00154A62u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154A62: ;
    ecx = eax;
    PUSH32(esp, 0x00154A69u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00154A69: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00154A70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154A6Du); } /* indirect call */
    }

loc_00154A70: ;
    ecx = MEM32(esp + 0x18);
    SET_LO8(ebx, LO8(eax));
    MEM8(esp + 0xC) = LO8(ebx);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6624);
    PUSH32(esp, 0x00154A89u); RECOMP_ABI_CALL(0x00024E8Eu, sub_00024E8E); /* call 0x00024E8E */

loc_00154A89: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00154AAF; /* je: equal / zero */

loc_00154A8E: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xE);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00154A99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154A96u); } /* indirect call */
    }

loc_00154A99: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_00154A9F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6624);
    PUSH32(esp, 0x00154AAFu); RECOMP_ABI_CALL(0x00024E8Eu, sub_00024E8E); /* call 0x00024E8E */

loc_00154AAF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154AE0
 * Original: 0x00154AE0 - 0x00154B1F (63 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154AE0(void)
{

loc_00154AE0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E05CC);
    ecx = esi;
    PUSH32(esp, 0x00154AF2u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00154AF2: ;
    PUSH32(esp, 0x7E6630);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00154B00u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00154B00: ;
    esi = eax;
    PUSH32(esp, 0x00154B07u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154B07: ;
    ecx = eax;
    PUSH32(esp, 0x00154B0Eu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00154B0E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x108); PUSH32(esp, 0x00154B1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154B14u); } /* indirect call */
    }

loc_00154B1A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154B30
 * Original: 0x00154B30 - 0x00154B49 (25 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154B30(void)
{

loc_00154B30: ;
    PUSH32(esp, 0x00154B35u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154B35: ;
    ecx = eax;
    PUSH32(esp, 0x00154B3Cu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00154B3C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x12C); PUSH32(esp, 0x00154B46u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154B40u); } /* indirect call */
    }

loc_00154B46: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154B50
 * Original: 0x00154B50 - 0x00154E50 (768 bytes, 266 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00154B50: ;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00154B5Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154B5F: ;
    ecx = eax;
    PUSH32(esp, 0x00154B66u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00154B66: ;
    edi = MEM32(esp + 0xBC);
    PUSH32(esp, edi);
    esi = eax;
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1920);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00154B7Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154B7F: ;
    ebp = MEM32(esp + 0xCC);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00154B99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154B93u); } /* indirect call */
    }

loc_00154B99: ;
    ebx = MEM32(esp + 0xC8);
    PUSH32(esp, 0);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00154BB3u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00154BB3: ;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E1910);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00154BC3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154BC3: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA4); PUSH32(esp, 0x00154BD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154BD0u); } /* indirect call */
    }

loc_00154BD6: ;
    PUSH32(esp, 0);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00154BE9u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00154BE9: ;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E66B0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00154BF9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154BF9: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00154C07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154C01u); } /* indirect call */
    }

loc_00154C07: ;
    PUSH32(esp, eax);
    eax = esp + 0x5C;
    PUSH32(esp, 0x7E6698);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00154C17u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154C17: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00154C2Du); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00154C2D: ;
    PUSH32(esp, edi);
    eax = esp + 0x18;
    PUSH32(esp, 0x7E18E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00154C3Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154C3D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esp + 0x5C;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00154C53u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00154C53: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x178); PUSH32(esp, 0x00154C65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154C5Fu); } /* indirect call */
    }

loc_00154C65: ;
    PUSH32(esp, edi);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E6688);
    PUSH32(esp, edx);
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x00154C79u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154C79: ;
    eax = MEM32(esp + 0x40);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00154C8Du); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00154C8D: ;
    PUSH32(esp, edi);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E6678);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00154C9Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154C9D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0x7C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00154CB3u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00154CB3: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xDC); PUSH32(esp, 0x00154CBEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154CB8u); } /* indirect call */
    }

loc_00154CBE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E18F8);
    if (CMP_EQ(_fa, _fb)) goto loc_00154CF2; /* je: equal / zero */

loc_00154CC8: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00154CD2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154CD2: ;
    eax = MEM32(esp + 0xD0);
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x9C); PUSH32(esp, 0x00154CEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154CE4u); } /* indirect call */
    }

loc_00154CEA: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    goto loc_00154D1A;

loc_00154CF2: ;
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00154CFCu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154CFC: ;
    ecx = MEM32(esp + 0xD0);
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00154D14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154D0Eu); } /* indirect call */
    }

loc_00154D14: ;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);

loc_00154D1A: ;
    ecx = ebx;
    PUSH32(esp, 0x00154D21u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00154D21: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xD4); PUSH32(esp, 0x00154D2Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154D26u); } /* indirect call */
    }

loc_00154D2C: ;
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x7E6668);
    PUSH32(esp, ecx);
    MEM8(esp + 0x1F) = LO8(eax);
    PUSH32(esp, 0x00154D40u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154D40: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00154D56; /* je: equal / zero */

loc_00154D4D: ;
    PUSH32(esp, 1);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    goto loc_00154D5D;

loc_00154D56: ;
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);

loc_00154D5D: ;
    PUSH32(esp, 0x00154D62u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00154D62: ;
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x7E665C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00154D72u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154D72: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xCC); PUSH32(esp, 0x00154D80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154D7Au); } /* indirect call */
    }

loc_00154D80: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0xD0); PUSH32(esp, 0x00154D8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154D86u); } /* indirect call */
    }

loc_00154D8C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00154D92u); RECOMP_ABI_CALL(0x00026B53u, sub_00026B53); /* call 0x00026B53 */

loc_00154D92: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00154DA2u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00154DA2: ;
    PUSH32(esp, edi);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E1904);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00154DB2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154DB2: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x174); PUSH32(esp, 0x00154DC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154DBAu); } /* indirect call */
    }

loc_00154DC0: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00154DCDu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00154DCD: ;
    PUSH32(esp, edi);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E6648);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00154DDDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154DDD: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x00154DEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154DE5u); } /* indirect call */
    }

loc_00154DEB: ;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00154DF8u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00154DF8: ;
    PUSH32(esp, edi);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E6638);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00154E08u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154E08: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00154E18u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00154E18: ;
    PUSH32(esp, edi);
    ecx = esp + 0x18;
    PUSH32(esp, 0x7E0DB0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00154E28u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00154E28: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x90); PUSH32(esp, 0x00154E36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154E30u); } /* indirect call */
    }

loc_00154E36: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00154E43u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00154E43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00154F10
 * Original: 0x00154F10 - 0x00154F11 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154F10(void)
{

loc_00154F10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00154F20
 * Original: 0x00154F20 - 0x00154F4B (43 bytes, 16 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154F20(void)
{

loc_00154F20: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00154F26u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154F26: ;
    ecx = eax;
    PUSH32(esp, 0x00154F2Du); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00154F2D: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x13C); PUSH32(esp, 0x00154F39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154F33u); } /* indirect call */
    }

loc_00154F39: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00154F40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154F3Du); } /* indirect call */
    }

loc_00154F40: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00154F47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154F44u); } /* indirect call */
    }

loc_00154F47: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154F60
 * Original: 0x00154F60 - 0x00154F84 (36 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154F60(void)
{

loc_00154F60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00154F66u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154F66: ;
    ecx = eax;
    PUSH32(esp, 0x00154F6Du); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00154F6D: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x13C); PUSH32(esp, 0x00154F79u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154F73u); } /* indirect call */
    }

loc_00154F79: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00154F80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154F7Du); } /* indirect call */
    }

loc_00154F80: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00154F90
 * Original: 0x00154F90 - 0x00155075 (229 bytes, 88 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00154F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00154F90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00154F98u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154F98: ;
    ecx = eax;
    PUSH32(esp, 0x00154F9Fu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00154F9F: ;
    esi = eax;
    PUSH32(esp, 0x00154FA6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154FA6: ;
    ecx = eax;
    PUSH32(esp, 0x00154FADu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00154FAD: ;
    ebx = eax;
    PUSH32(esp, 0x00154FB4u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00154FB4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00154FBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154FB8u); } /* indirect call */
    }

loc_00154FBB: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00154FC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154FC1u); } /* indirect call */
    }

loc_00154FC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155007; /* je: equal / zero */

loc_00154FC9: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00154FD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154FCDu); } /* indirect call */
    }

loc_00154FD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155007; /* je: equal / zero */

loc_00154FD5: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00154FDCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154FD9u); } /* indirect call */
    }

loc_00154FDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155007; /* je: equal / zero */

loc_00154FE1: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00154FE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154FE5u); } /* indirect call */
    }

loc_00154FE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155007; /* je: equal / zero */

loc_00154FED: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x54); PUSH32(esp, 0x00154FF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154FF1u); } /* indirect call */
    }

loc_00154FF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155007; /* je: equal / zero */

loc_00154FF9: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xB4); PUSH32(esp, 0x00155005u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00154FFFu); } /* indirect call */
    }

loc_00155005: ;
    goto loc_00155011;

loc_00155007: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00155011u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015500Bu); } /* indirect call */
    }

loc_00155011: ;
    ebx = MEM32(esp + 0x14);
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E66D0);
    ecx = ebx;
    PUSH32(esp, 0x00155024u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00155024: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x0015502Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155029u); } /* indirect call */
    }

loc_0015502C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x12C); PUSH32(esp, 0x00155036u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155030u); } /* indirect call */
    }

loc_00155036: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00155048; /* jne: not equal / not zero */

loc_0015503D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00155044u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155041u); } /* indirect call */
    }

loc_00155044: ;
    PUSH32(esp, 0);
    goto loc_00155051;

loc_00155048: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0015504Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015504Cu); } /* indirect call */
    }

loc_0015504F: ;
    PUSH32(esp, 1);

loc_00155051: ;
    ecx = ebx;
    PUSH32(esp, 0x7E66C4);
    PUSH32(esp, 0x0015505Du); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015505D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x12C); PUSH32(esp, 0x00155067u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155061u); } /* indirect call */
    }

loc_00155067: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x0015506Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015506Cu); } /* indirect call */
    }

loc_0015506F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001550B0
 * Original: 0x001550B0 - 0x001551FD (333 bytes, 122 insns)
 * Category: game_debug
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001550B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001550B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001550B9u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001550B9: ;
    ecx = eax;
    PUSH32(esp, 0x001550C0u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_001550C0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001550CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001550CCu); } /* indirect call */
    }

loc_001550CF: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0x7E67F0);
    ecx = edi;
    PUSH32(esp, 0x001550DFu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001550DF: ;
    PUSH32(esp, 0x7E67E4);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x001550EDu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001550ED: ;
    PUSH32(esp, 0x7E67D4);
    ecx = edi;
    ebp = eax;
    PUSH32(esp, 0x001550FBu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001550FB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(esi);
    edi = eax;
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0015512E; /* jne: not equal / not zero */

loc_00155106: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00155109u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155106u); } /* indirect call */
    }

loc_00155109: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00155118; /* jl: less (signed <) */

loc_0015510D: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00155114u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155111u); } /* indirect call */
    }

loc_00155114: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0015511A; /* jl: less (signed <) */

loc_00155118: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015511A: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00155123u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155120u); } /* indirect call */
    }

loc_00155123: ;
    edi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0015512Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155129u); } /* indirect call */
    }

loc_0015512C: ;
    goto loc_0015515F;

loc_0015512E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155157; /* jne: not equal / not zero */

loc_00155133: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00155136u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155133u); } /* indirect call */
    }

loc_00155136: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x0015513Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015513Cu); } /* indirect call */
    }

loc_0015513F: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    ecx = esi;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx + 0x108); PUSH32(esp, 0x0015514Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155148u); } /* indirect call */
    }

loc_0015514E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00155155u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155152u); } /* indirect call */
    }

loc_00155155: ;
    goto loc_0015515F;

loc_00155157: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x0015515Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015515Au); } /* indirect call */
    }

loc_0015515D: ;
    edi = eax;

loc_0015515F: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00155197; /* ja: above (unsigned >) */

loc_00155166: ;
    eax = ZX8(MEM8(edi + 0x15521C));
    { uint32_t _jt = MEM32(eax * 4 + 0x155200); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00155174u) goto loc_00155174;
    if (_jt == 0x0015517Bu) goto loc_0015517B;
    if (_jt == 0x00155182u) goto loc_00155182;
    if (_jt == 0x00155189u) goto loc_00155189;
    if (_jt == 0x00155190u) goto loc_00155190;
    if (_jt == 0x00155197u) goto loc_00155197;
    if (_jt == 0x0015519Cu) goto loc_0015519C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00155174: ;
    esi = 0x7E67B0;
    goto loc_0015519C;

loc_0015517B: ;
    esi = 0x7E6794;
    goto loc_0015519C;

loc_00155182: ;
    esi = 0x7E6778;
    goto loc_0015519C;

loc_00155189: ;
    esi = 0x7E6750;
    goto loc_0015519C;

loc_00155190: ;
    esi = 0x7E6728;
    goto loc_0015519C;

loc_00155197: ;
    esi = 0x7E670C;

loc_0015519C: ;
    edi = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7DFB44);
    ecx = edi;
    PUSH32(esp, 0x001551B4u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001551B4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001551F6; /* je: equal / zero */

loc_001551B8: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E394C);
    ecx = edi;
    PUSH32(esp, 0x001551C7u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001551C7: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7E3928);
    ecx = edi;
    PUSH32(esp, 0x001551D5u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001551D5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6700);
    PUSH32(esp, 0x7E66F0);
    ecx = edi;
    PUSH32(esp, 0x001551E8u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001551E8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E66E0);
    ecx = edi;
    PUSH32(esp, 0x001551F6u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001551F6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00155290
 * Original: 0x00155290 - 0x00155760 (1232 bytes, 539 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155290(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155290: ;
    _fb = (uint32_t)(0x16C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x16C));
    esp = esp - 0x16C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x001552A3u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001552A3: ;
    ecx = eax;
    PUSH32(esp, 0x001552AAu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_001552AA: ;
    ebx = eax;
    PUSH32(esp, 0x001552B1u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001552B1: ;
    ecx = eax;
    PUSH32(esp, 0x001552B8u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_001552B8: ;
    PUSH32(esp, 0x58);
    edi = eax;
    eax = esp + 0x28;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001552C8u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001552C8: ;
    ebp = MEM32(esp + 0x18C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7E6A50);
    ecx = ebp;
    PUSH32(esp, 0x001552DEu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001552DE: ;
    PUSH32(esp, 0x7E6A40);
    ecx = ebp;
    esi = eax;
    PUSH32(esp, 0x001552ECu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001552EC: ;
    PUSH32(esp, 0x7E6A2C);
    ecx = ebp;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x001552FCu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001552FC: ;
    PUSH32(esp, 0x7E6A1C);
    ecx = ebp;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0015530Cu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015530C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x10) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_0015532A; /* jl: less (signed <) */

loc_0015531C: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x00155326u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155320u); } /* indirect call */
    }

loc_00155326: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00155332; /* jl: less (signed <) */

loc_0015532A: ;
    MEM32(esp + 0x10) = 8;

loc_00155332: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00155352; /* jl: less (signed <) */

loc_0015533A: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xB0); PUSH32(esp, 0x00155344u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015533Eu); } /* indirect call */
    }

loc_00155344: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00155352; /* jge: greater or equal (signed >=) */

loc_0015534C: ;
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0015535A; /* jne: not equal / not zero */

loc_00155352: ;
    MEM32(esp + 0x10) = 8;

loc_0015535A: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00155367; /* jl: less (signed <) */

loc_00155362: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0015536F; /* jle: less or equal (signed <=) */

loc_00155367: ;
    MEM32(esp + 0x10) = 8;

loc_0015536F: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_0015537C; /* jl: less (signed <) */

loc_00155377: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00155389; /* jle: less or equal (signed <=) */

loc_0015537C: ;
    MEM32(esp + 0x10) = 8;
    goto loc_001554F1;

loc_00155389: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_001554E6; /* jne: not equal / not zero */

loc_00155395: ;
    ecx = MEM32(esp + 0x14);
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0x2C) = edi;
    MEM32(esp + 0x30) = eax;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x001553B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001553AEu); } /* indirect call */
    }

loc_001553B1: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00155424; /* jle: less or equal (signed <=) */

loc_001553B7: ;
    goto loc_001553C0;

    /* nop */

loc_001553C0: ;
    PUSH32(esp, esi);
    eax = esp + 0x80;
    PUSH32(esp, 0x7E6A08);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001553D3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001553D3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x001553E2u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001553E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_0015541B; /* jl: less (signed <) */

loc_001553E9: ;
    edx = MEM32(ebx);
    edi = eax + -1000;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC4); PUSH32(esp, 0x001553FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001553F4u); } /* indirect call */
    }

loc_001553FA: ;
    MEM32(esp + esi * 4 + 0x64) = eax;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC8); PUSH32(esp, 0x00155409u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155403u); } /* indirect call */
    }

loc_00155409: ;
    edi = MEM32(esp + 0x1C);
    MEM32(esp + esi * 4 + 0x4C) = eax;
    MEM32(esp + esi * 4 + 0x34) = 0xFFFFFFFFu;
    goto loc_0015541F;

loc_0015541B: ;
    MEM32(esp + esi * 4 + 0x34) = eax;

loc_0015541F: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001553C0; /* jl: less (signed <) */

loc_00155424: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00155430u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015542Du); } /* indirect call */
    }

loc_00155430: ;
    eax = MEM32(esp + 0x18);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_001554A4; /* jle: less or equal (signed <=) */

loc_0015543A: ;
    /* nop */

loc_00155440: ;
    PUSH32(esp, esi);
    ecx = esp + 0x80;
    PUSH32(esp, 0x7E69F8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00155453u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00155453: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x7C;
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00155462u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00155462: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00155497; /* jl: less (signed <) */

loc_00155469: ;
    edi = eax + -1000;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0xC4); PUSH32(esp, 0x0015547Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155474u); } /* indirect call */
    }

loc_0015547A: ;
    MEM32(esp + esi * 4 + 0x70) = eax;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC8); PUSH32(esp, 0x00155489u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155483u); } /* indirect call */
    }

loc_00155489: ;
    MEM32(esp + esi * 4 + 0x58) = eax;
    MEM32(esp + esi * 4 + 0x40) = 0xFFFFFFFFu;
    goto loc_0015549B;

loc_00155497: ;
    MEM32(esp + esi * 4 + 0x40) = eax;

loc_0015549B: ;
    eax = MEM32(esp + 0x18);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00155440; /* jl: less (signed <) */

loc_001554A4: ;
    ebp = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x9C94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x9C94)) >> 32) & 1);
    ebp = ebp + 0x9C94;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x16;
    edi = esp + 0x24;
    esi = ebp;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        _cf = (MEM32(esi) < MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags != 0)) goto loc_001554D1; /* je: equal / zero */

loc_001554BF: ;
    edx = MEM32(ebx);
    eax = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x001554CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001554C8u); } /* indirect call */
    }

loc_001554CB: ;
    MEM32(esp + 0x10) = eax;
    goto loc_001554D9;

loc_001554D1: ;
    MEM32(esp + 0x10) = 8;

loc_001554D9: ;
    ecx = 0x16;
    esi = esp + 0x24;
    edi = ebp;
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

loc_001554E6: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0x15 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_001555CC; /* ja: above (unsigned >) */

loc_001554F1: ;
    ecx = MEM32(esp + 0x10);
    edx = ZX8(MEM8(ecx + 0x155634));
    { uint32_t _jt = MEM32(edx * 4 + 0x155600); /* switch: 13 entries, 13 targets */
    if (_jt == 0x00155503u) goto loc_00155503;
    if (_jt == 0x0015553Du) goto loc_0015553D;
    if (_jt == 0x00155546u) goto loc_00155546;
    if (_jt == 0x0015554Fu) goto loc_0015554F;
    if (_jt == 0x00155572u) goto loc_00155572;
    if (_jt == 0x0015557Bu) goto loc_0015557B;
    if (_jt == 0x00155584u) goto loc_00155584;
    if (_jt == 0x00155590u) goto loc_00155590;
    if (_jt == 0x0015559Cu) goto loc_0015559C;
    if (_jt == 0x001555A8u) goto loc_001555A8;
    if (_jt == 0x001555B4u) goto loc_001555B4;
    if (_jt == 0x001555C0u) goto loc_001555C0;
    if (_jt == 0x001555CCu) goto loc_001555CC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00155503: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E69D0);

loc_0015550A: ;
    esi = MEM32(esp + 0x18C);
    ecx = esi;
    PUSH32(esp, 0x7E6530);
    PUSH32(esp, 0x0015551Du); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015551D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E69C4);

loc_00155524: ;
    ecx = esi;
    PUSH32(esp, 0x7E69B4);
    PUSH32(esp, 0x00155530u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00155530: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x16C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x16C)) >> 32) & 1);
    esp = esp + 0x16C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0015553D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E698C);
    goto loc_0015550A;

loc_00155546: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6964);
    goto loc_0015550A;

loc_0015554F: ;
    esi = MEM32(esp + 0x184);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6948);
    PUSH32(esp, 0x7E6530);
    ecx = esi;
    PUSH32(esp, 0x00155569u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00155569: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E693C);
    goto loc_00155524;

loc_00155572: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E691C);
    goto loc_0015550A;

loc_0015557B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E68F8);
    goto loc_0015550A;

loc_00155584: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E68D4);
    goto loc_0015550A;

loc_00155590: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E68B0);
    goto loc_0015550A;

loc_0015559C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E688C);
    goto loc_0015550A;

loc_001555A8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6868);
    goto loc_0015550A;

loc_001555B4: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6844);
    goto loc_0015550A;

loc_001555C0: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E681C);
    goto loc_0015550A;

loc_001555CC: ;
    esi = MEM32(esp + 0x184);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6800);
    PUSH32(esp, 0x7E6530);
    ecx = esi;
    PUSH32(esp, 0x001555E6u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001555E6: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0015551D; /* jne: not equal / not zero */

loc_001555F2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E693C);
    goto loc_00155524;

    edi = edi;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15553D00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1555B400) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15554600) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0x55)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(edx + 0x55) = MEM8(edx + 0x55) + HI8(edx);
    _fa = (uint32_t)(MEM8(edx + 0x55)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15557B00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + edx * 2 + 0x55900015)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebp + edx * 2 + 0x55900015) = MEM8(ebp + edx * 2 + 0x55900015) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebp + edx * 2 + 0x55900015)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15559C00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + -872409771)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(eax + -872409771) = MEM8(eax + -872409771) + HI8(ecx);
    _fa = (uint32_t)(MEM8(eax + -872409771)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xC0C0000) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax + 0x7060C0C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(eax + 0x7060C0C))) >> 32) & 1);
    eax = eax + MEM32(eax + 0x7060C0C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM8(ecx) = MEM8(ecx) | LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | MEM8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    PUSH32(esp, 0x00155745u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155745: ;
    ecx = eax;
    PUSH32(esp, 0x0015574Cu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_0015574C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00155753u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155750u); } /* indirect call */
    }

loc_00155753: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00155740
 * Original: 0x00155740 - 0x00155760 (32 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155740(void)
{

loc_00155740: ;
    PUSH32(esp, 0x00155745u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155745: ;
    ecx = eax;
    PUSH32(esp, 0x0015574Cu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_0015574C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00155753u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155750u); } /* indirect call */
    }

loc_00155753: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00155760
 * Original: 0x00155760 - 0x00155778 (24 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155760(void)
{

loc_00155760: ;
    eax = MEM32(ecx + 0x9C90);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6A60);
    PUSH32(esp, 0x00155775u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00155775: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00155780
 * Original: 0x00155780 - 0x00155796 (22 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155780: ;
    PUSH32(esp, 0x58);
    _fb = (uint32_t)(0x9C94) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x9C94;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00155790u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_00155790: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001557A0
 * Original: 0x001557A0 - 0x001557A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001557A0(void)
{

loc_001557A0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001557B0
 * Original: 0x001557B0 - 0x001557B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001557B0(void)
{

loc_001557B0: ;
    eax = MEM32(0x8FA6C8);
    esp += 4; return; /* ret */

}

/**
 * sub_001557C0
 * Original: 0x001557C0 - 0x00155827 (103 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001557C0(void)
{

loc_001557C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001557C8u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001557C8: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001557CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001557CCu); } /* indirect call */
    }

loc_001557CF: ;
    PUSH32(esp, 0x001557D4u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001557D4: ;
    ecx = eax;
    PUSH32(esp, 0x001557DBu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_001557DB: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001557E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001557E1u); } /* indirect call */
    }

loc_001557E4: ;
    PUSH32(esp, 0x001557E9u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001557E9: ;
    ecx = eax;
    PUSH32(esp, 0x001557F0u); RECOMP_ABI_CALL(0x0001D6D4u, sub_0001D6D4); /* call 0x0001D6D4 */

loc_001557F0: ;
    edi = eax;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x001557F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001557F6u); } /* indirect call */
    }

loc_001557F9: ;
    PUSH32(esp, 0x001557FEu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001557FE: ;
    ecx = eax;
    PUSH32(esp, 0x00155805u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00155805: ;
    edx = MEM32(eax);
    ebx = MEM32(edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00155811u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015580Bu); } /* indirect call */
    }

loc_00155811: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(ebx + 0x64); PUSH32(esp, 0x00155817u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155814u); } /* indirect call */
    }

loc_00155817: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x80); PUSH32(esp, 0x00155821u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015581Bu); } /* indirect call */
    }

loc_00155821: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155840
 * Original: 0x00155840 - 0x00155856 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155840(void)
{

loc_00155840: ;
    PUSH32(esp, 0x00155845u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155845: ;
    ecx = eax;
    PUSH32(esp, 0x0015584Cu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_0015584C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00155853u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155850u); } /* indirect call */
    }

loc_00155853: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155860
 * Original: 0x00155860 - 0x0015589C (60 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155860(void)
{

loc_00155860: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E6A70);
    ecx = esi;
    PUSH32(esp, 0x00155872u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00155872: ;
    PUSH32(esp, 0x7E0FCC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00155880u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00155880: ;
    esi = eax;
    PUSH32(esp, 0x00155887u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155887: ;
    ecx = eax;
    PUSH32(esp, 0x0015588Eu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_0015588E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00155897u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155894u); } /* indirect call */
    }

loc_00155897: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001558B0
 * Original: 0x001558B0 - 0x001558EC (60 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001558B0(void)
{

loc_001558B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E6A70);
    ecx = esi;
    PUSH32(esp, 0x001558C2u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001558C2: ;
    PUSH32(esp, 0x7E0FCC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x001558D0u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001558D0: ;
    esi = eax;
    PUSH32(esp, 0x001558D7u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001558D7: ;
    ecx = eax;
    PUSH32(esp, 0x001558DEu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_001558DE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001558E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001558E4u); } /* indirect call */
    }

loc_001558E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155900
 * Original: 0x00155900 - 0x001559AA (170 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155900: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x7E6A70);
    ecx = ebx;
    esi = 0x7D6;
    PUSH32(esp, 0x0015591Bu); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_0015591B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015592D; /* je: equal / zero */

loc_0015591F: ;
    PUSH32(esp, 0x7E6A70);
    ecx = ebx;
    PUSH32(esp, 0x0015592Bu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015592B: ;
    goto loc_00155944;

loc_0015592D: ;
    PUSH32(esp, 0x00155932u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155932: ;
    ecx = eax;
    PUSH32(esp, 0x00155939u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00155939: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155946; /* je: equal / zero */

loc_0015593D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00155944u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155941u); } /* indirect call */
    }

loc_00155944: ;
    esi = eax;

loc_00155946: ;
    PUSH32(esp, 0x7E05CC);
    ecx = ebx;
    PUSH32(esp, 0x00155952u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00155952: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00155966; /* jg: greater (signed >) */

loc_00155958: ;
    PUSH32(esp, 0x7E4EB4);
    ecx = ebx;
    PUSH32(esp, 0x00155964u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00155964: ;
    edi = eax;

loc_00155966: ;
    PUSH32(esp, 0x0015596Bu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015596B: ;
    ecx = eax;
    PUSH32(esp, 0x00155972u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00155972: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x0015597Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015597Au); } /* indirect call */
    }

loc_0015597D: ;
    PUSH32(esp, 0x00155982u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155982: ;
    ecx = eax;
    PUSH32(esp, 0x00155989u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00155989: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00155993u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155990u); } /* indirect call */
    }

loc_00155993: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x12C); PUSH32(esp, 0x0015599Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155997u); } /* indirect call */
    }

loc_0015599D: ;
    MEM32(ebp + 0x13974) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001559E0
 * Original: 0x001559E0 - 0x00155A5B (123 bytes, 44 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001559E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001559E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E6A70);
    ecx = esi;
    edi = 0x7D6;
    PUSH32(esp, 0x001559F8u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_001559F8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155A0A; /* je: equal / zero */

loc_001559FC: ;
    PUSH32(esp, 0x7E6A70);
    ecx = esi;
    PUSH32(esp, 0x00155A08u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00155A08: ;
    goto loc_00155A21;

loc_00155A0A: ;
    PUSH32(esp, 0x00155A0Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155A0F: ;
    ecx = eax;
    PUSH32(esp, 0x00155A16u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00155A16: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155A23; /* je: equal / zero */

loc_00155A1A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00155A21u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155A1Eu); } /* indirect call */
    }

loc_00155A21: ;
    edi = eax;

loc_00155A23: ;
    PUSH32(esp, 0x7E05CC);
    ecx = esi;
    PUSH32(esp, 0x00155A2Fu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00155A2F: ;
    PUSH32(esp, 0x7E0FCC);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x00155A3Du); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00155A3D: ;
    esi = eax;
    PUSH32(esp, 0x00155A44u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155A44: ;
    ecx = eax;
    PUSH32(esp, 0x00155A4Bu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00155A4B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00155A55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155A52u); } /* indirect call */
    }

loc_00155A55: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155A80
 * Original: 0x00155A80 - 0x00155ABC (60 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155A80(void)
{

loc_00155A80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E6A70);
    ecx = esi;
    PUSH32(esp, 0x00155A92u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00155A92: ;
    PUSH32(esp, 0x7E0FCC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00155AA0u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00155AA0: ;
    esi = eax;
    PUSH32(esp, 0x00155AA7u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155AA7: ;
    ecx = eax;
    PUSH32(esp, 0x00155AAEu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00155AAE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00155AB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155AB4u); } /* indirect call */
    }

loc_00155AB7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155AD0
 * Original: 0x00155AD0 - 0x00155B0C (60 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155AD0(void)
{

loc_00155AD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E6A70);
    ecx = esi;
    PUSH32(esp, 0x00155AE2u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00155AE2: ;
    PUSH32(esp, 0x7E0FCC);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x00155AF0u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00155AF0: ;
    esi = eax;
    PUSH32(esp, 0x00155AF7u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155AF7: ;
    ecx = eax;
    PUSH32(esp, 0x00155AFEu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00155AFE: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00155B07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155B04u); } /* indirect call */
    }

loc_00155B07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155B20
 * Original: 0x00155B20 - 0x00155B70 (80 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155B20(void)
{

loc_00155B20: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00155B27u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155B27: ;
    ecx = eax;
    PUSH32(esp, 0x00155B2Eu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00155B2E: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00155B38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155B32u); } /* indirect call */
    }

loc_00155B38: ;
    edi = eax;
    PUSH32(esp, 0x00155B3Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155B3F: ;
    ecx = eax;
    PUSH32(esp, 0x00155B46u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00155B46: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x30); PUSH32(esp, 0x00155B4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155B4Bu); } /* indirect call */
    }

loc_00155B4E: ;
    PUSH32(esp, 0x00155B53u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155B53: ;
    ecx = eax;
    PUSH32(esp, 0x00155B5Au); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00155B5A: ;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00155B64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155B61u); } /* indirect call */
    }

loc_00155B64: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00155B6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155B68u); } /* indirect call */
    }

loc_00155B6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155B90
 * Original: 0x00155B90 - 0x00155BB9 (41 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155B90(void)
{

loc_00155B90: ;
    PUSH32(esp, 0x00155B95u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155B95: ;
    ecx = eax;
    PUSH32(esp, 0x00155B9Cu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00155B9C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x34); PUSH32(esp, 0x00155BA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155BA0u); } /* indirect call */
    }

loc_00155BA3: ;
    PUSH32(esp, 0x00155BA8u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155BA8: ;
    ecx = eax;
    PUSH32(esp, 0x00155BAFu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00155BAF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00155BB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155BB3u); } /* indirect call */
    }

loc_00155BB6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155BD0
 * Original: 0x00155BD0 - 0x00155C6D (157 bytes, 66 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155BD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155BD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00155BD9u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155BD9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00155BE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155BDDu); } /* indirect call */
    }

loc_00155BE0: ;
    ebp = eax;
    PUSH32(esp, 0x00155BE7u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155BE7: ;
    ecx = eax;
    PUSH32(esp, 0x00155BEEu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00155BEE: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00155BFAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155BF4u); } /* indirect call */
    }

loc_00155BFA: ;
    ebx = eax;
    PUSH32(esp, 0x00155C01u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155C01: ;
    ecx = eax;
    PUSH32(esp, 0x00155C08u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00155C08: ;
    esi = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00155C15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155C0Fu); } /* indirect call */
    }

loc_00155C15: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00155C1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155C1Au); } /* indirect call */
    }

loc_00155C1D: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x00155C27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155C21u); } /* indirect call */
    }

loc_00155C27: ;
    PUSH32(esp, 0x00155C2Cu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155C2C: ;
    ecx = eax;
    PUSH32(esp, 0x00155C33u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00155C33: ;
    esi = eax;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00155C3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155C3Au); } /* indirect call */
    }

loc_00155C3D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = MEM32(esi);
    ecx = edi;
    PUSH32(esp, ebx);
    if ((_fa == 0)) goto loc_00155C59; /* je: equal / zero */

loc_00155C45: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00155C4Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155C49u); } /* indirect call */
    }

loc_00155C4C: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x20); PUSH32(esp, 0x00155C52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155C4Fu); } /* indirect call */
    }

loc_00155C52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00155C59: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00155C60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155C5Du); } /* indirect call */
    }

loc_00155C60: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x20); PUSH32(esp, 0x00155C66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155C63u); } /* indirect call */
    }

loc_00155C66: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155CA0
 * Original: 0x00155CA0 - 0x00155D3D (157 bytes, 66 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155CA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00155CA9u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155CA9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00155CB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155CADu); } /* indirect call */
    }

loc_00155CB0: ;
    ebp = eax;
    PUSH32(esp, 0x00155CB7u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155CB7: ;
    ecx = eax;
    PUSH32(esp, 0x00155CBEu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00155CBE: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xA0); PUSH32(esp, 0x00155CCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155CC4u); } /* indirect call */
    }

loc_00155CCA: ;
    ebx = eax;
    PUSH32(esp, 0x00155CD1u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155CD1: ;
    ecx = eax;
    PUSH32(esp, 0x00155CD8u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00155CD8: ;
    esi = eax;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x00155CE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155CDFu); } /* indirect call */
    }

loc_00155CE5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x34); PUSH32(esp, 0x00155CEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155CEAu); } /* indirect call */
    }

loc_00155CED: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x00155CF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155CF1u); } /* indirect call */
    }

loc_00155CF7: ;
    PUSH32(esp, 0x00155CFCu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155CFC: ;
    ecx = eax;
    PUSH32(esp, 0x00155D03u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00155D03: ;
    esi = eax;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x00155D0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155D0Au); } /* indirect call */
    }

loc_00155D0D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = MEM32(esi);
    ecx = edi;
    PUSH32(esp, ebx);
    if ((_fa == 0)) goto loc_00155D29; /* je: equal / zero */

loc_00155D15: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(edx + 0x78); PUSH32(esp, 0x00155D1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155D19u); } /* indirect call */
    }

loc_00155D1C: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x24); PUSH32(esp, 0x00155D22u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155D1Fu); } /* indirect call */
    }

loc_00155D22: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00155D29: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x78); PUSH32(esp, 0x00155D30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155D2Du); } /* indirect call */
    }

loc_00155D30: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x24); PUSH32(esp, 0x00155D36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155D33u); } /* indirect call */
    }

loc_00155D36: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155D70
 * Original: 0x00155D70 - 0x00155D98 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155D70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155D70: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00155D76u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155D76: ;
    ecx = eax;
    PUSH32(esp, 0x00155D7Du); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00155D7D: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00155D86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155D83u); } /* indirect call */
    }

loc_00155D86: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00155D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155D8Au); } /* indirect call */
    }

loc_00155D8D: ;
    eax = MEM32(esi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x13C)); return; /* indirect tail jmp */

}

/**
 * sub_00155DB0
 * Original: 0x00155DB0 - 0x00155DC3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155DB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155DB0: ;
    PUSH32(esp, 0x00155DB5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155DB5: ;
    ecx = eax;
    PUSH32(esp, 0x00155DBCu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00155DBC: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x1C)); return; /* indirect tail jmp */

}

/**
 * sub_00155DD0
 * Original: 0x00155DD0 - 0x00155E02 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155DD0(void)
{

loc_00155DD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00155DD6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155DD6: ;
    ecx = eax;
    PUSH32(esp, 0x00155DDDu); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00155DDD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00155DE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155DE1u); } /* indirect call */
    }

loc_00155DE7: ;
    esi = eax;
    PUSH32(esp, 0x00155DEEu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155DEE: ;
    ecx = eax;
    PUSH32(esp, 0x00155DF5u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00155DF5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x138); PUSH32(esp, 0x00155E00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155DFAu); } /* indirect call */
    }

loc_00155E00: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00155E10
 * Original: 0x00155E10 - 0x00155E42 (50 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155E10(void)
{

loc_00155E10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00155E16u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155E16: ;
    ecx = eax;
    PUSH32(esp, 0x00155E1Du); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00155E1D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xA0); PUSH32(esp, 0x00155E27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155E21u); } /* indirect call */
    }

loc_00155E27: ;
    esi = eax;
    PUSH32(esp, 0x00155E2Eu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155E2E: ;
    ecx = eax;
    PUSH32(esp, 0x00155E35u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00155E35: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x138); PUSH32(esp, 0x00155E40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155E3Au); } /* indirect call */
    }

loc_00155E40: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00155E50
 * Original: 0x00155E50 - 0x00155E6E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155E50: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00155E58u); RECOMP_ABI_CALL(0x00012068u, sub_00012068); /* call 0x00012068 */

loc_00155E58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00155E68; /* je: equal / zero */

loc_00155E5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00155E65u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00155E65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00155E68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00155E80
 * Original: 0x00155E80 - 0x00155EA8 (40 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155E80(void)
{

loc_00155E80: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00155E86u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155E86: ;
    ecx = eax;
    PUSH32(esp, 0x00155E8Du); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00155E8D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esp + 4;
    MEM32(esp + 4) = 0;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x00155EA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155EA0u); } /* indirect call */
    }

loc_00155EA3: ;
    eax = MEM32(esp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00155EC0
 * Original: 0x00155EC0 - 0x00155F56 (150 bytes, 56 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00155EC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00155EC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x00155ECBu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155ECB: ;
    ecx = eax;
    PUSH32(esp, 0x00155ED2u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00155ED2: ;
    esi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x14);
    edi = eax;
    eax = MEM32(esi * 4 + 0x8B00F0);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00155EEBu); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00155EEB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00155F02; /* je: equal / zero */

loc_00155EEF: ;
    ecx = MEM32(esi * 4 + 0x8B00F0);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00155EFEu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00155EFE: ;
    ebx = eax;
    goto loc_00155F16;

loc_00155F02: ;
    _fa = (uint32_t)(MEM32(ebp + 0x13970)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x13970), 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155F4F; /* jne: not equal / not zero */

loc_00155F0B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155F4F; /* jne: not equal / not zero */

loc_00155F10: ;
    ebx = MEM32(ebp + 0x13978);

loc_00155F16: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00155F4F; /* jl: less (signed <) */

loc_00155F1A: ;
    edx = MEM32(edi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    MEM32(esp + 0x24) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00155F2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155F2Cu); } /* indirect call */
    }

loc_00155F2F: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00155F38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155F35u); } /* indirect call */
    }

loc_00155F38: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00155F49; /* jne: not equal / not zero */

loc_00155F3C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x13974) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00155F49: ;
    MEM32(ebp + 0x13978) = ebx;

loc_00155F4F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00155F80
 * Original: 0x00155F80 - 0x001560A1 (289 bytes, 104 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00155F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00155F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155F94u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00155F94: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00155F9Bu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00155F9B: ;
    esi = eax;
    MEM16(esp + 0x18) = 0x20;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x3F;
    edi = esp + 0x1A;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    edi = MEM32(ebp + 8);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = edx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x00155FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155FCAu); } /* indirect call */
    }

loc_00155FCD: ;
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0x10) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00156081; /* jge: greater or equal (signed >=) */

loc_00155FDA: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00155FE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155FE3u); } /* indirect call */
    }

loc_00155FE6: ;
    edx = MEM32(esi);
    eax = esp + 0x118;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00155FF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00155FF4u); } /* indirect call */
    }

loc_00155FF7: ;
    ecx = esp + 0x118;
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156009u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00156009: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156081; /* jne: not equal / not zero */

loc_00156010: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00156067; /* je: equal / zero */

loc_00156019: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00156081; /* jne: not equal / not zero */

loc_0015601C: ;
    eax = MEM32(esi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x18) = edi;
    { uint32_t _icall_target = MEM32(eax + 0x50); PUSH32(esp, 0x0015602Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015602Bu); } /* indirect call */
    }

loc_0015602E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156053; /* je: equal / zero */

loc_00156033: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156038u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00156038: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0015603Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015603Cu); } /* indirect call */
    }

loc_0015603F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00156051u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015604Eu); } /* indirect call */
    }

loc_00156051: ;
    goto loc_00156081;

loc_00156053: ;
    edx = esp + 0x118;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E6A78);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    goto loc_00156079;

loc_00156067: ;
    ecx = esp + 0x118;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6A78);
    edx = esp + 0x20;
    PUSH32(esp, edx);

loc_00156079: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0015607Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015607E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00156081: ;
    ecx = MEM32(edi * 4 + 0x8B00E0);
    PUSH32(esp, 0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00156098u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00156098: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001560F0
 * Original: 0x001560F0 - 0x001561D0 (224 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001560F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001560F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebx;
    PUSH32(esp, 0x00156101u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00156101: ;
    ecx = eax;
    PUSH32(esp, 0x00156108u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00156108: ;
    esi = eax;
    ecx = esp + 0xC;
    MEM32(esp + 0xC) = ebx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x0015611Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156117u); } /* indirect call */
    }

loc_0015611A: ;
    edi = MEM32(esp + 0x20);
    PUSH32(esp, 0x7E0534);
    ecx = edi;
    PUSH32(esp, 0x0015612Au); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_0015612A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001561A5; /* je: equal / zero */

loc_0015612E: ;
    PUSH32(esp, 0x7E0534);
    ecx = edi;
    PUSH32(esp, 0x0015613Au); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015613A: ;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00156151; /* je: equal / zero */

loc_00156147: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00156151; /* je: equal / zero */

loc_0015614C: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001561A5; /* jne: not equal / not zero */

loc_00156151: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x28) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00156162u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015615Fu); } /* indirect call */
    }

loc_00156162: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001561A5; /* jne: not equal / not zero */

loc_00156166: ;
    eax = MEM32(esp + 0x20);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001561A5; /* jle: less or equal (signed <=) */

loc_00156170: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00156182u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015617Fu); } /* indirect call */
    }

loc_00156182: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156191; /* je: equal / zero */

loc_00156187: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015619C; /* je: equal / zero */

loc_00156191: ;
    eax = MEM32(esp + 0x20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00156170; /* jl: less (signed <) */

loc_0015619A: ;
    goto loc_001561A5;

loc_0015619C: ;
    ebx = 1;
    MEM32(esp + 0x14) = edi;

loc_001561A5: ;
    edx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E4EB4);
    ecx = esi;
    PUSH32(esp, 0x001561BAu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001561BA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7E6A94);
    ecx = esi;
    PUSH32(esp, 0x001561C7u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001561C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00156210
 * Original: 0x00156210 - 0x0015625E (78 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156210: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00156219u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00156219: ;
    ecx = eax;
    PUSH32(esp, 0x00156220u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00156220: ;
    ebx = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax;
    MEM32(esp + 0xC) = esi;
    /* nop */

loc_00156230: ;
    eax = MEM32(edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x0015623Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015623Au); } /* indirect call */
    }

loc_0015623D: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(esi * 4 + 0x8B00E8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00156251u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00156251: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00156230; /* jl: less (signed <) */

loc_00156257: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00156280
 * Original: 0x00156280 - 0x0015631D (157 bytes, 55 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156280: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x0015628Bu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015628B: ;
    ecx = eax;
    PUSH32(esp, 0x00156292u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00156292: ;
    edi = eax;
    PUSH32(esp, 0x00156299u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00156299: ;
    ecx = eax;
    PUSH32(esp, 0x001562A0u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_001562A0: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x7E0DD0);
    esi = eax;
    PUSH32(esp, 0x001562B0u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001562B0: ;
    SET_LO8(ecx, MEM8(ebx + 0x13990));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001562C5; /* je: equal / zero */

loc_001562BA: ;
    ecx = MEM32(ebx + 0x1397C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;

loc_001562C5: ;
    edx = MEM32(edi);
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x001562D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001562CFu); } /* indirect call */
    }

loc_001562D2: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x001562E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001562DBu); } /* indirect call */
    }

loc_001562E1: ;
    edi = MEM32(esp + 0x18);
    MEM8(esp + 0x14) = LO8(eax);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6A9C);
    ecx = edi;
    PUSH32(esp, 0x001562FAu); RECOMP_ABI_CALL(0x00024E8Eu, sub_00024E8E); /* call 0x00024E8E */

loc_001562FA: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x174); PUSH32(esp, 0x00156309u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156303u); } /* indirect call */
    }

loc_00156309: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6390);
    ecx = edi;
    PUSH32(esp, 0x00156316u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00156316: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00156350
 * Original: 0x00156350 - 0x001563E1 (145 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156350: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E16BC);
    ecx = esi;
    PUSH32(esp, 0x00156363u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00156363: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_001563A7; /* je: equal / zero */

loc_0015636D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x7E6AFC);
    PUSH32(esp, 0x00156379u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00156379: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6AEC);
    ecx = esi;
    PUSH32(esp, 0x00156387u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00156387: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6ADC);
    ecx = esi;
    PUSH32(esp, 0x00156395u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00156395: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6ACC);
    ecx = esi;
    PUSH32(esp, 0x001563A3u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001563A3: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001563A7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6AFC);
    PUSH32(esp, 0x001563B3u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001563B3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6AEC);
    ecx = esi;
    PUSH32(esp, 0x001563C1u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001563C1: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6ABC);
    ecx = esi;
    PUSH32(esp, 0x001563CFu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001563CF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E6AA8);
    ecx = esi;
    PUSH32(esp, 0x001563DDu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001563DD: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00156410
 * Original: 0x00156410 - 0x00156576 (358 bytes, 117 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156410: ;
    _fb = (uint32_t)(0x834) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x834;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x848);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x7E6B58);
    ecx = edi;
    PUSH32(esp, 0x00156431u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00156431: ;
    PUSH32(esp, 0x7E6B50);
    ecx = edi;
    PUSH32(esp, 0x0015643Du); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015643D: ;
    PUSH32(esp, 0x7E6B38);
    ecx = edi;
    PUSH32(esp, 0x00156449u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00156449: ;
    PUSH32(esp, 0x7E6B24);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x00156457u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00156457: ;
    ebx = eax;
    PUSH32(esp, 0x0015645Eu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015645E: ;
    ecx = eax;
    PUSH32(esp, 0x00156465u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00156465: ;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0015646Eu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015646E: ;
    ecx = eax;
    PUSH32(esp, 0x00156475u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00156475: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = 0;
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x68); PUSH32(esp, 0x0015648Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156488u); } /* indirect call */
    }

loc_0015648B: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x84C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E6B14);
    PUSH32(esp, 0x001564A1u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001564A1: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    edi = esp + 0x44;
    ebp = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_0015653B; /* jge: greater or equal (signed >=) */

loc_001564B1: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    goto loc_001564C2;

loc_001564BE: ;
    eax = MEM32(esp + 0x14);

loc_001564C2: ;
    ecx = MEM32(esp + 0x20);
    SET_LO8(edx, MEM8(ecx + 0x13990));
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    edx = MEM32(ecx);
    esi = esp + 0x1C;
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) eax = ebp; /* cmove */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x74); PUSH32(esp, 0x001564E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001564DDu); } /* indirect call */
    }

loc_001564E0: ;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001564F4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001564F4: ;
    eax = esp + 0x30;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    edi = edi;

loc_00156500: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156500; /* jne: not equal / not zero */

loc_00156507: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp + 0x24;
    esi = edi;
    edx = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00156513: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156513; /* jne: not equal / not zero */

loc_0015651D: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edi + -1) = 0x2C;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001564BE; /* jl: less (signed <) */

loc_00156532: ;
    eax = esp + 0x44;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0015653B; /* jbe: below or equal (unsigned <=) */

loc_0015653A: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0015653B: ;
    esi = MEM32(esp + 0x84C);
    PUSH32(esp, 0);
    ecx = esp + 0x48;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6B08);
    ecx = esi;
    MEM8(edi) = 0;
    PUSH32(esp, 0x00156558u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00156558: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E640C);
    ecx = esi;
    PUSH32(esp, 0x00156569u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00156569: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x834) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x834;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001565D0
 * Original: 0x001565D0 - 0x0015662C (92 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001565D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001565D0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E05CC);
    PUSH32(esp, 0x001565DFu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001565DF: ;
    esi = eax;
    PUSH32(esp, 0x001565E6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001565E6: ;
    ecx = eax;
    PUSH32(esp, 0x001565EDu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_001565ED: ;
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esp + 0xC) = 0;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x70); PUSH32(esp, 0x00156602u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001565FFu); } /* indirect call */
    }

loc_00156602: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0015661D; /* jne: not equal / not zero */

loc_0015660B: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E0528);
    PUSH32(esp, 0x0015661Au); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015661A: ;
    esp += 12; return; /* ret 8 */

loc_0015661D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x7E0528);
    PUSH32(esp, 0x00156629u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00156629: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00156650
 * Original: 0x00156650 - 0x0015666F (31 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00156650: ;
    SET_LO8(eax, MEM8(ecx + 0x13990));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edx = MEM32(esp + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0015666A; /* je: equal / zero */

loc_0015665E: ;
    eax = MEM32(ecx + 0x1397C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

loc_0015666A: ;
    eax = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00156680
 * Original: 0x00156680 - 0x001566BB (59 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156680(void)
{

loc_00156680: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0015668Au); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015668A: ;
    ecx = eax;
    PUSH32(esp, 0x00156691u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00156691: ;
    esi = eax;
    ecx = esp + 8;
    MEM32(esp + 8) = 0;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001566A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001566A4u); } /* indirect call */
    }

loc_001566A7: ;
    eax = MEM32(edi + 0x13988);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x001566B7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001566B4u); } /* indirect call */
    }

loc_001566B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001566D0
 * Original: 0x001566D0 - 0x001566E6 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001566D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001566D0: ;
    PUSH32(esp, 0x001566D5u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001566D5: ;
    ecx = eax;
    PUSH32(esp, 0x001566DCu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_001566DC: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x94)); return; /* indirect tail jmp */

}

/**
 * sub_001566F0
 * Original: 0x001566F0 - 0x0015674E (94 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001566F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001566F0: ;
    edx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM8(edx);
    _fb = (uint32_t)(0xFFFFFFCBu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFCBu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00156733; /* ja: above (unsigned >) */

loc_001566FF: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x156750); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00156706u) goto loc_00156706;
    if (_jt == 0x0015670Fu) goto loc_0015670F;
    if (_jt == 0x00156718u) goto loc_00156718;
    if (_jt == 0x00156721u) goto loc_00156721;
    if (_jt == 0x0015672Au) goto loc_0015672A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00156706: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 0x45;
    goto loc_0015673A;

loc_0015670F: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 0x44;
    goto loc_0015673A;

loc_00156718: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 0x43;
    goto loc_0015673A;

loc_00156721: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 0x42;
    goto loc_0015673A;

loc_0015672A: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 0x41;
    goto loc_0015673A;

loc_00156733: ;
    eax = MEM32(esp + 4);
    MEM8(eax) = 0x58;

loc_0015673A: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 1));
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(ecx) (8-bit) */
    POP32(esp, ebx);
    MEM8(eax + 1) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_0015674B; /* jne: not equal / not zero */

loc_00156748: ;
    MEM8(eax) = 0x47;

loc_0015674B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015674E
 * Original: 0x0015674E - 0x00156790 (66 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015674E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015674E: ;
    edi = edi;
    PUSH32(esp, 0 /* seg:es */);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15670F00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x15672100) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0xCCCCCC00u) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00156790
 * Original: 0x00156790 - 0x00156BC2 (1074 bytes, 375 insns)
 * Category: game_vtable
 * CC: thiscall, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156790: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x0015679Du); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015679D: ;
    ecx = eax;
    PUSH32(esp, 0x001567A4u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_001567A4: ;
    esi = eax;
    ecx = esp + 0xC;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = ebp;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x40); PUSH32(esp, 0x001567B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001567B5u); } /* indirect call */
    }

loc_001567B8: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00156BB9; /* ja: above (unsigned >) */

loc_001567C5: ;
    edx = ZX8(MEM8(eax + 0x156BDC));
    PUSH32(esp, ebx);
    { uint32_t _jt = MEM32(edx * 4 + 0x156BC4); /* switch: 6 entries, 6 targets */
    if (_jt == 0x001567D4u) goto loc_001567D4;
    if (_jt == 0x001567FBu) goto loc_001567FB;
    if (_jt == 0x001568BCu) goto loc_001568BC;
    if (_jt == 0x00156A6Au) goto loc_00156A6A;
    if (_jt == 0x00156B7Bu) goto loc_00156B7B;
    if (_jt == 0x00156BB8u) goto loc_00156BB8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001567D4: ;
    ecx = MEM32(esp + 0x68);
    edx = MEM32(esp + 0x64);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x64);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x64);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001567F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001567EEu); } /* indirect call */
    }

loc_001567F1: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_001567FB: ;
    ebx = MEM32(edi + 0x13978);
    PUSH32(esp, 0x00156806u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00156806: ;
    ecx = eax;
    PUSH32(esp, 0x0015680Du); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_0015680D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00156818u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156812u); } /* indirect call */
    }

loc_00156818: ;
    ebx = MEM32(esp + 0x58);
    edx = MEM32(esp + 0x5C);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esi);
    ecx = esp + 0x14;
    if (CMP_EQ(_fa, _fb)) goto loc_0015682D; /* je: equal / zero */

loc_0015682A: ;
    PUSH32(esp, ebp);
    goto loc_0015682F;

loc_0015682D: ;
    PUSH32(esp, 1);

loc_0015682F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00156839u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156836u); } /* indirect call */
    }

loc_00156839: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0015684Au); RECOMP_ABI_CALL(0x000157FEu, sub_000157FE); /* call 0x000157FE */

loc_0015684A: ;
    edi = MEM32(edi + 0x13978);
    PUSH32(esp, 0x00156855u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00156855: ;
    ecx = eax;
    PUSH32(esp, 0x0015685Cu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_0015685C: ;
    edx = MEM32(esp + 0x60);
    ebp = MEM32(esi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00156870u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015686Au); } /* indirect call */
    }

loc_00156870: ;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x90); PUSH32(esp, 0x00156879u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156873u); } /* indirect call */
    }

loc_00156879: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015689A; /* jne: not equal / not zero */

loc_0015687E: ;
    eax = MEM32(esp + 0x64);
    PUSH32(esp, 0x7E6B8C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015688Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015688D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_0015689A: ;
    edx = MEM32(esp + 0x64);
    PUSH32(esp, eax);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6B84);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001568AFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001568AF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_001568BC: ;
    ebx = MEM32(esp + 0x5C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156A45; /* je: equal / zero */

loc_001568C9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x52) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x52 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156A45; /* je: equal / zero */

loc_001568D2: ;
    PUSH32(esp, 0x001568D7u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001568D7: ;
    ecx = eax;
    PUSH32(esp, 0x001568DEu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_001568DE: ;
    ebp = MEM32(esp + 0x58);
    ecx = esp + 0x68;
    PUSH32(esp, ecx);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x7C); PUSH32(esp, 0x001568F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001568EEu); } /* indirect call */
    }

loc_001568F1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156935; /* jne: not equal / not zero */

loc_001568F6: ;
    eax = MEM32(esp + 0x68);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00156907u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156901u); } /* indirect call */
    }

loc_00156907: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x5C) = eax;
    PUSH32(esp, eax);
    if (CMP_LE(_fas, _fbs)) goto loc_00156A39; /* jle: less or equal (signed <=) */

loc_00156914: ;
    edx = esp + 0x18;
    PUSH32(esp, 0x7E6B80);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00156923u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00156923: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E1290);
    goto loc_00156BAB;

loc_00156935: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015694D; /* jne: not equal / not zero */

loc_0015693A: ;
    eax = MEM32(esp + 0x68);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x98); PUSH32(esp, 0x0015694Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156945u); } /* indirect call */
    }

loc_0015694B: ;
    goto loc_00156907;

loc_0015694D: ;
    edx = MEM32(esi);
    PUSH32(esp, 2);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x0015695Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015695Au); } /* indirect call */
    }

loc_0015695D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x11 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001569A1; /* jne: not equal / not zero */

loc_00156962: ;
    eax = MEM32(esp + 0x68);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x194); PUSH32(esp, 0x00156972u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015696Cu); } /* indirect call */
    }

loc_00156972: ;
    ecx = MEM32(esp + 0x5C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x32 (32-bit) */
    MEM32(esp + 0x5C) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00156990; /* jge: greater or equal (signed >=) */

loc_00156981: ;
    ecx = 0x32;
    MEM32(esp + 0x5C) = ecx;
    PUSH32(esp, ecx);
    goto loc_00156A18;

loc_00156990: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x63 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0015699E; /* jle: less or equal (signed <=) */

loc_00156995: ;
    ecx = 0x63;
    MEM32(esp + 0x5C) = ecx;

loc_0015699E: ;
    PUSH32(esp, ecx);
    goto loc_00156A18;

loc_001569A1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156A13; /* jne: not equal / not zero */

loc_001569A6: ;
    PUSH32(esp, 0x001569ABu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001569AB: ;
    ecx = eax;
    PUSH32(esp, 0x001569B2u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_001569B2: ;
    ecx = MEM32(esp + 0x68);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x194); PUSH32(esp, 0x001569C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001569BCu); } /* indirect call */
    }

loc_001569C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, eax);
    if (CMP_LE(_fas, _fbs)) goto loc_001569ED; /* jle: less or equal (signed <=) */

loc_001569C7: ;
    edx = MEM32(esp + 0x60);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, 0x7E6B74);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001569DBu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001569DB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E1290);
    goto loc_00156BAB;

loc_001569ED: ;
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, 0x7E6B68);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00156A01u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00156A01: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E1290);
    goto loc_00156BAB;

loc_00156A13: ;
    eax = MEM32(esp + 0x5C);
    PUSH32(esp, eax);

loc_00156A18: ;
    PUSH32(esp, 0x7E0D78);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);

loc_00156A22: ;
    PUSH32(esp, 0x00156A27u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00156A27: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E1290);
    goto loc_00156BAB;

loc_00156A39: ;
    PUSH32(esp, 0x7E0D78);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    goto loc_00156A22;

loc_00156A45: ;
    ecx = MEM32(esp + 0x58);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, 0x40);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x00156A5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156A58u); } /* indirect call */
    }

loc_00156A5B: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E1290);
    goto loc_00156BAB;

loc_00156A6A: ;
    edi = MEM32(esp + 0x5C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156B44; /* je: equal / zero */

loc_00156A77: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x52) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x52 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156B44; /* je: equal / zero */

loc_00156A80: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156B44; /* je: equal / zero */

loc_00156A89: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156B44; /* je: equal / zero */

loc_00156A92: ;
    PUSH32(esp, 0x00156A97u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00156A97: ;
    ecx = eax;
    PUSH32(esp, 0x00156A9Eu); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00156A9E: ;
    ebp = MEM32(esp + 0x58);
    edx = MEM32(esi);
    ebx = eax;
    eax = esp + 0x68;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x7C); PUSH32(esp, 0x00156AB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156AAEu); } /* indirect call */
    }

loc_00156AB1: ;
    edx = MEM32(esi);
    PUSH32(esp, 2);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x64); PUSH32(esp, 0x00156AC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156ABEu); } /* indirect call */
    }

loc_00156AC1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x30 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00156B0A; /* jne: not equal / not zero */

loc_00156AC6: ;
    PUSH32(esp, 0x00156ACBu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00156ACB: ;
    ecx = eax;
    PUSH32(esp, 0x00156AD2u); RECOMP_ABI_CALL(0x000207BCu, sub_000207BC); /* call 0x000207BC */

loc_00156AD2: ;
    ecx = MEM32(esp + 0x5C);

loc_00156AD6: ;
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00156AE6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00156AE6: ;
    ecx = MEM32(esp + 0x70);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00156AFDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00156AFD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00156B0A: ;
    ecx = MEM32(esp + 0x68);
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x194); PUSH32(esp, 0x00156B1Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156B14u); } /* indirect call */
    }

loc_00156B1A: ;
    ecx = MEM32(esp + 0x5C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x32 (32-bit) */
    MEM32(esp + 0x5C) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00156B34; /* jge: greater or equal (signed >=) */

loc_00156B29: ;
    ecx = 0x32;
    MEM32(esp + 0x5C) = ecx;
    goto loc_00156AD6;

loc_00156B34: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x63 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00156AD6; /* jle: less or equal (signed <=) */

loc_00156B39: ;
    ecx = 0x63;
    MEM32(esp + 0x5C) = ecx;
    goto loc_00156AD6;

loc_00156B44: ;
    edx = MEM32(esp + 0x58);
    eax = MEM32(esi);
    PUSH32(esp, 2);
    PUSH32(esp, 0x40);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x00156B5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156B57u); } /* indirect call */
    }

loc_00156B5A: ;
    ecx = MEM32(esp + 0x64);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00156B6Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00156B6E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

loc_00156B7B: ;
    MEM32(esp + 0x68) = ebp;
    PUSH32(esp, 0x00156B84u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00156B84: ;
    ecx = eax;
    PUSH32(esp, 0x00156B8Bu); RECOMP_ABI_CALL(0x0001D6D4u, sub_0001D6D4); /* call 0x0001D6D4 */

loc_00156B8B: ;
    edx = MEM32(eax);
    ecx = esp + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x60);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00156BA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156B9Eu); } /* indirect call */
    }

loc_00156BA1: ;
    edx = MEM32(esp + 0x68);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E0D78);

loc_00156BAB: ;
    eax = MEM32(esp + 0x6C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00156BB5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00156BB5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00156BB8: ;
    POP32(esp, ebx);

loc_00156BB9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00156BC2
 * Original: 0x00156BC2 - 0x00156D00 (318 bytes, 290 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156BC2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00156BC2: ;
    edi = edi;
    RECOMP_UNIMPL("aam 0x67", 0x00156BC4u); /* TODO: aam 0x67 */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1567FB00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x6B)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(ebx + 0x6B) = MEM8(ebx + 0x6B) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebx + 0x6B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x1568BC00) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + 0x6A)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edx + 0x6A) = MEM8(edx + 0x6A) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x6A)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x156BB800) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0x3000005)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(0x3000005) = MEM8(0x3000005) + LO8(eax);
    _fa = (uint32_t)(MEM8(0x3000005)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(5) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(5)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00156D00
 * Original: 0x00156D00 - 0x00156DEF (239 bytes, 84 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00156D00: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x80));
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00156D0Cu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00156D0C: ;
    ecx = eax;
    PUSH32(esp, 0x00156D13u); RECOMP_ABI_CALL(0x00021F45u, sub_00021F45); /* call 0x00021F45 */

loc_00156D13: ;
    esi = eax;
    eax = MEM32(esp + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00156DD0; /* jl: less (signed <) */

loc_00156D24: ;
    PUSH32(esp, edi);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00156D92; /* jle: less or equal (signed <=) */

loc_00156D2E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00156DCF; /* jne: not equal / not zero */

loc_00156D37: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00156D3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156D3Bu); } /* indirect call */
    }

loc_00156D3E: ;
    ecx = MEM32(esp + 0x94);
    edx = MEM32(esp + 0x90);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00156D6D; /* jne: not equal / not zero */

loc_00156D55: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00156D82; /* jle: less or equal (signed <=) */

loc_00156D59: ;
    ecx = esp + 8;
    PUSH32(esp, 0x7E6B90);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00156D68u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00156D68: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00156DCF;

loc_00156D6D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00156D82; /* jle: less or equal (signed <=) */

loc_00156D71: ;
    edx = MEM32(esi);
    edi = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00156D80u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156D7Du); } /* indirect call */
    }

loc_00156D80: ;
    goto loc_00156DCF;

loc_00156D82: ;
    edx = MEM32(esi);
    edi = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00156D90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156D8Du); } /* indirect call */
    }

loc_00156D90: ;
    goto loc_00156DCF;

loc_00156D92: ;
    ecx = MEM32(esp + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(esp + 0x90);
    if (CMP_NE(_fa, _fb)) goto loc_00156DBC; /* jne: not equal / not zero */

loc_00156DA4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00156DC1; /* jle: less or equal (signed <=) */

loc_00156DA8: ;
    eax = esp + 8;
    PUSH32(esp, 0x7E6B90);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00156DB7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00156DB7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00156DCF;

loc_00156DBC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00156DC1; /* jle: less or equal (signed <=) */

loc_00156DC0: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00156DC1: ;
    edx = MEM32(esi);
    edi = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00156DCFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156DCCu); } /* indirect call */
    }

loc_00156DCF: ;
    POP32(esp, edi);

loc_00156DD0: ;
    ecx = MEM32(esp + 0x94);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00156DE2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00156DE2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x80)) >> 32) & 1);
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00156E30
 * Original: 0x00156E30 - 0x00156F3D (269 bytes, 96 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00156E30: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x80));
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00156E3Cu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00156E3C: ;
    ecx = eax;
    PUSH32(esp, 0x00156E43u); RECOMP_ABI_CALL(0x00021F45u, sub_00021F45); /* call 0x00021F45 */

loc_00156E43: ;
    esi = eax;
    eax = MEM32(esp + 0x88);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_L(_fas, _fbs)) goto loc_00156F1E; /* jl: less (signed <) */

loc_00156E54: ;
    PUSH32(esp, edi);
    edi = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00156ED5; /* jle: less or equal (signed <=) */

loc_00156E5E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00156F1D; /* jne: not equal / not zero */

loc_00156E67: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00156E6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156E6Bu); } /* indirect call */
    }

loc_00156E6E: ;
    ecx = MEM32(esp + 0x94);
    edx = MEM32(esp + 0x90);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00156EA0; /* jne: not equal / not zero */

loc_00156E85: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00156EBD; /* jle: less or equal (signed <=) */

loc_00156E89: ;
    edx = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00156E9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156E9Bu); } /* indirect call */
    }

loc_00156E9E: ;
    goto loc_00156F1D;

loc_00156EA0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00156EBD; /* jle: less or equal (signed <=) */

loc_00156EA4: ;
    edx = MEM32(esi);
    edi = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xA0);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00156EBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156EB8u); } /* indirect call */
    }

loc_00156EBB: ;
    goto loc_00156F1D;

loc_00156EBD: ;
    edx = MEM32(esi);
    edi = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00156ED3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156ED0u); } /* indirect call */
    }

loc_00156ED3: ;
    goto loc_00156F1D;

loc_00156ED5: ;
    ecx = MEM32(esp + 0x94);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edx = MEM32(esp + 0x90);
    if (CMP_NE(_fa, _fb)) goto loc_00156F02; /* jne: not equal / not zero */

loc_00156EE7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00156F07; /* jle: less or equal (signed <=) */

loc_00156EEB: ;
    edx = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00156F00u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156EFDu); } /* indirect call */
    }

loc_00156F00: ;
    goto loc_00156F1D;

loc_00156F02: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00156F07; /* jle: less or equal (signed <=) */

loc_00156F06: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00156F07: ;
    edx = MEM32(esi);
    edi = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xA0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00156F1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00156F1Au); } /* indirect call */
    }

loc_00156F1D: ;
    POP32(esp, edi);

loc_00156F1E: ;
    edx = MEM32(esp + 0x98);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00156F30u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00156F30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x80)) >> 32) & 1);
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00156F80
 * Original: 0x00156F80 - 0x00156F96 (22 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156F80: ;
    PUSH32(esp, 0x00156F85u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00156F85: ;
    ecx = eax;
    PUSH32(esp, 0x00156F8Cu); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00156F8C: ;
    edx = MEM32(eax);
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x8C)); return; /* indirect tail jmp */

}

/**
 * sub_00156FA0
 * Original: 0x00156FA0 - 0x00157010 (112 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00156FA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00156FA0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015700B; /* ja: above (unsigned >) */

loc_00156FA9: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x157010); /* switch: 7 entries, 7 targets */
    if (_jt == 0x00156FB0u) goto loc_00156FB0;
    if (_jt == 0x00156FBCu) goto loc_00156FBC;
    if (_jt == 0x00156FD3u) goto loc_00156FD3;
    if (_jt == 0x00156FE0u) goto loc_00156FE0;
    if (_jt == 0x00156FECu) goto loc_00156FEC;
    if (_jt == 0x00156FF8u) goto loc_00156FF8;
    if (_jt == 0x00157004u) goto loc_00157004;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00156FB0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015700B; /* je: equal / zero */

loc_00156FB7: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00156FBC: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156FCE; /* je: equal / zero */

loc_00156FC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156FCE; /* je: equal / zero */

loc_00156FC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015700B; /* jne: not equal / not zero */

loc_00156FCE: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00156FD3: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015700B; /* jne: not equal / not zero */

loc_00156FDB: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00156FE0: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015700B; /* jne: not equal / not zero */

loc_00156FE7: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00156FEC: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015700B; /* jne: not equal / not zero */

loc_00156FF3: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00156FF8: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015700B; /* jne: not equal / not zero */

loc_00156FFF: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

loc_00157004: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00156FB7; /* je: equal / zero */

loc_0015700B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00157050
 * Original: 0x00157050 - 0x001570E2 (146 bytes, 56 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157050(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157050: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx + 0xC);
    edx = MEM32(ecx + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edi + -90;
    MEM32(esp + 0x14) = eax;
    _fb = (uint32_t)(0xFFFFFFA8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFA8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x5C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x28) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00157097; /* jl: less (signed <) */

loc_00157088: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00157097; /* jle: less or equal (signed <=) */

loc_0015708C: ;
    esi = edi;
    ebx = ebp;
    eax = 1;
    goto loc_0015709B;

loc_00157097: ;
    eax = MEM32(esp + 0x10);

loc_0015709B: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001570AF; /* jl: less (signed <) */

loc_0015709F: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001570AF; /* jle: less or equal (signed <=) */

loc_001570A6: ;
    esi = ecx;
    ebx = edx;
    eax = 2;

loc_001570AF: ;
    ecx = MEM32(esp + 0x30);
    edx = ecx + -88;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001570C7; /* jl: less (signed <) */

loc_001570BA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001570C7; /* jle: less or equal (signed <=) */

loc_001570BE: ;
    esi = ecx;
    ebx = edx;
    eax = 3;

loc_001570C7: ;
    _fa = (uint32_t)(MEM32(esp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x28), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001570D8; /* jl: less (signed <) */

loc_001570CD: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001570D8; /* jle: less or equal (signed <=) */

loc_001570D3: ;
    eax = 4;

loc_001570D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00157110
 * Original: 0x00157110 - 0x0015724D (317 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157110: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 0x13978);
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00157122u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00157122: ;
    ecx = eax;
    PUSH32(esp, 0x00157129u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00157129: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00157134u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015712Eu); } /* indirect call */
    }

loc_00157134: ;
    edi = MEM32(edi + 0x13970);
    SET_LO8(ebx, LO8(eax));
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00157247; /* ja: above (unsigned >) */

loc_00157148: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x157250); /* switch: 12 entries, 10 targets */
    if (_jt == 0x0015714Fu) goto loc_0015714F;
    if (_jt == 0x00157161u) goto loc_00157161;
    if (_jt == 0x0015716Cu) goto loc_0015716C;
    if (_jt == 0x00157177u) goto loc_00157177;
    if (_jt == 0x001571CDu) goto loc_001571CD;
    if (_jt == 0x001571DCu) goto loc_001571DC;
    if (_jt == 0x001571EEu) goto loc_001571EE;
    if (_jt == 0x001571FDu) goto loc_001571FD;
    if (_jt == 0x00157229u) goto loc_00157229;
    if (_jt == 0x00157247u) goto loc_00157247;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015714F: ;
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFFFFBu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x14)) >> 32) & 1);
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00157161: ;
    esi = 6;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0015716C: ;
    esi = 0xA;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00157177: ;
    PUSH32(esp, 0x0015717Cu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015717C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00157183u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157180u); } /* indirect call */
    }

loc_00157183: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0015718Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157187u); } /* indirect call */
    }

loc_0015718A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001571C2; /* je: equal / zero */

loc_0015718F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001571C2; /* je: equal / zero */

loc_00157194: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001571C2; /* je: equal / zero */

loc_00157199: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001571C2; /* je: equal / zero */

loc_0015719E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001571C2; /* je: equal / zero */

loc_001571A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001571C2; /* je: equal / zero */

loc_001571A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001571C2; /* je: equal / zero */

loc_001571AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001571C2; /* je: equal / zero */

loc_001571B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_001571C2; /* je: equal / zero */

loc_001571B7: ;
    esi = 0x16;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001571C2: ;
    esi = 0x18;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001571CD: ;
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(9) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(9)) >> 32) & 1);
    ebx = ebx + 9;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001571DC: ;
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFFFFAu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x1A) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x1A)) >> 32) & 1);
    ebx = ebx + 0x1A;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001571EE: ;
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(7)) >> 32) & 1);
    ebx = ebx + 7;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001571FD: ;
    PUSH32(esp, 0x00157202u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00157202: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00157209u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157206u); } /* indirect call */
    }

loc_00157209: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00157210u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015720Du); } /* indirect call */
    }

loc_00157210: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015723B; /* je: equal / zero */

loc_00157215: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015723B; /* je: equal / zero */

loc_0015721A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015723B; /* je: equal / zero */

loc_0015721F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015723B; /* je: equal / zero */

loc_00157224: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0015723B; /* je: equal / zero */

loc_00157229: ;
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    POP32(esp, edi);
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFFFFBu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x16) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x16)) >> 32) & 1);
    ebx = ebx + 0x16;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0015723B: ;
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    ebx = ebx & 0xFFFFFFFBu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x18)) >> 32) & 1);
    ebx = ebx + 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebx;

loc_00157247: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001572E0
 * Original: 0x001572E0 - 0x00157525 (581 bytes, 199 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001572E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001572E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x13978);
    PUSH32(esp, 0x001572F0u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001572F0: ;
    ecx = eax;
    PUSH32(esp, 0x001572F7u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_001572F7: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00157302u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001572FCu); } /* indirect call */
    }

loc_00157302: ;
    esi = MEM32(esi + 0x13970);
    SET_LO8(ebx, LO8(eax));
    eax = esi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00157515; /* ja: above (unsigned >) */

loc_00157316: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x157528); /* switch: 12 entries, 11 targets */
    if (_jt == 0x0015731Du) goto loc_0015731D;
    if (_jt == 0x00157341u) goto loc_00157341;
    if (_jt == 0x00157365u) goto loc_00157365;
    if (_jt == 0x00157380u) goto loc_00157380;
    if (_jt == 0x001573E0u) goto loc_001573E0;
    if (_jt == 0x00157404u) goto loc_00157404;
    if (_jt == 0x00157428u) goto loc_00157428;
    if (_jt == 0x0015744Cu) goto loc_0015744C;
    if (_jt == 0x00157467u) goto loc_00157467;
    if (_jt == 0x0015748Bu) goto loc_0015748B;
    if (_jt == 0x00157515u) goto loc_00157515;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015731D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = 0x8AFBB8;
    if (CMP_NE(_fa, _fb)) goto loc_0015732B; /* jne: not equal / not zero */

loc_00157326: ;
    ecx = 0x8AFB68;

loc_0015732B: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = 0;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00157341: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = 0x8AFC0C;
    if (CMP_NE(_fa, _fb)) goto loc_0015734F; /* jne: not equal / not zero */

loc_0015734A: ;
    ecx = 0x8AFBF4;

loc_0015734F: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = 0;
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00157365: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = 2;
    eax = MEM32(esp + 0xC);
    ecx = 0x8AFEC0;
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00157380: ;
    PUSH32(esp, 0x00157385u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00157385: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0015738Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157389u); } /* indirect call */
    }

loc_0015738C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00157393u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157390u); } /* indirect call */
    }

loc_00157393: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001573C5; /* je: equal / zero */

loc_00157398: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001573C5; /* je: equal / zero */

loc_0015739D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001573C5; /* je: equal / zero */

loc_001573A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001573C5; /* je: equal / zero */

loc_001573A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001573C5; /* je: equal / zero */

loc_001573AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001573C5; /* je: equal / zero */

loc_001573B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001573C5; /* je: equal / zero */

loc_001573B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001573C5; /* je: equal / zero */

loc_001573BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    ecx = 0x8AFC28;
    if (CMP_NE(_fa, _fb)) goto loc_001573CA; /* jne: not equal / not zero */

loc_001573C5: ;
    ecx = 0x8AFC80;

loc_001573CA: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = 0;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001573E0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = 0x8AFD04;
    if (CMP_NE(_fa, _fb)) goto loc_001573EE; /* jne: not equal / not zero */

loc_001573E9: ;
    ecx = 0x8AFCE0;

loc_001573EE: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = 0;
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00157404: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = 0x8AFD90;
    if (CMP_NE(_fa, _fb)) goto loc_00157412; /* jne: not equal / not zero */

loc_0015740D: ;
    ecx = 0x8AFD28;

loc_00157412: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = 0;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00157428: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = 0x8AFEE8;
    if (CMP_NE(_fa, _fb)) goto loc_00157436; /* jne: not equal / not zero */

loc_00157431: ;
    ecx = 0x8AFF30;

loc_00157436: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = 0;
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0015744C: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = 0;
    eax = MEM32(esp + 0xC);
    ecx = 0x8AFE74;
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00157467: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = 0x8AFEA8;
    if (CMP_NE(_fa, _fb)) goto loc_00157475; /* jne: not equal / not zero */

loc_00157470: ;
    ecx = 0x8AFE8C;

loc_00157475: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx) = 0;
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0015748B: ;
    PUSH32(esp, 0x00157490u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00157490: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00157497u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157494u); } /* indirect call */
    }

loc_00157497: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0015749Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015749Bu); } /* indirect call */
    }

loc_0015749E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001574F1; /* je: equal / zero */

loc_001574A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001574F1; /* je: equal / zero */

loc_001574A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001574F1; /* je: equal / zero */

loc_001574AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001574F1; /* je: equal / zero */

loc_001574B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001574F1; /* je: equal / zero */

loc_001574B7: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001574D6; /* je: equal / zero */

loc_001574BB: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = 0;
    eax = MEM32(esp + 0xC);
    ecx = 0x8AFFD8;
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001574D6: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = 0;
    eax = MEM32(esp + 0xC);
    ecx = 0x8B0080;
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001574F1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = 0x8AFF88;
    if (CMP_NE(_fa, _fb)) goto loc_001574FF; /* jne: not equal / not zero */

loc_001574FA: ;
    ecx = 0x8B0020;

loc_001574FF: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(eax) = 0;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00157515: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00157600
 * Original: 0x00157600 - 0x001577A1 (417 bytes, 192 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157600: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = MEM32(edi + 0x13978);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00157612u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00157612: ;
    ecx = eax;
    PUSH32(esp, 0x00157619u); RECOMP_ABI_CALL(0x0001BB7Cu, sub_0001BB7C); /* call 0x0001BB7C */

loc_00157619: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x94); PUSH32(esp, 0x00157624u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015761Eu); } /* indirect call */
    }

loc_00157624: ;
    edi = MEM32(edi + 0x13970);
    SET_LO8(ebx, LO8(eax));
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0015779B; /* ja: above (unsigned >) */

loc_00157638: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1577A4); /* switch: 12 entries, 11 targets */
    if (_jt == 0x0015763Fu) goto loc_0015763F;
    if (_jt == 0x00157659u) goto loc_00157659;
    if (_jt == 0x00157673u) goto loc_00157673;
    if (_jt == 0x0015767Eu) goto loc_0015767E;
    if (_jt == 0x001576D4u) goto loc_001576D4;
    if (_jt == 0x001576EEu) goto loc_001576EE;
    if (_jt == 0x00157708u) goto loc_00157708;
    if (_jt == 0x00157722u) goto loc_00157722;
    if (_jt == 0x0015772Du) goto loc_0015772D;
    if (_jt == 0x00157747u) goto loc_00157747;
    if (_jt == 0x0015779Bu) goto loc_0015779B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015763F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015764E; /* je: equal / zero */

loc_00157643: ;
    esi = 0x8AF5C8;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0015764E: ;
    esi = 0x8AF578;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00157659: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157668; /* je: equal / zero */

loc_0015765D: ;
    esi = 0x8AF61C;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00157668: ;
    esi = 0x8AF604;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00157673: ;
    esi = 0x8AF94C;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0015767E: ;
    PUSH32(esp, 0x00157683u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00157683: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0015768Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157687u); } /* indirect call */
    }

loc_0015768A: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x00157691u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015768Eu); } /* indirect call */
    }

loc_00157691: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001576C9; /* je: equal / zero */

loc_00157696: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001576C9; /* je: equal / zero */

loc_0015769B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001576C9; /* je: equal / zero */

loc_001576A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001576C9; /* je: equal / zero */

loc_001576A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001576C9; /* je: equal / zero */

loc_001576AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001576C9; /* je: equal / zero */

loc_001576AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001576C9; /* je: equal / zero */

loc_001576B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001576C9; /* je: equal / zero */

loc_001576B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001576C9; /* je: equal / zero */

loc_001576BE: ;
    esi = 0x8AF638;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001576C9: ;
    esi = 0x8AF690;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001576D4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001576E3; /* je: equal / zero */

loc_001576D8: ;
    esi = 0x8AF714;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001576E3: ;
    esi = 0x8AF6F0;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001576EE: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001576FD; /* je: equal / zero */

loc_001576F2: ;
    esi = 0x8AF7A0;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_001576FD: ;
    esi = 0x8AF738;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00157708: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157717; /* je: equal / zero */

loc_0015770C: ;
    esi = 0x8AF9D0;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00157717: ;
    esi = 0x8AF978;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00157722: ;
    esi = 0x8AF900;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0015772D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015773C; /* je: equal / zero */

loc_00157731: ;
    esi = 0x8AF934;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0015773C: ;
    esi = 0x8AF918;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00157747: ;
    PUSH32(esp, 0x0015774Cu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015774C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00157753u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157750u); } /* indirect call */
    }

loc_00157753: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x54); PUSH32(esp, 0x0015775Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157757u); } /* indirect call */
    }

loc_0015775A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015778D; /* je: equal / zero */

loc_0015775F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015778D; /* je: equal / zero */

loc_00157764: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xB (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015778D; /* je: equal / zero */

loc_00157769: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015778D; /* je: equal / zero */

loc_0015776E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015778D; /* je: equal / zero */

loc_00157773: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157782; /* je: equal / zero */

loc_00157777: ;
    esi = 0x8AFB20;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00157782: ;
    esi = 0x8AFA78;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0015778D: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    esi = 0x8AFAD0;
    if (CMP_NE(_fa, _fb)) goto loc_0015779B; /* jne: not equal / not zero */

loc_00157796: ;
    esi = 0x8AFA18;

loc_0015779B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00157880
 * Original: 0x00157880 - 0x00157887 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157880(void)
{

loc_00157880: ;
    eax = MEM32(ecx + 0x3F4);
    esp += 4; return; /* ret */

}

/**
 * sub_00157890
 * Original: 0x00157890 - 0x00157897 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157890(void)
{

loc_00157890: ;
    eax = MEM32(ecx + 0xF8);
    esp += 4; return; /* ret */

}

/**
 * sub_001578A0
 * Original: 0x001578A0 - 0x001578AD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001578A0(void)
{

loc_001578A0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0xF4) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001578B0
 * Original: 0x001578B0 - 0x001578CA (26 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001578B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001578B0: ;
    eax = MEM32(0x8FC1D0);
    edx = MEM32(eax + 0x1E0);
    eax = MEM32(edx + 0xF8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001578C9; /* jne: not equal / not zero */

loc_001578C7: ;
    eax = ecx;

loc_001578C9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001578D0
 * Original: 0x001578D0 - 0x0015793B (107 bytes, 49 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001578D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001578D0: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00157926; /* jle: less or equal (signed <=) */

loc_001578E2: ;
    edx = MEM32(esp + 0x14);

loc_001578E6: ;
    eax = MEM32(ebp + edi * 8);
    esi = edx;
    /* nop */

loc_001578F0: ;
    SET_LO8(ebx, MEM8(eax));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00157914; /* jne: not equal / not zero */

loc_001578F8: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00157910; /* je: equal / zero */

loc_001578FC: ;
    SET_LO8(ebx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00157914; /* jne: not equal / not zero */

loc_00157906: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_001578F0; /* jne: not equal / not zero */

loc_00157910: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00157919;

loc_00157914: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00157919: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00157930; /* je: equal / zero */

loc_0015791D: ;
    eax = MEM32(esp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001578E6; /* jl: less (signed <) */

loc_00157926: ;
    eax = MEM32(ebp + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00157930: ;
    eax = MEM32(ebp + edi * 8 + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00157960
 * Original: 0x00157960 - 0x001579BA (90 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157960(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157960: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 4);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7E6BDC;
    MEM32(esp + 0x10) = 0x1E;
    MEM32(esp + 0x14) = 0x7E6BC8;
    MEM32(esp + 0x18) = 0x1D;
    MEM32(esp + 0x1C) = 0x7E6BB4;
    MEM32(esp + 0x20) = 0x1F;
    MEM32(esp + 0x24) = 0x7E6BA0;
    MEM32(esp + 0x28) = 0x21;
    PUSH32(esp, 0x001579B4u); RECOMP_ABI_CALL(0x00035C25u, sub_00035C25); /* call 0x00035C25 */

loc_001579B4: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001579D0
 * Original: 0x001579D0 - 0x00157A0A (58 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001579D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001579D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 2);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7E6C08;
    MEM32(esp + 0x10) = 3;
    MEM32(esp + 0x14) = 0x7E6BF0;
    MEM32(esp + 0x18) = 4;
    PUSH32(esp, 0x00157A04u); RECOMP_ABI_CALL(0x00035C25u, sub_00035C25); /* call 0x00035C25 */

loc_00157A04: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00157A20
 * Original: 0x00157A20 - 0x00157B4C (300 bytes, 41 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157A20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157A20: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x84);
    PUSH32(esp, 0x10);
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = 0x7E6D8C;
    MEM32(esp + 0x10) = 0xA;
    MEM32(esp + 0x14) = 0x7E6D70;
    MEM32(esp + 0x18) = 8;
    MEM32(esp + 0x1C) = 0x7E6D58;
    MEM32(esp + 0x20) = 0xB;
    MEM32(esp + 0x24) = 0x7E6D40;
    MEM32(esp + 0x28) = 0xC;
    MEM32(esp + 0x2C) = 0x7E6D24;
    MEM32(esp + 0x30) = 0xD;
    MEM32(esp + 0x34) = 0x7E6D08;
    MEM32(esp + 0x38) = 0xE;
    MEM32(esp + 0x3C) = 0x7E6CF0;
    MEM32(esp + 0x40) = 0xF;
    MEM32(esp + 0x44) = 0x7E6CD8;
    MEM32(esp + 0x48) = 5;
    MEM32(esp + 0x4C) = 0x7E6CC4;
    MEM32(esp + 0x50) = 0x11;
    MEM32(esp + 0x54) = 0x7E6CB0;
    MEM32(esp + 0x58) = 7;
    MEM32(esp + 0x5C) = 0x7E6C90;
    MEM32(esp + 0x60) = 0x22;
    MEM32(esp + 0x64) = 0x7E6C7C;
    MEM32(esp + 0x68) = 0x38;
    MEM32(esp + 0x6C) = 0x7E6C68;
    MEM32(esp + 0x70) = 0x17;
    MEM32(esp + 0x74) = 0x7E6C54;
    MEM32(esp + 0x78) = 0x18;
    MEM32(esp + 0x7C) = 0x7E6C40;
    MEM32(esp + 0x80) = 0x19;
    MEM32(esp + 0x84) = 0x7E6C24;
    MEM32(esp + 0x88) = 0x12;
    PUSH32(esp, 0x00157B43u); RECOMP_ABI_CALL(0x00035C25u, sub_00035C25); /* call 0x00035C25 */

loc_00157B43: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00157BA0
 * Original: 0x00157BA0 - 0x00157C2E (142 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157BA0: ;
    eax = MEM32(0x8FC1D0);
    edx = MEM32(eax + 0x1E0);
    eax = MEM32(edx + 0xF8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) esi = eax; /* cmovne */
    MEM32(ecx + 0x50) = 0;
    PUSH32(esp, 0x00157BC8u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00157BC8: ;
    ecx = eax;
    PUSH32(esp, 0x00157BCFu); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00157BCF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x44); PUSH32(esp, 0x00157BD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157BD3u); } /* indirect call */
    }

loc_00157BD6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157C27; /* je: equal / zero */

loc_00157BDA: ;
    eax = MEM32(esi + 0x3F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157C0C; /* je: equal / zero */

loc_00157BE4: ;
    ecx = esp + 8;
    eax = esp + 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F06F4);
    MEM32(esp + 8) = 0xD;
    MEM32(esp + 0xC) = 0x4B65AF5;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00157C0Cu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00157C0C: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0x1E0);
    ecx = MEM32(eax + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157C27; /* je: equal / zero */

loc_00157C22: ;
    PUSH32(esp, 0x00157C27u); RECOMP_ABI_CALL(0x0002DA66u, sub_0002DA66); /* call 0x0002DA66 */

loc_00157C27: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00157C60
 * Original: 0x00157C60 - 0x00157DE5 (389 bytes, 119 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157C60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ecx;
    MEM32(ecx + 0x50) = 1;
    PUSH32(esp, 0x00157C77u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00157C77: ;
    ecx = eax;
    PUSH32(esp, 0x00157C7Eu); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00157C7E: ;
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, 0x7E6DB4);
    ecx = ebx;
    esi = eax;
    MEM8(esp + 0x17) = 1;
    PUSH32(esp, 0x00157C95u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00157C95: ;
    PUSH32(esp, 0x7E6DA8);
    ecx = ebx;
    edi = eax;
    PUSH32(esp, 0x00157CA3u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00157CA3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00157CDB; /* jle: less or equal (signed <=) */

loc_00157CA9: ;
    PUSH32(esp, 0x00157CAEu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00157CAE: ;
    ecx = eax;
    PUSH32(esp, 0x00157CB5u); RECOMP_ABI_CALL(0x00021F45u, sub_00021F45); /* call 0x00021F45 */

loc_00157CB5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edi = eax;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00157CC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157CC2u); } /* indirect call */
    }

loc_00157CC5: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00157CCCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157CC9u); } /* indirect call */
    }

loc_00157CCC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157CEC; /* je: equal / zero */

loc_00157CD0: ;
    MEM8(esp + 0x13) = 1;
    _fb = (uint32_t)(0xFA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0xFA0;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00157CDB: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x38); PUSH32(esp, 0x00157CE2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157CDFu); } /* indirect call */
    }

loc_00157CE2: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x4C); PUSH32(esp, 0x00157CEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157CE7u); } /* indirect call */
    }

loc_00157CEA: ;
    goto loc_00157D04;

loc_00157CEC: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax + 0x50) = 2;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esp + 0x17) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x50); PUSH32(esp, 0x00157D04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157D01u); } /* indirect call */
    }

loc_00157D04: ;
    PUSH32(esp, 0x7E0534);
    ecx = ebx;
    PUSH32(esp, 0x00157D10u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00157D10: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157D2D; /* je: equal / zero */

loc_00157D14: ;
    PUSH32(esp, 0x7E0534);
    ecx = ebx;
    PUSH32(esp, 0x00157D20u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00157D20: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00157D2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157D27u); } /* indirect call */
    }

loc_00157D2D: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    eax = MEM32(ecx + 0xF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157DC0; /* je: equal / zero */

loc_00157D42: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(edx + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157D6E; /* jne: not equal / not zero */

loc_00157D4E: ;
    _fa = (uint32_t)(MEM32(eax + 0x3F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x3F4), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157D6E; /* je: equal / zero */

loc_00157D57: ;
    eax = esp + 0x20;
    ecx = esp + 0x14;
    MEM32(esp + 0x20) = 0xF;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, ecx);
    goto loc_00157D92;

loc_00157D6E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157DA5; /* jne: not equal / not zero */

loc_00157D73: ;
    ecx = MEM32(eax + 0x3F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157DA5; /* je: equal / zero */

loc_00157D7D: ;
    edx = esp + 0x20;
    eax = esp + 0x14;
    MEM32(esp + 0x20) = 0xD;
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, eax);

loc_00157D92: ;
    ecx = MEM32(0x8F06F4);
    MEM32(esp + 0x18) = 0x4B65AF5;
    PUSH32(esp, 0x00157DA5u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00157DA5: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x1E0);
    ecx = MEM32(edx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157DC0; /* je: equal / zero */

loc_00157DBB: ;
    PUSH32(esp, 0x00157DC0u); RECOMP_ABI_CALL(0x0002DA66u, sub_0002DA66); /* call 0x0002DA66 */

loc_00157DC0: ;
    eax = ZX8(MEM8(esp + 0x13));
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x00157DD4u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00157DD4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x00157DDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157DD8u); } /* indirect call */
    }

loc_00157DDB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00157E50
 * Original: 0x00157E50 - 0x00157EF8 (168 bytes, 53 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157E50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00157E50: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x7E6DC8);
    PUSH32(esp, 0x00157E66u); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_00157E66: ;
    PUSH32(esp, 2);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x18) = 0x7E6C08;
    MEM32(esp + 0x1C) = 3;
    MEM32(esp + 0x20) = 0x7E6BF0;
    MEM32(esp + 0x24) = 4;
    PUSH32(esp, 0x00157E95u); RECOMP_ABI_CALL(0x00035C25u, sub_00035C25); /* call 0x00035C25 */

loc_00157E95: ;
    ebx = eax;
    PUSH32(esp, 0x00157E9Cu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00157E9C: ;
    ecx = eax;
    PUSH32(esp, 0x00157EA3u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00157EA3: ;
    esi = eax;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xA8); PUSH32(esp, 0x00157EB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157EAFu); } /* indirect call */
    }

loc_00157EB5: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00157EC4u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00157EC4: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x00157ED5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157ECFu); } /* indirect call */
    }

loc_00157ED5: ;
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x00157EE6u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00157EE6: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00157EECu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00157EEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00157F30
 * Original: 0x00157F30 - 0x0015804C (284 bytes, 97 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00157F30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00157F30: ;
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x12C);
    esi = ecx;
    PUSH32(esp, 0x7E6DC8);
    ecx = edi;
    PUSH32(esp, 0x00157F4Fu); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_00157F4F: ;
    PUSH32(esp, 2);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x24) = 0x7E6C08;
    MEM32(esp + 0x28) = 3;
    MEM32(esp + 0x2C) = 0x7E6BF0;
    MEM32(esp + 0x30) = 4;
    PUSH32(esp, 0x00157F7Eu); RECOMP_ABI_CALL(0x00035C25u, sub_00035C25); /* call 0x00035C25 */

loc_00157F7E: ;
    PUSH32(esp, 0x7E6DE4);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x00157F8Cu); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_00157F8C: ;
    ebp = eax;
    PUSH32(esp, 0x00157F93u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00157F93: ;
    ecx = eax;
    PUSH32(esp, 0x00157F9Au); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00157F9A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00157FEC; /* jne: not equal / not zero */

loc_00157FA1: ;
    PUSH32(esp, 0x7E6DD4);
    ecx = edi;
    PUSH32(esp, 0x00157FADu); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00157FAD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157FEC; /* je: equal / zero */

loc_00157FB1: ;
    PUSH32(esp, 0x7E6DD4);
    ecx = edi;
    PUSH32(esp, 0x00157FBDu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00157FBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157FEC; /* jne: not equal / not zero */

loc_00157FC2: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x00157FD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157FD1u); } /* indirect call */
    }

loc_00157FD7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00157FEC; /* je: equal / zero */

loc_00157FDB: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00157FECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00157FE6u); } /* indirect call */
    }

loc_00157FEC: ;
    eax = ebp;
    edx = eax + 1;

loc_00157FF1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00157FF1; /* jne: not equal / not zero */

loc_00157FF8: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;
    if ((_fa == 0)) goto loc_00158003; /* je: equal / zero */

loc_00158000: ;
    PUSH32(esp, ebp);
    goto loc_00158034;

loc_00158003: ;
    eax = ebx;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00158020; /* je: equal / zero */

loc_0015800A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015802F; /* jne: not equal / not zero */

loc_0015800D: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x144); PUSH32(esp, 0x0015801Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158018u); } /* indirect call */
    }

loc_0015801E: ;
    goto loc_0015802F;

loc_00158020: ;
    edx = MEM32(esi);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x140); PUSH32(esp, 0x0015802Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158029u); } /* indirect call */
    }

loc_0015802F: ;
    eax = esp + 0x28;
    PUSH32(esp, eax);

loc_00158034: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0xC0); PUSH32(esp, 0x0015803Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158039u); } /* indirect call */
    }

loc_0015803F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001580A0
 * Original: 0x001580A0 - 0x001586FD (1629 bytes, 525 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001580A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001580A0: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x001580B1u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001580B1: ;
    ecx = eax;
    PUSH32(esp, 0x001580B8u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_001580B8: ;
    esi = MEM32(esp + 0x124);
    PUSH32(esp, 0x7E6DC8);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x001580CDu); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_001580CD: ;
    PUSH32(esp, 0x7E6E4C);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x001580DBu); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_001580DB: ;
    esi = eax;
    PUSH32(esp, ebp);
    ecx = edi;
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x001580E9u); RECOMP_ABI_CALL(0x00033853u, sub_00033853); /* call 0x00033853 */

loc_001580E9: ;
    ebp = eax;
    edi = 0x7E6E38;
    ecx = 0x10;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001582EB; /* jne: not equal / not zero */

loc_001580FF: ;
    ecx = ebp + -5;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x13 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001582CC; /* ja: above (unsigned >) */

loc_0015810E: ;
    ecx = ZX8(MEM8(ecx + 0x158728));
    { uint32_t _jt = MEM32(ecx * 4 + 0x158700); /* switch: 10 entries, 10 targets */
    if (_jt == 0x0015811Cu) goto loc_0015811C;
    if (_jt == 0x00158140u) goto loc_00158140;
    if (_jt == 0x00158169u) goto loc_00158169;
    if (_jt == 0x001581C8u) goto loc_001581C8;
    if (_jt == 0x001581ECu) goto loc_001581EC;
    if (_jt == 0x00158215u) goto loc_00158215;
    if (_jt == 0x0015823Fu) goto loc_0015823F;
    if (_jt == 0x00158282u) goto loc_00158282;
    if (_jt == 0x001582C7u) goto loc_001582C7;
    if (_jt == 0x001582CCu) goto loc_001582CC;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015811C: ;
    ecx = MEM32(esp + 0x128);
    eax = 0x63;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x00158133u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158133: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158140: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE4); PUSH32(esp, 0x0015814Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158144u); } /* indirect call */
    }

loc_0015814A: ;
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x0015815Cu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015815C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158169: ;
    eax = MEM32(ebx);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xD);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0015817Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158174u); } /* indirect call */
    }

loc_0015817A: ;
    edx = MEM32(ebx);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0015818Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158185u); } /* indirect call */
    }

loc_0015818B: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x001581A0u); RECOMP_ABI_CALL(0x00030919u, sub_00030919); /* call 0x00030919 */

loc_001581A0: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x001581A9u); RECOMP_ABI_CALL(0x000213F6u, sub_000213F6); /* call 0x000213F6 */

loc_001581A9: ;
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x001581BBu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001581BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001581C8: ;
    ecx = MEM32(esp + 0x128);
    eax = 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x001581DFu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001581DF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001581EC: ;
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x160); PUSH32(esp, 0x001581F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001581F0u); } /* indirect call */
    }

loc_001581F6: ;
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x00158208u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158208: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158215: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xD4); PUSH32(esp, 0x0015821Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158219u); } /* indirect call */
    }

loc_0015821F: ;
    ecx = MEM32(esp + 0x128);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x00158232u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158232: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0015823F: ;
    eax = MEM32(ebx);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00158250u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015824Au); } /* indirect call */
    }

loc_00158250: ;
    edi = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x128);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFF6u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x54;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x00158275u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158275: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158282: ;
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00158293u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015828Du); } /* indirect call */
    }

loc_00158293: ;
    edi = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x128);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFD8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x001582BAu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001582BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001582C7: ;
    eax = 0x7D6;

loc_001582CC: ;
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x001582DEu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001582DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001582EB: ;
    esi = MEM32(esp + 0x10);
    edi = 0x7E6E24;
    ecx = 0x10;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0015844A; /* jne: not equal / not zero */

loc_00158303: ;
    eax = ebp + -8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00158429; /* ja: above (unsigned >) */

loc_0015830F: ;
    eax = ZX8(MEM8(eax + 0x158754));
    { uint32_t _jt = MEM32(eax * 4 + 0x15873C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0015831Du) goto loc_0015831D;
    if (_jt == 0x00158341u) goto loc_00158341;
    if (_jt == 0x0015836Au) goto loc_0015836A;
    if (_jt == 0x001583ADu) goto loc_001583AD;
    if (_jt == 0x001583F2u) goto loc_001583F2;
    if (_jt == 0x00158429u) goto loc_00158429;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0015831D: ;
    ecx = MEM32(esp + 0x128);
    eax = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x00158334u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158334: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158341: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x15C); PUSH32(esp, 0x0015834Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158345u); } /* indirect call */
    }

loc_0015834B: ;
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x0015835Du); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015835D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0015836A: ;
    eax = MEM32(ebx);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0015837Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158375u); } /* indirect call */
    }

loc_0015837B: ;
    edi = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x128);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x43) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x43;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x001583A0u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001583A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001583AD: ;
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001583BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001583B8u); } /* indirect call */
    }

loc_001583BE: ;
    edi = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x128);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x1E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x96) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x96;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x001583E5u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001583E5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001583F2: ;
    edx = MEM32(ebx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00158403u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001583FDu); } /* indirect call */
    }

loc_00158403: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x128);
    _fb = (uint32_t)(0x11) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x0015841Cu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015841C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158429: ;
    ecx = MEM32(esp + 0x128);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x0015843Du); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015843D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0015844A: ;
    eax = ebp + -3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x35) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x35 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001586F0; /* ja: above (unsigned >) */

loc_00158456: ;
    ecx = ZX8(MEM8(eax + 0x15878C));
    { uint32_t _jt = MEM32(ecx * 4 + 0x158768); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00158464u) goto loc_00158464;
    if (_jt == 0x001584C2u) goto loc_001584C2;
    if (_jt == 0x0015857Au) goto loc_0015857A;
    if (_jt == 0x001585ADu) goto loc_001585AD;
    if (_jt == 0x001585DCu) goto loc_001585DC;
    if (_jt == 0x00158639u) goto loc_00158639;
    if (_jt == 0x00158694u) goto loc_00158694;
    if (_jt == 0x001586C8u) goto loc_001586C8;
    if (_jt == 0x001586F0u) goto loc_001586F0;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00158464: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00158474u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015846Eu); } /* indirect call */
    }

loc_00158474: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x168); PUSH32(esp, 0x00158483u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015847Du); } /* indirect call */
    }

loc_00158483: ;
    esi = MEM32(esp + 0x128);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    ecx = esi;
    PUSH32(esp, 0x00158497u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158497: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x174); PUSH32(esp, 0x001584A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001584A2u); } /* indirect call */
    }

loc_001584A8: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6E14);
    ecx = esi;
    PUSH32(esp, 0x001584B5u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001584B5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001584C2: ;
    edx = MEM32(ebx);
    eax = esp + 0x1B;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x14);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x001584D3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001584CDu); } /* indirect call */
    }

loc_001584D3: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158512; /* je: equal / zero */

loc_001584DB: ;
    esi = MEM32(esp + 0x128);
    PUSH32(esp, 0);
    PUSH32(esp, 0x7E63AC);
    ecx = esi;
    PUSH32(esp, 0x001584F0u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001584F0: ;
    ecx = MEM32(0x8B0110);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6E08);
    ecx = esi;
    PUSH32(esp, 0x00158505u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00158505: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158512: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00158522u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015851Cu); } /* indirect call */
    }

loc_00158522: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x128);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E63AC);
    ecx = esi;
    PUSH32(esp, 0x0015853Bu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015853B: ;
    PUSH32(esp, 0x00158540u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00158540: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00158547u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158544u); } /* indirect call */
    }

loc_00158547: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0015855Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158557u); } /* indirect call */
    }

loc_0015855A: ;
    PUSH32(esp, 0);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E6E08);
    ecx = esi;
    PUSH32(esp, 0x0015856Du); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015856D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0015857A: ;
    eax = MEM32(ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0015858Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158584u); } /* indirect call */
    }

loc_0015858A: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x128);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x001585A0u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001585A0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001585AD: ;
    eax = MEM32(ebx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x001585BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001585B7u); } /* indirect call */
    }

loc_001585BD: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001585D0u); RECOMP_ABI_CALL(0x00016041u, sub_00016041); /* call 0x00016041 */

loc_001585D0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x20;
    goto loc_001586DC;

loc_001585DC: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x17);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001585EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001585E7u); } /* indirect call */
    }

loc_001585ED: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x128);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E63AC);
    ecx = esi;
    PUSH32(esp, 0x00158605u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158605: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00158616u); RECOMP_ABI_CALL(0x00018567u, sub_00018567); /* call 0x00018567 */

loc_00158616: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6DF8);
    ecx = esi;
    PUSH32(esp, 0x0015862Cu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015862C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158639: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x18);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0015864Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158644u); } /* indirect call */
    }

loc_0015864A: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x128);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E63AC);
    ecx = esi;
    PUSH32(esp, 0x00158662u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158662: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00158671u); RECOMP_ABI_CALL(0x00022EA9u, sub_00022EA9); /* call 0x00022EA9 */

loc_00158671: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6DE8);
    ecx = esi;
    PUSH32(esp, 0x00158687u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00158687: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158694: ;
    edx = MEM32(ebx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001586A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015869Eu); } /* indirect call */
    }

loc_001586A4: ;
    ecx = MEM32(esp + 0x10);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x12C);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x001586BBu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001586BB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001586C8: ;
    edx = MEM32(ebx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001586D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001586D2u); } /* indirect call */
    }

loc_001586D8: ;
    ecx = esp + 0x20;

loc_001586DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x130);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x001586F0u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001586F0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00158990
 * Original: 0x00158990 - 0x00158A60 (208 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158990: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00158999u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00158999: ;
    ecx = eax;
    PUSH32(esp, 0x001589A0u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_001589A0: ;
    ecx = esp + 4;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1E);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x001589B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001589ADu); } /* indirect call */
    }

loc_001589B3: ;
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1D);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001589C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001589BEu); } /* indirect call */
    }

loc_001589C4: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001589D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001589CFu); } /* indirect call */
    }

loc_001589D5: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x21);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x001589E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001589E0u); } /* indirect call */
    }

loc_001589E6: ;
    ecx = MEM32(esp + 4);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6E60);
    ecx = esi;
    PUSH32(esp, 0x001589FBu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001589FB: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7BB364);
    ecx = esi;
    PUSH32(esp, 0x00158A0Cu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158A0C: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6E58);
    ecx = esi;
    PUSH32(esp, 0x00158A1Du); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158A1D: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6E50);
    ecx = esi;
    PUSH32(esp, 0x00158A2Eu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158A2E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00158A60
 * Original: 0x00158A60 - 0x00158AEF (143 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158A60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158A60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00158A69u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00158A69: ;
    ecx = eax;
    PUSH32(esp, 0x00158A70u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00158A70: ;
    edi = MEM32(esp + 0x14);
    PUSH32(esp, 0x7E6E60);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x00158A82u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00158A82: ;
    PUSH32(esp, 0x7BB364);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x00158A90u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00158A90: ;
    PUSH32(esp, 0x7E6E58);
    ecx = edi;
    ebp = eax;
    PUSH32(esp, 0x00158A9Eu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00158A9E: ;
    PUSH32(esp, 0x7E6E50);
    ecx = edi;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x00158AAEu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00158AAE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    edi = eax;
    eax = MEM32(esi);
    PUSH32(esp, 0x1D);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x00158ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158AB7u); } /* indirect call */
    }

loc_00158ABD: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1E);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00158ACAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158AC4u); } /* indirect call */
    }

loc_00158ACA: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x21);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0xBC); PUSH32(esp, 0x00158AD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158AD1u); } /* indirect call */
    }

loc_00158AD7: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00158AE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158AE2u); } /* indirect call */
    }

loc_00158AE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00158B20
 * Original: 0x00158B20 - 0x00158BCE (174 bytes, 59 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158B20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158B20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00158B2Au); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00158B2A: ;
    ecx = eax;
    PUSH32(esp, 0x00158B31u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00158B31: ;
    ecx = esp + 0xB;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x45);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00158B44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158B3Eu); } /* indirect call */
    }

loc_00158B44: ;
    SET_LO8(ecx, MEM8(esp + 0xB));
    edi = MEM32(esp + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx = edi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6E94);
    PUSH32(esp, 0x00158B60u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158B60: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x41);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00158B71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158B6Bu); } /* indirect call */
    }

loc_00158B71: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6E84);
    ecx = edi;
    PUSH32(esp, 0x00158B82u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158B82: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x43);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00158B93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158B8Du); } /* indirect call */
    }

loc_00158B93: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6E78);
    ecx = edi;
    PUSH32(esp, 0x00158BA4u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158BA4: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x44);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00158BB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158BAFu); } /* indirect call */
    }

loc_00158BB5: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6E68);
    ecx = edi;
    PUSH32(esp, 0x00158BC6u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158BC6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00158C00
 * Original: 0x00158C00 - 0x00158CEA (234 bytes, 79 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00158C00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00158C07u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00158C07: ;
    ecx = eax;
    PUSH32(esp, 0x00158C0Eu); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00158C0E: ;
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, 0x7E6E94);
    ecx = ebp;
    ebx = eax;
    PUSH32(esp, 0x00158C20u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00158C20: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158C6A; /* je: equal / zero */

loc_00158C24: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E6E94);
    ecx = ebp;
    PUSH32(esp, 0x00158C32u); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_00158C32: ;
    edx = MEM32(ebx);
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0x7E6EA4;
    ecx = 5;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    SET_LO8(ecx, ((_flags != 0)) ? 1 : 0); /* sete */
    MEM8(esp + 0x14) = LO8(ecx);
    eax = MEM32(esp + 0x14);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x45);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xB8); PUSH32(esp, 0x00158C5Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158C54u); } /* indirect call */
    }

loc_00158C5A: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x41);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00158C68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158C62u); } /* indirect call */
    }

loc_00158C68: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00158C6A: ;
    PUSH32(esp, 0x7E6E84);
    ecx = ebp;
    PUSH32(esp, 0x00158C76u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00158C76: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158C93; /* je: equal / zero */

loc_00158C7A: ;
    PUSH32(esp, 0x7E6E84);
    ecx = ebp;
    PUSH32(esp, 0x00158C86u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00158C86: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x41);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00158C93u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158C8Du); } /* indirect call */
    }

loc_00158C93: ;
    PUSH32(esp, 0x7E6E78);
    ecx = ebp;
    PUSH32(esp, 0x00158C9Fu); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00158C9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158CBC; /* je: equal / zero */

loc_00158CA3: ;
    PUSH32(esp, 0x7E6E78);
    ecx = ebp;
    PUSH32(esp, 0x00158CAFu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00158CAF: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x43);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00158CBCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158CB6u); } /* indirect call */
    }

loc_00158CBC: ;
    PUSH32(esp, 0x7E6E68);
    ecx = ebp;
    PUSH32(esp, 0x00158CC8u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00158CC8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158CE5; /* je: equal / zero */

loc_00158CCC: ;
    PUSH32(esp, 0x7E6E68);
    ecx = ebp;
    PUSH32(esp, 0x00158CD8u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00158CD8: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x44);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00158CE5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158CDFu); } /* indirect call */
    }

loc_00158CE5: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00158D30
 * Original: 0x00158D30 - 0x00158D3A (10 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158D30(void)
{

loc_00158D30: ;
    MEM32(ecx + 0x50) = 3;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00158D40
 * Original: 0x00158D40 - 0x00158EC1 (385 bytes, 117 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158D40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158D40: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, 0x7E6F5C);
    PUSH32(esp, 0x00158D56u); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_00158D56: ;
    edi = 0x7E6F3C;
    esi = eax;
    ecx = 0x1B;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00158DC8; /* jne: not equal / not zero */

loc_00158D68: ;
    _fa = (uint32_t)(MEM32(ebx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x50), 2 (32-bit) */
    MEM32(esp + 0xC) = 0x4B65AF5;
    if (CMP_NE(_fa, _fb)) goto loc_00158D9F; /* jne: not equal / not zero */

loc_00158D76: ;
    ecx = esp + 0xC;
    eax = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F06F4);
    MEM32(esp + 0x1C) = 0xF;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x00158D96u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00158D96: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158D9F: ;
    ecx = MEM32(0x8F06F4);
    eax = esp + 0xC;
    edx = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0xD;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x00158DBFu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_00158DBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158DC8: ;
    edi = 0x7E6F14;
    esi = eax;
    ecx = 0x20;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00158E01; /* jne: not equal / not zero */

loc_00158DDA: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    ecx = MEM32(ecx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158EB8; /* je: equal / zero */

loc_00158DF3: ;
    PUSH32(esp, 0x00158DF8u); RECOMP_ABI_CALL(0x0002F2C6u, sub_0002F2C6); /* call 0x0002F2C6 */

loc_00158DF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158E01: ;
    edi = 0x7E6EEC;
    esi = eax;
    ecx = 0x20;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00158E3A; /* jne: not equal / not zero */

loc_00158E13: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    ecx = MEM32(ecx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00158EB8; /* je: equal / zero */

loc_00158E2C: ;
    PUSH32(esp, 0x00158E31u); RECOMP_ABI_CALL(0x00026243u, sub_00026243); /* call 0x00026243 */

loc_00158E31: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158E3A: ;
    edi = 0x7E6ECC;
    esi = eax;
    ecx = 0x1B;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00158E6D; /* jne: not equal / not zero */

loc_00158E4C: ;
    ecx = MEM32(0x8F06F4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0xE;
    PUSH32(esp, 0x00158E64u); RECOMP_ABI_CALL(0x0001CBB2u, sub_0001CBB2); /* call 0x0001CBB2 */

loc_00158E64: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158E6D: ;
    edi = 0x7E6EAC;
    esi = eax;
    ecx = 0x1A;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00158EA0; /* jne: not equal / not zero */

loc_00158E7F: ;
    ecx = MEM32(0x8F06F4);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = 0x11;
    PUSH32(esp, 0x00158E97u); RECOMP_ABI_CALL(0x0001CBB2u, sub_0001CBB2); /* call 0x0001CBB2 */

loc_00158E97: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00158EA0: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F06F4);
    MEM32(esp + 0x1C) = 0x12;
    PUSH32(esp, 0x00158EB8u); RECOMP_ABI_CALL(0x0001CBB2u, sub_0001CBB2); /* call 0x0001CBB2 */

loc_00158EB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00158F30
 * Original: 0x00158F30 - 0x00158F74 (68 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158F30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00158F30: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    ecx = MEM32(ecx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_00158F5D; /* jne: not equal / not zero */

loc_00158F47: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x7E6F64);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x00158F5Au); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00158F5A: ;
    esp += 12; return; /* ret 8 */

loc_00158F5D: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00158F62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158F5Fu); } /* indirect call */
    }

loc_00158F62: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    PUSH32(esp, 0x00158F71u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00158F71: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00158F90
 * Original: 0x00158F90 - 0x00158FED (93 bytes, 31 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00158F90(void)
{

loc_00158F90: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E6F80);
    PUSH32(esp, 0x00158FA0u); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_00158FA0: ;
    esi = eax;
    PUSH32(esp, 0x00158FA7u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00158FA7: ;
    ecx = eax;
    PUSH32(esp, 0x00158FAEu); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00158FAE: ;
    edx = MEM32(eax);
    ecx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x00158FC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00158FBDu); } /* indirect call */
    }

loc_00158FC3: ;
    esi = MEM32(esp + 0x10);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E63AC);
    ecx = esi;
    PUSH32(esp, 0x00158FD7u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158FD7: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E6F74);
    ecx = esi;
    PUSH32(esp, 0x00158FE8u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00158FE8: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00159010
 * Original: 0x00159010 - 0x0015927D (621 bytes, 203 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159010(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159010: ;
    _fb = (uint32_t)(0x318) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x318;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x00159027u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00159027: ;
    ecx = eax;
    PUSH32(esp, 0x0015902Eu); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_0015902E: ;
    ecx = esp + 0x18;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 5);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00159041u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015903Bu); } /* indirect call */
    }

loc_00159041: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x118); PUSH32(esp, 0x00159055u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015904Fu); } /* indirect call */
    }

loc_00159055: ;
    ebp = eax;
    _fa = (uint32_t)(MEM32(ebx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x50), 2 (32-bit) */
    ebx = MEM32(esp + 0x330);
    if (CMP_NE(_fa, _fb)) goto loc_001590D2; /* jne: not equal / not zero */

loc_00159064: ;
    PUSH32(esp, 0x100);
    edx = esp + 0x12C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E6FE0);
    PUSH32(esp, 0x0015907Bu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0015907B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159084u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00159084: ;
    ecx = eax;
    PUSH32(esp, 0x0015908Bu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0015908B: ;
    eax = MEM32(esi);
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x0015909Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159096u); } /* indirect call */
    }

loc_0015909C: ;
    PUSH32(esp, edi);
    edx = esp + 0x12C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E6FD4);
    ecx = ebx;
    PUSH32(esp, 0x001590B1u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001590B1: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6FC8);
    ecx = ebx;
    PUSH32(esp, 0x001590C2u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001590C2: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001590CD; /* jne: not equal / not zero */

loc_001590C9: ;
    MEM32(esp + 0x14) = edi;

loc_001590CD: ;
    edi = 1;

loc_001590D2: ;
    edx = MEM32(esi);
    eax = esp + 0x228;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x8C); PUSH32(esp, 0x001590E6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001590E0u); } /* indirect call */
    }

loc_001590E6: ;
    edx = MEM32(esi);
    eax = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    eax = esp + 0x230;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x17C); PUSH32(esp, 0x00159102u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001590FCu); } /* indirect call */
    }

loc_00159102: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159156; /* jne: not equal / not zero */

loc_0015910A: ;
    PUSH32(esp, edi);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x7E6FB8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015911Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015911A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x0015912Cu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015912C: ;
    PUSH32(esp, edi);
    eax = esp + 0x2C;
    PUSH32(esp, 0x7E6FAC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015913Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015913C: ;
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00159150u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159150: ;
    MEM32(esp + 0x14) = edi;
    goto loc_001591A4;

loc_00159156: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001591A5; /* je: equal / zero */

loc_0015915A: ;
    PUSH32(esp, edi);
    eax = esp + 0x2C;
    PUSH32(esp, 0x7E6FB8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015916Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015916A: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x00159180u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00159180: ;
    PUSH32(esp, edi);
    eax = esp + 0x2C;
    PUSH32(esp, 0x7E6FAC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159190u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159190: ;
    ecx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x001591A4u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001591A4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001591A5: ;
    eax = MEM32(esi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esp + 0x10) = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xE4); PUSH32(esp, 0x001591B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001591AFu); } /* indirect call */
    }

loc_001591B5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00159252; /* jle: less or equal (signed <=) */

loc_001591BD: ;
    goto loc_001591C3;

loc_001591BF: ;
    ebp = MEM32(esp + 0x10);

loc_001591C3: ;
    edx = MEM32(esi);
    eax = esp + 0x128;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x104); PUSH32(esp, 0x001591D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001591D0u); } /* indirect call */
    }

loc_001591D6: ;
    PUSH32(esp, edi);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x7E6FB8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001591E6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001591E6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esp + 0x12C;
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001591FFu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001591FF: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x134); PUSH32(esp, 0x0015920Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159204u); } /* indirect call */
    }

loc_0015920A: ;
    PUSH32(esp, edi);
    ebp = eax;
    eax = esp + 0x2C;
    PUSH32(esp, 0x7E6FAC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015921Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015921C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0015922Cu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015922C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x18) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159236; /* jne: not equal / not zero */

loc_00159232: ;
    MEM32(esp + 0x14) = edi;

loc_00159236: ;
    ebp = MEM32(esp + 0x10);
    edx = MEM32(esi);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esp + 0x10) = ebp;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xE4); PUSH32(esp, 0x0015924Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159244u); } /* indirect call */
    }

loc_0015924A: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001591BF; /* jl: less (signed <) */

loc_00159252: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6F9C);
    ecx = ebx;
    PUSH32(esp, 0x00159263u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159263: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E6F8C);
    ecx = ebx;
    PUSH32(esp, 0x00159270u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159270: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x318) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x318;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00159320
 * Original: 0x00159320 - 0x00159357 (55 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159320(void)
{

loc_00159320: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00159326u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00159326: ;
    ecx = eax;
    PUSH32(esp, 0x0015932Du); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_0015932D: ;
    esi = eax;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x00159336u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159333u); } /* indirect call */
    }

loc_00159336: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x0015933Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015933Au); } /* indirect call */
    }

loc_0015933D: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E11B4);
    PUSH32(esp, 0x0015934Cu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015934C: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x3C); PUSH32(esp, 0x00159353u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159350u); } /* indirect call */
    }

loc_00159353: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00159370
 * Original: 0x00159370 - 0x0015947A (266 bytes, 92 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159370: ;
    _fb = (uint32_t)(0x304) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x304;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0015937Eu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015937E: ;
    ecx = eax;
    PUSH32(esp, 0x00159385u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00159385: ;
    ebp = eax;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x38); PUSH32(esp, 0x0015938Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015938Cu); } /* indirect call */
    }

loc_0015938F: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x40); PUSH32(esp, 0x00159397u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159394u); } /* indirect call */
    }

loc_00159397: ;
    ecx = MEM32(esp + 0x318);
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E11B4);
    MEM32(esp + 0x14) = esi;
    PUSH32(esp, 0x001593AFu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001593AF: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00159466; /* jle: less or equal (signed <=) */

loc_001593B9: ;
    PUSH32(esp, edi);
    /* nop */

loc_001593C0: ;
    eax = MEM32(ebp);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x001593D0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001593CDu); } /* indirect call */
    }

loc_001593D0: ;
    edx = MEM32(ebp);
    eax = esp + 0x114;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x5C); PUSH32(esp, 0x001593E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001593E0u); } /* indirect call */
    }

loc_001593E3: ;
    edi = esp + 0x14;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_001593E8: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001593E8; /* jne: not equal / not zero */

loc_001593F0: ;
    SET_LO16(ecx, MEM16(0x7E0960));
    eax = esp + 0x114;
    MEM16(edi) = LO16(ecx);
    esi = eax;

loc_00159403: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159403; /* jne: not equal / not zero */

loc_0015940A: ;
    edi = esp + 0x14;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00159411: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00159411; /* jne: not equal / not zero */

loc_00159419: ;
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
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
    PUSH32(esp, ebx);
    ecx = eax;
    edx = esp + 0x218;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x7E0DA0);
    PUSH32(esp, edx);
    { uint64_t _n = (uint64_t)ecx * 1u;
    if (!g_df && esi < 0xFD000000u && edi < 0xFD000000u && (uint64_t)esi + _n <= 0xFD000000u && (uint64_t)edi + _n <= 0xFD000000u) {
      uint8_t *_d = (uint8_t*)XBOX_PTR(edi), *_s = (uint8_t*)XBOX_PTR(esi);
      if ((uint64_t)edi + _n <= esi || (uint64_t)esi + _n <= edi) memcpy(_d, _s, (size_t)_n);
      else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*1u) = MEM8(esi + _i*1u); }
      esi += ecx * 1u; edi += ecx * 1u; }
    else { uint32_t _i; int32_t _st = RECOMP_DF_STEP(1);
      for (_i = 0; _i < ecx; _i++) MEM8(edi + _i*_st) = MEM8(esi + _i*_st);
      esi += ecx * _st; edi += ecx * _st; }
    ecx = 0; } /* rep movsb */
    PUSH32(esp, 0x0015943Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015943A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = esp + 0x21C;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x328);
    PUSH32(esp, 0x00159458u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00159458: ;
    eax = MEM32(esp + 0x10);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001593C0; /* jl: less (signed <) */

loc_00159465: ;
    POP32(esp, edi);

loc_00159466: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x0015946Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015946Bu); } /* indirect call */
    }

loc_0015946E: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x304) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x304;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001594C0
 * Original: 0x001594C0 - 0x001594E9 (41 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001594C0(void)
{

loc_001594C0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E0DD0);
    PUSH32(esp, 0x001594CFu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001594CF: ;
    esi = eax;
    PUSH32(esp, 0x001594D6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001594D6: ;
    ecx = eax;
    PUSH32(esp, 0x001594DDu); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_001594DD: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x001594E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001594E2u); } /* indirect call */
    }

loc_001594E5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00159500
 * Original: 0x00159500 - 0x001595BA (186 bytes, 66 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159500: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015950Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015950F: ;
    ecx = eax;
    PUSH32(esp, 0x00159516u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00159516: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x164); PUSH32(esp, 0x00159522u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015951Cu); } /* indirect call */
    }

loc_00159522: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x178); PUSH32(esp, 0x0015952Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159526u); } /* indirect call */
    }

loc_0015952C: ;
    ebx = MEM32(esp + 0x118);
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7E7014);
    ecx = ebx;
    PUSH32(esp, 0x00159542u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159542: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001595AD; /* jle: less or equal (signed <=) */

loc_00159548: ;
    goto loc_00159550;

    /* nop */

loc_00159550: ;
    PUSH32(esp, esi);
    eax = esp + 0x14;
    PUSH32(esp, 0x7E7000);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159560u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159560: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x16C); PUSH32(esp, 0x0015956Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159568u); } /* indirect call */
    }

loc_0015956E: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0015957Bu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015957B: ;
    PUSH32(esp, esi);
    ecx = esp + 0x14;
    PUSH32(esp, 0x7E6FF0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0015958Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015958B: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x170); PUSH32(esp, 0x0015959Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159595u); } /* indirect call */
    }

loc_0015959B: ;
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x001595A8u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001595A8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00159550; /* jl: less (signed <) */

loc_001595AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001595F0
 * Original: 0x001595F0 - 0x00159648 (88 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001595F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001595F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001595F8u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001595F8: ;
    ecx = eax;
    PUSH32(esp, 0x001595FFu); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_001595FF: ;
    ebx = MEM32(esp + 0x10);
    edi = eax;
    esi = 0x7E3E38;
    /* nop */

loc_00159610: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0015961Au); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_0015961A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159637; /* je: equal / zero */

loc_0015961E: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00159628u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00159628: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00159637u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159631u); } /* indirect call */
    }

loc_00159637: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7E3F28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7E3F28 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00159610; /* jl: less (signed <) */

loc_00159642: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00159660
 * Original: 0x00159660 - 0x001596B3 (83 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159660: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00159668u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00159668: ;
    ecx = eax;
    PUSH32(esp, 0x0015966Fu); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_0015966F: ;
    ebx = MEM32(esp + 0x14);
    edi = eax;
    esi = 0x7E3E38;
    /* nop */

loc_00159680: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x00159693u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015968Du); } /* indirect call */
    }

loc_00159693: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001596A2u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001596A2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7E3F28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7E3F28 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00159680; /* jl: less (signed <) */

loc_001596AD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001596D0
 * Original: 0x001596D0 - 0x001596FE (46 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001596D0(void)
{

loc_001596D0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E7024);
    PUSH32(esp, 0x001596DFu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_001596DF: ;
    esi = eax;
    PUSH32(esp, 0x001596E6u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001596E6: ;
    ecx = eax;
    PUSH32(esp, 0x001596EDu); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_001596ED: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x48);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x001596FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001596F4u); } /* indirect call */
    }

loc_001596FA: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00159710
 * Original: 0x00159710 - 0x00159743 (51 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159710(void)
{

loc_00159710: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00159716u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00159716: ;
    ecx = eax;
    PUSH32(esp, 0x0015971Du); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_0015971D: ;
    edx = MEM32(eax);
    ecx = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x48);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x0015972Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159727u); } /* indirect call */
    }

loc_0015972D: ;
    edx = MEM32(esp);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E7024);
    PUSH32(esp, 0x0015973Fu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015973F: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00159750
 * Original: 0x00159750 - 0x001597A8 (88 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159750: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00159758u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00159758: ;
    ecx = eax;
    PUSH32(esp, 0x0015975Fu); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_0015975F: ;
    ebx = MEM32(esp + 0x10);
    edi = eax;
    esi = 0x7E3F28;
    /* nop */

loc_00159770: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0015977Au); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_0015977A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159797; /* je: equal / zero */

loc_0015977E: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00159788u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00159788: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x00159797u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159791u); } /* indirect call */
    }

loc_00159797: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7E4098) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7E4098 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00159770; /* jl: less (signed <) */

loc_001597A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001597C0
 * Original: 0x001597C0 - 0x00159813 (83 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001597C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001597C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001597C8u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001597C8: ;
    ecx = eax;
    PUSH32(esp, 0x001597CFu); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_001597CF: ;
    ebx = MEM32(esp + 0x14);
    edi = eax;
    esi = 0x7E3F28;
    /* nop */

loc_001597E0: ;
    edx = MEM32(esi + 4);
    eax = MEM32(edi);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x001597F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001597EDu); } /* indirect call */
    }

loc_001597F3: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00159802u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159802: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7E4098) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x7E4098 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001597E0; /* jl: less (signed <) */

loc_0015980D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00159830
 * Original: 0x00159830 - 0x001598A9 (121 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159830: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x7E7024);
    ecx = esi;
    PUSH32(esp, 0x00159841u); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_00159841: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015986E; /* je: equal / zero */

loc_00159845: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E7024);
    ecx = esi;
    PUSH32(esp, 0x00159852u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00159852: ;
    edi = eax;
    PUSH32(esp, 0x00159859u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00159859: ;
    ecx = eax;
    PUSH32(esp, 0x00159860u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00159860: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x23);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x0015986Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159867u); } /* indirect call */
    }

loc_0015986D: ;
    POP32(esp, edi);

loc_0015986E: ;
    PUSH32(esp, 0x7E7030);
    ecx = esi;
    PUSH32(esp, 0x0015987Au); RECOMP_ABI_CALL(0x00026A3Bu, sub_00026A3B); /* call 0x00026A3B */

loc_0015987A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001598A5; /* je: equal / zero */

loc_0015987E: ;
    PUSH32(esp, 0x7E7030);
    ecx = esi;
    PUSH32(esp, 0x0015988Au); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015988A: ;
    esi = eax;
    PUSH32(esp, 0x00159891u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00159891: ;
    ecx = eax;
    PUSH32(esp, 0x00159898u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00159898: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x39);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0xBC); PUSH32(esp, 0x001598A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015989Fu); } /* indirect call */
    }

loc_001598A5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001598D0
 * Original: 0x001598D0 - 0x00159931 (97 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001598D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001598D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001598D9u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_001598D9: ;
    ecx = eax;
    PUSH32(esp, 0x001598E0u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_001598E0: ;
    ecx = esp + 4;
    esi = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x23);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x88); PUSH32(esp, 0x001598F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001598EDu); } /* indirect call */
    }

loc_001598F3: ;
    edx = MEM32(esi);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x39);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x88); PUSH32(esp, 0x00159904u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001598FEu); } /* indirect call */
    }

loc_00159904: ;
    ecx = MEM32(esp + 4);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E7024);
    ecx = esi;
    PUSH32(esp, 0x00159919u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159919: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E7030);
    ecx = esi;
    PUSH32(esp, 0x0015992Au); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015992A: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00159950
 * Original: 0x00159950 - 0x001599FE (174 bytes, 61 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159950: ;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0015995Fu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015995F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00159966u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159963u); } /* indirect call */
    }

loc_00159966: ;
    edi = eax;
    PUSH32(esp, 0x0015996Du); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015996D: ;
    ecx = eax;
    PUSH32(esp, 0x00159974u); RECOMP_ABI_CALL(0x0002634Cu, sub_0002634C); /* call 0x0002634C */

loc_00159974: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xB0); PUSH32(esp, 0x0015997Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159978u); } /* indirect call */
    }

loc_0015997E: ;
    ebp = MEM32(esp + 0x218);
    ebx = eax;
    eax = MEM32(0x8B0110);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E704C);
    ecx = ebp;
    PUSH32(esp, 0x0015999Bu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015999B: ;
    ecx = ebx + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E0478);
    ecx = ebp;
    PUSH32(esp, 0x001599ABu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_001599AB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001599F1; /* jle: less or equal (signed <=) */

loc_001599B1: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001599C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001599BDu); } /* indirect call */
    }

loc_001599C0: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = esp + 0x114;
    PUSH32(esp, 0x7E703C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001599D4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001599D4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0x118;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x001599EDu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001599ED: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001599B1; /* jl: less (signed <) */

loc_001599F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x200;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00159A30
 * Original: 0x00159A30 - 0x00159A5D (45 bytes, 11 insns)
 * Category: game_camera
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159A30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159A30: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x7E7058);
    PUSH32(esp, 0x00159A3Eu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00159A3E: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x1E0);
    ecx = MEM32(edx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159A5A; /* je: equal / zero */

loc_00159A54: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159A5Au); RECOMP_ABI_CALL(0x0001EB83u, sub_0001EB83); /* call 0x0001EB83 */

loc_00159A5A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00159A70
 * Original: 0x00159A70 - 0x00159AC8 (88 bytes, 32 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00159A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00159A70: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E6F74);
    ecx = esi;
    PUSH32(esp, 0x00159A83u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_00159A83: ;
    PUSH32(esp, 0x7E6B58);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x00159A91u); RECOMP_ABI_CALL(0x0003561Cu, sub_0003561C); /* call 0x0003561C */

loc_00159A91: ;
    esi = eax;
    PUSH32(esp, 0x00159A98u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00159A98: ;
    ecx = eax;
    PUSH32(esp, 0x00159A9Fu); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00159A9F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x7E7068;
    ecx = 7;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    SET_LO8(edx, ((_flags != 0)) ? 1 : 0); /* sete */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edx;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x180); PUSH32(esp, 0x00159AC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159ABCu); } /* indirect call */
    }

loc_00159AC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00159AE0
 * Original: 0x00159AE0 - 0x0015A11B (1595 bytes, 543 insns)
 * Category: game_audio
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00159AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00159AE0: ;
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0x00159AF3u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_00159AF3: ;
    ecx = eax;
    PUSH32(esp, 0x00159AFAu); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_00159AFA: ;
    edi = eax;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x21);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x10C); PUSH32(esp, 0x00159B08u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159B02u); } /* indirect call */
    }

loc_00159B08: ;
    esi = MEM32(esp + 0x230);
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7E7244);
    ecx = esi;
    PUSH32(esp, 0x00159B1Eu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159B1E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00159B8D; /* jle: less or equal (signed <=) */

loc_00159B24: ;
    edx = MEM32(edi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x21);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x108); PUSH32(esp, 0x00159B36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159B30u); } /* indirect call */
    }

loc_00159B36: ;
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    PUSH32(esp, 0x7E7230);
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x00159B4Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159B4E: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00159B62u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159B62: ;
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    PUSH32(esp, 0x7E7220);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00159B72u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159B72: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00159B88u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00159B88: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00159B24; /* jl: less (signed <) */

loc_00159B8D: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1D);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10C); PUSH32(esp, 0x00159B99u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159B93u); } /* indirect call */
    }

loc_00159B99: ;
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7E720C);
    ecx = esi;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x00159BACu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159BAC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00159C17; /* jle: less or equal (signed <=) */

loc_00159BB2: ;
    eax = MEM32(edi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1D);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x108); PUSH32(esp, 0x00159BC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159BBEu); } /* indirect call */
    }

loc_00159BC4: ;
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    PUSH32(esp, 0x7E71F0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00159BD8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159BD8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00159BE8u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159BE8: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x7E71D8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00159BF8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159BF8: ;
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00159C0Eu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00159C0E: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00159BB2; /* jl: less (signed <) */

loc_00159C17: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x1F);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x10C); PUSH32(esp, 0x00159C23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159C1Du); } /* indirect call */
    }

loc_00159C23: ;
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7E71C4);
    ecx = esi;
    MEM32(esp + 0x1C) = ebp;
    PUSH32(esp, 0x00159C36u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159C36: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00159CA5; /* jle: less or equal (signed <=) */

loc_00159C3C: ;
    /* nop */

loc_00159C40: ;
    eax = MEM32(edi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x1F);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x108); PUSH32(esp, 0x00159C52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159C4Cu); } /* indirect call */
    }

loc_00159C52: ;
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    PUSH32(esp, 0x7E71A8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00159C66u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159C66: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00159C76u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159C76: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x7E7190);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00159C86u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159C86: ;
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00159C9Cu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00159C9C: ;
    eax = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00159C40; /* jl: less (signed <) */

loc_00159CA5: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x7E7184);
    ecx = esi;
    PUSH32(esp, 0x00159CB3u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159CB3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00159CB5: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x7E7174);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00159CC5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159CC5: ;
    edx = MEM32(ebx * 4 + 0x8B0114);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00159CDEu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00159CDE: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00159CB5; /* jl: less (signed <) */

loc_00159CE4: ;
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x50), 2 (32-bit) */
    PUSH32(esp, 0x100);
    edx = esp + 0x12C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E6FE0);
    MEM8(esp + 0x1F) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    PUSH32(esp, 0x00159D08u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00159D08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159D11u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00159D11: ;
    ecx = eax;
    PUSH32(esp, 0x00159D18u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00159D18: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x43);
    ecx = edi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0x10C); PUSH32(esp, 0x00159D26u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159D20u); } /* indirect call */
    }

loc_00159D26: ;
    ebx = eax;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159D7F; /* je: equal / zero */

loc_00159D30: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x7E715C);
    PUSH32(esp, ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00159D41u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159D41: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00159D52u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159D52: ;
    PUSH32(esp, ebp);
    eax = esp + 0x2C;
    PUSH32(esp, 0x7E7148);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159D62u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159D62: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = esp + 0x12C;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00159D7Au); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00159D7A: ;
    ebp = 1;

loc_00159D7F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7E7138);
    ecx = esi;
    PUSH32(esp, 0x00159D8Cu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159D8C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00159E0E; /* jge: greater or equal (signed >=) */

loc_00159D90: ;
    MEM32(esp + 0x14) = 0;
    goto loc_00159DA0;

    /* nop */

loc_00159DA0: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x43);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x108); PUSH32(esp, 0x00159DB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159DB0u); } /* indirect call */
    }

loc_00159DB6: ;
    PUSH32(esp, ebp);
    eax = esp + 0x2C;
    PUSH32(esp, 0x7E715C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159DC6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159DC6: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00159DDAu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159DDA: ;
    PUSH32(esp, ebp);
    eax = esp + 0x2C;
    PUSH32(esp, 0x7E7148);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159DEAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159DEA: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00159E00u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00159E00: ;
    ecx = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00159DA0; /* jl: less (signed <) */

loc_00159E0E: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x44);
    ecx = edi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(eax + 0x10C); PUSH32(esp, 0x00159E1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159E16u); } /* indirect call */
    }

loc_00159E1C: ;
    ebx = eax;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159E75; /* je: equal / zero */

loc_00159E26: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x7E711C);
    PUSH32(esp, ecx);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00159E37u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159E37: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00159E48u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159E48: ;
    PUSH32(esp, ebp);
    eax = esp + 0x2C;
    PUSH32(esp, 0x7E7104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159E58u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159E58: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = esp + 0x12C;
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00159E70u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00159E70: ;
    ebp = 1;

loc_00159E75: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7E70F0);
    ecx = esi;
    PUSH32(esp, 0x00159E82u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159E82: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00159EFE; /* jge: greater or equal (signed >=) */

loc_00159E86: ;
    MEM32(esp + 0x14) = 0;
    edi = edi;

loc_00159E90: ;
    edx = MEM32(esp + 0x14);
    eax = MEM32(edi);
    ecx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x44);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x108); PUSH32(esp, 0x00159EA6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159EA0u); } /* indirect call */
    }

loc_00159EA6: ;
    PUSH32(esp, ebp);
    eax = esp + 0x2C;
    PUSH32(esp, 0x7E711C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159EB6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159EB6: ;
    ecx = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00159ECAu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159ECA: ;
    PUSH32(esp, ebp);
    eax = esp + 0x2C;
    PUSH32(esp, 0x7E7104);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00159EDAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159EDA: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00159EF0u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00159EF0: ;
    ecx = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00159E90; /* jl: less (signed <) */

loc_00159EFE: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(esp + 0x1B) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00159F1C; /* je: equal / zero */

loc_00159F0B: ;
    eax = MEM32(edi);
    ecx = esp + 0x1B;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x46);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00159F1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159F16u); } /* indirect call */
    }

loc_00159F1C: ;
    edx = MEM32(edi);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x114); PUSH32(esp, 0x00159F29u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159F23u); } /* indirect call */
    }

loc_00159F29: ;
    ebx = eax;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159F8A; /* je: equal / zero */

loc_00159F33: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00159F8A; /* je: equal / zero */

loc_00159F3B: ;
    PUSH32(esp, ebp);
    eax = esp + 0x2C;
    PUSH32(esp, 0x7E70D8);
    PUSH32(esp, eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00159F4Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159F4C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00159F5Du); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159F5D: ;
    PUSH32(esp, ebp);
    edx = esp + 0x2C;
    PUSH32(esp, 0x7E70C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00159F6Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159F6D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    eax = esp + 0x12C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00159F85u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_00159F85: ;
    ebp = 1;

loc_00159F8A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7E70B0);
    ecx = esi;
    PUSH32(esp, 0x00159F97u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159F97: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015A011; /* jge: greater or equal (signed >=) */

loc_00159F9B: ;
    MEM32(esp + 0x14) = 0;

loc_00159FA3: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(edi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x00159FB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00159FB3u); } /* indirect call */
    }

loc_00159FB9: ;
    PUSH32(esp, ebp);
    edx = esp + 0x2C;
    PUSH32(esp, 0x7E70D8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00159FC9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159FC9: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00159FDDu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_00159FDD: ;
    PUSH32(esp, ebp);
    edx = esp + 0x2C;
    PUSH32(esp, 0x7E70C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00159FEDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00159FED: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0015A003u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015A003: ;
    ecx = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00159FA3; /* jl: less (signed <) */

loc_0015A011: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(edx + 0x114); PUSH32(esp, 0x0015A01Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015A019u); } /* indirect call */
    }

loc_0015A01F: ;
    ebp = eax;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A080; /* je: equal / zero */

loc_0015A029: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A080; /* jne: not equal / not zero */

loc_0015A031: ;
    PUSH32(esp, ebx);
    eax = esp + 0x2C;
    PUSH32(esp, 0x7E7098);
    PUSH32(esp, eax);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0015A042u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015A042: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0015A053u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015A053: ;
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    PUSH32(esp, 0x7E7084);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015A063u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015A063: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    eax = esp + 0x12C;
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0015A07Bu); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015A07B: ;
    ebx = 1;

loc_0015A080: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7E7070);
    ecx = esi;
    PUSH32(esp, 0x0015A08Du); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015A08D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0015A10E; /* jge: greater or equal (signed >=) */

loc_0015A091: ;
    MEM32(esp + 0x14) = 0;
    /* nop */

loc_0015A0A0: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(edi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x110); PUSH32(esp, 0x0015A0B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015A0B0u); } /* indirect call */
    }

loc_0015A0B6: ;
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    PUSH32(esp, 0x7E7098);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015A0C6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015A0C6: ;
    eax = MEM32(esp + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0015A0DAu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015A0DA: ;
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    PUSH32(esp, 0x7E7084);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0015A0EAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0015A0EA: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0015A100u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_0015A100: ;
    ecx = MEM32(esp + 0x14);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_0015A0A0; /* jl: less (signed <) */

loc_0015A10E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x218) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x218;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A2B0
 * Original: 0x0015A2B0 - 0x0015A2CD (29 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A2B0: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    ecx = MEM32(ecx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2CA; /* je: equal / zero */

loc_0015A2C5: ;
    PUSH32(esp, 0x0015A2CAu); RECOMP_ABI_CALL(0x00022C6Fu, sub_00022C6F); /* call 0x00022C6F */

loc_0015A2CA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A2E0
 * Original: 0x0015A2E0 - 0x0015A2FD (29 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A2E0: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    ecx = MEM32(ecx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A2FA; /* je: equal / zero */

loc_0015A2F5: ;
    PUSH32(esp, 0x0015A2FAu); RECOMP_ABI_CALL(0x0002FB1Du, sub_0002FB1D); /* call 0x0002FB1D */

loc_0015A2FA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A310
 * Original: 0x0015A310 - 0x0015A374 (100 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0015A310: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E7268);
    ecx = esi;
    PUSH32(esp, 0x0015A324u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015A324: ;
    PUSH32(esp, 0x7E7258);
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0015A332u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015A332: ;
    PUSH32(esp, 0x7E7254);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0015A340u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015A340: ;
    PUSH32(esp, 0x7E7250);
    ecx = esi;
    ebp = eax;
    PUSH32(esp, 0x0015A34Eu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015A34E: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x1E0);
    ecx = MEM32(edx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A36D; /* je: equal / zero */

loc_0015A364: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0015A36Du); RECOMP_ABI_CALL(0x00027634u, sub_00027634); /* call 0x00027634 */

loc_0015A36D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A390
 * Original: 0x0015A390 - 0x0015A3C5 (53 bytes, 14 insns)
 * Category: game_ui
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A390: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1E0);
    PUSH32(esp, 0x7E7274);
    MEM8(esi + 0xF4) = 0;
    PUSH32(esp, 0x0015A3B1u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015A3B1: ;
    ecx = MEM32(esi + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0015A3C2; /* je: equal / zero */

loc_0015A3BC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015A3C2u); RECOMP_ABI_CALL(0x00029D6Cu, sub_00029D6C); /* call 0x00029D6C */

loc_0015A3C2: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A3E0
 * Original: 0x0015A3E0 - 0x0015A406 (38 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A3E0: ;
    eax = MEM32(0x8FC1D0);
    eax = MEM32(eax + 0x1E0);
    MEM8(eax + 0xF4) = 1;
    eax = MEM32(eax + 0xF8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A403; /* je: equal / zero */

loc_0015A3FC: ;
    ecx = eax;
    PUSH32(esp, 0x0015A403u); RECOMP_ABI_CALL(0x0001948Fu, sub_0001948F); /* call 0x0001948F */

loc_0015A403: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A410
 * Original: 0x0015A410 - 0x0015A460 (80 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A410: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xF8);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x7CFB5C);
    PUSH32(esp, 0x0015A430u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015A430: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A45C; /* je: equal / zero */

loc_0015A434: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0015A455; /* je: equal / zero */

loc_0015A439: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0015A44A; /* je: equal / zero */

loc_0015A43C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0015A45C; /* jne: not equal / not zero */

loc_0015A43F: ;
    ecx = esi;
    PUSH32(esp, 0x0015A446u); RECOMP_ABI_CALL(0x0001E37Cu, sub_0001E37C); /* call 0x0001E37C */

loc_0015A446: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0015A44A: ;
    ecx = esi;
    PUSH32(esp, 0x0015A451u); RECOMP_ABI_CALL(0x0001F998u, sub_0001F998); /* call 0x0001F998 */

loc_0015A451: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_0015A455: ;
    ecx = esi;
    PUSH32(esp, 0x0015A45Cu); RECOMP_ABI_CALL(0x000128D3u, sub_000128D3); /* call 0x000128D3 */

loc_0015A45C: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A480
 * Original: 0x0015A480 - 0x0015A4AD (45 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A480: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x7E7284);
    PUSH32(esp, 0x0015A48Eu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015A48E: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x1E0);
    ecx = MEM32(edx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A4AA; /* je: equal / zero */

loc_0015A4A4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015A4AAu); RECOMP_ABI_CALL(0x00033D8Fu, sub_00033D8F); /* call 0x00033D8F */

loc_0015A4AA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A4C0
 * Original: 0x0015A4C0 - 0x0015A4EC (44 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A4C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A4C0: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    ecx = MEM32(ecx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A4E9; /* je: equal / zero */

loc_0015A4D5: ;
    PUSH32(esp, 0x0015A4DAu); RECOMP_ABI_CALL(0x00015637u, sub_00015637); /* call 0x00015637 */

loc_0015A4DA: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E7284);
    PUSH32(esp, 0x0015A4E9u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015A4E9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A500
 * Original: 0x0015A500 - 0x0015A55F (95 bytes, 33 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A500: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 0x7E728C);
    ecx = edi;
    PUSH32(esp, 0x0015A513u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015A513: ;
    PUSH32(esp, 0x7CFB64);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x0015A521u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015A521: ;
    edi = eax;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    ebx = MEM32(ecx + 0xF8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A559; /* je: equal / zero */

loc_0015A538: ;
    PUSH32(esp, 0x0015A53Du); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_0015A53D: ;
    ecx = eax;
    PUSH32(esp, 0x0015A544u); RECOMP_ABI_CALL(0x00037A25u, sub_00037A25); /* call 0x00037A25 */

loc_0015A544: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x154); PUSH32(esp, 0x0015A550u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0015A54Au); } /* indirect call */
    }

loc_0015A550: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0015A559u); RECOMP_ABI_CALL(0x00027A9Eu, sub_00027A9E); /* call 0x00027A9E */

loc_0015A559: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A580
 * Original: 0x0015A580 - 0x0015A5E4 (100 bytes, 35 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A580: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E728C);
    PUSH32(esp, 0x0015A591u); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015A591: ;
    edi = eax;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    esi = MEM32(ecx + 0xF8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A5BC; /* je: equal / zero */

loc_0015A5A8: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0015A5B0u); RECOMP_ABI_CALL(0x00034DBBu, sub_00034DBB); /* call 0x00034DBB */

loc_0015A5B0: ;
    PUSH32(esp, edi);
    ecx = esi;
    ebx = eax;
    PUSH32(esp, 0x0015A5BAu); RECOMP_ABI_CALL(0x000169B5u, sub_000169B5); /* call 0x000169B5 */

loc_0015A5BA: ;
    goto loc_0015A5C0;

loc_0015A5BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0015A5C0: ;
    esi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E729C);
    ecx = esi;
    PUSH32(esp, 0x0015A5D1u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015A5D1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7CFB64);
    ecx = esi;
    PUSH32(esp, 0x0015A5DEu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015A5DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A600
 * Original: 0x0015A600 - 0x0015A650 (80 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A600: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x7E728C);
    PUSH32(esp, 0x0015A60Eu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015A60E: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x1E0);
    ecx = MEM32(edx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A63C; /* je: equal / zero */

loc_0015A624: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015A62Au); RECOMP_ABI_CALL(0x000169B5u, sub_000169B5); /* call 0x000169B5 */

loc_0015A62A: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E729C);
    PUSH32(esp, 0x0015A639u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015A639: ;
    esp += 12; return; /* ret 8 */

loc_0015A63C: ;
    ecx = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E729C);
    PUSH32(esp, 0x0015A64Du); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015A64D: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A670
 * Original: 0x0015A670 - 0x0015A6A9 (57 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A670: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x7E72AC);
    PUSH32(esp, 0x0015A67Eu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015A67E: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x1E0);
    ecx = MEM32(edx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A6A6; /* je: equal / zero */

loc_0015A694: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0015A6A1; /* jne: not equal / not zero */

loc_0015A699: ;
    PUSH32(esp, 0x0015A69Eu); RECOMP_ABI_CALL(0x00033763u, sub_00033763); /* call 0x00033763 */

loc_0015A69E: ;
    esp += 12; return; /* ret 8 */

loc_0015A6A1: ;
    PUSH32(esp, 0x0015A6A6u); RECOMP_ABI_CALL(0x0001F957u, sub_0001F957); /* call 0x0001F957 */

loc_0015A6A6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A6C0
 * Original: 0x0015A6C0 - 0x0015A6F3 (51 bytes, 13 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A6C0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x7E72BC);
    PUSH32(esp, 0x0015A6CEu); RECOMP_ABI_CALL(0x000293CBu, sub_000293CB); /* call 0x000293CB */

loc_0015A6CE: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x1E0);
    ecx = MEM32(edx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A6F0; /* je: equal / zero */

loc_0015A6E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0015A6F0u); RECOMP_ABI_CALL(0x00026F95u, sub_00026F95); /* call 0x00026F95 */

loc_0015A6F0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A700
 * Original: 0x0015A700 - 0x0015A732 (50 bytes, 14 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0015A700: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E0);
    ecx = MEM32(ecx + 0xF8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0015A72F; /* je: equal / zero */

loc_0015A715: ;
    PUSH32(esp, 0x0015A71Au); RECOMP_ABI_CALL(0x000135EEu, sub_000135EE); /* call 0x000135EE */

loc_0015A71A: ;
    ecx = MEM32(esp + 8);
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E72BC);
    PUSH32(esp, 0x0015A72Fu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015A72F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0015A740
 * Original: 0x0015A740 - 0x0015A7C8 (136 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0015A740(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0015A740: ;
    eax = 0x1018;
    PUSH32(esp, 0x0015A74Au); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_0015A74A: ;
    ecx = esp;
    PUSH32(esp, 0x0015A752u); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_0015A752: ;
    eax = MEM32(esp + 0x101C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E6E58);
    ecx = esp + 8;
    PUSH32(esp, 0x0015A768u); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015A768: ;
    ecx = MEM32(esp + 0x1020);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E72C8);
    ecx = esp + 8;
    PUSH32(esp, 0x0015A77Eu); RECOMP_ABI_CALL(0x00027733u, sub_00027733); /* call 0x00027733 */

loc_0015A77E: ;
    PUSH32(esp, 0x1000);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ecx = esp + 8;
    MEM32(esp + 0x1C) = 0x28;
    PUSH32(esp, 0x0015A799u); RECOMP_ABI_CALL(0x00017905u, sub_00017905); /* call 0x00017905 */

loc_0015A799: ;
    ecx = esp + 0xC;
    eax = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F06F4);
    MEM32(esp + 0x10) = 0x4B64ADB;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x0015A7B9u); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_0015A7B9: ;
    ecx = esp;
    PUSH32(esp, 0x0015A7C1u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_0015A7C1: ;
    _fb = (uint32_t)(0x1018) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1018;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
