/**
 * nhl_07_recomp - Recompiled code chunk 156
 * Functions: 250 (0x002FD2D0 - 0x00304280)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_002FD2D0
 * Original: 0x002FD2D0 - 0x002FD2EB (27 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD2D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FD2D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x48D8683) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0x48D8683 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FD2E8; /* jne: not equal / not zero */

loc_002FD2DC: ;
    eax = MEM32(eax + 4);
    edx = MEM32(ecx);
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_002FD2E8: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FD300
 * Original: 0x002FD300 - 0x002FD372 (114 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FD300: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x824160;
    MEM32(esi + 0xDC) = 0x824154;
    ecx = esi + 0x1C0;
    MEM32(0x8FC1D0) = 0;
    PUSH32(esp, 0x002FD328u); RECOMP_ABI_CALL(0x0059C9B1u, sub_0059C9B1); /* call 0x0059C9B1 */

loc_002FD328: ;
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x002FD333u); RECOMP_ABI_CALL(0x0059C9B1u, sub_0059C9B1); /* call 0x0059C9B1 */

loc_002FD333: ;
    ecx = esi + 0x180;
    PUSH32(esp, 0x002FD33Eu); RECOMP_ABI_CALL(0x0059C9B1u, sub_0059C9B1); /* call 0x0059C9B1 */

loc_002FD33E: ;
    ecx = esi + 0x160;
    PUSH32(esp, 0x002FD349u); RECOMP_ABI_CALL(0x0059C9B1u, sub_0059C9B1); /* call 0x0059C9B1 */

loc_002FD349: ;
    ecx = esi + 0x140;
    PUSH32(esp, 0x002FD354u); RECOMP_ABI_CALL(0x0059C9B1u, sub_0059C9B1); /* call 0x0059C9B1 */

loc_002FD354: ;
    ecx = esi + 0x120;
    PUSH32(esp, 0x002FD35Fu); RECOMP_ABI_CALL(0x0059C9B1u, sub_0059C9B1); /* call 0x0059C9B1 */

loc_002FD35F: ;
    ecx = esi + 0x100;
    PUSH32(esp, 0x002FD36Au); RECOMP_ABI_CALL(0x0059C9B1u, sub_0059C9B1); /* call 0x0059C9B1 */

loc_002FD36A: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0002871E(); return; /* tail jmp 0x0002871E */

}

/**
 * sub_002FD390
 * Original: 0x002FD390 - 0x002FD391 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD390(void)
{

loc_002FD390: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FD3A0
 * Original: 0x002FD3A0 - 0x002FD3A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD3A0(void)
{

loc_002FD3A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FD3B0
 * Original: 0x002FD3B0 - 0x002FD3B3 (3 bytes, 1 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD3B0(void)
{

loc_002FD3B0: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002FD3C0
 * Original: 0x002FD3C0 - 0x002FD3C3 (3 bytes, 1 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD3C0(void)
{

loc_002FD3C0: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_002FD3D0
 * Original: 0x002FD3D0 - 0x002FD3F8 (40 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD3D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xE8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002FD3E1u); RECOMP_ABI_CALL(0x0001B6EAu, sub_0001B6EA); /* call 0x0001B6EA */

loc_002FD3E1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FD3E3: ;
    ecx = MEM32(edi + 0xE8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FD3EFu); RECOMP_ABI_CALL(0x0001EB1Fu, sub_0001EB1F); /* call 0x0001EB1F */

loc_002FD3EF: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FD3E3; /* jl: less (signed <) */

loc_002FD3F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FD410
 * Original: 0x002FD410 - 0x002FD4B2 (162 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD410: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ecx = 0xA;
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(0x8FC1D0);
    eax = 1;
    PUSH32(esp, esi);
    MEM32(esp + 8) = 0;
    MEM32(esp + 0xC) = 0x32000;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = 0x20000;
    MEM8(esp + 0x20) = LO8(eax);
    esi = MEM32(ecx + 0xE8);
    SET_LO8(ebx, MEM8(esi + 0x34D));
    PUSH32(esp, 0);
    PUSH32(esp, 0x4B000);
    MEM8(esi + 0x34D) = LO8(eax);
    PUSH32(esp, 0x002FD46Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FD46B: ;
    MEM32(esp + 0x10) = eax;
    MEM8(esi + 0x34D) = LO8(ebx);
    MEM32(esp + 0x14) = 0x4B000;
    MEM32(esp + 0x1C) = 3;
    MEM32(esp + 0x20) = 0x2D000;
    MEM32(esp + 0x18) = 4;
    PUSH32(esp, 0x002FD49Au); RECOMP_ABI_CALL(0x0001685Cu, sub_0001685C); /* call 0x0001685C */

loc_002FD49A: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002FD4A4u); RECOMP_ABI_CALL(0x000204FBu, sub_000204FB); /* call 0x000204FB */

loc_002FD4A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002FD4ACu); RECOMP_ABI_CALL(0x000334A7u, sub_000334A7); /* call 0x000334A7 */

loc_002FD4AC: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FD4E0
 * Original: 0x002FD4E0 - 0x002FD4EA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FD4E0: ;
    PUSH32(esp, 0x002FD4E5u); RECOMP_ABI_CALL(0x0003526Bu, sub_0003526B); /* call 0x0003526B */

loc_002FD4E5: ;
    g_seh_ebp = ebp; sub_00011492(); return; /* tail jmp 0x00011492 */

}

/**
 * sub_002FD4F0
 * Original: 0x002FD4F0 - 0x002FD500 (16 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD4F0(void)
{

loc_002FD4F0: ;
    eax = MEM32(ecx + 0xE0);
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x1C) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FD510
 * Original: 0x002FD510 - 0x002FD516 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD510(void)
{

loc_002FD510: ;
    eax = 0x82419C;
    esp += 4; return; /* ret */

}

/**
 * sub_002FD520
 * Original: 0x002FD520 - 0x002FD649 (297 bytes, 78 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD520: ;
    eax = MEM32(0x909394);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(eax + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x324);
    MEM32(0x8FC1E8) = ecx;
    PUSH32(esp, 0x002FD541u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FD541: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FD567; /* je: equal / zero */

loc_002FD54A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x8FC1E8);
    ecx = edi;
    PUSH32(esp, 0x002FD558u); RECOMP_ABI_CALL(0x000140DEu, sub_000140DE); /* call 0x000140DE */

loc_002FD558: ;
    MEM32(edi + 0x320) = ebx;
    MEM32(edi) = 0x824018;
    POP32(esp, ebx);
    goto loc_002FD569;

loc_002FD567: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FD569: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    MEM32(esi + 0xE0) = edi;
    PUSH32(esp, 0x002FD578u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FD578: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FD591; /* je: equal / zero */

loc_002FD57F: ;
    edx = MEM32(esi + 0xE0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x002FD58Fu); RECOMP_ABI_CALL(0x000355E5u, sub_000355E5); /* call 0x000355E5 */

loc_002FD58F: ;
    goto loc_002FD593;

loc_002FD591: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FD593: ;
    MEM32(esi + 0xE4) = eax;
    eax = esp + 8;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = 0x50;
    PUSH32(esp, 0x002FD5ABu); RECOMP_ABI_CALL(0x00598D5Du, sub_00598D5D); /* call 0x00598D5D */

loc_002FD5AB: ;
    ecx = MEM32(esi + 0xE4);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = 0x32;
    MEM32(esp + 0x58) = 0x15E2A;
    MEM32(esp + 0x38) = 0x40000;
    MEM32(esp + 0x2C) = 0x3800;
    PUSH32(esp, 0x002FD5DFu); RECOMP_ABI_CALL(0x00598D87u, sub_00598D87); /* call 0x00598D87 */

loc_002FD5DF: ;
    eax = MEM32(esi + 0xE0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002FD5EBu); RECOMP_ABI_CALL(0x0002AFC8u, sub_0002AFC8); /* call 0x0002AFC8 */

loc_002FD5EB: ;
    ecx = MEM32(esi + 0xE0);
    PUSH32(esp, 0xC8);
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x1E);
    MEM32(0x902558) = ecx;
    PUSH32(esp, 0x002FD607u); RECOMP_ABI_CALL(0x00033E8Eu, sub_00033E8E); /* call 0x00033E8E */

loc_002FD607: ;
    edx = MEM32(esi + 0xE8);
    MEM32(0x90934C) = edx;
    eax = MEM32(esi + 0xE8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7B891F);
    MEM32(0x909348) = eax;
    PUSH32(esp, 0x002FD62Bu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_002FD62B: ;
    ecx = eax;
    PUSH32(esp, 0x002FD632u); RECOMP_ABI_CALL(0x00028C6Eu, sub_00028C6E); /* call 0x00028C6E */

loc_002FD632: ;
    PUSH32(esp, 0x8241A8);
    PUSH32(esp, 0x002FD63Cu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_002FD63C: ;
    ecx = eax;
    PUSH32(esp, 0x002FD643u); RECOMP_ABI_CALL(0x00028C6Eu, sub_00028C6E); /* call 0x00028C6E */

loc_002FD643: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FD6A0
 * Original: 0x002FD6A0 - 0x002FD6A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD6A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FD6A0: ;
    g_seh_ebp = ebp; sub_00019322(); return; /* tail jmp 0x00019322 */

}

/**
 * sub_002FD6B0
 * Original: 0x002FD6B0 - 0x002FD6EE (62 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FD6B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002FD6E1; /* je: equal / zero */

loc_002FD6BB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002FD6D4; /* je: equal / zero */

loc_002FD6BE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002FD6EB; /* jne: not equal / not zero */

loc_002FD6C1: ;
    MEM32(esp + 4) = 1;
    _fb = (uint32_t)(0xFFFFFF24u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFF24u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000358E7(); return; /* tail jmp 0x000358E7 */

loc_002FD6D4: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x002FD6DEu); RECOMP_ABI_CALL(0x00032886u, sub_00032886); /* call 0x00032886 */

loc_002FD6DE: ;
    esp += 8; return; /* ret 4 */

loc_002FD6E1: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x002FD6EBu); RECOMP_ABI_CALL(0x00026AD1u, sub_00026AD1); /* call 0x00026AD1 */

loc_002FD6EB: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FD700
 * Original: 0x002FD700 - 0x002FD7B9 (185 bytes, 57 insns)
 * Category: game_ui
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD700: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FD751; /* jne: not equal / not zero */

loc_002FD708: ;
    PUSH32(esp, 0x300);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002FD714u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FD714: ;
    edx = MEM32(0x8241E4);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(0x8241E8);
    MEM32(ecx + 4) = edx;
    edx = MEM32(0x8241EC);
    MEM32(ecx + 8) = edx;
    edx = MEM32(0x8241F0);
    MEM32(ecx + 0xC) = edx;
    edx = MEM32(0x8241F4);
    MEM32(ecx + 0x10) = edx;
    SET_LO8(edx, MEM8(0x8241F8));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 0x14) = LO8(edx);
    esp += 8; return; /* ret 4 */

loc_002FD751: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_002FD782; /* jne: not equal / not zero */

loc_002FD757: ;
    PUSH32(esp, 0x300);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002FD763u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FD763: ;
    esi = eax;
    PUSH32(esp, 0x002FD76Au); RECOMP_ABI_CALL(0x005A06C1u, sub_005A06C1); /* call 0x005A06C1 */

loc_002FD76A: ;
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x8241D0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FD779u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002FD779: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_002FD782: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x002FD78Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FD78E: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    PUSH32(esp, 0x8241B4);
    PUSH32(esp, esi);
    MEM32(ecx + 0x14) = eax;
    PUSH32(esp, 0x002FD7B0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_002FD7B0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FD7F0
 * Original: 0x002FD7F0 - 0x002FD8C8 (216 bytes, 64 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FD7F0: ;
    SET_LO8(eax, MEM8(0x8FC1CA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_002FD8A1; /* jne: not equal / not zero */

loc_002FD800: ;
    SET_LO8(eax, MEM8(0x907EF8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FD8A1; /* jne: not equal / not zero */

loc_002FD80D: ;
    eax = MEM32(0x8FC1D0);
    PUSH32(esp, esi);
    MEM8(eax + 0x1D) = 1;
    edx = MEM32(0x8BFE70);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = 0x8BFE70;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002FD826u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FD823u); } /* indirect call */
    }

loc_002FD826: ;
    edx = MEM32(esp + 0x10);
    esi = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    ecx = ebp;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(0x8C4679) = 1;
    PUSH32(esp, 0x002FD841u); RECOMP_ABI_CALL(0x00015AF6u, sub_00015AF6); /* call 0x00015AF6 */

loc_002FD841: ;
    ecx = MEM32(esp + 0x18);
    edi = eax;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FD84Eu); RECOMP_ABI_CALL(0x000358BFu, sub_000358BF); /* call 0x000358BF */

loc_002FD84E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FD854u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002FD854: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FD864; /* je: equal / zero */

loc_002FD860: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FD887; /* jne: not equal / not zero */

loc_002FD864: ;
    ecx = MEM32(0x8FCBD8);
    PUSH32(esp, 0x002FD86Fu); RECOMP_ABI_CALL(0x00032B1Fu, sub_00032B1F); /* call 0x00032B1F */

loc_002FD86F: ;
    ecx = eax;
    eax = 0xCCCCCCCDu;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = MEM32(0x8FCBD8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    PUSH32(esp, 0x002FD887u); RECOMP_ABI_CALL(0x000183A5u, sub_000183A5); /* call 0x000183A5 */

loc_002FD887: ;
    eax = MEM32(0x8FCBD8);
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(eax + 0x18) = ecx;
    POP32(esp, esi);
    MEM8(ebp + 0x228) = 1;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_002FD8A1: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(0x8FC1D0);
    PUSH32(esp, eax);
    MEM8(edx + 0x1D) = 1;
    PUSH32(esp, 0x824200);
    MEM8(0x8C4679) = 0;
    PUSH32(esp, 0x002FD8C1u); RECOMP_ABI_CALL(0x000358BFu, sub_000358BF); /* call 0x000358BF */

loc_002FD8C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002FD900
 * Original: 0x002FD900 - 0x002FDA6B (363 bytes, 105 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FD900(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FD900: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    PUSH32(esp, 0x002FD911u); RECOMP_ABI_CALL(0x00018D2Du, sub_00018D2D); /* call 0x00018D2D */

loc_002FD911: ;
    ebx = 1;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x18) = 0;
    MEM32(esp + 0xC) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x002FD93Bu); RECOMP_ABI_CALL(0x0001E390u, sub_0001E390); /* call 0x0001E390 */

loc_002FD93B: ;
    PUSH32(esp, 0x002FD940u); RECOMP_ABI_CALL(0x0001F03Du, sub_0001F03D); /* call 0x0001F03D */

loc_002FD940: ;
    PUSH32(esp, 0x002FD945u); RECOMP_ABI_CALL(0x000363FFu, sub_000363FF); /* call 0x000363FF */

loc_002FD945: ;
    PUSH32(esp, 0x002FD94Au); RECOMP_ABI_CALL(0x00035590u, sub_00035590); /* call 0x00035590 */

loc_002FD94A: ;
    ecx = eax;
    PUSH32(esp, 0x002FD951u); RECOMP_ABI_CALL(0x0002282Du, sub_0002282D); /* call 0x0002282D */

loc_002FD951: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002FD958u); RECOMP_ABI_CALL(0x0001D189u, sub_0001D189); /* call 0x0001D189 */

loc_002FD958: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002FD960u); RECOMP_ABI_CALL(0x00023AF7u, sub_00023AF7); /* call 0x00023AF7 */

loc_002FD960: ;
    PUSH32(esp, 0x002FD965u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_002FD965: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002FD96Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FD969u); } /* indirect call */
    }

loc_002FD96C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x002FD973u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FD970u); } /* indirect call */
    }

loc_002FD973: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x824218);
    PUSH32(esp, 0x002FD97Eu); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_002FD97E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x002FD988u); RECOMP_ABI_CALL(0x0003302Eu, sub_0003302E); /* call 0x0003302E */

loc_002FD988: ;
    ecx = eax;
    PUSH32(esp, 0x002FD98Fu); RECOMP_ABI_CALL(0x0002219Du, sub_0002219D); /* call 0x0002219D */

loc_002FD98F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FD996u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_002FD996: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002FD99Eu); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_002FD99E: ;
    ecx = eax;
    PUSH32(esp, 0x002FD9A5u); RECOMP_ABI_CALL(0x0003577Fu, sub_0003577F); /* call 0x0003577F */

loc_002FD9A5: ;
    edi = eax;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002FD9AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FD9ABu); } /* indirect call */
    }

loc_002FD9AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FD9D4; /* je: equal / zero */

loc_002FD9B2: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x002FD9B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FD9B6u); } /* indirect call */
    }

loc_002FD9B9: ;
    eax = MEM32(0x900268);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FD9D4; /* je: equal / zero */

loc_002FD9C2: ;
    MEM32(eax + 0x18) = 5;
    ecx = MEM32(0x900268);
    PUSH32(esp, 0x002FD9D4u); RECOMP_ABI_CALL(0x00017423u, sub_00017423); /* call 0x00017423 */

loc_002FD9D4: ;
    PUSH32(esp, 0x400);
    PUSH32(esp, 0x002FD9DEu); RECOMP_ABI_CALL(0x0053F850u, sub_0053F850); /* call 0x0053F850 */

loc_002FD9DE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x104);
    PUSH32(esp, 0x002FD9EAu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FD9EA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FDA08; /* je: equal / zero */

loc_002FD9F1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x229));
    edx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x002FDA06u); RECOMP_ABI_CALL(0x00013D46u, sub_00013D46); /* call 0x00013D46 */

loc_002FDA06: ;
    goto loc_002FDA0A;

loc_002FDA08: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FDA0A: ;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x1E0) = eax;
    PUSH32(esp, 0x002FDA18u); RECOMP_ABI_CALL(0x0002BFBDu, sub_0002BFBD); /* call 0x0002BFBD */

loc_002FDA18: ;
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, 0);
    eax = esi + 0xDC;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002FDA32u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_002FDA32: ;
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    MEM8(ecx + 0x19) = LO8(ebx);
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, 0x824208);
    PUSH32(esp, 0x002FDA4Eu); RECOMP_ABI_CALL(0x00017E0Fu, sub_00017E0F); /* call 0x00017E0F */

loc_002FDA4E: ;
    SET_LO8(eax, MEM8(esi + 0x228));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FDA5D; /* je: equal / zero */

loc_002FDA58: ;
    PUSH32(esp, 0x002FDA5Du); RECOMP_ABI_CALL(0x0002AA2Du, sub_0002AA2D); /* call 0x0002AA2D */

loc_002FDA5D: ;
    POP32(esp, edi);
    MEM8(esi + 0x229) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FDAD0
 * Original: 0x002FDAD0 - 0x002FDADD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDAD0(void)
{

loc_002FDAD0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xD8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FDAE0
 * Original: 0x002FDAE0 - 0x002FDAEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDAE0(void)
{

loc_002FDAE0: ;
    MEM32(ecx + 0xD8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_002FDAF0
 * Original: 0x002FDAF0 - 0x002FDAFE (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDAF0(void)
{

loc_002FDAF0: ;
    ecx = MEM32(ecx + 0x1E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002FDAFDu); RECOMP_ABI_CALL(0x00031CDDu, sub_00031CDD); /* call 0x00031CDD */

loc_002FDAFD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FDB10
 * Original: 0x002FDB10 - 0x002FDB30 (32 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDB10(void)
{

loc_002FDB10: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x82423C);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x002FDB24u); RECOMP_ABI_CALL(0x00030220u, sub_00030220); /* call 0x00030220 */

loc_002FDB24: ;
    MEM32(esi) = 0x824230;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FDB40
 * Original: 0x002FDB40 - 0x002FDB4B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDB40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FDB40: ;
    MEM32(ecx) = 0x824230;
    g_seh_ebp = ebp; sub_0001C18A(); return; /* tail jmp 0x0001C18A */

}

/**
 * sub_002FDB50
 * Original: 0x002FDB50 - 0x002FDB51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDB50(void)
{

loc_002FDB50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FDB60
 * Original: 0x002FDB60 - 0x002FDB67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDB60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FDB60: ;
    MEM32(ecx + 0x224) = MEM32(ecx + 0x224) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x224)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_002FDB70
 * Original: 0x002FDB70 - 0x002FDB77 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDB70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FDB70: ;
    MEM32(ecx + 0x224) = MEM32(ecx + 0x224) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x224)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_002FDB80
 * Original: 0x002FDB80 - 0x002FDB99 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FDB80: ;
    eax = MEM32(ecx + 0x210);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FDB98; /* jne: not equal / not zero */

loc_002FDB8A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002FDB91u); RECOMP_ABI_CALL(0x0001F0BFu, sub_0001F0BF); /* call 0x0001F0BF */

loc_002FDB91: ;
    ecx = eax;
    PUSH32(esp, 0x002FDB98u); RECOMP_ABI_CALL(0x00031D37u, sub_00031D37); /* call 0x00031D37 */

loc_002FDB98: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FDBA0
 * Original: 0x002FDBA0 - 0x002FDBA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDBA0(void)
{

loc_002FDBA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FDBB0
 * Original: 0x002FDBB0 - 0x002FDC29 (121 bytes, 33 insns)
 * Category: game_audio
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDBB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FDBB0: ;
    PUSH32(esp, 0x002FDBB5u); RECOMP_ABI_CALL(0x0003302Eu, sub_0003302E); /* call 0x0003302E */

loc_002FDBB5: ;
    ecx = eax;
    PUSH32(esp, 0x002FDBBCu); RECOMP_ABI_CALL(0x0002071Cu, sub_0002071C); /* call 0x0002071C */

loc_002FDBBC: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8242B8);
    PUSH32(esp, 0x002FDBC8u); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_002FDBC8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8242A0);
    MEM32(0x8FCBDC) = eax;
    PUSH32(esp, 0x002FDBD9u); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_002FDBD9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x824288);
    MEM32(0x8FC1D8) = eax;
    PUSH32(esp, 0x002FDBEAu); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_002FDBEA: ;
    MEM32(0x8FC1DC) = eax;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FDC14; /* je: equal / zero */

loc_002FDBFB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FDC14; /* je: equal / zero */

loc_002FDBFF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x824270);
    PUSH32(esp, 0x002FDC0Bu); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_002FDC0B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FC1E0) = eax;
    esp += 4; return; /* ret */

loc_002FDC14: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x824254);
    PUSH32(esp, 0x002FDC20u); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_002FDC20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FC1E0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002FDC50
 * Original: 0x002FDC50 - 0x002FDC51 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDC50(void)
{

loc_002FDC50: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FDC60
 * Original: 0x002FDC60 - 0x002FDC95 (53 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FDC60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    esi = ecx;
    PUSH32(esp, 0x002FDC6Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FDC6C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FDC8B; /* je: equal / zero */

loc_002FDC73: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x30);
    ecx = eax;
    PUSH32(esp, 0x002FDC83u); RECOMP_ABI_CALL(0x0001E9C1u, sub_0001E9C1); /* call 0x0001E9C1 */

loc_002FDC83: ;
    MEM32(esi + 0x20C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002FDC8B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x20C) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FDCB0
 * Original: 0x002FDCB0 - 0x002FDCCF (31 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FDCB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FDCC3; /* je: equal / zero */

loc_002FDCBD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002FDCC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FDCC1u); } /* indirect call */
    }

loc_002FDCC3: ;
    MEM32(esi + 0x20C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FDCE0
 * Original: 0x002FDCE0 - 0x002FDCE3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDCE0(void)
{

loc_002FDCE0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_002FDCF0
 * Original: 0x002FDCF0 - 0x002FDCFF (15 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDCF0(void)
{

loc_002FDCF0: ;
    ecx = MEM32(ecx + 0x1E4);
    PUSH32(esp, 0x002FDCFBu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_002FDCFB: ;
    eax = MEM32(eax + 0x48);
    esp += 4; return; /* ret */

}

/**
 * sub_002FDD10
 * Original: 0x002FDD10 - 0x002FDD3C (44 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDD10(void)
{

loc_002FDD10: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x8242E0);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002FDD29u); RECOMP_ABI_CALL(0x00011780u, sub_00011780); /* call 0x00011780 */

loc_002FDD29: ;
    edx = MEM32(esp + 0x10);
    MEM32(esi) = 0x8242D4;
    MEM32(esi + 0x28) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002FDD50
 * Original: 0x002FDD50 - 0x002FDD5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDD50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FDD50: ;
    MEM32(ecx) = 0x8242D4;
    g_seh_ebp = ebp; sub_0001C18A(); return; /* tail jmp 0x0001C18A */

}

/**
 * sub_002FDD60
 * Original: 0x002FDD60 - 0x002FDD8C (44 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDD60(void)
{

loc_002FDD60: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, 0x8242F8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x002FDD79u); RECOMP_ABI_CALL(0x00011780u, sub_00011780); /* call 0x00011780 */

loc_002FDD79: ;
    edx = MEM32(esp + 0x10);
    MEM32(esi) = 0x8242EC;
    MEM32(esi + 0x28) = edx;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002FDDA0
 * Original: 0x002FDDA0 - 0x002FDDAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDDA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FDDA0: ;
    MEM32(ecx) = 0x8242EC;
    g_seh_ebp = ebp; sub_0001C18A(); return; /* tail jmp 0x0001C18A */

}

/**
 * sub_002FDDB0
 * Original: 0x002FDDB0 - 0x002FDE37 (135 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FDDB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002FDDB8u); RECOMP_ABI_CALL(0x00018B9Du, sub_00018B9D); /* call 0x00018B9D */

loc_002FDDB8: ;
    PUSH32(esp, 0x002FDDBDu); RECOMP_ABI_CALL(0x00034406u, sub_00034406); /* call 0x00034406 */

loc_002FDDBD: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002FDDC6u); RECOMP_ABI_CALL(0x000115AAu, sub_000115AA); /* call 0x000115AA */

loc_002FDDC6: ;
    SET_LO8(eax, MEM8(0x8C36FC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FDE22; /* jne: not equal / not zero */

loc_002FDDD2: ;
    PUSH32(esp, 0x002FDDD7u); RECOMP_ABI_CALL(0x000306B2u, sub_000306B2); /* call 0x000306B2 */

loc_002FDDD7: ;
    PUSH32(esp, 0x002FDDDCu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_002FDDDC: ;
    ecx = eax;
    PUSH32(esp, 0x002FDDE3u); RECOMP_ABI_CALL(0x00025E1Fu, sub_00025E1F); /* call 0x00025E1F */

loc_002FDDE3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002FDDECu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_002FDDEC: ;
    ecx = eax;
    PUSH32(esp, 0x002FDDF3u); RECOMP_ABI_CALL(0x0002FB63u, sub_0002FB63); /* call 0x0002FB63 */

loc_002FDDF3: ;
    PUSH32(esp, 0x002FDDF8u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_002FDDF8: ;
    ecx = eax;
    PUSH32(esp, 0x002FDDFFu); RECOMP_ABI_CALL(0x00023A34u, sub_00023A34); /* call 0x00023A34 */

loc_002FDDFF: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 2);
    PUSH32(esp, 0x002FDE0Cu); RECOMP_ABI_CALL(0x0001F277u, sub_0001F277); /* call 0x0001F277 */

loc_002FDE0C: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x002FDE17u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_002FDE17: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002FDE1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FDE1Bu); } /* indirect call */
    }

loc_002FDE1D: ;
    PUSH32(esp, 0x002FDE22u); RECOMP_ABI_CALL(0x00034C71u, sub_00034C71); /* call 0x00034C71 */

loc_002FDE22: ;
    PUSH32(esp, 0x002FDE27u); RECOMP_ABI_CALL(0x00025050u, sub_00025050); /* call 0x00025050 */

loc_002FDE27: ;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002FDE32u); RECOMP_ABI_CALL(0x0002D55Cu, sub_0002D55C); /* call 0x0002D55C */

loc_002FDE32: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FDE60
 * Original: 0x002FDE60 - 0x002FDFBB (347 bytes, 87 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FDE60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FDE60: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002FDE68u); RECOMP_ABI_CALL(0x0002EA60u, sub_0002EA60); /* call 0x0002EA60 */

loc_002FDE68: ;
    PUSH32(esp, 0x002FDE6Du); RECOMP_ABI_CALL(0x00028C28u, sub_00028C28); /* call 0x00028C28 */

loc_002FDE6D: ;
    eax = MEM32(0x8F6A28);
    PUSH32(esp, 0);
    PUSH32(esp, 8);
    MEM32(0x89615C) = eax;
    PUSH32(esp, 0x002FDE80u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FDE80: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FDE96; /* je: equal / zero */

loc_002FDE87: ;
    MEM32(eax) = 0x823F68;
    MEM32(eax + 4) = 0;
    goto loc_002FDE98;

loc_002FDE96: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FDE98: ;
    MEM32(esi + 0x208) = eax;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FDEC6; /* jne: not equal / not zero */

loc_002FDEA7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x002FDEAFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FDEAF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FDEBF; /* je: equal / zero */

loc_002FDEB6: ;
    ecx = eax;
    PUSH32(esp, 0x002FDEBDu); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_002FDEBD: ;
    goto loc_002FDEC1;

loc_002FDEBF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FDEC1: ;
    MEM32(0x8FA278) = eax;

loc_002FDEC6: ;
    ecx = MEM32(esi + 0x208);
    PUSH32(esp, 0x32);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002FDED6u); RECOMP_ABI_CALL(0x00021176u, sub_00021176); /* call 0x00021176 */

loc_002FDED6: ;
    PUSH32(esp, 0x002FDEDBu); RECOMP_ABI_CALL(0x0001ACB8u, sub_0001ACB8); /* call 0x0001ACB8 */

loc_002FDEDB: ;
    PUSH32(esp, 0x002FDEE0u); RECOMP_ABI_CALL(0x0002FFFFu, sub_0002FFFF); /* call 0x0002FFFF */

loc_002FDEE0: ;
    ecx = 0x8BFE50;
    PUSH32(esp, 0x002FDEEAu); RECOMP_ABI_CALL(0x00027C10u, sub_00027C10); /* call 0x00027C10 */

loc_002FDEEA: ;
    PUSH32(esp, 0x002FDEEFu); RECOMP_ABI_CALL(0x000289D0u, sub_000289D0); /* call 0x000289D0 */

loc_002FDEEF: ;
    PUSH32(esp, 0x002FDEF4u); RECOMP_ABI_CALL(0x000236A6u, sub_000236A6); /* call 0x000236A6 */

loc_002FDEF4: ;
    PUSH32(esp, 0x002FDEF9u); RECOMP_ABI_CALL(0x0001D4B8u, sub_0001D4B8); /* call 0x0001D4B8 */

loc_002FDEF9: ;
    PUSH32(esp, 0x002FDEFEu); RECOMP_ABI_CALL(0x00033673u, sub_00033673); /* call 0x00033673 */

loc_002FDEFE: ;
    PUSH32(esp, 0x002FDF03u); RECOMP_ABI_CALL(0x0001C068u, sub_0001C068); /* call 0x0001C068 */

loc_002FDF03: ;
    PUSH32(esp, 0x002FDF08u); RECOMP_ABI_CALL(0x00012108u, sub_00012108); /* call 0x00012108 */

loc_002FDF08: ;
    PUSH32(esp, 0x002FDF0Du); RECOMP_ABI_CALL(0x0002271Fu, sub_0002271F); /* call 0x0002271F */

loc_002FDF0D: ;
    PUSH32(esp, 0x002FDF12u); RECOMP_ABI_CALL(0x00031972u, sub_00031972); /* call 0x00031972 */

loc_002FDF12: ;
    edx = MEM32(esi + 0x20C);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002FDF21u); RECOMP_ABI_CALL(0x00028CC8u, sub_00028CC8); /* call 0x00028CC8 */

loc_002FDF21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002FDF29u); RECOMP_ABI_CALL(0x000192CDu, sub_000192CD); /* call 0x000192CD */

loc_002FDF29: ;
    MEM8(0x896172) = 1;
    PUSH32(esp, 0x002FDF35u); RECOMP_ABI_CALL(0x0001AE52u, sub_0001AE52); /* call 0x0001AE52 */

loc_002FDF35: ;
    PUSH32(esp, 0x002FDF3Au); RECOMP_ABI_CALL(0x0002E7AEu, sub_0002E7AE); /* call 0x0002E7AE */

loc_002FDF3A: ;
    PUSH32(esp, 0x002FDF3Fu); RECOMP_ABI_CALL(0x000321BAu, sub_000321BA); /* call 0x000321BA */

loc_002FDF3F: ;
    PUSH32(esp, 0x002FDF44u); RECOMP_ABI_CALL(0x000193F9u, sub_000193F9); /* call 0x000193F9 */

loc_002FDF44: ;
    PUSH32(esp, 0x002FDF49u); RECOMP_ABI_CALL(0x00031D73u, sub_00031D73); /* call 0x00031D73 */

loc_002FDF49: ;
    PUSH32(esp, 0x002FDF4Eu); RECOMP_ABI_CALL(0x00028246u, sub_00028246); /* call 0x00028246 */

loc_002FDF4E: ;
    _fa = (uint32_t)(MEM16(0x896166)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896166), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FDF5F; /* jne: not equal / not zero */

loc_002FDF58: ;
    PUSH32(esp, 0x002FDF5Du); RECOMP_ABI_CALL(0x00026AB8u, sub_00026AB8); /* call 0x00026AB8 */

loc_002FDF5D: ;
    goto loc_002FDF6C;

loc_002FDF5F: ;
    ecx = MEM32(0x8E9248);
    MEM32(ecx + 0x34) = 2;

loc_002FDF6C: ;
    PUSH32(esp, 0x002FDF71u); RECOMP_ABI_CALL(0x0002B892u, sub_0002B892); /* call 0x0002B892 */

loc_002FDF71: ;
    ecx = 0x8E9390;
    MEM8(0x8BFE90) = 1;
    PUSH32(esp, 0x002FDF82u); RECOMP_ABI_CALL(0x00025A28u, sub_00025A28); /* call 0x00025A28 */

loc_002FDF82: ;
    PUSH32(esp, 0x002FDF87u); RECOMP_ABI_CALL(0x000215EAu, sub_000215EA); /* call 0x000215EA */

loc_002FDF87: ;
    ecx = 0x8EFCB8;
    PUSH32(esp, 0x002FDF91u); RECOMP_ABI_CALL(0x0002C2E7u, sub_0002C2E7); /* call 0x0002C2E7 */

loc_002FDF91: ;
    PUSH32(esp, 0x002FDF96u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_002FDF96: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002FDF9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FDF9Au); } /* indirect call */
    }

loc_002FDF9D: ;
    PUSH32(esp, 0x002FDFA2u); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_002FDFA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FDFB2; /* je: equal / zero */

loc_002FDFA6: ;
    PUSH32(esp, 0x002FDFABu); RECOMP_ABI_CALL(0x00011686u, sub_00011686); /* call 0x00011686 */

loc_002FDFAB: ;
    ecx = eax;
    PUSH32(esp, 0x002FDFB2u); RECOMP_ABI_CALL(0x000318D2u, sub_000318D2); /* call 0x000318D2 */

loc_002FDFB2: ;
    MEM8(esi + 0x1DC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE020
 * Original: 0x002FE020 - 0x002FE0C2 (162 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FE020: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002FE028u); RECOMP_ABI_CALL(0x00011974u, sub_00011974); /* call 0x00011974 */

loc_002FE028: ;
    PUSH32(esp, 0x002FE02Du); RECOMP_ABI_CALL(0x00037C23u, sub_00037C23); /* call 0x00037C23 */

loc_002FE02D: ;
    PUSH32(esp, 0x002FE032u); RECOMP_ABI_CALL(0x00033CA4u, sub_00033CA4); /* call 0x00033CA4 */

loc_002FE032: ;
    PUSH32(esp, 0x002FE037u); RECOMP_ABI_CALL(0x0003252Fu, sub_0003252F); /* call 0x0003252F */

loc_002FE037: ;
    PUSH32(esp, 0x002FE03Cu); RECOMP_ABI_CALL(0x00021BBCu, sub_00021BBC); /* call 0x00021BBC */

loc_002FE03C: ;
    PUSH32(esp, 0x002FE041u); RECOMP_ABI_CALL(0x00029E2Fu, sub_00029E2F); /* call 0x00029E2F */

loc_002FE041: ;
    PUSH32(esp, 0x002FE046u); RECOMP_ABI_CALL(0x0002DC00u, sub_0002DC00); /* call 0x0002DC00 */

loc_002FE046: ;
    PUSH32(esp, 0x002FE04Bu); RECOMP_ABI_CALL(0x00029439u, sub_00029439); /* call 0x00029439 */

loc_002FE04B: ;
    PUSH32(esp, 0x002FE050u); RECOMP_ABI_CALL(0x00022940u, sub_00022940); /* call 0x00022940 */

loc_002FE050: ;
    PUSH32(esp, 0x002FE055u); RECOMP_ABI_CALL(0x00021441u, sub_00021441); /* call 0x00021441 */

loc_002FE055: ;
    PUSH32(esp, 0x002FE05Au); RECOMP_ABI_CALL(0x00013C8Du, sub_00013C8D); /* call 0x00013C8D */

loc_002FE05A: ;
    PUSH32(esp, 0x002FE05Fu); RECOMP_ABI_CALL(0x000156F0u, sub_000156F0); /* call 0x000156F0 */

loc_002FE05F: ;
    PUSH32(esp, 0x002FE064u); RECOMP_ABI_CALL(0x0003229Bu, sub_0003229B); /* call 0x0003229B */

loc_002FE064: ;
    PUSH32(esp, 0x002FE069u); RECOMP_ABI_CALL(0x00023BFBu, sub_00023BFB); /* call 0x00023BFB */

loc_002FE069: ;
    PUSH32(esp, 0x002FE06Eu); RECOMP_ABI_CALL(0x00032B29u, sub_00032B29); /* call 0x00032B29 */

loc_002FE06E: ;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FE096; /* jne: not equal / not zero */

loc_002FE077: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x002FE07Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FE07F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE08F; /* je: equal / zero */

loc_002FE086: ;
    ecx = eax;
    PUSH32(esp, 0x002FE08Du); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_002FE08D: ;
    goto loc_002FE091;

loc_002FE08F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FE091: ;
    MEM32(0x8FA278) = eax;

loc_002FE096: ;
    ecx = eax;
    PUSH32(esp, 0x002FE09Du); RECOMP_ABI_CALL(0x00037B79u, sub_00037B79); /* call 0x00037B79 */

loc_002FE09D: ;
    PUSH32(esp, 0x002FE0A2u); RECOMP_ABI_CALL(0x00031E0Eu, sub_00031E0E); /* call 0x00031E0E */

loc_002FE0A2: ;
    ecx = 0x8BFE50;
    PUSH32(esp, 0x002FE0ACu); RECOMP_ABI_CALL(0x00023840u, sub_00023840); /* call 0x00023840 */

loc_002FE0AC: ;
    ecx = MEM32(esi + 0x208);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_002FE0BD; /* je: equal / zero */

loc_002FE0B7: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002FE0BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FE0BBu); } /* indirect call */
    }

loc_002FE0BD: ;
    g_seh_ebp = ebp; sub_0003755C(); return; /* tail jmp 0x0003755C */

}

/**
 * sub_002FE0F0
 * Original: 0x002FE0F0 - 0x002FE19A (170 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE0F0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x002FE0FFu); RECOMP_ABI_CALL(0x00018D2Du, sub_00018D2D); /* call 0x00018D2D */

loc_002FE0FF: ;
    eax = 5;
    PUSH32(esp, 0);
    PUSH32(esp, 0x100);
    MEM32(esp + 0x10) = 4;
    MEM32(esp + 0x18) = 3;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = 2;
    MEM32(esp + 0x24) = 0;
    PUSH32(esp, 0x002FE138u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FE138: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE14D; /* je: equal / zero */

loc_002FE13F: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002FE14Bu); RECOMP_ABI_CALL(0x00037764u, sub_00037764); /* call 0x00037764 */

loc_002FE14B: ;
    goto loc_002FE14F;

loc_002FE14D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FE14F: ;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x1E0) = eax;
    PUSH32(esp, 0x002FE15Du); RECOMP_ABI_CALL(0x0002BFBDu, sub_0002BFBD); /* call 0x0002BFBD */

loc_002FE15D: ;
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, 0);
    edx = esi + 0xDC;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002FE177u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_002FE177: ;
    eax = MEM32(esi + 0x1E0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    MEM8(eax + 0x19) = 1;
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, 0x824304);
    PUSH32(esp, 0x002FE195u); RECOMP_ABI_CALL(0x00017E0Fu, sub_00017E0F); /* call 0x00017E0F */

loc_002FE195: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FE1D0
 * Original: 0x002FE1D0 - 0x002FE228 (88 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE1D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE1D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE1DF; /* je: equal / zero */

loc_002FE1D7: ;
    eax = esi + 0xDC;
    goto loc_002FE1E1;

loc_002FE1DF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FE1E1: ;
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002FE1F3u); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_002FE1F3: ;
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, 0x002FE1FEu); RECOMP_ABI_CALL(0x0001B2ADu, sub_0001B2AD); /* call 0x0001B2AD */

loc_002FE1FE: ;
    eax = MEM32(esi + 0x1E0);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002FE20Cu); RECOMP_ABI_CALL(0x000280EDu, sub_000280ED); /* call 0x000280ED */

loc_002FE20C: ;
    ecx = MEM32(esi + 0x1E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE21C; /* je: equal / zero */

loc_002FE216: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002FE21Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FE21Au); } /* indirect call */
    }

loc_002FE21C: ;
    MEM32(esi + 0x1E0) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE240
 * Original: 0x002FE240 - 0x002FE261 (33 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE240(void)
{

loc_002FE240: ;
    edx = MEM32(ecx + 0xE8);
    eax = ecx + 0x38;
    PUSH32(esp, eax);
    MEM32(ecx + 0x3C) = 1;
    MEM32(eax) = edx;
    MEM32(ecx + 0x50) = 0x44C;
    PUSH32(esp, 0x002FE25Fu); RECOMP_ABI_CALL(0x0002F2EEu, sub_0002F2EE); /* call 0x0002F2EE */

loc_002FE25F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE270
 * Original: 0x002FE270 - 0x002FE290 (32 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE270(void)
{

loc_002FE270: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x824328);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x002FE284u); RECOMP_ABI_CALL(0x00018E81u, sub_00018E81); /* call 0x00018E81 */

loc_002FE284: ;
    MEM32(esi) = 0x824318;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FE2A0
 * Original: 0x002FE2A0 - 0x002FE2AB (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE2A0(void)
{

loc_002FE2A0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0x30);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FE2B0
 * Original: 0x002FE2B0 - 0x002FE2B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE2B0(void)
{

loc_002FE2B0: ;
    eax = MEM32(0x8FCBE0);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE2C0
 * Original: 0x002FE2C0 - 0x002FE2D1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE2C0(void)
{

loc_002FE2C0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = ecx;
    MEM32(eax) = 0;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002FE2E0
 * Original: 0x002FE2E0 - 0x002FE2E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE2E0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002FE2E0: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002FE2F0
 * Original: 0x002FE2F0 - 0x002FE358 (104 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE2F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE2F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82434C);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002FE307u); RECOMP_ABI_CALL(0x000243B2u, sub_000243B2); /* call 0x000243B2 */

loc_002FE307: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEM8(esi + 0x1C) = LO8(ebx);
    MEM8(esi + 0x1D) = LO8(ebx);
    MEM8(esi + 0x1E) = LO8(ebx);
    MEM32(esi + 0x2C) = edi;
    MEM32(esi) = 0x824340;
    MEMF(0x8FC1F8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    MEMF(0x8FC200) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD450)); /* movss */
    MEM32(0x8FC1F4) = ebx;
    MEMF(0x8FC1FC) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEM8(esi + 0x20) = LO8(ebx);
    MEM8(esi + 0x1F) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FE380
 * Original: 0x002FE380 - 0x002FE38B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FE380: ;
    MEM32(ecx) = 0x824340;
    g_seh_ebp = ebp; sub_000323C2(); return; /* tail jmp 0x000323C2 */

}

/**
 * sub_002FE390
 * Original: 0x002FE390 - 0x002FE3AC (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE390(void)
{
    int _flags = 0; /* fallback flag var */
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_002FE390: ;
    eax = MEM32(esp + 4);
    fp_push(MEMF(eax)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AD3D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_002FE3AB; /* jbe: below or equal (unsigned <=) */

loc_002FE3A4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_002FE3AB: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002FE3C0
 * Original: 0x002FE3C0 - 0x002FE3EB (43 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE3C0(void)
{

loc_002FE3C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x824380);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x002FE3D4u); RECOMP_ABI_CALL(0x00023467u, sub_00023467); /* call 0x00023467 */

loc_002FE3D4: ;
    MEM32(esi) = 0x824374;
    MEM32(esi + 0x5C) = 0x824368;
    MEM8(esi + 0x44) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FE400
 * Original: 0x002FE400 - 0x002FE412 (18 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FE400: ;
    MEM32(ecx) = 0x824374;
    MEM32(ecx + 0x5C) = 0x824368;
    g_seh_ebp = ebp; sub_00036792(); return; /* tail jmp 0x00036792 */

}

/**
 * sub_002FE420
 * Original: 0x002FE420 - 0x002FE423 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE420(void)
{

loc_002FE420: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FE430
 * Original: 0x002FE430 - 0x002FE654 (548 bytes, 159 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FE430: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x002FE442u); RECOMP_ABI_CALL(0x000368DCu, sub_000368DC); /* call 0x000368DC */

loc_002FE442: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x78);
    MEM32(esi) = 0x8243A0;
    MEM32(esi + 0xD0) = ebp;
    MEM32(esi + 0xD8) = ebp;
    MEM32(esi + 0xE0) = ebp;
    PUSH32(esp, 0x002FE464u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FE464: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE48E; /* je: equal / zero */

loc_002FE46D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x824380);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x002FE47Bu); RECOMP_ABI_CALL(0x00023467u, sub_00023467); /* call 0x00023467 */

loc_002FE47B: ;
    MEM32(edi) = 0x824374;
    MEM32(edi + 0x5C) = 0x824368;
    MEM8(edi + 0x44) = 0;
    goto loc_002FE490;

loc_002FE48E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FE490: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x824394);
    ecx = esi;
    MEM32(esi + 0xD4) = edi;
    PUSH32(esp, 0x002FE4A3u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_002FE4A3: ;
    ecx = eax;
    PUSH32(esp, 0x002FE4AAu); RECOMP_ABI_CALL(0x00021DE2u, sub_00021DE2); /* call 0x00021DE2 */

loc_002FE4AA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    ecx = esp + 0x20;
    PUSH32(esp, 0x002FE4B6u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_002FE4B6: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x002FE4C3u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_002FE4C3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002FE4CBu); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_002FE4CB: ;
    ecx = eax;
    PUSH32(esp, 0x002FE4D2u); RECOMP_ABI_CALL(0x000366BBu, sub_000366BB); /* call 0x000366BB */

loc_002FE4D2: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x002FE4DBu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_002FE4DB: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x002FE4E4u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_002FE4E4: ;
    PUSH32(esp, 0x824394);
    ecx = esi;
    PUSH32(esp, 0x002FE4F0u); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_002FE4F0: ;
    ecx = eax;
    PUSH32(esp, 0x002FE4F7u); RECOMP_ABI_CALL(0x00021DE2u, sub_00021DE2); /* call 0x00021DE2 */

loc_002FE4F7: ;
    ecx = MEM32(esi + 0xD4);
    PUSH32(esp, 0x824394);
    PUSH32(esp, 0x002FE507u); RECOMP_ABI_CALL(0x00021DE2u, sub_00021DE2); /* call 0x00021DE2 */

loc_002FE507: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x002FE510u); RECOMP_ABI_CALL(0x0001C054u, sub_0001C054); /* call 0x0001C054 */

loc_002FE510: ;
    ecx = MEM32(esi + 0x2C);
    eax = MEM32(0x8FC1D0);
    MEM32(esp + 0x30) = 2;
    MEM32(esp + 0x24) = 0x7D0;
    MEM32(esp + 0x20) = ecx;
    edx = MEM32(eax + 0xE8);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x28) = 0x99000;
    MEM32(esp + 0x2C) = 0x33000;
    eax = MEM32(eax + 0xE8);
    SET_LO8(ebx, MEM8(eax + 0x34D));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x588);
    MEM8(eax + 0x34D) = 1;
    PUSH32(esp, 0x002FE564u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FE564: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE579; /* je: equal / zero */

loc_002FE56B: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002FE577u); RECOMP_ABI_CALL(0x0002BB9Eu, sub_0002BB9E); /* call 0x0002BB9E */

loc_002FE577: ;
    goto loc_002FE57B;

loc_002FE579: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FE57B: ;
    MEM32(esi + 0xD0) = eax;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0xE8);
    MEM8(eax + 0x34D) = LO8(ebx);
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0xD0);
    MEM32(ecx + 4) = edx;
    edi = MEM32(esi + 0xD0);
    ecx = esi;
    PUSH32(esp, 0x002FE5ACu); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_002FE5AC: ;
    MEM32(eax + 0x48) = edi;
    edi = MEM32(esi + 0xD0);
    ecx = esi;
    PUSH32(esp, 0x002FE5BCu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_002FE5BC: ;
    MEM32(eax + 0x48) = edi;
    eax = MEM32(esi + 0xD4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x2C);
    MEM32(eax + 0x48) = ebp;
    PUSH32(esp, 0x002FE5D0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FE5D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002FE5E2; /* je: equal / zero */

loc_002FE5D8: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x002FE5E0u); RECOMP_ABI_CALL(0x00036C88u, sub_00036C88); /* call 0x00036C88 */

loc_002FE5E0: ;
    goto loc_002FE5E4;

loc_002FE5E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FE5E4: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x30);
    MEM32(esi + 0xE0) = eax;
    PUSH32(esp, 0x002FE5F2u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FE5F2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE603; /* je: equal / zero */

loc_002FE5F9: ;
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x002FE601u); RECOMP_ABI_CALL(0x0002BE55u, sub_0002BE55); /* call 0x0002BE55 */

loc_002FE601: ;
    goto loc_002FE605;

loc_002FE603: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FE605: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x1C);
    MEM32(esi + 0xD8) = eax;
    PUSH32(esp, 0x002FE613u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FE613: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE641; /* je: equal / zero */

loc_002FE61C: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x824328);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x002FE62Au); RECOMP_ABI_CALL(0x00018E81u, sub_00018E81); /* call 0x00018E81 */

loc_002FE62A: ;
    MEM32(edi) = 0x824318;
    MEM32(esi + 0xDC) = edi;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_002FE641: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xDC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FE6E0
 * Original: 0x002FE6E0 - 0x002FE769 (137 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE6E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FE6E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xDC);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi) = 0x8243A0;
    if (CMP_EQ(_fa, _fb)) goto loc_002FE6FC; /* je: equal / zero */

loc_002FE6F6: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002FE6FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FE6FAu); } /* indirect call */
    }

loc_002FE6FC: ;
    ecx = MEM32(esi + 0xD8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0xDC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002FE712; /* je: equal / zero */

loc_002FE70C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002FE712u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FE710u); } /* indirect call */
    }

loc_002FE712: ;
    ecx = MEM32(esi + 0xE0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0xD8) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002FE728; /* je: equal / zero */

loc_002FE722: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002FE728u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FE726u); } /* indirect call */
    }

loc_002FE728: ;
    ecx = MEM32(esi + 0x2C);
    MEM32(esi + 0xE0) = edi;
    MEM32(ecx + 4) = edi;
    ecx = MEM32(esi + 0xD0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE744; /* je: equal / zero */

loc_002FE73E: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x002FE744u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FE742u); } /* indirect call */
    }

loc_002FE744: ;
    ecx = MEM32(esi + 0xD4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi + 0xD0) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_002FE75A; /* je: equal / zero */

loc_002FE754: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002FE75Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FE758u); } /* indirect call */
    }

loc_002FE75A: ;
    MEM32(esi + 0xD4) = edi;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014AA7(); return; /* tail jmp 0x00014AA7 */

}

/**
 * sub_002FE790
 * Original: 0x002FE790 - 0x002FE7D3 (67 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE790(void)
{

loc_002FE790: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x002FE799u); RECOMP_ABI_CALL(0x00025C94u, sub_00025C94); /* call 0x00025C94 */

loc_002FE799: ;
    ecx = MEM32(esi + 0xD0);
    PUSH32(esp, 0x002FE7A4u); RECOMP_ABI_CALL(0x0002F98Du, sub_0002F98D); /* call 0x0002F98D */

loc_002FE7A4: ;
    ecx = MEM32(esi + 0xD0);
    eax = MEM32(esi + 0x2C);
    MEM32(eax + 4) = ecx;
    edi = MEM32(esi + 0xD0);
    ecx = esi;
    PUSH32(esp, 0x002FE7BDu); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_002FE7BD: ;
    MEM32(eax + 0x48) = edi;
    edi = MEM32(esi + 0xD0);
    ecx = esi;
    PUSH32(esp, 0x002FE7CDu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_002FE7CD: ;
    MEM32(eax + 0x48) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE7F0
 * Original: 0x002FE7F0 - 0x002FE80A (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE7F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002FE7FF; /* jae: above or equal (unsigned >=) */

loc_002FE7F9: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_002FE7FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_002FE809; /* jbe: below or equal (unsigned <=) */

loc_002FE804: ;
    eax = 6;

loc_002FE809: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FE810
 * Original: 0x002FE810 - 0x002FE81A (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE810: ;
    eax = MEM32(eax);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, ~LO8(eax));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FE820
 * Original: 0x002FE820 - 0x002FE82C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002FE820: ;
    SET_LO8(eax, MEM8(eax + 3));
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0x1F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FE830
 * Original: 0x002FE830 - 0x002FE83F (15 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE830(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002FE830: ;
    eax = ZX8(MEM8(eax + 0xB4));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(ecx));
    eax = eax - ecx;
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

}

/**
 * sub_002FE850
 * Original: 0x002FE850 - 0x002FE86E (30 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE850: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x1F000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FE86B; /* jne: not equal / not zero */

loc_002FE859: ;
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 6), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002FE86B; /* jne: not equal / not zero */

loc_002FE85F: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(eax, ~LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FE86B; /* je: equal / zero */

loc_002FE868: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_002FE86B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FE880
 * Original: 0x002FE880 - 0x002FE89C (28 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FE880: ;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_002FE899; /* ja: above (unsigned >) */

loc_002FE888: ;
    eax = ZX8(MEM8(eax + 0x2FE8A4));
    { uint32_t _jt = MEM32(eax * 4 + 0x2FE89C); /* switch: 2 entries, 2 targets */
    if (_jt == 0x002FE896u) goto loc_002FE896;
    if (_jt == 0x002FE899u) goto loc_002FE899;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_002FE896: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_002FE899: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FE8D0
 * Original: 0x002FE8D0 - 0x002FE8F8 (40 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE8D0: ;
    edx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002FE8E0;

    /* nop */

loc_002FE8E0: ;
    _fa = (uint32_t)(MEM32(ecx * 8 + 0x824450)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx * 8 + 0x824450), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FE8F0; /* je: equal / zero */

loc_002FE8E9: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FE8E0; /* jl: less (signed <) */

loc_002FE8EF: ;
    esp += 4; return; /* ret */

loc_002FE8F0: ;
    eax = MEM32(ecx * 8 + 0x824454);
    esp += 4; return; /* ret */

}

/**
 * sub_002FE910
 * Original: 0x002FE910 - 0x002FE92E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FE910: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002FE918u); RECOMP_ABI_CALL(0x0002CDE1u, sub_0002CDE1); /* call 0x0002CDE1 */

loc_002FE918: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FE928; /* je: equal / zero */

loc_002FE91F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FE925u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002FE925: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002FE928: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FE940
 * Original: 0x002FE940 - 0x002FE94A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE940(void)
{

loc_002FE940: ;
    eax = MEM32(ecx + 0xD4);
    SET_LO8(eax, MEM8(eax + 0x44));
    esp += 4; return; /* ret */

}

/**
 * sub_002FE950
 * Original: 0x002FE950 - 0x002FE96E (30 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE950(void)
{

loc_002FE950: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FCBE0);
    PUSH32(esp, 0x002FE95Eu); RECOMP_ABI_CALL(0x0001A89Eu, sub_0001A89E); /* call 0x0001A89E */

loc_002FE95E: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002FE96Au); RECOMP_ABI_CALL(0x00026766u, sub_00026766); /* call 0x00026766 */

loc_002FE96A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FE980
 * Original: 0x002FE980 - 0x002FE990 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE980(void)
{

loc_002FE980: ;
    eax = MEM32(ecx + 0x2C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x002FE98Fu); RECOMP_ABI_CALL(0x0001A407u, sub_0001A407); /* call 0x0001A407 */

loc_002FE98F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FE9A0
 * Original: 0x002FE9A0 - 0x002FE9B0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE9A0(void)
{

loc_002FE9A0: ;
    eax = MEM32(ecx + 0x2C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002FE9AFu); RECOMP_ABI_CALL(0x0001A407u, sub_0001A407); /* call 0x0001A407 */

loc_002FE9AF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FE9C0
 * Original: 0x002FE9C0 - 0x002FEA2B (107 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FE9C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_002FE9C0: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FE9CDu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_002FE9CD: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x002FE9D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FE9D1u); } /* indirect call */
    }

loc_002FE9D4: ;
    ecx = MEM32(0x8F9CCC);
    esi = eax;
    PUSH32(esp, 0x002FE9E1u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_002FE9E1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x002FE9E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FE9E5u); } /* indirect call */
    }

loc_002FE9E8: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x002FE9F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FE9EEu); } /* indirect call */
    }

loc_002FE9F1: ;
    SET_LO8(ebx, LO8(eax));
    eax = MEM32(esi);
    _cf = (int)((LO8(ebx)) != 0);
    SET_LO8(ebx, (uint32_t)(-(int32_t)LO8(ebx)));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    SET_LO8(ebx, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    PUSH32(esp, 0);
    ecx = esi;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002FEA03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FEA01u); } /* indirect call */
    }

loc_002FEA03: ;
    POP32(esp, esi);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002FEA1A; /* je: equal / zero */

loc_002FEA09: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC8)) >> 32) & 1);
    eax = eax + 0xC8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x002FEA16u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_002FEA16: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002FEA1A: ;
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x12C)) >> 32) & 1);
    eax = eax + 0x12C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x002FEA27u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_002FEA27: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FEA50
 * Original: 0x002FEA50 - 0x002FEA5A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEA50(void)
{

loc_002FEA50: ;
    eax = MEM32(esp + 4);
    MEM32(0x8FC1F0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_002FEA60
 * Original: 0x002FEA60 - 0x002FEA8E (46 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEA60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FEA60: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B106);
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FEA85u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_002FEA85: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002FEAA0
 * Original: 0x002FEAA0 - 0x002FEAAA (10 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEAA0(void)
{

loc_002FEAA0: ;
    eax = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002FEAA8u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_002FEAA8: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002FEAB0
 * Original: 0x002FEAB0 - 0x002FEAB6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEAB0(void)
{

loc_002FEAB0: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_002FEAC0
 * Original: 0x002FEAC0 - 0x002FEAC8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FEAC0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00020988(); return; /* tail jmp 0x00020988 */

}

/**
 * sub_002FEAD0
 * Original: 0x002FEAD0 - 0x002FEAEF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEAD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FEAD0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x823ED8;
    if (TEST_Z(_fa, _fb)) goto loc_002FEAE9; /* je: equal / zero */

loc_002FEAE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FEAE6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002FEAE6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002FEAE9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FEB00
 * Original: 0x002FEB00 - 0x002FEB42 (66 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEB00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FEB00: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    SET_LO8(edx, 1);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ecx + 0x21) = LO8(edx);
    MEM32(ecx + 0x24) = eax;
    MEM32(ecx + 0x28) = 0xFFFFFFFFu;
    MEM8(ecx + 0x20) = LO8(eax);
    MEM8(ecx + 0x22) = LO8(edx);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x10) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x18) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x14) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x1C) = xmm0.f[0]; /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_002FEB60
 * Original: 0x002FEB60 - 0x002FEB7C (28 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FEB60: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FEB7B; /* je: equal / zero */

loc_002FEB71: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x002FEB7Bu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_002FEB7B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FEB90
 * Original: 0x002FEB90 - 0x002FEBF0 (96 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FEB90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM8(0x8C36FC) = 1;
    if (CMP_LE(_fas, _fbs)) goto loc_002FEBEC; /* jle: less or equal (signed <=) */

loc_002FEBA6: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    goto loc_002FEBB0;

    /* nop */

loc_002FEBB0: ;
    eax = MEM32(edi + esi * 4);
    PUSH32(esp, 0x824868);
    PUSH32(esp, eax);
    PUSH32(esp, 0x002FEBBEu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_002FEBBE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FEBCB; /* jne: not equal / not zero */

loc_002FEBC5: ;
    MEM32(0x8C36F8) = ebx;

loc_002FEBCB: ;
    ecx = MEM32(edi + esi * 4);
    PUSH32(esp, 0x82485C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x002FEBD9u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_002FEBD9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FEBE6; /* jne: not equal / not zero */

loc_002FEBE0: ;
    MEM8(0x8C36F4) = LO8(ebx);

loc_002FEBE6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FEBB0; /* jl: less (signed <) */

loc_002FEBEB: ;
    POP32(esp, edi);

loc_002FEBEC: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_002FEC10
 * Original: 0x002FEC10 - 0x002FEFCC (956 bytes, 228 insns)
 * Category: game_physics
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FEC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FEC10: ;
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x350);
    esi = ecx;
    PUSH32(esp, 0x002FEC22u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FEC22: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FEC32; /* je: equal / zero */

loc_002FEC29: ;
    ecx = eax;
    PUSH32(esp, 0x002FEC30u); RECOMP_ABI_CALL(0x0002F889u, sub_0002F889); /* call 0x0002F889 */

loc_002FEC30: ;
    goto loc_002FEC34;

loc_002FEC32: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FEC34: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x910);
    MEM32(esi + 0xE8) = eax;
    MEM32(esi + 0xD0) = eax;
    edi = esi + 0x100;
    PUSH32(esp, 0x002FEC55u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FEC55: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xE8);
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0xFC) = eax;
    PUSH32(esp, 0x002FEC6Du); RECOMP_ABI_CALL(0x0059C9B7u, sub_0059C9B7); /* call 0x0059C9B7 */

loc_002FEC6D: ;
    PUSH32(esp, 0);
    MEM32(0x915A3C) = edi;
    PUSH32(esp, 0x6CC0);
    edi = esi + 0x120;
    PUSH32(esp, 0x002FEC85u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FEC85: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xE8);
    PUSH32(esp, 0x78);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0x11C) = eax;
    PUSH32(esp, 0x002FEC9Du); RECOMP_ABI_CALL(0x0059C9B7u, sub_0059C9B7); /* call 0x0059C9B7 */

loc_002FEC9D: ;
    PUSH32(esp, 0);
    MEM32(0x9159B0) = edi;
    PUSH32(esp, 0x140);
    edi = esi + 0x140;
    PUSH32(esp, 0x002FECB5u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FECB5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x14);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0x13C) = eax;
    PUSH32(esp, 0x002FECCAu); RECOMP_ABI_CALL(0x0059C9B7u, sub_0059C9B7); /* call 0x0059C9B7 */

loc_002FECCA: ;
    PUSH32(esp, 0);
    MEM32(0x9159B4) = edi;
    PUSH32(esp, 0x2D0);
    edi = esi + 0x160;
    PUSH32(esp, 0x002FECE2u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FECE2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x3C);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0x15C) = eax;
    PUSH32(esp, 0x002FECF7u); RECOMP_ABI_CALL(0x0059C9B7u, sub_0059C9B7); /* call 0x0059C9B7 */

loc_002FECF7: ;
    PUSH32(esp, 0);
    MEM32(0x9159AC) = edi;
    PUSH32(esp, 0x1D010);
    edi = esi + 0x1C0;
    PUSH32(esp, 0x002FED0Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FED0F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0xA8C);
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0x1BC) = eax;
    PUSH32(esp, 0x002FED27u); RECOMP_ABI_CALL(0x0059C9B7u, sub_0059C9B7); /* call 0x0059C9B7 */

loc_002FED27: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x3800);
    ebx = esi + 0x1A0;
    PUSH32(esp, 0x002FED39u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FED39: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x1C0);
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esi + 0x19C) = eax;
    PUSH32(esp, 0x002FED51u); RECOMP_ABI_CALL(0x0059C9B7u, sub_0059C9B7); /* call 0x0059C9B7 */

loc_002FED51: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x9A00);
    ebp = esi + 0x180;
    PUSH32(esp, 0x002FED63u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FED63: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x17C) = eax;
    PUSH32(esp, 0x58);
    PUSH32(esp, 0x1C0);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x002FED7Bu); RECOMP_ABI_CALL(0x0059C9B7u, sub_0059C9B7); /* call 0x0059C9B7 */

loc_002FED7B: ;
    eax = MEM32(0x8C3700);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xD) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    ecx = esp + 0x14;
    MEM32(esp + 0x14) = eax;
    MEM32(0x9153C4) = ebp;
    MEM32(0x9153BC) = ebx;
    MEM32(0x9153C0) = edi;
    eax = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xE8);
    MEM32(esp + 0x30) = 4;
    MEM32(esp + 0x34) = 8;
    MEM32(esp + 0x38) = 0xC;
    MEM32(esp + 0x3C) = 0x10;
    MEM32(esp + 0x40) = 0x14;
    MEM32(esp + 0x44) = 0x20;
    MEM32(esp + 0x48) = 0x30;
    MEM32(esp + 0x4C) = 0x40;
    MEM32(esp + 0x50) = 0x50;
    MEM32(esp + 0x54) = 0x60;
    MEM32(esp + 0x58) = 0x70;
    MEM32(esp + 0x5C) = 0x80;
    MEM32(esp + 0x60) = 0x90;
    MEM32(esp + 0x64) = 0xA0;
    MEM32(esp + 0x68) = 0xB0;
    MEM32(esp + 0x6C) = 0xC0;
    MEM32(esp + 0x70) = 0xD0;
    MEM32(esp + 0x74) = 0xE0;
    MEM32(esp + 0x78) = 0x100;
    MEM32(esp + 0x7C) = 0x110;
    MEM32(esp + 0x80) = 0x130;
    MEM32(esp + 0x84) = 0x140;
    MEM32(esp + 0x88) = 0x160;
    MEM32(esp + 0x8C) = 0x170;
    MEM32(esp + 0x90) = 0x190;
    MEM32(esp + 0x1C) = 0x2000;
    MEM32(esp + 0x28) = 0x8248AC;
    MEM8(esp + 0x2C) = 0;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = 0x19;
    PUSH32(esp, 0x002FEEB0u); RECOMP_ABI_CALL(0x0001AA65u, sub_0001AA65); /* call 0x0001AA65 */

loc_002FEEB0: ;
    eax = MEM32(esi + 0xE8);
    SET_LO8(ebx, MEM8(eax + 0x34D));
    PUSH32(esp, 0);
    PUSH32(esp, 0x334);
    MEM8(eax + 0x34D) = 1;
    PUSH32(esp, 0x002FEECFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FEECF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FEEEE; /* je: equal / zero */

loc_002FEED6: ;
    edx = MEM32(0x8C3708);
    PUSH32(esp, 0x100);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x002FEEECu); RECOMP_ABI_CALL(0x0002451Au, sub_0002451A); /* call 0x0002451A */

loc_002FEEEC: ;
    goto loc_002FEEF0;

loc_002FEEEE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FEEF0: ;
    MEM32(esi + 0xEC) = eax;
    MEM32(esi + 0xCC) = eax;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    MEM8(ecx + 0x34D) = LO8(ebx);
    PUSH32(esp, 0x002FEF16u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FEF16: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_002FEF35; /* je: equal / zero */

loc_002FEF20: ;
    edx = MEM32(esi + 0xE8);
    PUSH32(esp, 0x824894);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x002FEF33u); RECOMP_ABI_CALL(0x000355E5u, sub_000355E5); /* call 0x000355E5 */

loc_002FEF33: ;
    goto loc_002FEF37;

loc_002FEF35: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FEF37: ;
    PUSH32(esp, 0);
    MEM32(esi + 0xF0) = eax;
    PUSH32(esp, 0x10);
    MEM32(0x9153B8) = eax;
    PUSH32(esp, 0x002FEF4Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FEF4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FEF67; /* je: equal / zero */

loc_002FEF52: ;
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, 0x824888);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002FEF65u); RECOMP_ABI_CALL(0x000355E5u, sub_000355E5); /* call 0x000355E5 */

loc_002FEF65: ;
    goto loc_002FEF69;

loc_002FEF67: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FEF69: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    MEM32(esi + 0xF4) = eax;
    PUSH32(esp, 0x002FEF78u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FEF78: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FEF94; /* je: equal / zero */

loc_002FEF7F: ;
    edx = MEM32(esi + 0xE8);
    PUSH32(esp, 0x824870);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x002FEF92u); RECOMP_ABI_CALL(0x000355E5u, sub_000355E5); /* call 0x000355E5 */

loc_002FEF92: ;
    goto loc_002FEF96;

loc_002FEF94: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FEF96: ;
    PUSH32(esp, eax);
    MEM32(esi + 0xF8) = eax;
    PUSH32(esp, 0x002FEFA2u); RECOMP_ABI_CALL(0x005A1D72u, sub_005A1D72); /* call 0x005A1D72 */

loc_002FEFA2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002FEFAAu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_002FEFAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FEFBA; /* je: equal / zero */

loc_002FEFAE: ;
    PUSH32(esp, 0x002FEFB3u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_002FEFB3: ;
    ecx = eax;
    PUSH32(esp, 0x002FEFBAu); RECOMP_ABI_CALL(0x0057524Eu, sub_0057524E); /* call 0x0057524E */

loc_002FEFBA: ;
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x002FEFC7u); RECOMP_ABI_CALL(0x0002A168u, sub_0002A168); /* call 0x0002A168 */

loc_002FEFC7: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x7C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FF0C0
 * Original: 0x002FF0C0 - 0x002FF10F (79 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF0C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x320);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x8240B8;
    if (CMP_EQ(_fa, _fb)) goto loc_002FF0D9; /* je: equal / zero */

loc_002FF0D3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x002FF0D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FF0D7u); } /* indirect call */
    }

loc_002FF0D9: ;
    ecx = MEM32(esi + 0x330);
    PUSH32(esp, ecx);
    MEM32(esi + 0x320) = 0;
    PUSH32(esp, 0x002FF0EFu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002FF0EF: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    MEM32(esi) = 0x823ED8;
    if (TEST_Z(_fa, _fb)) goto loc_002FF109; /* je: equal / zero */

loc_002FF100: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FF106u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002FF106: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002FF109: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FF130
 * Original: 0x002FF130 - 0x002FF173 (67 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF130: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + 0x32C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    if (CMP_BE(_fa, _fb)) goto loc_002FF15E; /* jbe: below or equal (unsigned <=) */

loc_002FF14A: ;
    ecx = MEM32(ecx + 0x320);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002FF155u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FF152u); } /* indirect call */
    }

loc_002FF155: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF16F; /* jne: not equal / not zero */

loc_002FF159: ;
    /* int3: debug-trap slide byte, stepped over */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_002FF15E: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x002FF16Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FF16Cu); } /* indirect call */
    }

loc_002FF16F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_002FF190
 * Original: 0x002FF190 - 0x002FF1DD (77 bytes, 28 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF190: ;
    eax = MEM32(esp + 8);
    edx = MEM32(ecx + 0x32C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    if (CMP_BE(_fa, _fb)) goto loc_002FF1C8; /* jbe: below or equal (unsigned <=) */

loc_002FF1B4: ;
    ecx = MEM32(ecx + 0x320);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x002FF1BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FF1BCu); } /* indirect call */
    }

loc_002FF1BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF1D9; /* jne: not equal / not zero */

loc_002FF1C3: ;
    /* int3: debug-trap slide byte, stepped over */
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_002FF1C8: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x002FF1D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FF1D6u); } /* indirect call */
    }

loc_002FF1D9: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_002FF1F0
 * Original: 0x002FF1F0 - 0x002FF2EB (251 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF1F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF1F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x002FF1FEu); RECOMP_ABI_CALL(0x000192AAu, sub_000192AA); /* call 0x000192AA */

loc_002FF1FE: ;
    MEM32(esi + 0xDC) = 0x824148;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x100;
    MEM32(esi) = 0x824160;
    MEM32(esi + 0xDC) = 0x824154;
    MEM32(esi + 0xE0) = ebx;
    MEM32(esi + 0xE4) = ebx;
    MEM32(esi + 0xE8) = ebx;
    MEM32(esi + 0xEC) = ebx;
    MEM32(esi + 0xF0) = ebx;
    PUSH32(esp, 0x002FF243u); RECOMP_ABI_CALL(0x0059CADDu, sub_0059CADD); /* call 0x0059CADD */

loc_002FF243: ;
    ecx = esi + 0x120;
    PUSH32(esp, 0x002FF24Eu); RECOMP_ABI_CALL(0x0059CADDu, sub_0059CADD); /* call 0x0059CADD */

loc_002FF24E: ;
    ecx = esi + 0x140;
    PUSH32(esp, 0x002FF259u); RECOMP_ABI_CALL(0x0059CADDu, sub_0059CADD); /* call 0x0059CADD */

loc_002FF259: ;
    ecx = esi + 0x160;
    PUSH32(esp, 0x002FF264u); RECOMP_ABI_CALL(0x0059CADDu, sub_0059CADD); /* call 0x0059CADD */

loc_002FF264: ;
    ecx = esi + 0x180;
    PUSH32(esp, 0x002FF26Fu); RECOMP_ABI_CALL(0x0059CADDu, sub_0059CADD); /* call 0x0059CADD */

loc_002FF26F: ;
    ecx = esi + 0x1A0;
    PUSH32(esp, 0x002FF27Au); RECOMP_ABI_CALL(0x0059CADDu, sub_0059CADD); /* call 0x0059CADD */

loc_002FF27A: ;
    ecx = esi + 0x1C0;
    PUSH32(esp, 0x002FF285u); RECOMP_ABI_CALL(0x0059CADDu, sub_0059CADD); /* call 0x0059CADD */

loc_002FF285: ;
    eax = 1;
    MEM32(esi + 0x1E0) = ebx;
    MEM32(esi + 0x1E4) = ebx;
    MEM32(esi + 0x1E8) = ebx;
    MEM32(esi + 0x1FC) = ebx;
    MEM32(esi + 0x20C) = ebx;
    MEM32(esi + 0x210) = eax;
    MEM32(esi + 0x214) = eax;
    MEM32(esi + 0x218) = ebx;
    MEM32(esi + 0x21C) = ebx;
    MEM32(esi + 0x220) = ebx;
    MEM32(esi + 0x224) = ebx;
    MEM8(esi + 0x228) = LO8(ebx);
    MEM8(esi + 0x229) = LO8(ebx);
    MEM32(0x8FC1D0) = esi;
    MEM8(esi + 0x1DC) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FF330
 * Original: 0x002FF330 - 0x002FF34E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF330: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002FF338u); RECOMP_ABI_CALL(0x0002A9A1u, sub_0002A9A1); /* call 0x0002A9A1 */

loc_002FF338: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FF348; /* je: equal / zero */

loc_002FF33F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FF345u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002FF345: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002FF348: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FF360
 * Original: 0x002FF360 - 0x002FF45F (255 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FF360: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x9C) = 0x40;
    MEM32(esi + 0x88) = ebx;
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x90) = ebx;
    MEM32(esi + 0x94) = 1;
    MEM32(esi + 0x98) = 1;
    MEM32(esi + 0xA0) = ebx;
    MEM32(esi + 0xA4) = ebx;
    MEM32(esi + 0xA8) = ebx;
    MEM32(esi + 0xAC) = ebx;
    MEM32(esi + 0xB0) = ebx;
    MEM32(esi + 0xB4) = ebx;
    MEM32(esi + 0xB8) = ebx;
    MEM32(esi + 0xBC) = ebx;
    _fa = (uint32_t)(MEM8(0x8FC1CD)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8FC1CD), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FF3E1; /* je: equal / zero */

loc_002FF3CE: ;
    MEM32(esi + 0xC4) = 0x8248C4;
    MEM8(esi + 0xC0) = 1;
    goto loc_002FF3F1;

loc_002FF3E1: ;
    MEM32(esi + 0xC4) = 0x8248B8;
    MEM8(esi + 0xC0) = LO8(ebx);

loc_002FF3F1: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x002FF3FBu); RECOMP_ABI_CALL(0x0001787Eu, sub_0001787E); /* call 0x0001787E */

loc_002FF3FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x002FF405u); RECOMP_ABI_CALL(0x000377A0u, sub_000377A0); /* call 0x000377A0 */

loc_002FF405: ;
    PUSH32(esp, 2);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002FF40Du); RECOMP_ABI_CALL(0x0059CDD8u, sub_0059CDD8); /* call 0x0059CDD8 */

loc_002FF40D: ;
    eax = MEM32(esi + 0xE8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x002FF41Eu); RECOMP_ABI_CALL(0x00011F32u, sub_00011F32); /* call 0x00011F32 */

loc_002FF41E: ;
    ecx = MEM32(esi + 0xE8);
    eax = esi + 0x38;
    PUSH32(esp, eax);
    MEM32(esi + 0x3C) = 1;
    MEM32(eax) = ecx;
    MEM32(esi + 0x50) = 0x44C;
    PUSH32(esp, 0x002FF43Du); RECOMP_ABI_CALL(0x0002F2EEu, sub_0002F2EE); /* call 0x0002F2EE */

loc_002FF43D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x3C);
    ecx = 0x8BFE50;
    PUSH32(esp, 0x002FF44Cu); RECOMP_ABI_CALL(0x000375D9u, sub_000375D9); /* call 0x000375D9 */

loc_002FF44C: ;
    ecx = esi;
    PUSH32(esp, 0x002FF453u); RECOMP_ABI_CALL(0x00011DE3u, sub_00011DE3); /* call 0x00011DE3 */

loc_002FF453: ;
    PUSH32(esp, 0x002FF458u); RECOMP_ABI_CALL(0x0002EE07u, sub_0002EE07); /* call 0x0002EE07 */

loc_002FF458: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0001B3AC(); return; /* tail jmp 0x0001B3AC */

}

/**
 * sub_002FF4A0
 * Original: 0x002FF4A0 - 0x002FF614 (372 bytes, 118 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF4A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FF4A0: ;
    SET_LO8(eax, MEM8(0x8C36F4));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi + 0x229) = LO8(eax);
    SET_LO8(eax, MEM8(0x8FC1C8));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_002FF4C7; /* jne: not equal / not zero */

loc_002FF4BF: ;
    _fa = (uint32_t)(MEM8(0x8FC1C9)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8FC1C9), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FF4CD; /* je: equal / zero */

loc_002FF4C7: ;
    MEM8(esi + 0x229) = LO8(ebx);

loc_002FF4CD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8248EC);
    PUSH32(esp, 0x002FF4D8u); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_002FF4D8: ;
    ebp = 1;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7F6E60);
    edi = eax;
    PUSH32(esp, 0x002FF4EAu); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_002FF4EA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x002FF4F9u); RECOMP_ABI_CALL(0x000374B2u, sub_000374B2); /* call 0x000374B2 */

loc_002FF4F9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x002FF500u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_002FF500: ;
    PUSH32(esp, 0x002FF505u); RECOMP_ABI_CALL(0x00023002u, sub_00023002); /* call 0x00023002 */

loc_002FF505: ;
    PUSH32(esp, 0x002FF50Au); RECOMP_ABI_CALL(0x00033E7Fu, sub_00033E7F); /* call 0x00033E7F */

loc_002FF50A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x25190);
    PUSH32(esp, 0x002FF517u); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_002FF517: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002FF51Fu); RECOMP_ABI_CALL(0x0002DBBFu, sub_0002DBBF); /* call 0x0002DBBF */

loc_002FF51F: ;
    ecx = esi;
    PUSH32(esp, 0x002FF526u); RECOMP_ABI_CALL(0x0002EE2Fu, sub_0002EE2F); /* call 0x0002EE2F */

loc_002FF526: ;
    PUSH32(esp, 0x002FF52Bu); RECOMP_ABI_CALL(0x00026D3Du, sub_00026D3D); /* call 0x00026D3D */

loc_002FF52B: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x002FF534u); RECOMP_ABI_CALL(0x00018D2Du, sub_00018D2D); /* call 0x00018D2D */

loc_002FF534: ;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x002FF551u); RECOMP_ABI_CALL(0x00030C16u, sub_00030C16); /* call 0x00030C16 */

loc_002FF551: ;
    ecx = esi;
    PUSH32(esp, 0x002FF558u); RECOMP_ABI_CALL(0x0002D4F3u, sub_0002D4F3); /* call 0x0002D4F3 */

loc_002FF558: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x002FF562u); RECOMP_ABI_CALL(0x0001542Fu, sub_0001542F); /* call 0x0001542F */

loc_002FF562: ;
    PUSH32(esp, 0x002FF567u); RECOMP_ABI_CALL(0x0001AABAu, sub_0001AABA); /* call 0x0001AABA */

loc_002FF567: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    MEM8(esp + 0x17) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(ebx);
    PUSH32(esp, 0x002FF581u); RECOMP_ABI_CALL(0x0001F0BFu, sub_0001F0BF); /* call 0x0001F0BF */

loc_002FF581: ;
    ecx = eax;
    PUSH32(esp, 0x002FF588u); RECOMP_ABI_CALL(0x000151C8u, sub_000151C8); /* call 0x000151C8 */

loc_002FF588: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x002FF58Eu); RECOMP_ABI_CALL(0x0001F0BFu, sub_0001F0BF); /* call 0x0001F0BF */

loc_002FF58E: ;
    ecx = eax;
    PUSH32(esp, 0x002FF595u); RECOMP_ABI_CALL(0x00031D37u, sub_00031D37); /* call 0x00031D37 */

loc_002FF595: ;
    ebp = MEM32(esi + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x78);
    PUSH32(esp, 0x002FF5A0u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FF5A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FF5B7; /* je: equal / zero */

loc_002FF5A7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8248D4);
    PUSH32(esp, ebp);
    ecx = eax;
    PUSH32(esp, 0x002FF5B5u); RECOMP_ABI_CALL(0x000365E9u, sub_000365E9); /* call 0x000365E9 */

loc_002FF5B5: ;
    goto loc_002FF5B9;

loc_002FF5B7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FF5B9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    MEM32(esi + 0x204) = eax;
    PUSH32(esp, 0x002FF5C7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FF5C7: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FF5E6; /* je: equal / zero */

loc_002FF5D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82423C);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x002FF5DEu); RECOMP_ABI_CALL(0x00030220u, sub_00030220); /* call 0x00030220 */

loc_002FF5DE: ;
    MEM32(edi) = 0x824230;
    goto loc_002FF5E8;

loc_002FF5E6: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FF5E8: ;
    MEM32(esi + 0x200) = edi;
    PUSH32(esp, 0x002FF5F3u); RECOMP_ABI_CALL(0x000325D9u, sub_000325D9); /* call 0x000325D9 */

loc_002FF5F3: ;
    PUSH32(esp, 0x904A80);
    PUSH32(esp, 0x002FF5FDu); RECOMP_ABI_CALL(0x00026BEEu, sub_00026BEE); /* call 0x00026BEE */

loc_002FF5FD: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x002FF609u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_002FF609: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FF680
 * Original: 0x002FF680 - 0x002FF7C3 (323 bytes, 86 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF680: ;
    SET_LO8(eax, MEM8(0x8C36FC));
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_002FF78B; /* je: equal / zero */

loc_002FF693: ;
    PUSH32(esp, ebx);
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x8248FC);
    PUSH32(esp, 0x002FF6A4u); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_002FF6A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8FC1E4) = eax;
    PUSH32(esp, 0x002FF6B1u); RECOMP_ABI_CALL(0x00015D35u, sub_00015D35); /* call 0x00015D35 */

loc_002FF6B1: ;
    PUSH32(esp, 0x002FF6B6u); RECOMP_ABI_CALL(0x0001E390u, sub_0001E390); /* call 0x0001E390 */

loc_002FF6B6: ;
    PUSH32(esp, 0x002FF6BBu); RECOMP_ABI_CALL(0x0001F03Du, sub_0001F03D); /* call 0x0001F03D */

loc_002FF6BB: ;
    PUSH32(esp, 0x002FF6C0u); RECOMP_ABI_CALL(0x000363FFu, sub_000363FF); /* call 0x000363FF */

loc_002FF6C0: ;
    PUSH32(esp, 0x002FF6C5u); RECOMP_ABI_CALL(0x00035590u, sub_00035590); /* call 0x00035590 */

loc_002FF6C5: ;
    ecx = eax;
    PUSH32(esp, 0x002FF6CCu); RECOMP_ABI_CALL(0x0002282Du, sub_0002282D); /* call 0x0002282D */

loc_002FF6CC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002FF6D3u); RECOMP_ABI_CALL(0x0001D189u, sub_0001D189); /* call 0x0001D189 */

loc_002FF6D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, 0x002FF6DFu); RECOMP_ABI_CALL(0x00018D2Du, sub_00018D2D); /* call 0x00018D2D */

loc_002FF6DF: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x104);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = ebx;
    MEM32(esp + 0x1C) = 0;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x002FF70Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FF70B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FF729; /* je: equal / zero */

loc_002FF712: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, MEM8(esi + 0x229));
    edx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x002FF727u); RECOMP_ABI_CALL(0x000316CAu, sub_000316CA); /* call 0x000316CA */

loc_002FF727: ;
    goto loc_002FF72B;

loc_002FF729: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FF72B: ;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x1E0) = eax;
    PUSH32(esp, 0x002FF739u); RECOMP_ABI_CALL(0x0002BFBDu, sub_0002BFBD); /* call 0x0002BFBD */

loc_002FF739: ;
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, 0);
    eax = esi + 0xDC;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002FF753u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_002FF753: ;
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM8(ecx + 0x19) = LO8(ebx);
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, 0x7DF66C);
    PUSH32(esp, 0x002FF770u); RECOMP_ABI_CALL(0x00017E0Fu, sub_00017E0F); /* call 0x00017E0F */

loc_002FF770: ;
    PUSH32(esp, 0x002FF775u); RECOMP_ABI_CALL(0x00017BC6u, sub_00017BC6); /* call 0x00017BC6 */

loc_002FF775: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x002FF77Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FF779u); } /* indirect call */
    }

loc_002FF77C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x60); PUSH32(esp, 0x002FF783u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FF780u); } /* indirect call */
    }

loc_002FF783: ;
    PUSH32(esp, 0x002FF788u); RECOMP_ABI_CALL(0x00023AF7u, sub_00023AF7); /* call 0x00023AF7 */

loc_002FF788: ;
    POP32(esp, ebx);
    goto loc_002FF79E;

loc_002FF78B: ;
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x214) = 0;
    PUSH32(esp, 0x002FF79Eu); RECOMP_ABI_CALL(0x000358E7u, sub_000358E7); /* call 0x000358E7 */

loc_002FF79E: ;
    SET_LO8(eax, MEM8(esi + 0x228));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FF7AD; /* je: equal / zero */

loc_002FF7A8: ;
    PUSH32(esp, 0x002FF7ADu); RECOMP_ABI_CALL(0x0002AA2Du, sub_0002AA2D); /* call 0x0002AA2D */

loc_002FF7AD: ;
    MEM8(esi + 0x229) = 0;
    MEM32(esi + 0xD8) = 0x3C;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FF820
 * Original: 0x002FF820 - 0x002FF844 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF820: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x824230;
    PUSH32(esp, 0x002FF82Eu); RECOMP_ABI_CALL(0x0001C18Au, sub_0001C18A); /* call 0x0001C18A */

loc_002FF82E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FF83E; /* je: equal / zero */

loc_002FF835: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FF83Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002FF83B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002FF83E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FF850
 * Original: 0x002FF850 - 0x002FF900 (176 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF850: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x224);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF8FE; /* jne: not equal / not zero */

loc_002FF861: ;
    eax = MEM32(esi + 0x218);
    ecx = MEM32(esi + 0x21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FF8FE; /* je: equal / zero */

loc_002FF875: ;
    MEM32(esi + 0x220) = eax;
    MEM32(esi + 0x218) = ecx;
    PUSH32(esp, 0x002FF886u); RECOMP_ABI_CALL(0x0001C761u, sub_0001C761); /* call 0x0001C761 */

loc_002FF886: ;
    _fa = (uint32_t)(MEM32(esi + 0x218)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x218), 2 (32-bit) */
    ecx = MEM32(0x901E28);
    if (CMP_NE(_fa, _fb)) goto loc_002FF89C; /* jne: not equal / not zero */

loc_002FF895: ;
    PUSH32(esp, 0x002FF89Au); RECOMP_ABI_CALL(0x000311CAu, sub_000311CA); /* call 0x000311CA */

loc_002FF89A: ;
    goto loc_002FF8A1;

loc_002FF89C: ;
    PUSH32(esp, 0x002FF8A1u); RECOMP_ABI_CALL(0x00035EF0u, sub_00035EF0); /* call 0x00035EF0 */

loc_002FF8A1: ;
    eax = MEM32(esi + 0x218);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF8F4; /* jne: not equal / not zero */

loc_002FF8AB: ;
    _fa = (uint32_t)(MEM8(esi + 0x1DC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x1DC), 1 (8-bit) */
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_002FF8D5; /* jne: not equal / not zero */

loc_002FF8B6: ;
    eax = MEM32(esi + 0x1E4);
    ecx = MEM32(eax + 0x2C);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, 2);
    PUSH32(esp, 0x002FF8C9u); RECOMP_ABI_CALL(0x0001A407u, sub_0001A407); /* call 0x0001A407 */

loc_002FF8C9: ;
    ecx = MEM32(esi + 0x1E4);
    MEM8(ecx + 0x1A) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002FF8D5: ;
    edx = MEM32(esi + 0x1E4);
    eax = MEM32(edx + 0x2C);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0x002FF8E8u); RECOMP_ABI_CALL(0x0001A407u, sub_0001A407); /* call 0x0001A407 */

loc_002FF8E8: ;
    ecx = MEM32(esi + 0x1E4);
    MEM8(ecx + 0x1A) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_002FF8F4: ;
    edx = MEM32(esi + 0x1E4);
    MEM8(edx + 0x1A) = 0;

loc_002FF8FE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_002FF930
 * Original: 0x002FF930 - 0x002FF954 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF930: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8242D4;
    PUSH32(esp, 0x002FF93Eu); RECOMP_ABI_CALL(0x0001C18Au, sub_0001C18A); /* call 0x0001C18A */

loc_002FF93E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FF94E; /* je: equal / zero */

loc_002FF945: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FF94Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002FF94B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002FF94E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FF960
 * Original: 0x002FF960 - 0x002FFBE3 (643 bytes, 186 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FF960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FF960: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FF969u); RECOMP_ABI_CALL(0x0002EA60u, sub_0002EA60); /* call 0x0002EA60 */

loc_002FF969: ;
    PUSH32(esp, 0x002FF96Eu); RECOMP_ABI_CALL(0x00028C28u, sub_00028C28); /* call 0x00028C28 */

loc_002FF96E: ;
    eax = MEM32(0x8FC1D0);
    MEM32(eax + 0x224) = MEM32(eax + 0x224) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x224)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(0x8FC1D0);
    _fa = (uint32_t)(MEM32(eax + 0x218)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x218), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF991; /* jne: not equal / not zero */

loc_002FF987: ;
    PUSH32(esp, 0x002FF98Cu); RECOMP_ABI_CALL(0x00025D07u, sub_00025D07); /* call 0x00025D07 */

loc_002FF98C: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002FF991: ;
    PUSH32(esp, 0x002FF996u); RECOMP_ABI_CALL(0x00031D96u, sub_00031D96); /* call 0x00031D96 */

loc_002FF996: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x002FF99Du); RECOMP_ABI_CALL(0x00021F77u, sub_00021F77); /* call 0x00021F77 */

loc_002FF99D: ;
    ecx = MEM32(0x8FCBB0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002FF9ABu); RECOMP_ABI_CALL(0x0001C554u, sub_0001C554); /* call 0x0001C554 */

loc_002FF9AB: ;
    PUSH32(esp, 0x002FF9B0u); RECOMP_ABI_CALL(0x00014651u, sub_00014651); /* call 0x00014651 */

loc_002FF9B0: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x002FF9BBu); RECOMP_ABI_CALL(0x00025AF0u, sub_00025AF0); /* call 0x00025AF0 */

loc_002FF9BB: ;
    PUSH32(esp, 0x002FF9C0u); RECOMP_ABI_CALL(0x0001CA68u, sub_0001CA68); /* call 0x0001CA68 */

loc_002FF9C0: ;
    ecx = MEM32(0x8FC1D0);
    _fa = (uint32_t)(MEM32(ecx + 0x218)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x218), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FF9D9; /* jne: not equal / not zero */

loc_002FF9CF: ;
    PUSH32(esp, 0x002FF9D4u); RECOMP_ABI_CALL(0x00028219u, sub_00028219); /* call 0x00028219 */

loc_002FF9D4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002FF9D9: ;
    eax = MEM32(0x896158);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 3);
    MEM32(0x896158) = eax;
    PUSH32(esp, 0x002FF9EBu); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_002FF9EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FFA16; /* je: equal / zero */

loc_002FF9F2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FF9F4: ;
    edx = MEM32(esi + 0x8E9058);
    ecx = MEM32(edx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FFA06; /* je: equal / zero */

loc_002FFA01: ;
    PUSH32(esp, 0x002FFA06u); RECOMP_ABI_CALL(0x0001BA5Au, sub_0001BA5A); /* call 0x0001BA5A */

loc_002FFA06: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xA4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_002FF9F4; /* jl: less (signed <) */

loc_002FFA11: ;
    PUSH32(esp, 0x002FFA16u); RECOMP_ABI_CALL(0x00037908u, sub_00037908); /* call 0x00037908 */

loc_002FFA16: ;
    PUSH32(esp, 0x002FFA1Bu); RECOMP_ABI_CALL(0x0002B432u, sub_0002B432); /* call 0x0002B432 */

loc_002FFA1B: ;
    SET_LO8(eax, MEM8(0x8BFE90));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FFA37; /* je: equal / zero */

loc_002FFA24: ;
    ecx = MEM32(0x8EAD98);
    PUSH32(esp, 0x002FFA2Fu); RECOMP_ABI_CALL(0x0001EBF1u, sub_0001EBF1); /* call 0x0001EBF1 */

loc_002FFA2F: ;
    eax = MEM32(0x8EAD98);
    MEM8(eax) = 1;

loc_002FFA37: ;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFA5F; /* jne: not equal / not zero */

loc_002FFA40: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x002FFA48u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FFA48: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FFA58; /* je: equal / zero */

loc_002FFA4F: ;
    ecx = eax;
    PUSH32(esp, 0x002FFA56u); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_002FFA56: ;
    goto loc_002FFA5A;

loc_002FFA58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FFA5A: ;
    MEM32(0x8FA278) = eax;

loc_002FFA5F: ;
    ecx = eax;
    PUSH32(esp, 0x002FFA66u); RECOMP_ABI_CALL(0x000114C9u, sub_000114C9); /* call 0x000114C9 */

loc_002FFA66: ;
    ecx = MEM32(0x8E8F84);
    eax = MEM32(ecx + 0x20);
    edx = eax + 0x48;
    esi = MEM32(edx);
    PUSH32(esp, 0x42740000);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    edx = MEM32(edx + 8);
    MEM32(ecx + 4) = esi;
    MEM32(ecx + 8) = edx;
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
    ecx = MEM32(0x8E936C);
    PUSH32(esp, 0x002FFAAFu); RECOMP_ABI_CALL(0x00019C9Bu, sub_00019C9B); /* call 0x00019C9B */

loc_002FFAAF: ;
    eax = MEM32(0x8E8F84);
    ecx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ecx);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ecx + 4);
    MEM32(esp + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(esp + 0x18) = ecx;
    edx = MEM32(eax + 0x20);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x48;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edx);
    MEM32(esp + 4) = eax;
    ecx = MEM32(edx + 4);
    MEM32(esp + 8) = ecx;
    edx = MEM32(edx + 8);
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x002FFAF7u); RECOMP_ABI_CALL(0x0002C904u, sub_0002C904); /* call 0x0002C904 */

loc_002FFAF7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x002FFAFFu); RECOMP_ABI_CALL(0x00015164u, sub_00015164); /* call 0x00015164 */

loc_002FFAFF: ;
    PUSH32(esp, 0x002FFB04u); RECOMP_ABI_CALL(0x0001A7EFu, sub_0001A7EF); /* call 0x0001A7EF */

loc_002FFB04: ;
    PUSH32(esp, 0x002FFB09u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_002FFB09: ;
    ecx = eax;
    PUSH32(esp, 0x002FFB10u); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_002FFB10: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FFB2B; /* je: equal / zero */

loc_002FFB14: ;
    SET_LO8(eax, MEM8(0x8BFE90));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFB2B; /* jne: not equal / not zero */

loc_002FFB1D: ;
    PUSH32(esp, 0x002FFB22u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_002FFB22: ;
    ecx = eax;
    PUSH32(esp, 0x002FFB29u); RECOMP_ABI_CALL(0x0001F7B8u, sub_0001F7B8); /* call 0x0001F7B8 */

loc_002FFB29: ;
    goto loc_002FFB32;

loc_002FFB2B: ;
    MEM8(0x8BFE90) = 0;

loc_002FFB32: ;
    PUSH32(esp, 0x002FFB37u); RECOMP_ABI_CALL(0x000364EAu, sub_000364EA); /* call 0x000364EA */

loc_002FFB37: ;
    esi = MEM32(0x8F0650);
    PUSH32(esp, 0x002FFB42u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_002FFB42: ;
    ecx = eax;
    PUSH32(esp, 0x002FFB49u); RECOMP_ABI_CALL(0x0002B955u, sub_0002B955); /* call 0x0002B955 */

loc_002FFB49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FFBB6; /* je: equal / zero */

loc_002FFB4D: ;
    PUSH32(esp, 0x002FFB52u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_002FFB52: ;
    ecx = eax;
    PUSH32(esp, 0x002FFB59u); RECOMP_ABI_CALL(0x0002A6B8u, sub_0002A6B8); /* call 0x0002A6B8 */

loc_002FFB59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FFBB6; /* je: equal / zero */

loc_002FFB5D: ;
    PUSH32(esp, 0x002FFB62u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_002FFB62: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFBB6; /* jne: not equal / not zero */

loc_002FFB66: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FFBA8; /* je: equal / zero */

loc_002FFB6A: ;
    eax = MEM32(esi + 0x8C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FFB7A; /* je: equal / zero */

loc_002FFB75: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFBA8; /* jne: not equal / not zero */

loc_002FFB7A: ;
    ecx = esi;
    PUSH32(esp, 0x002FFB81u); RECOMP_ABI_CALL(0x000265D6u, sub_000265D6); /* call 0x000265D6 */

loc_002FFB81: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002FFBA8; /* jne: not equal / not zero */

loc_002FFB85: ;
    ecx = esi;
    PUSH32(esp, 0x002FFB8Cu); RECOMP_ABI_CALL(0x0002CFE4u, sub_0002CFE4); /* call 0x0002CFE4 */

loc_002FFB8C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FFB97; /* je: equal / zero */

loc_002FFB90: ;
    ecx = esi;
    PUSH32(esp, 0x002FFB97u); RECOMP_ABI_CALL(0x0002EEE3u, sub_0002EEE3); /* call 0x0002EEE3 */

loc_002FFB97: ;
    PUSH32(esp, 0x002FFB9Cu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_002FFB9C: ;
    ecx = eax;
    PUSH32(esp, 0x002FFBA3u); RECOMP_ABI_CALL(0x00021C9Du, sub_00021C9D); /* call 0x00021C9D */

loc_002FFBA3: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_002FFBA8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x002FFBAFu); RECOMP_ABI_CALL(0x0002CE27u, sub_0002CE27); /* call 0x0002CE27 */

loc_002FFBAF: ;
    ecx = eax;
    PUSH32(esp, 0x002FFBB6u); RECOMP_ABI_CALL(0x000163E3u, sub_000163E3); /* call 0x000163E3 */

loc_002FFBB6: ;
    PUSH32(esp, 0x002FFBBBu); RECOMP_ABI_CALL(0x00027940u, sub_00027940); /* call 0x00027940 */

loc_002FFBBB: ;
    PUSH32(esp, 0x002FFBC0u); RECOMP_ABI_CALL(0x000273A5u, sub_000273A5); /* call 0x000273A5 */

loc_002FFBC0: ;
    PUSH32(esp, 0x002FFBC5u); RECOMP_ABI_CALL(0x00028219u, sub_00028219); /* call 0x00028219 */

loc_002FFBC5: ;
    PUSH32(esp, 0x002FFBCAu); RECOMP_ABI_CALL(0x00019949u, sub_00019949); /* call 0x00019949 */

loc_002FFBCA: ;
    PUSH32(esp, 0x002FFBCFu); RECOMP_ABI_CALL(0x0002C6F7u, sub_0002C6F7); /* call 0x0002C6F7 */

loc_002FFBCF: ;
    PUSH32(esp, 0x002FFBD4u); RECOMP_ABI_CALL(0x0001E3F4u, sub_0001E3F4); /* call 0x0001E3F4 */

loc_002FFBD4: ;
    ecx = 0x8B23A8;
    PUSH32(esp, 0x002FFBDEu); RECOMP_ABI_CALL(0x00021DC4u, sub_00021DC4); /* call 0x00021DC4 */

loc_002FFBDE: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FFC90
 * Original: 0x002FFC90 - 0x002FFCB4 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FFC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FFC90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8242EC;
    PUSH32(esp, 0x002FFC9Eu); RECOMP_ABI_CALL(0x0001C18Au, sub_0001C18A); /* call 0x0001C18A */

loc_002FFC9E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FFCAE; /* je: equal / zero */

loc_002FFCA5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FFCABu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002FFCAB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002FFCAE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FFCC0
 * Original: 0x002FFCC0 - 0x002FFD91 (209 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FFCC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002FFCC0: ;
    PUSH32(esp, 0x002FFCC5u); RECOMP_ABI_CALL(0x0002EA60u, sub_0002EA60); /* call 0x0002EA60 */

loc_002FFCC5: ;
    PUSH32(esp, 0x002FFCCAu); RECOMP_ABI_CALL(0x00028C28u, sub_00028C28); /* call 0x00028C28 */

loc_002FFCCA: ;
    eax = MEM32(0x8FC1D0);
    MEM32(eax + 0x224) = MEM32(eax + 0x224) - 1;
    _fa = (uint32_t)(MEM32(eax + 0x224)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(0x8FC1D0);
    _fa = (uint32_t)(MEM32(eax + 0x218)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x218), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FFD90; /* je: equal / zero */

loc_002FFCE7: ;
    PUSH32(esp, 0x002FFCECu); RECOMP_ABI_CALL(0x00031D96u, sub_00031D96); /* call 0x00031D96 */

loc_002FFCEC: ;
    ecx = MEM32(0x8F0040);
    PUSH32(esp, 0x002FFCF7u); RECOMP_ABI_CALL(0x00025B2Cu, sub_00025B2C); /* call 0x00025B2C */

loc_002FFCF7: ;
    ecx = MEM32(0x8F0044);
    PUSH32(esp, 0x002FFD02u); RECOMP_ABI_CALL(0x00025B2Cu, sub_00025B2C); /* call 0x00025B2C */

loc_002FFD02: ;
    ecx = MEM32(0x8F0040);
    PUSH32(esp, 0x002FFD0Du); RECOMP_ABI_CALL(0x0002645Au, sub_0002645A); /* call 0x0002645A */

loc_002FFD0D: ;
    ecx = MEM32(0x8F0044);
    PUSH32(esp, 0x002FFD18u); RECOMP_ABI_CALL(0x0002645Au, sub_0002645A); /* call 0x0002645A */

loc_002FFD18: ;
    PUSH32(esp, 0x002FFD1Du); RECOMP_ABI_CALL(0x00023D59u, sub_00023D59); /* call 0x00023D59 */

loc_002FFD1D: ;
    ecx = MEM32(0x8FC1D0);
    _fa = (uint32_t)(MEM32(ecx + 0x218)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x218), 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FFD90; /* je: equal / zero */

loc_002FFD2C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FFD32u); RECOMP_ABI_CALL(0x00028C5Au, sub_00028C5A); /* call 0x00028C5A */

loc_002FFD32: ;
    ecx = MEM32(0x8EAD9C);
    PUSH32(esp, 0x002FFD3Du); RECOMP_ABI_CALL(0x0001E1E2u, sub_0001E1E2); /* call 0x0001E1E2 */

loc_002FFD3D: ;
    ecx = MEM32(0x8E8F84);
    PUSH32(esp, 0x002FFD48u); RECOMP_ABI_CALL(0x0001DB48u, sub_0001DB48); /* call 0x0001DB48 */

loc_002FFD48: ;
    ecx = MEM32(0x8EAD98);
    PUSH32(esp, 0x002FFD53u); RECOMP_ABI_CALL(0x00034F28u, sub_00034F28); /* call 0x00034F28 */

loc_002FFD53: ;
    esi = MEM32(0x8BFE5C);
    edx = MEM32(0x8BFE54);
    eax = MEM32(0x8BFE50);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8BFE5C) = esi;
    esi = MEM32(0x8BFE60);
    ecx = 0x8BFE50;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x002FFD7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FFD7Au); } /* indirect call */
    }

loc_002FFD7D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = 0x8BFE60;
    { uint32_t _icall_target = MEM32(esi); PUSH32(esp, 0x002FFD85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002FFD83u); } /* indirect call */
    }

loc_002FFD85: ;
    PUSH32(esp, 0x002FFD8Au); RECOMP_ABI_CALL(0x00032908u, sub_00032908); /* call 0x00032908 */

loc_002FFD8A: ;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000294E8(); return; /* tail jmp 0x000294E8 */

loc_002FFD90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002FFDD0
 * Original: 0x002FFDD0 - 0x002FFE4C (124 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FFDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FFDD0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esp + 4;
    PUSH32(esp, 0x002FFDDFu); RECOMP_ABI_CALL(0x00018D2Du, sub_00018D2D); /* call 0x00018D2D */

loc_002FFDDF: ;
    eax = 5;
    PUSH32(esp, 0);
    PUSH32(esp, 0xE4);
    MEM32(esp + 0x10) = 4;
    MEM32(esp + 0x18) = 3;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = 2;
    MEM32(esp + 0x24) = 0xF;
    PUSH32(esp, 0x002FFE18u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_002FFE18: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002FFE2D; /* je: equal / zero */

loc_002FFE1F: ;
    ecx = esp + 4;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x002FFE2Bu); RECOMP_ABI_CALL(0x00030374u, sub_00030374); /* call 0x00030374 */

loc_002FFE2B: ;
    goto loc_002FFE2F;

loc_002FFE2D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_002FFE2F: ;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x1E4) = eax;
    PUSH32(esp, 0x002FFE3Du); RECOMP_ABI_CALL(0x0002BFBDu, sub_0002BFBD); /* call 0x0002BFBD */

loc_002FFE3D: ;
    edx = MEM32(esi + 0x1E4);
    MEM8(edx + 0x18) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_002FFE70
 * Original: 0x002FFE70 - 0x002FFE8E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FFE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FFE70: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x002FFE78u); RECOMP_ABI_CALL(0x0002562Cu, sub_0002562C); /* call 0x0002562C */

loc_002FFE78: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FFE88; /* je: equal / zero */

loc_002FFE7F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FFE85u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002FFE85: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002FFE88: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FFEA0
 * Original: 0x002FFEA0 - 0x002FFEC4 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FFEA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002FFEA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x824340;
    PUSH32(esp, 0x002FFEAEu); RECOMP_ABI_CALL(0x000323C2u, sub_000323C2); /* call 0x000323C2 */

loc_002FFEAE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002FFEBE; /* je: equal / zero */

loc_002FFEB5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002FFEBBu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_002FFEBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_002FFEBE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002FFED0
 * Original: 0x002FFED0 - 0x00300515 (1605 bytes, 408 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002FFED0(void)
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

loc_002FFED0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x3C));
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FFEE6u); RECOMP_ABI_CALL(0x0001B1AEu, sub_0001B1AE); /* call 0x0001B1AE */

loc_002FFEE6: ;
    PUSH32(esp, eax);
    ecx = esp + 0x44;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FFEF0u); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_002FFEF0: ;
    ecx = MEM32(0x8FC1F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(esp + 0xF) = LO8(ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003004AF; /* je: equal / zero */

loc_002FFF07: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FFF0Cu); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_002FFF0C: ;
    edi = MEM32(eax + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00300493; /* je: equal / zero */

loc_002FFF17: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FFF1Cu); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_002FFF1C: ;
    SET_LO8(ecx, MEM8(eax + 0x4C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00300493; /* jne: not equal / not zero */

loc_002FFF27: ;
    ecx = MEM32(esi + 0x2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FFF2Fu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_002FFF2F: ;
    ebx = eax;
    eax = MEM32(edi + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    ecx = ZX16(MEM16(edi + eax * 4));
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002FFF4Au); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_002FFF4A: ;
    eax = MEM32(edi + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = eax + eax * 2;
    ecx = (uint32_t)(int32_t)SMEM8(edi + edx * 4 + 0x1D);
    eax = edi + edx * 4;
    MEM32(esp + 0x20) = ecx;
    xmm4 = xmm0; /* movaps */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AD3D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_002FFF82; /* ja: above (unsigned >) */

loc_002FFF7C: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_002FFF82: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x1E);
    MEM32(esp + 0x20) = edx;
    xmm3 = xmm0; /* movaps */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AD3D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_002FFFA9; /* ja: above (unsigned >) */

loc_002FFFA3: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_002FFFA9: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x1B);
    MEM32(esp + 0x20) = ecx;
    xmm5 = xmm0; /* movaps */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AD3D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_002FFFD0; /* ja: above (unsigned >) */

loc_002FFFCA: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_002FFFD0: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x1C);
    MEM32(esp + 0x20) = edx;
    xmm6 = xmm0; /* movaps */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AD3D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_002FFFF7; /* ja: above (unsigned >) */

loc_002FFFF1: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_002FFFF7: ;
    SET_LO8(eax, MEM8(eax + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = xmm0; /* movaps */
    if (TEST_Z(_fa, _fb)) goto loc_0030000B; /* je: equal / zero */

loc_00300001: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    goto loc_00300017;

loc_0030000B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00300017; /* je: equal / zero */

loc_0030000F: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00300017: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x822330); /* mulss */
    MEMF(0x8C388C) = xmm4.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7AB7CC); /* mulss */
    MEMF(0x8C3888) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x824910)); /* movss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(0x8C3894) = xmm4.f[0]; /* movss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AD450); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(0x8C3898) = xmm4.f[0]; /* movss */
    MEMF(0x8C3890) = xmm1.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003000A0; /* jp: parity */

loc_00300090: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003000A0; /* jp: parity */

loc_00300099: ;
    MEM8(0x8C38A9) = 1;

loc_003000A0: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003001CE; /* jne: not equal / not zero */

loc_003000AB: ;
    ecx = MEM32(0x901E28);
    MEM8(0x8C38A9) = 1;
    MEM32(0x8C38B0) = 0xFFFFFFFFu;
    MEM8(0x8C38A8) = 0;
    MEM8(0x8C38AA) = 1;
    MEMF(0x8C3888) = xmm0.f[0]; /* movss */
    MEMF(0x8C388C) = xmm0.f[0]; /* movss */
    MEMF(0x8C3890) = xmm0.f[0]; /* movss */
    MEMF(0x8C3898) = xmm0.f[0]; /* movss */
    MEMF(0x8C3894) = xmm0.f[0]; /* movss */
    MEMF(0x8C38A0) = xmm0.f[0]; /* movss */
    MEMF(0x8C389C) = xmm0.f[0]; /* movss */
    MEMF(0x8C38A4) = xmm0.f[0]; /* movss */
    MEM32(0x8C38AC) = 0x32;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030011Fu); RECOMP_ABI_CALL(0x0001E430u, sub_0001E430); /* call 0x0001E430 */

loc_0030011F: ;
    ecx = MEM32(0x901E28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030012Au); RECOMP_ABI_CALL(0x000311CAu, sub_000311CA); /* call 0x000311CA */

loc_0030012A: ;
    ecx = MEM32(esi + 0x2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300132u); RECOMP_ABI_CALL(0x000372C8u, sub_000372C8); /* call 0x000372C8 */

loc_00300132: ;
    PUSH32(esp, 0);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030013Bu); RECOMP_ABI_CALL(0x0001B12Cu, sub_0001B12C); /* call 0x0001B12C */

loc_0030013B: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM8(esi + 0x1D) = 0;
    MEM8(esi + 0x1E) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030014Fu); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_0030014F: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300156u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300156: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7C8DD4)); /* fmul dword ptr [0x7c8dd4] */
    ecx = esp + 0x20;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300169u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300169: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x28); /* divss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AB82C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00300191; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030018E: ;
    xmm0 = xmm1; /* movaps */

loc_00300191: ;
    ecx = 0x8FC5D8;
    MEMF(0x8FC1F8) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003001A3u); RECOMP_ABI_CALL(0x00011EA6u, sub_00011EA6); /* call 0x00011EA6 */

loc_003001A3: ;
    ecx = 0x8FC5D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003001ADu); RECOMP_ABI_CALL(0x000133EBu, sub_000133EB); /* call 0x000133EB */

loc_003001AD: ;
    ecx = MEM32(0x8FCBB0);
    edx = MEM32(ecx + 0x908);
    _fb = (uint32_t)(0x908) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x908)) >> 32) & 1);
    ecx = ecx + 0x908;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003001C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003001C1u); } /* indirect call */
    }

loc_003001C4: ;
    PUSH32(esp, 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003001CBu); RECOMP_ABI_CALL(0x00016019u, sub_00016019); /* call 0x00016019 */

loc_003001CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003001CE: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003001EC; /* jne: not equal / not zero */

loc_003001D6: ;
    SET_LO8(ecx, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003001EC; /* jne: not equal / not zero */

loc_003001DD: ;
    MEM8(0x8C377A) = 1;
    MEM8(esi + 0x1E) = LO8(eax);
    goto loc_00300353;

loc_003001EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x8FC1F8)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_00300221; /* je: equal / zero */

loc_003001FE: ;
    SET_LO8(ecx, MEM8(0x8C377A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00300228; /* je: equal / zero */

loc_00300208: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM8(0x8C377A) = 0;
    MEMF(0x8C38A4) = xmm0.f[0]; /* movss */
    goto loc_00300228;

loc_00300221: ;
    MEM8(0x8C377A) = 1;

loc_00300228: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00300244; /* je: equal / zero */

loc_0030022C: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00300248; /* jne: not equal / not zero */

loc_00300233: ;
    SET_LO8(eax, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x1E) = 1;
    MEM8(esi + 0x1D) = LO8(eax);
    goto loc_00300248;

loc_00300244: ;
    MEM8(esi + 0x1E) = 0;

loc_00300248: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300254u); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_00300254: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030025Bu); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_0030025B: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x7C3A80) / fp_top()); /* fdivr dword ptr [0x7c3a80] */
    ecx = esp + 0x20;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030026Eu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030026E: ;
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300276u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300276: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    SET_LO8(eax, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_003002A4; /* je: equal / zero */

loc_00300285: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(0xAC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 0xAC (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_0030031C; /* je: equal / zero */

loc_0030029E: ;
    MEM8(esi + 0x1D) = 0;
    goto loc_0030031C;

loc_003002A4: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8FC1FC)); /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_003002CD; /* je: equal / zero */

loc_003002BA: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_003002CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_003002E5; /* jns: not sign (positive) */

loc_003002D1: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_003002E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x8FC200)); /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_00300308; /* je: equal / zero */

loc_003002F1: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */

loc_00300308: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0030031C; /* je: equal / zero */

loc_0030030C: ;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0030031C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0030033F; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030032A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00300345; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00300337: ;
    MEM8(esi + 0x1D) = 0;
    MEM8(esi + 0x1E) = 0;

loc_0030033F: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00300345: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(0x8FC1F8) = xmm0.f[0]; /* movss */

loc_00300353: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300360u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_00300360: ;
    fp_push(MEMF(0x8FC1F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AD340)); /* fmul dword ptr [0x7ad340] */
    eax = esp + 0x28;
    ecx = ebx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300381u); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_00300381: ;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030038Cu); RECOMP_ABI_CALL(0x000280D9u, sub_000280D9); /* call 0x000280D9 */

loc_0030038C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300398u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300398: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003003A6u); RECOMP_ABI_CALL(0x0001D9DBu, sub_0001D9DB); /* call 0x0001D9DB */

loc_003003A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003003B8; /* je: equal / zero */

loc_003003AA: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003003B8u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003003B8: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003003C4u); RECOMP_ABI_CALL(0x0001D2B5u, sub_0001D2B5); /* call 0x0001D2B5 */

loc_003003C4: ;
    edi = ebx + 0x78;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003003D1u); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_003003D1: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003003DAu); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_003003DA: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003003E7u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_003003E7: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    ecx = esp + 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7C8DD4)); /* fmul dword ptr [0x7c8dd4] */
    MEMF(0x8C38B4) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300400u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300400: ;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030040Au); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_0030040A: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300413u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300413: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300420u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300420: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300434u); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_00300434: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030043Bu); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_0030043B: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300448u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300448: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    ecx = esp + 0x10;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x20) / fp_top()); /* fdivr dword ptr [esp + 0x20] */
    MEMF(0x8C38B8) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030045Fu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030045F: ;
    ecx = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300468u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300468: ;
    ecx = esp + 0x38;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300471u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300471: ;
    ecx = esp + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030047Au); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030047A: ;
    SET_LO8(ebx, MEM8(esp + 0xF));
    ecx = esp + 0x40;
    MEM8(esi + 0x1C) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030048Au); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030048A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00300493: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300498u); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_00300498: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003004A6u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003004A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_003004AF: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00300500; /* je: equal / zero */

loc_003004B6: ;
    ecx = MEM32(0x901E28);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003004C1u); RECOMP_ABI_CALL(0x00035EF0u, sub_00035EF0); /* call 0x00035EF0 */

loc_003004C1: ;
    ecx = MEM32(esi + 0x2C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003004C9u); RECOMP_ABI_CALL(0x0001BF6Eu, sub_0001BF6E); /* call 0x0001BF6E */

loc_003004C9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003004D2u); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_003004D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8FC5D8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003004DFu); RECOMP_ABI_CALL(0x000133EBu, sub_000133EB); /* call 0x000133EB */

loc_003004DF: ;
    ecx = MEM32(0x8FCBB0);
    eax = MEM32(ecx + 0x908);
    _fb = (uint32_t)(0x908) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x908)) >> 32) & 1);
    ecx = ecx + 0x908;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003004F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003004F3u); } /* indirect call */
    }

loc_003004F6: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003004FDu); RECOMP_ABI_CALL(0x00016019u, sub_00016019); /* call 0x00016019 */

loc_003004FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00300500: ;
    ecx = esp + 0x40;
    MEM8(esi + 0x1C) = LO8(ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030050Cu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030050C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002FFF0C
 * Original: 0x002FFF0C - 0x00300515 (1545 bytes, 388 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002FFF0C(void)
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

loc_002FFF0C: ;
    edi = MEM32(eax + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00300493; /* je: equal / zero */

loc_002FFF17: ;
    PUSH32(esp, 0x002FFF1Cu); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_002FFF1C: ;
    SET_LO8(ecx, MEM8(eax + 0x4C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00300493; /* jne: not equal / not zero */

loc_002FFF27: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, 0x002FFF2Fu); RECOMP_ABI_CALL(0x00022021u, sub_00022021); /* call 0x00022021 */

loc_002FFF2F: ;
    ebx = eax;
    eax = MEM32(edi + 0x14);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    ecx = ZX16(MEM16(edi + eax * 4));
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x002FFF4Au); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_002FFF4A: ;
    eax = MEM32(edi + 0x14);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = eax + eax * 2;
    ecx = (uint32_t)(int32_t)SMEM8(edi + edx * 4 + 0x1D);
    eax = edi + edx * 4;
    MEM32(esp + 0x20) = ecx;
    xmm4 = xmm0; /* movaps */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AD3D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_002FFF82; /* ja: above (unsigned >) */

loc_002FFF7C: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_002FFF82: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x1E);
    MEM32(esp + 0x20) = edx;
    xmm3 = xmm0; /* movaps */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AD3D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_002FFFA9; /* ja: above (unsigned >) */

loc_002FFFA3: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_002FFFA9: ;
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x1B);
    MEM32(esp + 0x20) = ecx;
    xmm5 = xmm0; /* movaps */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AD3D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_002FFFD0; /* ja: above (unsigned >) */

loc_002FFFCA: ;
    xmm5 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_002FFFD0: ;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x1C);
    MEM32(esp + 0x20) = edx;
    xmm6 = xmm0; /* movaps */
    fp_push((double)SMEM32(esp + 0x20)); /* fild */
    MEMF(esp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x7AD3D4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_002FFFF7; /* ja: above (unsigned >) */

loc_002FFFF1: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_002FFFF7: ;
    SET_LO8(eax, MEM8(eax + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = xmm0; /* movaps */
    if (TEST_Z(_fa, _fb)) goto loc_0030000B; /* je: equal / zero */

loc_00300001: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    goto loc_00300017;

loc_0030000B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00300017; /* je: equal / zero */

loc_0030000F: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */

loc_00300017: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(0x822330); /* mulss */
    MEMF(0x8C388C) = xmm4.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7AB7CC); /* mulss */
    MEMF(0x8C3888) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x824910)); /* movss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(0x8C3894) = xmm4.f[0]; /* movss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AD450); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(0x8C3898) = xmm4.f[0]; /* movss */
    MEMF(0x8C3890) = xmm1.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003000A0; /* jp: parity */

loc_00300090: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003000A0; /* jp: parity */

loc_00300099: ;
    MEM8(0x8C38A9) = 1;

loc_003000A0: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003001CE; /* jne: not equal / not zero */

loc_003000AB: ;
    ecx = MEM32(0x901E28);
    MEM8(0x8C38A9) = 1;
    MEM32(0x8C38B0) = 0xFFFFFFFFu;
    MEM8(0x8C38A8) = 0;
    MEM8(0x8C38AA) = 1;
    MEMF(0x8C3888) = xmm0.f[0]; /* movss */
    MEMF(0x8C388C) = xmm0.f[0]; /* movss */
    MEMF(0x8C3890) = xmm0.f[0]; /* movss */
    MEMF(0x8C3898) = xmm0.f[0]; /* movss */
    MEMF(0x8C3894) = xmm0.f[0]; /* movss */
    MEMF(0x8C38A0) = xmm0.f[0]; /* movss */
    MEMF(0x8C389C) = xmm0.f[0]; /* movss */
    MEMF(0x8C38A4) = xmm0.f[0]; /* movss */
    MEM32(0x8C38AC) = 0x32;
    PUSH32(esp, 0x0030011Fu); RECOMP_ABI_CALL(0x0001E430u, sub_0001E430); /* call 0x0001E430 */

loc_0030011F: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x0030012Au); RECOMP_ABI_CALL(0x000311CAu, sub_000311CA); /* call 0x000311CA */

loc_0030012A: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, 0x00300132u); RECOMP_ABI_CALL(0x000372C8u, sub_000372C8); /* call 0x000372C8 */

loc_00300132: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x0030013Bu); RECOMP_ABI_CALL(0x0001B12Cu, sub_0001B12C); /* call 0x0001B12C */

loc_0030013B: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM8(esi + 0x1D) = 0;
    MEM8(esi + 0x1E) = 1;
    PUSH32(esp, 0x0030014Fu); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_0030014F: ;
    ecx = eax;
    PUSH32(esp, 0x00300156u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300156: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7C8DD4)); /* fmul dword ptr [0x7c8dd4] */
    ecx = esp + 0x20;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00300169u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300169: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x28); /* divss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AB82C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00300191; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030018E: ;
    xmm0 = xmm1; /* movaps */

loc_00300191: ;
    ecx = 0x8FC5D8;
    MEMF(0x8FC1F8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003001A3u); RECOMP_ABI_CALL(0x00011EA6u, sub_00011EA6); /* call 0x00011EA6 */

loc_003001A3: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x003001ADu); RECOMP_ABI_CALL(0x000133EBu, sub_000133EB); /* call 0x000133EB */

loc_003001AD: ;
    ecx = MEM32(0x8FCBB0);
    edx = MEM32(ecx + 0x908);
    _fb = (uint32_t)(0x908) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x908)) >> 32) & 1);
    ecx = ecx + 0x908;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003001C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003001C1u); } /* indirect call */
    }

loc_003001C4: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x003001CBu); RECOMP_ABI_CALL(0x00016019u, sub_00016019); /* call 0x00016019 */

loc_003001CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003001CE: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003001EC; /* jne: not equal / not zero */

loc_003001D6: ;
    SET_LO8(ecx, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003001EC; /* jne: not equal / not zero */

loc_003001DD: ;
    MEM8(0x8C377A) = 1;
    MEM8(esi + 0x1E) = LO8(eax);
    goto loc_00300353;

loc_003001EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x8FC1F8)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_00300221; /* je: equal / zero */

loc_003001FE: ;
    SET_LO8(ecx, MEM8(0x8C377A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00300228; /* je: equal / zero */

loc_00300208: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM8(0x8C377A) = 0;
    MEMF(0x8C38A4) = xmm0.f[0]; /* movss */
    goto loc_00300228;

loc_00300221: ;
    MEM8(0x8C377A) = 1;

loc_00300228: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00300244; /* je: equal / zero */

loc_0030022C: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00300248; /* jne: not equal / not zero */

loc_00300233: ;
    SET_LO8(eax, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x1E) = 1;
    MEM8(esi + 0x1D) = LO8(eax);
    goto loc_00300248;

loc_00300244: ;
    MEM8(esi + 0x1E) = 0;

loc_00300248: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00300254u); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_00300254: ;
    ecx = eax;
    PUSH32(esp, 0x0030025Bu); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_0030025B: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x7C3A80) / fp_top()); /* fdivr dword ptr [0x7c3a80] */
    ecx = esp + 0x20;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0030026Eu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030026E: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x00300276u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300276: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    SET_LO8(eax, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_003002A4; /* je: equal / zero */

loc_00300285: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(0xAC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 0xAC (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_0030031C; /* je: equal / zero */

loc_0030029E: ;
    MEM8(esi + 0x1D) = 0;
    goto loc_0030031C;

loc_003002A4: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8FC1FC)); /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_003002CD; /* je: equal / zero */

loc_003002BA: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_003002CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_003002E5; /* jns: not sign (positive) */

loc_003002D1: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_003002E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x8FC200)); /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_00300308; /* je: equal / zero */

loc_003002F1: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */

loc_00300308: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0030031C; /* je: equal / zero */

loc_0030030C: ;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0030031C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0030033F; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030032A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00300345; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00300337: ;
    MEM8(esi + 0x1D) = 0;
    MEM8(esi + 0x1E) = 0;

loc_0030033F: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00300345: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(0x8FC1F8) = xmm0.f[0]; /* movss */

loc_00300353: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esp + 0x38;
    PUSH32(esp, 0x00300360u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_00300360: ;
    fp_push(MEMF(0x8FC1F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AD340)); /* fmul dword ptr [0x7ad340] */
    eax = esp + 0x28;
    ecx = ebx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00300381u); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_00300381: ;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030038Cu); RECOMP_ABI_CALL(0x000280D9u, sub_000280D9); /* call 0x000280D9 */

loc_0030038C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x28;
    PUSH32(esp, 0x00300398u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300398: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x003003A6u); RECOMP_ABI_CALL(0x0001D9DBu, sub_0001D9DB); /* call 0x0001D9DB */

loc_003003A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003003B8; /* je: equal / zero */

loc_003003AA: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x003003B8u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003003B8: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003003C4u); RECOMP_ABI_CALL(0x0001D2B5u, sub_0001D2B5); /* call 0x0001D2B5 */

loc_003003C4: ;
    edi = ebx + 0x78;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x003003D1u); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_003003D1: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x003003DAu); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_003003DA: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x30;
    PUSH32(esp, 0x003003E7u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_003003E7: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    ecx = esp + 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7C8DD4)); /* fmul dword ptr [0x7c8dd4] */
    MEMF(0x8C38B4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00300400u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300400: ;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0030040Au); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_0030040A: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00300413u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300413: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x30;
    PUSH32(esp, 0x00300420u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300420: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebx;
    PUSH32(esp, 0x00300434u); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_00300434: ;
    ecx = eax;
    PUSH32(esp, 0x0030043Bu); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_0030043B: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x30;
    PUSH32(esp, 0x00300448u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300448: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    ecx = esp + 0x10;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x20) / fp_top()); /* fdivr dword ptr [esp + 0x20] */
    MEMF(0x8C38B8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0030045Fu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030045F: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00300468u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300468: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x00300471u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300471: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x0030047Au); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030047A: ;
    SET_LO8(ebx, MEM8(esp + 0xF));
    ecx = esp + 0x40;
    MEM8(esi + 0x1C) = LO8(ebx);
    PUSH32(esp, 0x0030048Au); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030048A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00300493: ;
    PUSH32(esp, 0x00300498u); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_00300498: ;
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esp + 0x40;
    PUSH32(esp, 0x003004A6u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003004A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x003004C1u); RECOMP_ABI_CALL(0x00035EF0u, sub_00035EF0); /* call 0x00035EF0 */

loc_003004C1: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, 0x003004C9u); RECOMP_ABI_CALL(0x0001BF6Eu, sub_0001BF6E); /* call 0x0001BF6E */

loc_003004C9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003004D2u); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_003004D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x003004DFu); RECOMP_ABI_CALL(0x000133EBu, sub_000133EB); /* call 0x000133EB */

loc_003004DF: ;
    ecx = MEM32(0x8FCBB0);
    eax = MEM32(ecx + 0x908);
    _fb = (uint32_t)(0x908) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x908)) >> 32) & 1);
    ecx = ecx + 0x908;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003004F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003004F3u); } /* indirect call */
    }

loc_003004F6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x003004FDu); RECOMP_ABI_CALL(0x00016019u, sub_00016019); /* call 0x00016019 */

loc_003004FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00300500: ;
    ecx = esp + 0x40;
    MEM8(esi + 0x1C) = LO8(ebx);
    PUSH32(esp, 0x0030050Cu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030050C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00300031
 * Original: 0x00300031 - 0x00300515 (1252 bytes, 309 insns)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300031(void)
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

loc_00300031: ;
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(0x7AB7CC); /* mulss */
    MEMF(0x8C3888) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x824910)); /* movss */
    xmm4 = xmm5; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(0x8C3894) = xmm4.f[0]; /* movss */
    _fca = xmm5.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm4 = xmm6; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AD450); /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    MEMF(0x8C3898) = xmm4.f[0]; /* movss */
    MEMF(0x8C3890) = xmm1.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003000A0; /* jp: parity */

loc_00300090: ;
    _fca = xmm6.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003000A0; /* jp: parity */

loc_00300099: ;
    MEM8(0x8C38A9) = 1;

loc_003000A0: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003001CE; /* jne: not equal / not zero */

loc_003000AB: ;
    ecx = MEM32(0x901E28);
    MEM8(0x8C38A9) = 1;
    MEM32(0x8C38B0) = 0xFFFFFFFFu;
    MEM8(0x8C38A8) = 0;
    MEM8(0x8C38AA) = 1;
    MEMF(0x8C3888) = xmm0.f[0]; /* movss */
    MEMF(0x8C388C) = xmm0.f[0]; /* movss */
    MEMF(0x8C3890) = xmm0.f[0]; /* movss */
    MEMF(0x8C3898) = xmm0.f[0]; /* movss */
    MEMF(0x8C3894) = xmm0.f[0]; /* movss */
    MEMF(0x8C38A0) = xmm0.f[0]; /* movss */
    MEMF(0x8C389C) = xmm0.f[0]; /* movss */
    MEMF(0x8C38A4) = xmm0.f[0]; /* movss */
    MEM32(0x8C38AC) = 0x32;
    PUSH32(esp, 0x0030011Fu); RECOMP_ABI_CALL(0x0001E430u, sub_0001E430); /* call 0x0001E430 */

loc_0030011F: ;
    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x0030012Au); RECOMP_ABI_CALL(0x000311CAu, sub_000311CA); /* call 0x000311CA */

loc_0030012A: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, 0x00300132u); RECOMP_ABI_CALL(0x000372C8u, sub_000372C8); /* call 0x000372C8 */

loc_00300132: ;
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, 0x0030013Bu); RECOMP_ABI_CALL(0x0001B12Cu, sub_0001B12C); /* call 0x0001B12C */

loc_0030013B: ;
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM8(esi + 0x1D) = 0;
    MEM8(esi + 0x1E) = 1;
    PUSH32(esp, 0x0030014Fu); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_0030014F: ;
    ecx = eax;
    PUSH32(esp, 0x00300156u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300156: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7C8DD4)); /* fmul dword ptr [0x7c8dd4] */
    ecx = esp + 0x20;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00300169u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300169: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp + 0x28); /* divss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x7AB82C); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00300191; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0030018E: ;
    xmm0 = xmm1; /* movaps */

loc_00300191: ;
    ecx = 0x8FC5D8;
    MEMF(0x8FC1F8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003001A3u); RECOMP_ABI_CALL(0x00011EA6u, sub_00011EA6); /* call 0x00011EA6 */

loc_003001A3: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x003001ADu); RECOMP_ABI_CALL(0x000133EBu, sub_000133EB); /* call 0x000133EB */

loc_003001AD: ;
    ecx = MEM32(0x8FCBB0);
    edx = MEM32(ecx + 0x908);
    _fb = (uint32_t)(0x908) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x908)) >> 32) & 1);
    ecx = ecx + 0x908;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003001C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003001C1u); } /* indirect call */
    }

loc_003001C4: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x003001CBu); RECOMP_ABI_CALL(0x00016019u, sub_00016019); /* call 0x00016019 */

loc_003001CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003001CE: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003001EC; /* jne: not equal / not zero */

loc_003001D6: ;
    SET_LO8(ecx, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003001EC; /* jne: not equal / not zero */

loc_003001DD: ;
    MEM8(0x8C377A) = 1;
    MEM8(esi + 0x1E) = LO8(eax);
    goto loc_00300353;

loc_003001EC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x8FC1F8)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_00300221; /* je: equal / zero */

loc_003001FE: ;
    SET_LO8(ecx, MEM8(0x8C377A));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00300228; /* je: equal / zero */

loc_00300208: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM8(0x8C377A) = 0;
    MEMF(0x8C38A4) = xmm0.f[0]; /* movss */
    goto loc_00300228;

loc_00300221: ;
    MEM8(0x8C377A) = 1;

loc_00300228: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00300244; /* je: equal / zero */

loc_0030022C: ;
    SET_LO8(eax, MEM8(esi + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00300248; /* jne: not equal / not zero */

loc_00300233: ;
    SET_LO8(eax, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x1E) = 1;
    MEM8(esi + 0x1D) = LO8(eax);
    goto loc_00300248;

loc_00300244: ;
    MEM8(esi + 0x1E) = 0;

loc_00300248: ;
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00300254u); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_00300254: ;
    ecx = eax;
    PUSH32(esp, 0x0030025Bu); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_0030025B: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x7C3A80) / fp_top()); /* fdivr dword ptr [0x7c3a80] */
    ecx = esp + 0x20;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0030026Eu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030026E: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x00300276u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300276: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x28)); /* fmul dword ptr [esp + 0x28] */
    SET_LO8(eax, MEM8(esi + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_003002A4; /* je: equal / zero */

loc_00300285: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(0xAC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 0xAC (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_0030031C; /* je: equal / zero */

loc_0030029E: ;
    MEM8(esi + 0x1D) = 0;
    goto loc_0030031C;

loc_003002A4: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8FC1FC)); /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_003002CD; /* je: equal / zero */

loc_003002BA: ;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_003002CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_003002E5; /* jns: not sign (positive) */

loc_003002D1: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */

loc_003002E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = XMM_SCALAR(MEMF(0x8FC200)); /* movss */
    if (TEST_Z(_fa, _fb)) goto loc_00300308; /* je: equal / zero */

loc_003002F1: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */

loc_00300308: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0030031C; /* je: equal / zero */

loc_0030030C: ;
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0030031C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0030033F; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0030032A: ;
    xmm0 = XMM_SCALAR(MEMF(0x7C3A80)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00300345; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_00300337: ;
    MEM8(esi + 0x1D) = 0;
    MEM8(esi + 0x1E) = 0;

loc_0030033F: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_00300345: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(0x8FC1F8) = xmm0.f[0]; /* movss */

loc_00300353: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    ecx = esp + 0x38;
    PUSH32(esp, 0x00300360u); RECOMP_ABI_CALL(0x00031AD0u, sub_00031AD0); /* call 0x00031AD0 */

loc_00300360: ;
    fp_push(MEMF(0x8FC1F8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AD340)); /* fmul dword ptr [0x7ad340] */
    eax = esp + 0x28;
    ecx = ebx;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00300381u); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_00300381: ;
    PUSH32(esp, eax);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030038Cu); RECOMP_ABI_CALL(0x000280D9u, sub_000280D9); /* call 0x000280D9 */

loc_0030038C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x28;
    PUSH32(esp, 0x00300398u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300398: ;
    edx = esp + 0x30;
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x003003A6u); RECOMP_ABI_CALL(0x0001D9DBu, sub_0001D9DB); /* call 0x0001D9DB */

loc_003003A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003003B8; /* je: equal / zero */

loc_003003AA: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, 0x003003B8u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003003B8: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003003C4u); RECOMP_ABI_CALL(0x0001D2B5u, sub_0001D2B5); /* call 0x0001D2B5 */

loc_003003C4: ;
    edi = ebx + 0x78;
    PUSH32(esp, edi);
    ecx = esp + 0x24;
    PUSH32(esp, 0x003003D1u); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_003003D1: ;
    ecx = esp + 0x20;
    PUSH32(esp, 0x003003DAu); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_003003DA: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x30;
    PUSH32(esp, 0x003003E7u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_003003E7: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    ecx = esp + 0x20;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7C8DD4)); /* fmul dword ptr [0x7c8dd4] */
    MEMF(0x8C38B4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00300400u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300400: ;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0030040Au); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_0030040A: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00300413u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300413: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x30;
    PUSH32(esp, 0x00300420u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300420: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = ebx;
    PUSH32(esp, 0x00300434u); RECOMP_ABI_CALL(0x000307D9u, sub_000307D9); /* call 0x000307D9 */

loc_00300434: ;
    ecx = eax;
    PUSH32(esp, 0x0030043Bu); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_0030043B: ;
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x30;
    PUSH32(esp, 0x00300448u); RECOMP_ABI_CALL(0x00023B7Eu, sub_00023B7E); /* call 0x00023B7E */

loc_00300448: ;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x28) - fp_top()); /* fsubr dword ptr [esp + 0x28] */
    ecx = esp + 0x10;
    fp_top() = RECOMP_FP_PC(MEMF(esp + 0x20) / fp_top()); /* fdivr dword ptr [esp + 0x20] */
    MEMF(0x8C38B8) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0030045Fu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030045F: ;
    ecx = esp + 0x18;
    PUSH32(esp, 0x00300468u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300468: ;
    ecx = esp + 0x38;
    PUSH32(esp, 0x00300471u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00300471: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x0030047Au); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030047A: ;
    SET_LO8(ebx, MEM8(esp + 0xF));
    ecx = esp + 0x40;
    MEM8(esi + 0x1C) = LO8(ebx);
    PUSH32(esp, 0x0030048Au); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030048A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = esp + 0x40;
    PUSH32(esp, 0x003004A6u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003004A6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    ecx = MEM32(0x901E28);
    PUSH32(esp, 0x003004C1u); RECOMP_ABI_CALL(0x00035EF0u, sub_00035EF0); /* call 0x00035EF0 */

loc_003004C1: ;
    ecx = MEM32(esi + 0x2C);
    PUSH32(esp, 0x003004C9u); RECOMP_ABI_CALL(0x0001BF6Eu, sub_0001BF6E); /* call 0x0001BF6E */

loc_003004C9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003004D2u); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_003004D2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x003004DFu); RECOMP_ABI_CALL(0x000133EBu, sub_000133EB); /* call 0x000133EB */

loc_003004DF: ;
    ecx = MEM32(0x8FCBB0);
    eax = MEM32(ecx + 0x908);
    _fb = (uint32_t)(0x908) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x908)) >> 32) & 1);
    ecx = ecx + 0x908;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003004F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003004F3u); } /* indirect call */
    }

loc_003004F6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x003004FDu); RECOMP_ABI_CALL(0x00016019u, sub_00016019); /* call 0x00016019 */

loc_003004FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00300500: ;
    ecx = esp + 0x40;
    MEM8(esi + 0x1C) = LO8(ebx);
    PUSH32(esp, 0x0030050Cu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0030050C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003006B0
 * Original: 0x003006B0 - 0x003006DB (43 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003006B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003006B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x824374;
    MEM32(esi + 0x5C) = 0x824368;
    PUSH32(esp, 0x003006C5u); RECOMP_ABI_CALL(0x00036792u, sub_00036792); /* call 0x00036792 */

loc_003006C5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003006D5; /* je: equal / zero */

loc_003006CC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003006D2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003006D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003006D5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003006F0
 * Original: 0x003006F0 - 0x0030070E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003006F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003006F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003006F8u); RECOMP_ABI_CALL(0x000227FBu, sub_000227FB); /* call 0x000227FB */

loc_003006F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300708; /* je: equal / zero */

loc_003006FF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00300705u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00300705: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00300708: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00300720
 * Original: 0x00300720 - 0x00300798 (120 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00300720: ;
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x19) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x19 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00300739; /* ja: above (unsigned >) */

loc_0030072B: ;
    eax = ZX8(MEM8(eax + 0x3007A0));
    { uint32_t _jt = MEM32(eax * 4 + 0x300798); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00300739u) goto loc_00300739;
    if (_jt == 0x0030073Cu) goto loc_0030073C;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00300739: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0030073C: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    PUSH32(esp, edi);
    edi = ecx + edx + 0xC4;
    ecx = ZX8(MEM8(edx + 0xB4));
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030077A; /* je: equal / zero */

loc_00300756: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    ecx = ecx + edx + 0xC4;
    edx = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x1F000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030077A; /* jne: not equal / not zero */

loc_0030076A: ;
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 6), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0030077A; /* jne: not equal / not zero */

loc_00300770: ;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(edx, ~LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00300796; /* jne: not equal / not zero */

loc_0030077A: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x1F000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00300796; /* jne: not equal / not zero */

loc_00300784: ;
    _fa = (uint32_t)(MEM8(edi + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 6), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00300796; /* jne: not equal / not zero */

loc_0030078A: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, ~LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300796; /* je: equal / zero */

loc_00300794: ;
    SET_LO8(eax, 1);

loc_00300796: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_003007E0
 * Original: 0x003007E0 - 0x00300876 (150 bytes, 66 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003007E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003007E0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    PUSH32(esp, edi);
    edi = eax + ebx + 0xC4;
    _fa = (uint32_t)(MEM8(edi + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 6), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00300855; /* jne: not equal / not zero */

loc_003007F9: ;
    edx = ebx;
    PUSH32(esp, 0x00300800u); RECOMP_ABI_CALL(0x00300720u, sub_00300720); /* call 0x00300720 */

loc_00300800: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00300810; /* je: equal / zero */

loc_00300804: ;
    eax = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x1F40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1F40)) >> 32) & 1);
    eax = eax + 0x1F40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00300810: ;
    ecx = MEM32(edi);
    esi = ecx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    esi = esi & 0x1F;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_0030082E; /* jne: not equal / not zero */

loc_0030081C: ;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0030082E; /* jne: not equal / not zero */

loc_00300827: ;
    eax = MEM32(edi + 0xC);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0030082E: ;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = edx;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x157C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x157C)) >> 32) & 1);
    eax = eax + 0x157C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0030084F; /* jne: not equal / not zero */

loc_0030084E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0030084F: ;
    POP32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00300855: ;
    ecx = MEM32(edi);
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x157C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x157C)) >> 32) & 1);
    eax = eax + 0x157C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003008A0
 * Original: 0x003008A0 - 0x00300C39 (921 bytes, 323 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003008A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003008A0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    ebx = ecx + eax;
    edx = MEM32(ebx + 0x8F5C2C);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x2C) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003008DDu); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_003008DD: ;
    eax = MEM32(ebx + 0x8F5C2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x80000 (32-bit) */
    edx = esp + 0x30;
    eax = ebx + 0x8F5C00;
    if (TEST_Z(_fa, _fb)) goto loc_00300910; /* je: equal / zero */

loc_003008F7: ;
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x8F5BF0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7A9984);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030090Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0030090B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0030091C;

loc_00300910: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00300912: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300912; /* jne: not equal / not zero */

loc_0030091C: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030092Au); RECOMP_ABI_CALL(0x0001141Au, sub_0001141A); /* call 0x0001141A */

loc_0030092A: ;
    eax = MEM32(ebx + 0x8F5BDC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xE) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 7;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300949u); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300949: ;
    edx = MEM32(ebx + 0x8F5BE8);
    PUSH32(esp, edx);
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300959u); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300959: ;
    eax = MEM32(ebx + 0x8F5C2C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x15) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0030096Fu); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_0030096F: ;
    ecx = MEM32(esp + 0x5C);
    SET_LO8(eax, MEM8(ecx + 0x8F628C));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    eax = MEM32(ebx + 0x8F5BDC);
    MEM8(esp + 0x17) = (CMP_EQ(_fa, _fb)) ? 1 : 0; /* sete */
    edx = eax;
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 5 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00300A91; /* je: equal / zero */

loc_00300997: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x11) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 5;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003009D0; /* jne: not equal / not zero */

loc_003009AC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003009B3; /* jne: not equal / not zero */

loc_003009B1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003009B3: ;
    _fa = (uint32_t)(MEM32(0x8F6A68)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(0x8F6A68), 0x10000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003009D0; /* je: equal / zero */

loc_003009BF: ;
    _fa = (uint32_t)(MEM32(ebx + 0x8F5C2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 0x8F5C2C), 0x100000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003009D0; /* je: equal / zero */

loc_003009CB: ;
    edx = 4;

loc_003009D0: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003009E6; /* jne: not equal / not zero */

loc_003009D8: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003009E3u); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_003009E3: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003009E6: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00300A06; /* jne: not equal / not zero */

loc_003009F6: ;
    eax = MEM32(ebx + 0x8F5BDC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x18) = eax;

loc_00300A06: ;
    edx = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, 0xA);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300A14u); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300A14: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00300A6A; /* je: equal / zero */

loc_00300A1F: ;
    ecx = MEM32(ebx + 0x8F5BDC);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = esp + 0x20;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x14) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, ecx);
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300A59u); RECOMP_ABI_CALL(0x00034947u, sub_00034947); /* call 0x00034947 */

loc_00300A59: ;
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300A67u); RECOMP_ABI_CALL(0x00015240u, sub_00015240); /* call 0x00015240 */

loc_00300A67: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00300A6A: ;
    eax = MEM32(ebx + 0x8F5BDC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xA;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300A89u); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300A89: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00300B91;

loc_00300A91: ;
    eax = MEM32(ebp + 0x14);
    edx = ecx + 0x8F5B18;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300AA0u); RECOMP_ABI_CALL(0x003007E0u, sub_003007E0); /* call 0x003007E0 */

loc_00300AA0: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300AAAu); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300AAA: ;
    eax = MEM32(ebx + 0x8F5BE0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00300B10; /* jne: not equal / not zero */

loc_00300ABA: ;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00300AC7; /* jne: not equal / not zero */

loc_00300ABF: ;
    eax = MEM32(ebx + 0x8F5BE8);
    goto loc_00300ACC;

loc_00300AC7: ;
    _fb = (uint32_t)(0x157B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x157B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00300ACC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300AD6u); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300AD6: ;
    eax = MEM32(ebx + 0x8F5BE0);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00300AFC; /* jne: not equal / not zero */

loc_00300AE7: ;
    ecx = MEM32(ebx + 0x8F5BE8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x11);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300AF7u); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300AF7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00300B41;

loc_00300AFC: ;
    _fb = (uint32_t)(0x157B) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x157B;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x11);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300B0Bu); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300B0B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00300B41;

loc_00300B10: ;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x157C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x157C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300B22u); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300B22: ;
    edx = MEM32(ebx + 0x8F5BE0);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x157C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x157C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x11);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300B3Eu); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300B3E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00300B41: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300B62; /* jne: not equal / not zero */

loc_00300B49: ;
    eax = MEM32(ebx + 0x8F5BDC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300B5Fu); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300B5F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00300B62: ;
    ecx = MEM32(ebx + 0x8F5BDC);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xA);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300B78u); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300B78: ;
    edx = MEM32(ebx + 0x8F5C14);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x1E) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    PUSH32(esp, 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300B8Eu); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300B8E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00300B91: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00300BBB; /* je: equal / zero */

loc_00300B99: ;
    PUSH32(esp, 6);
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300BA4u); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300BA4: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(eax + 0x8F5B1C);
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300BB8u); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300BB8: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00300BBB: ;
    eax = MEM32(ebx + 0x8F5BDC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00300BD3; /* jae: above or equal (unsigned >=) */

loc_00300BCC: ;
    eax = 1;
    goto loc_00300BDD;

loc_00300BD3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00300BDD; /* jbe: below or equal (unsigned <=) */

loc_00300BD8: ;
    eax = 6;

loc_00300BDD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0xE);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300BE7u); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300BE7: ;
    ebx = MEM32(ebx + 0x8F5C2C);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300C0A; /* je: equal / zero */

loc_00300BF5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300C00u); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300C00: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00300C0A: ;
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ebx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00300C24; /* je: equal / zero */

loc_00300C0F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300C1Au); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300C1A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00300C24: ;
    PUSH32(esp, 2);
    PUSH32(esp, 7);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00300C2Fu); RECOMP_ABI_CALL(0x000110D2u, sub_000110D2); /* call 0x000110D2 */

loc_00300C2F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00300D20
 * Original: 0x00300D20 - 0x0030163D (2333 bytes, 796 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00300D20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00300D20: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x68) = ecx;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00300D39u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00300D39: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00300D40u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00300D3Du); } /* indirect call */
    }

loc_00300D40: ;
    ecx = MEM32(0x8F9CCC);
    ebp = eax;
    PUSH32(esp, 0x00300D4Du); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00300D4D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00300D54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00300D51u); } /* indirect call */
    }

loc_00300D54: ;
    ecx = MEM32(0x8F9CCC);
    edi = eax;
    MEM32(esp + 0x68) = edi;
    PUSH32(esp, 0x00300D65u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00300D65: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00300D6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00300D69u); } /* indirect call */
    }

loc_00300D6C: ;
    MEM32(esp + 0x1C) = eax;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003012FA; /* je: equal / zero */

loc_00300D7D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003012FA; /* je: equal / zero */

loc_00300D85: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00300D90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00300D8Eu); } /* indirect call */
    }

loc_00300D90: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    ecx = ebp;
    MEM32(esp + 0x18) = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00300D9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00300D9Du); } /* indirect call */
    }

loc_00300D9F: ;
    ebx = 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    esi = eax;
    eax = MEM32(ebp);
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00300DB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00300DAEu); } /* indirect call */
    }

loc_00300DB0: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    edi = eax;
    PUSH32(esp, 1);
    ecx = ebp;
    MEM32(esp + 0x20) = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00300DC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00300DBEu); } /* indirect call */
    }

loc_00300DC0: ;
    MEM32(esp + 0x14) = eax;
    SET_LO8(eax, MEM8(0x8F5B96));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00300DFD; /* je: equal / zero */

loc_00300DCD: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00300DD7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00300DD5u); } /* indirect call */
    }

loc_00300DD7: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(0x8F5B24);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00300DECu); RECOMP_ABI_CALL(0x00028CB4u, sub_00028CB4); /* call 0x00028CB4 */

loc_00300DEC: ;
    ecx = eax;
    PUSH32(esp, 0x00300DF3u); RECOMP_ABI_CALL(0x00034316u, sub_00034316); /* call 0x00034316 */

loc_00300DF3: ;
    edi = MEM32(0x8F5B24);
    MEM32(esp + 0x18) = edi;

loc_00300DFD: ;
    SET_LO8(eax, MEM8(0x8F630E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00300E10; /* je: equal / zero */

loc_00300E06: ;
    ecx = MEM32(0x8F62A0);
    MEM32(esp + 0x14) = ecx;

loc_00300E10: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300E21; /* jne: not equal / not zero */

loc_00300E16: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00300E21; /* jne: not equal / not zero */

loc_00300E1C: ;
    esi = ~esi;
    esi = esi & 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00300E21: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00300E46; /* je: equal / zero */

loc_00300E25: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00300E2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00300E2Du); } /* indirect call */
    }

loc_00300E2F: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x64;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = MEM32(0x8F62A0);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00300E3Fu); RECOMP_ABI_CALL(0x00028CB4u, sub_00028CB4); /* call 0x00028CB4 */

loc_00300E3F: ;
    ecx = eax;
    PUSH32(esp, 0x00300E46u); RECOMP_ABI_CALL(0x00034316u, sub_00034316); /* call 0x00034316 */

loc_00300E46: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    PUSH32(esp, 0x00300E52u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00300E52: ;
    PUSH32(esp, esi);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00300E5Au); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00300E5A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00300E62u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00300E62: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00300E6Eu); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00300E6E: ;
    eax = MEM32(ebp);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00300E7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00300E79u); } /* indirect call */
    }

loc_00300E7B: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    ecx = ebp;
    edi = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00300E87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00300E85u); } /* indirect call */
    }

loc_00300E87: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 1;
    MEM32(esp + 0x80) = eax;
    MEM32(esp + 0x84) = eax;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esp + 0x74) = ebx;
    MEM32(esp + 0x78) = ebx;
    MEM32(esp + 0x7C) = ebx;
    MEM32(esp + 0x88) = ebx;
    esi = edx;
    edx = esi + 0x157F;
    PUSH32(esp, edx);
    PUSH32(esp, 0x16);
    MEM32(esp + 0x6C) = esi;
    PUSH32(esp, 0x00300ECDu); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00300ECD: ;
    eax = MEM32(esp + esi * 4 + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x17);
    PUSH32(esp, 0x00300ED9u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00300ED9: ;
    ecx = MEM32(0x8249D4);
    edx = MEM32(0x8249D8);
    eax = MEM32(0x8249DC);
    MEM32(esp + 0x40) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x4C) = ecx;
    MEM32(esp + 0x50) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x44) = ecx;
    MEM32(esp + 0x48) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    MEM32(esp + 0x38) = edx;
    edx = MEM32(ebp);
    MEM32(esp + 0x50) = ecx;
    PUSH32(esp, ecx);
    ecx = ebp;
    MEM32(esp + 0x40) = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00300F19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00300F17u); } /* indirect call */
    }

loc_00300F19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00300F8E; /* ja: above (unsigned >) */

loc_00300F1E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x301640); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00300F25u) goto loc_00300F25;
    if (_jt == 0x00300F38u) goto loc_00300F38;
    if (_jt == 0x00300F4Bu) goto loc_00300F4B;
    if (_jt == 0x00300F5Eu) goto loc_00300F5E;
    if (_jt == 0x00300F71u) goto loc_00300F71;
    if (_jt == 0x00300F8Eu) goto loc_00300F8E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00300F25: ;
    eax = MEM32(0x8249C4);
    ecx = MEM32(0x8249C8);
    edx = MEM32(0x8249CC);
    goto loc_00300F82;

loc_00300F38: ;
    eax = MEM32(0x8249D4);
    ecx = MEM32(0x8249D8);
    edx = MEM32(0x8249DC);
    goto loc_00300F82;

loc_00300F4B: ;
    eax = MEM32(0x8249B4);
    ecx = MEM32(0x8249B8);
    edx = MEM32(0x8249BC);
    goto loc_00300F82;

loc_00300F5E: ;
    eax = MEM32(0x8249A4);
    ecx = MEM32(0x8249A8);
    edx = MEM32(0x8249AC);
    goto loc_00300F82;

loc_00300F71: ;
    eax = MEM32(0x824994);
    ecx = MEM32(0x824998);
    edx = MEM32(0x82499C);

loc_00300F82: ;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    MEM32(esp + 0x38) = edx;

loc_00300F8E: ;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    PUSH32(esp, 0x00300F9Au); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_00300F9A: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 5;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    esi = 5;
    ebx = 5;
    ecx = edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    PUSH32(esp, ecx);
    PUSH32(esp, 0x14);
    esi = edx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x80) = edx;
    PUSH32(esp, 0x00300FD0u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00300FD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x15);
    PUSH32(esp, 0x00300FD8u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00300FD8: ;
    edx = MEM32(0x8F5B90);
    PUSH32(esp, edx);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x00300FE6u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00300FE6: ;
    eax = MEM32(0x8F6308);
    PUSH32(esp, eax);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x00300FF3u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00300FF3: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00300FFCu); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00300FFC: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x19);
    PUSH32(esp, 0x00301005u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00301005: ;
    edx = MEM32(ebp);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00301013u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301011u); } /* indirect call */
    }

loc_00301013: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = 0x270F;
    MEM32(esp + 0x10) = 2;
    ecx = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00301042; /* jne: not equal / not zero */

loc_0030102B: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00301034u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301032u); } /* indirect call */
    }

loc_00301034: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030105E; /* je: equal / zero */

loc_0030103A: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 1);
    ecx = ebp;
    goto loc_00301046;

loc_00301042: ;
    PUSH32(esp, 0x15);
    PUSH32(esp, 0);

loc_00301046: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030104Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301049u); } /* indirect call */
    }

loc_0030104B: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x18);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ebp);
    ecx = ebp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030105Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301058u); } /* indirect call */
    }

loc_0030105A: ;
    MEM32(esp + 0x10) = eax;

loc_0030105E: ;
    ebx = MEM32(esp + 0x1C);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    PUSH32(esp, 0);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030106Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030106Au); } /* indirect call */
    }

loc_0030106C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x11);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, 1);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030107Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301078u); } /* indirect call */
    }

loc_0030107A: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030108A; /* je: equal / zero */

loc_00301081: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030108A; /* je: equal / zero */

loc_00301086: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0030108C;

loc_0030108A: ;
    SET_LO8(ecx, 1);

loc_0030108C: ;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x1C), 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030109C; /* je: equal / zero */

loc_00301093: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030109C; /* je: equal / zero */

loc_00301098: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0030109E;

loc_0030109C: ;
    SET_LO8(eax, 1);

loc_0030109E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003010AF; /* jne: not equal / not zero */

loc_003010A2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003010AF; /* jne: not equal / not zero */

loc_003010A6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003010AF; /* je: equal / zero */

loc_003010AB: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003010B1;

loc_003010AF: ;
    SET_LO8(ebx, 1);

loc_003010B1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003010BE; /* je: equal / zero */

loc_003010B5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003010BE; /* je: equal / zero */

loc_003010BA: ;
    SET_LO8(eax, 1);
    goto loc_003010C0;

loc_003010BE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003010C0: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    MEM8(0x901DE9) = 0;
    MEM8(0x901D88) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_00301138; /* jne: not equal / not zero */

loc_003010D2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00301138; /* jne: not equal / not zero */

loc_003010D6: ;
    SET_LO8(ecx, MEM8(0x8F6A6A));
    SET_LO8(ecx, ~LO8(ecx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00301112; /* je: equal / zero */

loc_003010E3: ;
    PUSH32(esp, 0x2327);
    PUSH32(esp, 0x13);
    MEM8(0x901D88) = 1;
    PUSH32(esp, 0x003010F6u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_003010F6: ;
    PUSH32(esp, 0x824988);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00301102u); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_00301102: ;
    PUSH32(esp, 0x824978);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0030110Eu); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_0030110E: ;
    PUSH32(esp, 0);
    goto loc_0030117E;

loc_00301112: ;
    PUSH32(esp, 0x157E);
    PUSH32(esp, 0x13);
    MEM8(0x901DE9) = 1;
    PUSH32(esp, 0x00301125u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00301125: ;
    PUSH32(esp, 0x824968);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00301131u); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_00301131: ;
    PUSH32(esp, 0x82495C);
    goto loc_00301175;

loc_00301138: ;
    edx = MEM32(esp + 0x70);
    PUSH32(esp, edx);
    eax = esp + 0x78;
    PUSH32(esp, 0x824950);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030114Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0030114C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    eax = 0x157C;
    if (CMP_NE(_fa, _fb)) goto loc_0030115C; /* jne: not equal / not zero */

loc_00301158: ;
    eax = MEM32(esp + 0x14);

loc_0030115C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x13);
    PUSH32(esp, 0x00301164u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00301164: ;
    ecx = esp + 0x7C;
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00301170u); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_00301170: ;
    PUSH32(esp, 0x824948);

loc_00301175: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0030117Cu); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_0030117C: ;
    PUSH32(esp, 1);

loc_0030117E: ;
    PUSH32(esp, 0x1B);
    PUSH32(esp, 0x00301185u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00301185: ;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00301198; /* jae: above or equal (unsigned >=) */

loc_00301191: ;
    eax = 1;
    goto loc_003011A2;

loc_00301198: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003011A2; /* jbe: below or equal (unsigned <=) */

loc_0030119D: ;
    eax = 6;

loc_003011A2: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x1A);
    PUSH32(esp, 0x003011AAu); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_003011AA: ;
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebx);
    edx = esp + 0x2C;
    PUSH32(esp, 0x824940);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003011BEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003011BE: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, 0x003011CAu); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_003011CA: ;
    ecx = edi;
    ecx = ecx & 0x80000001u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    if ((_fas >= 0)) goto loc_003011DA; /* jns: not sign (positive) */

loc_003011D5: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003011DA: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, 0x824934);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003011EBu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003011EB: ;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0x003011F7u); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_003011F7: ;
    esi = edi + 1;
    ecx = esi;
    ecx = ecx & 0x80000001u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    if ((_fas >= 0)) goto loc_0030120A; /* jns: not sign (positive) */

loc_00301205: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx | 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0030120A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, 0x824934);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030121Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0030121B: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0030122Au); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_0030122A: ;
    ecx = MEM32(esp + 0x6C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edx = esp + 0x2C;
    PUSH32(esp, 0x82492C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030123Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0030123F: ;
    eax = esp + 0x34;
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0030124Bu); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_0030124B: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edx = esp + 0x40;
    PUSH32(esp, 0x82492C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301266u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00301266: ;
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    PUSH32(esp, 0x00301272u); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_00301272: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edx = esp + 0x54;
    PUSH32(esp, 0x82492C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0030128Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0030128F: ;
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x0030129Bu); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_0030129B: ;
    eax = edi + 1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edx = esp + 0x24;
    PUSH32(esp, 0x82492C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003012BAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003012BA: ;
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x003012C6u); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_003012C6: ;
    eax = edi + 2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 6;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edx = esp + 0x38;
    PUSH32(esp, 0x82492C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003012E2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003012E2: ;
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x003012EEu); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_003012EE: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esp + 0x68);
    goto loc_003013D7;

loc_003012FA: ;
    esi = MEM32(0x8F0650);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0030130B; /* jl: less (signed <) */

loc_00301306: ;
    eax = MEM32(esi + 0x1C);
    goto loc_00301310;

loc_0030130B: ;
    eax = 0x36;

loc_00301310: ;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x00301318u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00301318: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00301328; /* jl: less (signed <) */

loc_00301323: ;
    eax = MEM32(esi + 0x38);
    goto loc_0030132D;

loc_00301328: ;
    eax = 0x36;

loc_0030132D: ;
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00301335u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00301335: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00301345; /* jl: less (signed <) */

loc_00301340: ;
    eax = MEM32(esi + 0x54);
    goto loc_0030134A;

loc_00301345: ;
    eax = 0x36;

loc_0030134A: ;
    PUSH32(esp, eax);
    ebx = 4;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00301356u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00301356: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00301365; /* jl: less (signed <) */

loc_00301360: ;
    eax = MEM32(esi + 0x70);
    goto loc_0030136A;

loc_00301365: ;
    eax = 0x36;

loc_0030136A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    PUSH32(esp, 0x00301372u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00301372: ;
    ecx = MEM32(0x8F6294);
    PUSH32(esp, ecx);
    PUSH32(esp, 6);
    PUSH32(esp, 0x00301380u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00301380: ;
    ecx = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    PUSH32(esp, edx);
    PUSH32(esp, 9);
    PUSH32(esp, 0x00301393u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00301393: ;
    edx = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    PUSH32(esp, 0x003013A6u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_003013A6: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    PUSH32(esp, ecx);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x003013B9u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_003013B9: ;
    ecx = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    PUSH32(esp, edx);
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x003013CBu); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_003013CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003013D4u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_003013D4: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003013D7: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x12);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003013E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003013DDu); } /* indirect call */
    }

loc_003013E0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, MEM8(0x8F6A27));
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003013FF; /* je: equal / zero */

loc_003013EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003013FF; /* je: equal / zero */

loc_003013F2: ;
    ecx = ZX8(LO8(ecx));
    edx = MEM32(ecx * 4 + 0x8C377C);
    PUSH32(esp, edx);
    goto loc_00301404;

loc_003013FF: ;
    PUSH32(esp, 0x824924);

loc_00301404: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0030140Bu); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_0030140B: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00301415u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301412u); } /* indirect call */
    }

loc_00301415: ;
    SET_LO8(ecx, MEM8(0x8F5B96));
    esi = SX16(LO16(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, 0xE);
    MEM32(esp + 0x20) = esi;
    SET_LO8(ebx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, 0x0030142Fu); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_0030142F: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301464; /* je: equal / zero */

loc_0030143B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301464; /* je: equal / zero */

loc_0030143F: ;
    ecx = MEM32(0x8F5B24);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0030144Du); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_0030144D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030145F; /* je: equal / zero */

loc_00301454: ;
    ecx = MEM32(esp + 0x6C);
    PUSH32(esp, 0x0030145Du); RECOMP_ABI_CALL(0x00025ADCu, sub_00025ADC); /* call 0x00025ADC */

loc_0030145D: ;
    goto loc_003014D4;

loc_0030145F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xF);
    goto loc_003014CC;

loc_00301464: ;
    PUSH32(esp, 0x35);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x0030146Du); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_0030146D: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, 0xF);
    PUSH32(esp, 0x00301479u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00301479: ;
    esi = MEM32(0x8F0650);
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00301498; /* jl: less (signed <) */

loc_0030148A: ;
    eax = MEM32(esi + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1C);
    PUSH32(esp, 0x00301495u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_00301495: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00301498: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003014AC; /* jl: less (signed <) */

loc_0030149E: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x1D);
    PUSH32(esp, 0x003014A9u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_003014A9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003014AC: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003014C0; /* jl: less (signed <) */

loc_003014B2: ;
    edx = MEM32(esi + 0x54);
    PUSH32(esp, edx);
    PUSH32(esp, 0x1E);
    PUSH32(esp, 0x003014BDu); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_003014BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003014C0: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003014D4; /* jl: less (signed <) */

loc_003014C6: ;
    eax = MEM32(esi + 0x70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x1F);

loc_003014CC: ;
    PUSH32(esp, 0x003014D1u); RECOMP_ABI_CALL(0x00030AEAu, sub_00030AEA); /* call 0x00030AEA */

loc_003014D1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003014D4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x51) = ecx;
    MEM32(esp + 0x55) = ecx;
    MEM32(esp + 0x59) = ecx;
    MEM32(esp + 0x5D) = ecx;
    MEM16(esp + 0x61) = LO16(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x14);
    PUSH32(esp, 3);
    MEM8(esp + 0x6B) = LO8(ecx);
    MEM8(esp + 0x58) = 0;
    edx = MEM32(ebp);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00301501u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003014FEu); } /* indirect call */
    }

loc_00301501: ;
    PUSH32(esp, eax);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0030150Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0030150C: ;
    ecx = esp + 0x5C;
    PUSH32(esp, 0x28);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00301518u); RECOMP_ABI_CALL(0x005CC3B0u, sub_005CC3B0); /* call 0x005CC3B0 */

loc_00301518: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301522; /* je: equal / zero */

loc_0030151F: ;
    MEM8(eax) = 0;

loc_00301522: ;
    edi = 0x824920;
    esi = esp + 0x50;
    ecx = 3;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0030153F; /* jne: not equal / not zero */

loc_00301536: ;
    eax = MEM32(0x824408);
    MEM32(esp + 0x50) = eax;

loc_0030153F: ;
    edx = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00301547: ;
    _fa = (uint32_t)(MEM32(eax * 8 + 0x824450)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 8 + 0x824450), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301558; /* je: equal / zero */

loc_00301550: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00301547; /* jl: less (signed <) */

loc_00301556: ;
    goto loc_0030155F;

loc_00301558: ;
    ecx = MEM32(eax * 8 + 0x824454);

loc_0030155F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00301567u); RECOMP_ABI_CALL(0x00033C4Fu, sub_00033C4F); /* call 0x00033C4F */

loc_00301567: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003015BE; /* je: equal / zero */

loc_00301573: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003015BE; /* je: equal / zero */

loc_00301577: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00301582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301580u); } /* indirect call */
    }

loc_00301582: ;
    ebx = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00301586: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00301588: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301592u); RECOMP_ABI_CALL(0x00025E6Au, sub_00025E6A); /* call 0x00025E6A */

loc_00301592: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00301588; /* jl: less (signed <) */

loc_0030159B: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x10);
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003015A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003015A4u); } /* indirect call */
    }

loc_003015A6: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    ebx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00301586; /* jl: less (signed <) */

loc_003015AE: ;
    PUSH32(esp, 0x003015B3u); RECOMP_ABI_CALL(0x0001E31Du, sub_0001E31D); /* call 0x0001E31D */

loc_003015B3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003015BE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0x003015CDu); RECOMP_ABI_CALL(0x00025E6Au, sub_00025E6A); /* call 0x00025E6A */

loc_003015CD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x003015DCu); RECOMP_ABI_CALL(0x00025E6Au, sub_00025E6A); /* call 0x00025E6A */

loc_003015DC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 0x003015EBu); RECOMP_ABI_CALL(0x00025E6Au, sub_00025E6A); /* call 0x00025E6A */

loc_003015EB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    PUSH32(esp, 0x003015FAu); RECOMP_ABI_CALL(0x00025E6Au, sub_00025E6A); /* call 0x00025E6A */

loc_003015FA: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0030160Cu); RECOMP_ABI_CALL(0x00025E6Au, sub_00025E6A); /* call 0x00025E6A */

loc_0030160C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0030161Bu); RECOMP_ABI_CALL(0x00025E6Au, sub_00025E6A); /* call 0x00025E6A */

loc_0030161B: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x12);
    PUSH32(esp, 0x12);
    PUSH32(esp, 1);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0030162Au); RECOMP_ABI_CALL(0x00025E6Au, sub_00025E6A); /* call 0x00025E6A */

loc_0030162A: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00301632u); RECOMP_ABI_CALL(0x0001E31Du, sub_0001E31D); /* call 0x0001E31D */

loc_00301632: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003018B0
 * Original: 0x003018B0 - 0x00301917 (103 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003018B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003018B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003018B9u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_003018B9: ;
    MEM8(eax + 0x44) = 0;
    edi = MEM32(0x8FC1D0);
    ecx = MEM32(edi + 0x20C);
    _fb = (uint32_t)(0x20C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003018D9; /* je: equal / zero */

loc_003018D3: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003018D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003018D7u); } /* indirect call */
    }

loc_003018D9: ;
    ecx = esi;
    MEM32(edi) = 0;
    PUSH32(esp, 0x003018E6u); RECOMP_ABI_CALL(0x00028FCAu, sub_00028FCA); /* call 0x00028FCA */

loc_003018E6: ;
    PUSH32(esp, 0x003018EBu); RECOMP_ABI_CALL(0x00027157u, sub_00027157); /* call 0x00027157 */

loc_003018EB: ;
    PUSH32(esp, 0x003018F0u); RECOMP_ABI_CALL(0x00017ADBu, sub_00017ADB); /* call 0x00017ADB */

loc_003018F0: ;
    ecx = MEM32(0x8FC1EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0030190A; /* je: equal / zero */

loc_003018FC: ;
    PUSH32(esp, 0x00301901u); RECOMP_ABI_CALL(0x0002CDE1u, sub_0002CDE1); /* call 0x0002CDE1 */

loc_00301901: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00301907u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00301907: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0030190A: ;
    POP32(esp, edi);
    MEM32(0x8FC1EC) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00301930
 * Original: 0x00301930 - 0x00301993 (99 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00301930: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC1D0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301941u); RECOMP_ABI_CALL(0x0001250Eu, sub_0001250E); /* call 0x0001250E */

loc_00301941: ;
    eax = MEM32(esi + 0x2C);
    ebp = MEM32(eax + 4);
    SET_LO8(eax, MEM8(esi + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301956; /* je: equal / zero */

loc_0030194E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301956; /* je: equal / zero */

loc_00301952: ;
    SET_LO8(ebx, 1);
    goto loc_00301958;

loc_00301956: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00301958: ;
    edi = esi + 0x1C;
    ecx = edi;
    PUSH32(esp, 0x00301962u); RECOMP_ABI_CALL(0x00013B2Au, sub_00013B2A); /* call 0x00013B2A */

loc_00301962: ;
    ecx = esi + 0x5C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0030196Bu); RECOMP_ABI_CALL(0x0002ECA4u, sub_0002ECA4); /* call 0x0002ECA4 */

loc_0030196B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030198E; /* je: equal / zero */

loc_00301972: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0x224);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0030198E; /* jg: greater (signed >) */

loc_00301982: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x0030198Eu); RECOMP_ABI_CALL(0x0001EFA2u, sub_0001EFA2); /* call 0x0001EFA2 */

loc_0030198E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003019B0
 * Original: 0x003019B0 - 0x00301BE7 (567 bytes, 198 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003019B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003019B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x824B4C);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003019C5u); RECOMP_ABI_CALL(0x000235CFu, sub_000235CF); /* call 0x000235CF */

loc_003019C5: ;
    ecx = MEM32(esp + 0x10);
    MEM32(esi) = 0x824B40;
    MEM32(esi + 0x1C) = ecx;
    ecx = MEM32(0x907BA4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    MEM32(0x8CFDE0) = 1;
    edx = MEM32(ecx);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003019EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003019EBu); } /* indirect call */
    }

loc_003019ED: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301A14; /* je: equal / zero */

loc_003019F3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x824B14);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301A0Fu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00301A0F: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00301A16;

loc_00301A14: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00301A16: ;
    MEM32(esi + 0x20) = edi;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00301A2Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301A28u); } /* indirect call */
    }

loc_00301A2A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301A51; /* je: equal / zero */

loc_00301A30: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x824AEC);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301A4Cu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00301A4C: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00301A53;

loc_00301A51: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00301A53: ;
    MEM32(esi + 0x24) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00301A67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301A65u); } /* indirect call */
    }

loc_00301A67: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301A8E; /* je: equal / zero */

loc_00301A6D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x824AB8);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301A89u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00301A89: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00301A90;

loc_00301A8E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00301A90: ;
    MEM32(esi + 0x28) = edi;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00301AA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301AA2u); } /* indirect call */
    }

loc_00301AA4: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301ACB; /* je: equal / zero */

loc_00301AAA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x824A94);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301AC6u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00301AC6: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00301ACD;

loc_00301ACB: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00301ACD: ;
    MEM32(esi + 0x2C) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00301AE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301ADFu); } /* indirect call */
    }

loc_00301AE1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301B08; /* je: equal / zero */

loc_00301AE7: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x824A70);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301B03u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00301B03: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00301B0A;

loc_00301B08: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00301B0A: ;
    MEM32(esi + 0x30) = edi;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00301B1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301B1Cu); } /* indirect call */
    }

loc_00301B1E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301B45; /* je: equal / zero */

loc_00301B24: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x824A40);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301B40u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00301B40: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00301B47;

loc_00301B45: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00301B47: ;
    MEM32(esi + 0x34) = edi;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00301B5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301B59u); } /* indirect call */
    }

loc_00301B5B: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301B82; /* je: equal / zero */

loc_00301B61: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x824A0C);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301B7Du); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00301B7D: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00301B84;

loc_00301B82: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00301B84: ;
    MEM32(esi + 0x38) = edi;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00301B98u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00301B96u); } /* indirect call */
    }

loc_00301B98: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301BD1; /* je: equal / zero */

loc_00301B9E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x8249E4);
    PUSH32(esp, 0x4F4A771);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301BBAu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00301BBA: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = edi;
    POP32(esp, edi);
    eax = esi;
    MEM32(0x8FC1F0) = 0x3C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00301BD1: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x3C) = edi;
    POP32(esp, edi);
    eax = esi;
    MEM32(0x8FC1F0) = 0x3C;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00301C80
 * Original: 0x00301C80 - 0x00301E94 (532 bytes, 177 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301C80: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x8FC604);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebx = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00301CAA; /* je: equal / zero */

loc_00301C95: ;
    _fa = (uint32_t)(MEM8(0x907E70)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x907E70), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301CAA; /* je: equal / zero */

loc_00301C9D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301CAA; /* je: equal / zero */

loc_00301CA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00301D88; /* jne: not equal / not zero */

loc_00301CAA: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ebx;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301CC4; /* je: equal / zero */

loc_00301CBA: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301CC4u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00301CC4: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ebx;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301CDE; /* je: equal / zero */

loc_00301CD4: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301CDEu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00301CDE: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ebx;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301CF8; /* je: equal / zero */

loc_00301CEE: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301CF8u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00301CF8: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ebx;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301D12; /* je: equal / zero */

loc_00301D08: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301D12u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00301D12: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edi;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301D2E; /* je: equal / zero */

loc_00301D24: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301D2Eu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00301D2E: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ebx;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */

loc_00301D3C: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00301D48; /* je: equal / zero */

loc_00301D3E: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301D48u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00301D48: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ebx;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301D62; /* je: equal / zero */

loc_00301D58: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301D62u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00301D62: ;
    eax = MEM32(0x8FC1F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00301E48; /* jle: less or equal (signed <=) */

loc_00301D6F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x8FC1F0) = eax;
    esi = MEM32(esi + 0x38);
    ecx = MEM32(esi);
    MEM32(esp + 0xC) = ebx;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    goto loc_00301E56;

loc_00301D88: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = edi;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301DA4; /* je: equal / zero */

loc_00301D9A: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301DA4u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00301DA4: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = edi;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301DBE; /* je: equal / zero */

loc_00301DB4: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301DBEu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00301DBE: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = edi;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301DD8; /* je: equal / zero */

loc_00301DCE: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301DD8u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00301DD8: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = edi;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301DF2; /* je: equal / zero */

loc_00301DE8: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301DF2u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00301DF2: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = ebx;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301E0C; /* je: equal / zero */

loc_00301E02: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301E0Cu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00301E0C: ;
    PUSH32(esp, 0x00301E11u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00301E11: ;
    ecx = eax;
    PUSH32(esp, 0x00301E18u); RECOMP_ABI_CALL(0x0002085Cu, sub_0002085C); /* call 0x0002085C */

loc_00301E18: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00301D2E; /* jne: not equal / not zero */

loc_00301E20: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301D2E; /* je: equal / zero */

loc_00301E2D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00301D2E; /* je: equal / zero */

loc_00301E35: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(eax);
    MEM32(esp + 0xC) = edi;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    goto loc_00301D3C;

loc_00301E48: ;
    esi = MEM32(esi + 0x38);
    ecx = MEM32(esi);
    MEM32(esp + 0xC) = edi;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */

loc_00301E56: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00301E62; /* je: equal / zero */

loc_00301E58: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00301E62u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00301E62: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00301E6Cu); RECOMP_ABI_CALL(0x000258A2u, sub_000258A2); /* call 0x000258A2 */

loc_00301E6C: ;
    ecx = MEM32(0x8FCBB0);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00301E7Au); RECOMP_ABI_CALL(0x00023476u, sub_00023476); /* call 0x00023476 */

loc_00301E7A: ;
    PUSH32(esp, 0x00301E7Fu); RECOMP_ABI_CALL(0x00025915u, sub_00025915); /* call 0x00025915 */

loc_00301E7F: ;
    PUSH32(esp, 0x00301E84u); RECOMP_ABI_CALL(0x0001FF97u, sub_0001FF97); /* call 0x0001FF97 */

loc_00301E84: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00301E8Au); RECOMP_ABI_CALL(0x000258A2u, sub_000258A2); /* call 0x000258A2 */

loc_00301E8A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00301F20
 * Original: 0x00301F20 - 0x00301FE0 (192 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00301F20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00301F20: ;
    _fb = (uint32_t)(0x2E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2E4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    PUSH32(esp, 0x00301F2Eu); RECOMP_ABI_CALL(0x000119D3u, sub_000119D3); /* call 0x000119D3 */

loc_00301F2E: ;
    ecx = MEM32(0x8C370C);
    SET_LO8(edx, MEM8(0x8FC1CD));
    eax = 0x3C;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0xC) = eax;
    MEM8(esp + 0xB1) = LO8(eax);
    MEM8(esp + 0xB2) = LO8(eax);
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = ecx;
    ecx = 0xA;
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    MEM8(esp + 0xB4) = LO8(edx);
    MEM32(esp + 0x34) = 3;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = 0x100;
    MEM32(esp + 0x44) = 1;
    MEM32(esp + 0x48) = ecx;
    MEM32(esp + 0x40) = 0x8C;
    PUSH32(esp, 0x00301FA4u); RECOMP_ABI_CALL(0x00035AEAu, sub_00035AEA); /* call 0x00035AEA */

loc_00301FA4: ;
    ecx = esp + 0x50;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00301FAEu); RECOMP_ABI_CALL(0x00016843u, sub_00016843); /* call 0x00016843 */

loc_00301FAE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp;
    PUSH32(esp, edx);
    ecx = esp + 0xBC;
    PUSH32(esp, 0x00301FC1u); RECOMP_ABI_CALL(0x0001CE0Fu, sub_0001CE0F); /* call 0x0001CE0F */

loc_00301FC1: ;
    ecx = esp + 0xB8;
    PUSH32(esp, 0x00301FCDu); RECOMP_ABI_CALL(0x0001608Cu, sub_0001608C); /* call 0x0001608C */

loc_00301FCD: ;
    ecx = esp + 0xB8;
    PUSH32(esp, 0x00301FD9u); RECOMP_ABI_CALL(0x0002A9A1u, sub_0002A9A1); /* call 0x0002A9A1 */

loc_00301FD9: ;
    _fb = (uint32_t)(0x2E4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2E4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00302010
 * Original: 0x00302010 - 0x0030207C (108 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302010: ;
    _fb = (uint32_t)(0xC04) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC04;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x0030201Bu); RECOMP_ABI_CALL(0x0059F21Bu, sub_0059F21B); /* call 0x0059F21B */

loc_0030201B: ;
    eax = MEM32(esp + 0xC0C);
    ecx = MEM32(esp + 0xC08);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302030u); RECOMP_ABI_CALL(0x000120F9u, sub_000120F9); /* call 0x000120F9 */

loc_00302030: ;
    PUSH32(esp, 0x824B68);
    PUSH32(esp, 0x0030203Au); RECOMP_ABI_CALL(0x00540730u, sub_00540730); /* call 0x00540730 */

loc_0030203A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00302054u); RECOMP_ABI_CALL(0x0044900Bu, sub_0044900B); /* call 0x0044900B */

loc_00302054: ;
    edx = MEM32(esp);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00302062u); RECOMP_ABI_CALL(0x004DC128u, sub_004DC128); /* call 0x004DC128 */

loc_00302062: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302070; /* je: equal / zero */

loc_00302069: ;
    MEM8(0x8FC1D5) = 1;

loc_00302070: ;
    PUSH32(esp, 0x00302075u); RECOMP_ABI_CALL(0x00014BD8u, sub_00014BD8); /* call 0x00014BD8 */

loc_00302075: ;
    _fb = (uint32_t)(0xC04) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC04;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0030203D
 * Original: 0x0030203D - 0x0030207C (63 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030203D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030203D: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x00302054u); RECOMP_ABI_CALL(0x0044900Bu, sub_0044900B); /* call 0x0044900B */

loc_00302054: ;
    edx = MEM32(esp);
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00302062u); RECOMP_ABI_CALL(0x004DC128u, sub_004DC128); /* call 0x004DC128 */

loc_00302062: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302070; /* je: equal / zero */

loc_00302069: ;
    MEM8(0x8FC1D5) = 1;

loc_00302070: ;
    PUSH32(esp, 0x00302075u); RECOMP_ABI_CALL(0x00014BD8u, sub_00014BD8); /* call 0x00014BD8 */

loc_00302075: ;
    _fb = (uint32_t)(0xC04) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC04;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003020A0
 * Original: 0x003020A0 - 0x00302368 (712 bytes, 211 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003020A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003020A0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003020AAu); RECOMP_ABI_CALL(0x0003755Cu, sub_0003755C); /* call 0x0003755C */

loc_003020AA: ;
    PUSH32(esp, 0x003020AFu); RECOMP_ABI_CALL(0x00028C28u, sub_00028C28); /* call 0x00028C28 */

loc_003020AF: ;
    eax = MEM32(esi + 0x210);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003021E5; /* je: equal / zero */

loc_003020BF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00302122; /* je: equal / zero */

loc_003020C2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003021D5; /* jne: not equal / not zero */

loc_003020C9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003020CFu); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_003020CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003020D7u); RECOMP_ABI_CALL(0x0003518Fu, sub_0003518F); /* call 0x0003518F */

loc_003020D7: ;
    PUSH32(esp, 0x003020DCu); RECOMP_ABI_CALL(0x0003302Eu, sub_0003302E); /* call 0x0003302E */

loc_003020DC: ;
    ecx = eax;
    PUSH32(esp, 0x003020E3u); RECOMP_ABI_CALL(0x0002071Cu, sub_0002071C); /* call 0x0002071C */

loc_003020E3: ;
    ecx = esi;
    PUSH32(esp, 0x003020EAu); RECOMP_ABI_CALL(0x00026FB3u, sub_00026FB3); /* call 0x00026FB3 */

loc_003020EA: ;
    _fa = (uint32_t)(MEM32(esi + 0x214)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x214), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003020F9; /* jne: not equal / not zero */

loc_003020F2: ;
    ecx = esi;
    PUSH32(esp, 0x003020F9u); RECOMP_ABI_CALL(0x00037624u, sub_00037624); /* call 0x00037624 */

loc_003020F9: ;
    PUSH32(esp, 0x003020FEu); RECOMP_ABI_CALL(0x0001EF25u, sub_0001EF25); /* call 0x0001EF25 */

loc_003020FE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00302105u); RECOMP_ABI_CALL(0x00035590u, sub_00035590); /* call 0x00035590 */

loc_00302105: ;
    ecx = eax;
    PUSH32(esp, 0x0030210Cu); RECOMP_ABI_CALL(0x0001F2E5u, sub_0001F2E5); /* call 0x0001F2E5 */

loc_0030210C: ;
    PUSH32(esp, 0x00302111u); RECOMP_ABI_CALL(0x00030135u, sub_00030135); /* call 0x00030135 */

loc_00302111: ;
    PUSH32(esp, 0x00302116u); RECOMP_ABI_CALL(0x0002CC79u, sub_0002CC79); /* call 0x0002CC79 */

loc_00302116: ;
    PUSH32(esp, 0x0030211Bu); RECOMP_ABI_CALL(0x0002BE14u, sub_0002BE14); /* call 0x0002BE14 */

loc_0030211B: ;
    PUSH32(esp, 1);
    goto loc_003021C2;

loc_00302122: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00302128u); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_00302128: ;
    SET_LO8(eax, MEM8(0x8C36FC));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302184; /* je: equal / zero */

loc_00302134: ;
    PUSH32(esp, 0x00302139u); RECOMP_ABI_CALL(0x0002C9C7u, sub_0002C9C7); /* call 0x0002C9C7 */

loc_00302139: ;
    PUSH32(esp, 0x0030213Eu); RECOMP_ABI_CALL(0x0003518Fu, sub_0003518F); /* call 0x0003518F */

loc_0030213E: ;
    PUSH32(esp, 0x00302143u); RECOMP_ABI_CALL(0x0003302Eu, sub_0003302E); /* call 0x0003302E */

loc_00302143: ;
    ecx = eax;
    PUSH32(esp, 0x0030214Au); RECOMP_ABI_CALL(0x0002071Cu, sub_0002071C); /* call 0x0002071C */

loc_0030214A: ;
    ecx = esi;
    PUSH32(esp, 0x00302151u); RECOMP_ABI_CALL(0x00026FB3u, sub_00026FB3); /* call 0x00026FB3 */

loc_00302151: ;
    _fa = (uint32_t)(MEM32(esi + 0x214)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x214), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302160; /* jne: not equal / not zero */

loc_00302159: ;
    ecx = esi;
    PUSH32(esp, 0x00302160u); RECOMP_ABI_CALL(0x00037624u, sub_00037624); /* call 0x00037624 */

loc_00302160: ;
    PUSH32(esp, 0x00302165u); RECOMP_ABI_CALL(0x0001EF25u, sub_0001EF25); /* call 0x0001EF25 */

loc_00302165: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0030216Cu); RECOMP_ABI_CALL(0x00035590u, sub_00035590); /* call 0x00035590 */

loc_0030216C: ;
    ecx = eax;
    PUSH32(esp, 0x00302173u); RECOMP_ABI_CALL(0x0001F2E5u, sub_0001F2E5); /* call 0x0001F2E5 */

loc_00302173: ;
    PUSH32(esp, 0x00302178u); RECOMP_ABI_CALL(0x00030135u, sub_00030135); /* call 0x00030135 */

loc_00302178: ;
    PUSH32(esp, 0x0030217Du); RECOMP_ABI_CALL(0x0002CC79u, sub_0002CC79); /* call 0x0002CC79 */

loc_0030217D: ;
    PUSH32(esp, 0x00302182u); RECOMP_ABI_CALL(0x0002BE14u, sub_0002BE14); /* call 0x0002BE14 */

loc_00302182: ;
    goto loc_00302193;

loc_00302184: ;
    _fa = (uint32_t)(MEM32(esi + 0x214)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x214), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302193; /* jne: not equal / not zero */

loc_0030218C: ;
    ecx = esi;
    PUSH32(esp, 0x00302193u); RECOMP_ABI_CALL(0x00037624u, sub_00037624); /* call 0x00037624 */

loc_00302193: ;
    edx = MEM32(0x8BFE70);
    ecx = 0x8BFE70;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003021A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030219Eu); } /* indirect call */
    }

loc_003021A1: ;
    ecx = MEM32(esi + 0x214);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003021BB; /* jne: not equal / not zero */

loc_003021AB: ;
    _fa = (uint32_t)(MEM32(esi + 0x210)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x210), 2 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, ecx);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    goto loc_003021C5;

loc_003021BB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);

loc_003021C2: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);

loc_003021C5: ;
    ecx = esi;
    PUSH32(esp, 0x003021CCu); RECOMP_ABI_CALL(0x0001542Fu, sub_0001542F); /* call 0x0001542F */

loc_003021CC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003021D2u); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_003021D2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003021D5: ;
    eax = MEM32(esi + 0x214);
    MEM32(esi + 0x210) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003021E5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003021EBu); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_003021EB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = ebx;
    PUSH32(esp, 0x003021F6u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_003021F6: ;
    ecx = eax;
    PUSH32(esp, 0x003021FDu); RECOMP_ABI_CALL(0x0001E890u, sub_0001E890); /* call 0x0001E890 */

loc_003021FD: ;
    ecx = MEM32(0x901E28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302222; /* je: equal / zero */

loc_00302207: ;
    PUSH32(esp, 0x0030220Cu); RECOMP_ABI_CALL(0x00012F4Au, sub_00012F4A); /* call 0x00012F4A */

loc_0030220C: ;
    ecx = MEM32(0x901E28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030221C; /* je: equal / zero */

loc_00302216: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030221Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030221Au); } /* indirect call */
    }

loc_0030221C: ;
    MEM32(0x901E28) = ebx;

loc_00302222: ;
    ecx = MEM32(0x901E40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302238; /* je: equal / zero */

loc_0030222C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00302232u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302230u); } /* indirect call */
    }

loc_00302232: ;
    MEM32(0x901E40) = ebx;

loc_00302238: ;
    ecx = MEM32(esi + 0x1F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302248; /* je: equal / zero */

loc_00302242: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00302248u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302246u); } /* indirect call */
    }

loc_00302248: ;
    ecx = MEM32(esi + 0x1F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302258; /* je: equal / zero */

loc_00302252: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00302258u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302256u); } /* indirect call */
    }

loc_00302258: ;
    ecx = MEM32(esi + 0x1F8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302268; /* je: equal / zero */

loc_00302262: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00302268u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302266u); } /* indirect call */
    }

loc_00302268: ;
    PUSH32(esp, 0x0030226Du); RECOMP_ABI_CALL(0x0002D728u, sub_0002D728); /* call 0x0002D728 */

loc_0030226D: ;
    PUSH32(esp, 0x00302272u); RECOMP_ABI_CALL(0x00036BF7u, sub_00036BF7); /* call 0x00036BF7 */

loc_00302272: ;
    ecx = MEM32(esi + 0x1EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302282; /* je: equal / zero */

loc_0030227C: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00302282u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302280u); } /* indirect call */
    }

loc_00302282: ;
    ecx = esi + 0xDC;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1E0);
    _fb = (uint32_t)(0xD8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xD8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0030229Au); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_0030229A: ;
    ecx = MEM32(esi + 0x1E0);
    PUSH32(esp, 0x003022A5u); RECOMP_ABI_CALL(0x0001B2ADu, sub_0001B2AD); /* call 0x0001B2AD */

loc_003022A5: ;
    edx = MEM32(esi + 0x1E0);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003022B3u); RECOMP_ABI_CALL(0x000280EDu, sub_000280ED); /* call 0x000280ED */

loc_003022B3: ;
    ecx = MEM32(esi + 0x1E0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003022C3; /* je: equal / zero */

loc_003022BD: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003022C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003022C1u); } /* indirect call */
    }

loc_003022C3: ;
    ecx = MEM32(esi + 0x1E4);
    MEM32(esi + 0x1E0) = ebx;
    PUSH32(esp, 0x003022D4u); RECOMP_ABI_CALL(0x0002DA7Au, sub_0002DA7A); /* call 0x0002DA7A */

loc_003022D4: ;
    PUSH32(esp, 0x003022D9u); RECOMP_ABI_CALL(0x0003302Eu, sub_0003302E); /* call 0x0003302E */

loc_003022D9: ;
    ecx = eax;
    PUSH32(esp, 0x003022E0u); RECOMP_ABI_CALL(0x0001C00Eu, sub_0001C00E); /* call 0x0001C00E */

loc_003022E0: ;
    ecx = esi;
    PUSH32(esp, 0x003022E7u); RECOMP_ABI_CALL(0x00017B21u, sub_00017B21); /* call 0x00017B21 */

loc_003022E7: ;
    ecx = MEM32(esi + 0x1FC);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003022F5u); RECOMP_ABI_CALL(0x000280EDu, sub_000280ED); /* call 0x000280ED */

loc_003022F5: ;
    PUSH32(esp, 0x003022FAu); RECOMP_ABI_CALL(0x00029FCEu, sub_00029FCE); /* call 0x00029FCE */

loc_003022FA: ;
    edx = MEM32(esi + 0x1E4);
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x1FC) = ebx;
    PUSH32(esp, 0x0030230Eu); RECOMP_ABI_CALL(0x000280EDu, sub_000280ED); /* call 0x000280ED */

loc_0030230E: ;
    ecx = MEM32(esi + 0x1E4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030231E; /* je: equal / zero */

loc_00302318: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0030231Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030231Cu); } /* indirect call */
    }

loc_0030231E: ;
    MEM32(esi + 0x1E4) = ebx;
    PUSH32(esp, 0x00302329u); RECOMP_ABI_CALL(0x0001EF25u, sub_0001EF25); /* call 0x0001EF25 */

loc_00302329: ;
    ecx = esp + 8;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302335u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302335: ;
    ecx = eax;
    PUSH32(esp, 0x0030233Cu); RECOMP_ABI_CALL(0x0055E0FDu, sub_0055E0FD); /* call 0x0055E0FD */

loc_0030233C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00302347u); RECOMP_ABI_CALL(0x0001542Fu, sub_0001542F); /* call 0x0001542F */

loc_00302347: ;
    PUSH32(esp, 0x0030234Cu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_0030234C: ;
    PUSH32(esp, ebx);
    MEM32(eax + 0x28) = ebx;
    PUSH32(esp, 0x00302355u); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_00302355: ;
    edx = MEM32(esi + 0x214);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x210) = edx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00302420
 * Original: 0x00302420 - 0x003024F8 (216 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302420: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    esi = ecx;
    PUSH32(esp, 1);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00302436u); RECOMP_ABI_CALL(0x00012EAFu, sub_00012EAF); /* call 0x00012EAF */

loc_00302436: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0030243Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0030243F: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030246B; /* je: equal / zero */

loc_00302448: ;
    ecx = MEM32(esi + 0x1E4);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8242E0);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00302460u); RECOMP_ABI_CALL(0x00011780u, sub_00011780); /* call 0x00011780 */

loc_00302460: ;
    MEM32(edi) = 0x8242D4;
    MEM32(edi + 0x28) = esi;
    goto loc_0030246D;

loc_0030246B: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0030246D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, 1);
    ecx = esp + 0x20;
    MEM32(esi + 0x1F0) = edi;
    PUSH32(esp, 0x00302482u); RECOMP_ABI_CALL(0x00012EAFu, sub_00012EAF); /* call 0x00012EAF */

loc_00302482: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x2C);
    PUSH32(esp, 0x0030248Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0030248B: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003024B7; /* je: equal / zero */

loc_00302494: ;
    eax = MEM32(esi + 0x1E4);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8242F8);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003024ACu); RECOMP_ABI_CALL(0x00011780u, sub_00011780); /* call 0x00011780 */

loc_003024AC: ;
    MEM32(edi) = 0x8242EC;
    MEM32(edi + 0x28) = esi;
    goto loc_003024B9;

loc_003024B7: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003024B9: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    MEM32(esi + 0x1F4) = edi;
    PUSH32(esp, 0x003024C8u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003024C8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003024EA; /* je: equal / zero */

loc_003024CF: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x003024DEu); RECOMP_ABI_CALL(0x0002A3C5u, sub_0002A3C5); /* call 0x0002A3C5 */

loc_003024DE: ;
    POP32(esp, edi);
    MEM32(esi + 0x1F8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003024EA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(esi + 0x1F8) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00302530
 * Original: 0x00302530 - 0x003028BF (911 bytes, 248 insns)
 * Category: game_camera
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00302530: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 5);
    eax = esp + 0x3C;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 2;
    edi = 3;
    PUSH32(esp, eax);
    esi = ecx;
    MEM32(esp + 0x40) = ebp;
    MEM32(esp + 0x44) = 1;
    MEM32(esp + 0x48) = 4;
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x50) = edi;
    PUSH32(esp, 0x0030256Du); RECOMP_ABI_CALL(0x00034087u, sub_00034087); /* call 0x00034087 */

loc_0030256D: ;
    PUSH32(esp, 4);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x30) = ebp;
    MEM32(esp + 0x34) = 1;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x3C) = edi;
    PUSH32(esp, 0x0030258Fu); RECOMP_ABI_CALL(0x00020389u, sub_00020389); /* call 0x00020389 */

loc_0030258F: ;
    PUSH32(esp, 5);
    edx = esp + 0x50;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esp + 0x54) = edi;
    MEM32(esp + 0x58) = 4;
    MEM32(esp + 0x5C) = ebp;
    MEM32(esp + 0x60) = 1;
    MEM32(esp + 0x64) = ebx;
    PUSH32(esp, 0x003025B9u); RECOMP_ABI_CALL(0x0002AFFFu, sub_0002AFFF); /* call 0x0002AFFF */

loc_003025B9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x824CB8);
    MEM32(esp + 0x20) = 0x7FBCF0;
    PUSH32(esp, 0x003025CDu); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_003025CD: ;
    ecx = MEM32(esp + 0x6C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = eax;
    PUSH32(esp, 1);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003025E5u); RECOMP_ABI_CALL(0x0002B50Eu, sub_0002B50E); /* call 0x0002B50E */

loc_003025E5: ;
    SET_LO8(eax, MEM8(0x8FC1CA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030266D; /* je: equal / zero */

loc_003025EE: ;
    eax = MEM32(0x8FC1EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302668; /* jne: not equal / not zero */

loc_003025F7: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB8B0)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD470)); /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, 0x80);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x6C) = 0xFFFFFFFFu;
    PUSH32(esp, 0x00302635u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302635: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030265E; /* je: equal / zero */

loc_0030263C: ;
    PUSH32(esp, 0x40400000);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x824CA8);
    ecx = eax;
    PUSH32(esp, 0x00302657u); RECOMP_ABI_CALL(0x00028DC7u, sub_00028DC7); /* call 0x00028DC7 */

loc_00302657: ;
    MEM32(0x8FC1EC) = eax;
    goto loc_00302668;

loc_0030265E: ;
    MEM32(0x8FC1EC) = 0;

loc_00302668: ;
    PUSH32(esp, 0x0030266Du); RECOMP_ABI_CALL(0x0001D602u, sub_0001D602); /* call 0x0001D602 */

loc_0030266D: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0xE8);
    SET_LO8(ebx, MEM8(eax + 0x34D));
    PUSH32(esp, 0);
    MEM8(eax + 0x34D) = 1;
    edi = MEM32(0x8FC1D0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00302695u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302695: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003026AE; /* je: equal / zero */

loc_0030269C: ;
    ecx = MEM32(edi + 0x1E4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x30);
    ecx = eax;
    PUSH32(esp, 0x003026ACu); RECOMP_ABI_CALL(0x0001E9C1u, sub_0001E9C1); /* call 0x0001E9C1 */

loc_003026AC: ;
    goto loc_003026B0;

loc_003026AE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003026B0: ;
    MEM32(edi + 0x20C) = eax;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0xE8);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    MEM8(eax + 0x34D) = LO8(ebx);
    PUSH32(esp, 0x003026D0u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_003026D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x003026DAu); RECOMP_ABI_CALL(0x00011A2Du, sub_00011A2D); /* call 0x00011A2D */

loc_003026DA: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030271B; /* je: equal / zero */

loc_003026E5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030271B; /* je: equal / zero */

loc_003026E9: ;
    ecx = MEM32(0x909334);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x658);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00302703u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302700u); } /* indirect call */
    }

loc_00302703: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302712; /* je: equal / zero */

loc_00302707: ;
    ecx = eax;
    PUSH32(esp, 0x0030270Eu); RECOMP_ABI_CALL(0x00023160u, sub_00023160); /* call 0x00023160 */

loc_0030270E: ;
    edi = eax;
    goto loc_00302714;

loc_00302712: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00302714: ;
    ecx = edi;
    PUSH32(esp, 0x0030271Bu); RECOMP_ABI_CALL(0x0002553Cu, sub_0002553C); /* call 0x0002553C */

loc_0030271B: ;
    eax = MEM32(esi + 0xB4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302727u); RECOMP_ABI_CALL(0x00037A16u, sub_00037A16); /* call 0x00037A16 */

loc_00302727: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0030272Fu); RECOMP_ABI_CALL(0x00029C95u, sub_00029C95); /* call 0x00029C95 */

loc_0030272F: ;
    ecx = 0x8B21B8;
    PUSH32(esp, 0x00302739u); RECOMP_ABI_CALL(0x00013CFBu, sub_00013CFB); /* call 0x00013CFB */

loc_00302739: ;
    ecx = esi;
    PUSH32(esp, 0x00302740u); RECOMP_ABI_CALL(0x0003487Au, sub_0003487A); /* call 0x0003487A */

loc_00302740: ;
    ecx = eax;
    PUSH32(esp, 0x00302747u); RECOMP_ABI_CALL(0x00035167u, sub_00035167); /* call 0x00035167 */

loc_00302747: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0030274Fu); RECOMP_ABI_CALL(0x00033745u, sub_00033745); /* call 0x00033745 */

loc_0030274F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030275B; /* je: equal / zero */

loc_00302753: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0030275Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302759u); } /* indirect call */
    }

loc_0030275B: ;
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, 0x00302766u); RECOMP_ABI_CALL(0x0002AB9Fu, sub_0002AB9F); /* call 0x0002AB9F */

loc_00302766: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x824C68);
    eax = esp + 0x30;
    PUSH32(esp, 0x4F4B106);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302786u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00302786: ;
    ecx = MEM32(esp + 0x38);
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx);
    ecx = MEM32(esi + 0xB4);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x824C50);
    PUSH32(esp, 0x003027A3u); RECOMP_ABI_CALL(0x0002D6C9u, sub_0002D6C9); /* call 0x0002D6C9 */

loc_003027A3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x824C0C);
    ecx = esp + 0x2C;
    PUSH32(esp, 0x4F4B106);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003027C3u); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_003027C3: ;
    edx = MEM32(esp + 0x34);
    eax = MEM32(edx + 0x14);
    ecx = MEM32(eax);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, 0x824BF0);
    PUSH32(esp, 0x003027E0u); RECOMP_ABI_CALL(0x0002D6C9u, sub_0002D6C9); /* call 0x0002D6C9 */

loc_003027E0: ;
    edi = MEM32(esi + 0xB4);
    PUSH32(esp, 0x003027EBu); RECOMP_ABI_CALL(0x00033056u, sub_00033056); /* call 0x00033056 */

loc_003027EB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x824BD8);
    ecx = edi;
    PUSH32(esp, 0x003027F8u); RECOMP_ABI_CALL(0x0002D6C9u, sub_0002D6C9); /* call 0x0002D6C9 */

loc_003027F8: ;
    edi = MEM32(esi + 0xB4);
    PUSH32(esp, 0x00302803u); RECOMP_ABI_CALL(0x00033056u, sub_00033056); /* call 0x00033056 */

loc_00302803: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x824BC0);
    ecx = edi;
    PUSH32(esp, 0x00302810u); RECOMP_ABI_CALL(0x0002D6C9u, sub_0002D6C9); /* call 0x0002D6C9 */

loc_00302810: ;
    edi = MEM32(esi + 0xB4);
    PUSH32(esp, 0x0030281Bu); RECOMP_ABI_CALL(0x00027788u, sub_00027788); /* call 0x00027788 */

loc_0030281B: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x824BA4);
    ecx = edi;
    PUSH32(esp, 0x00302828u); RECOMP_ABI_CALL(0x0002D6C9u, sub_0002D6C9); /* call 0x0002D6C9 */

loc_00302828: ;
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, 0x824394);
    PUSH32(esp, 0x00302838u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00302838: ;
    edx = MEM32(eax + 0x30);
    ecx = MEM32(esi + 0xB4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x824B94);
    PUSH32(esp, 0x0030284Cu); RECOMP_ABI_CALL(0x0002D6C9u, sub_0002D6C9); /* call 0x0002D6C9 */

loc_0030284C: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E4);
    ecx = MEM32(ecx + 0xB4);
    PUSH32(esp, 0x824B80);
    PUSH32(esp, 0x00302867u); RECOMP_ABI_CALL(0x00020CCBu, sub_00020CCB); /* call 0x00020CCB */

loc_00302867: ;
    PUSH32(esp, 0xBFD9999Au);
    PUSH32(esp, 0x11);
    ecx = eax;
    PUSH32(esp, 0x00302875u); RECOMP_ABI_CALL(0x0002A221u, sub_0002A221); /* call 0x0002A221 */

loc_00302875: ;
    SET_LO8(eax, MEM8(0x8FC1CA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302893; /* je: equal / zero */

loc_0030287E: ;
    ecx = MEM32(0x8FC1EC);
    PUSH32(esp, 0x824B6C);
    PUSH32(esp, 0x0030288Eu); RECOMP_ABI_CALL(0x00036B39u, sub_00036B39); /* call 0x00036B39 */

loc_0030288E: ;
    PUSH32(esp, 0x00302893u); RECOMP_ABI_CALL(0x0001D602u, sub_0001D602); /* call 0x0001D602 */

loc_00302893: ;
    ecx = esi;
    PUSH32(esp, 0x0030289Au); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_0030289A: ;
    MEM8(eax + 0x44) = 1;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003028A8u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_003028A8: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003028B2u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_003028B2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003029B0
 * Original: 0x003029B0 - 0x00302AB3 (259 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003029B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003029B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x824B40;
    if (CMP_EQ(_fa, _fb)) goto loc_003029D8; /* je: equal / zero */

loc_003029C1: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003029C9u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_003029C9: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003029D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003029D5u); } /* indirect call */
    }

loc_003029D8: ;
    edi = MEM32(esi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003029F6; /* je: equal / zero */

loc_003029DF: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003029E7u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_003029E7: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003029F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003029F3u); } /* indirect call */
    }

loc_003029F6: ;
    edi = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302A14; /* je: equal / zero */

loc_003029FD: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302A05u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00302A05: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00302A14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302A11u); } /* indirect call */
    }

loc_00302A14: ;
    edi = MEM32(esi + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302A32; /* je: equal / zero */

loc_00302A1B: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302A23u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00302A23: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00302A32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302A2Fu); } /* indirect call */
    }

loc_00302A32: ;
    edi = MEM32(esi + 0x30);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302A50; /* je: equal / zero */

loc_00302A39: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302A41u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00302A41: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00302A50u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302A4Du); } /* indirect call */
    }

loc_00302A50: ;
    edi = MEM32(esi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302A6E; /* je: equal / zero */

loc_00302A57: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302A5Fu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00302A5F: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00302A6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302A6Bu); } /* indirect call */
    }

loc_00302A6E: ;
    edi = MEM32(esi + 0x38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302A8C; /* je: equal / zero */

loc_00302A75: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302A7Du); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00302A7D: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00302A8Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302A89u); } /* indirect call */
    }

loc_00302A8C: ;
    edi = MEM32(esi + 0x3C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302AAA; /* je: equal / zero */

loc_00302A93: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302A9Bu); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00302A9B: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00302AAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302AA7u); } /* indirect call */
    }

loc_00302AAA: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001B4CE(); return; /* tail jmp 0x0001B4CE */

}

/**
 * sub_00302B00
 * Original: 0x00302B00 - 0x00302FC7 (1223 bytes, 336 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302B00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302B00: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00302B0Cu); RECOMP_ABI_CALL(0x0003755Cu, sub_0003755C); /* call 0x0003755C */

loc_00302B0C: ;
    PUSH32(esp, 0x00302B11u); RECOMP_ABI_CALL(0x00028C28u, sub_00028C28); /* call 0x00028C28 */

loc_00302B11: ;
    ecx = esi;
    PUSH32(esp, 0x00302B18u); RECOMP_ABI_CALL(0x0001D319u, sub_0001D319); /* call 0x0001D319 */

loc_00302B18: ;
    PUSH32(esp, 0x00302B1Du); RECOMP_ABI_CALL(0x0002EA60u, sub_0002EA60); /* call 0x0002EA60 */

loc_00302B1D: ;
    SET_LO8(eax, MEM8(0x8FC1D4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302B37; /* je: equal / zero */

loc_00302B26: ;
    MEM8(0x8FC1D4) = 0;
    MEM32(esi + 0x210) = 2;

loc_00302B37: ;
    eax = MEM32(esi + 0x210);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00302BDA; /* je: equal / zero */

loc_00302B47: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00302B99; /* je: equal / zero */

loc_00302B4A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00302FC1; /* jne: not equal / not zero */

loc_00302B51: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00302B57u); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_00302B57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00302B5Fu); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00302B5F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302B6F; /* je: equal / zero */

loc_00302B63: ;
    PUSH32(esp, 0x00302B68u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00302B68: ;
    ecx = eax;
    PUSH32(esp, 0x00302B6Fu); RECOMP_ABI_CALL(0x0057524Eu, sub_0057524E); /* call 0x0057524E */

loc_00302B6F: ;
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00302B7Cu); RECOMP_ABI_CALL(0x0002A168u, sub_0002A168); /* call 0x0002A168 */

loc_00302B7C: ;
    ecx = esi;
    PUSH32(esp, 0x00302B83u); RECOMP_ABI_CALL(0x00015763u, sub_00015763); /* call 0x00015763 */

loc_00302B83: ;
    PUSH32(esp, edi);
    MEM8(0x8FC1C8) = 0;
    PUSH32(esp, 0x00302B90u); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_00302B90: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00302B99: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00302B9Fu); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_00302B9F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00302BA7u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00302BA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302BB7; /* je: equal / zero */

loc_00302BAB: ;
    PUSH32(esp, 0x00302BB0u); RECOMP_ABI_CALL(0x0057494Cu, sub_0057494C); /* call 0x0057494C */

loc_00302BB0: ;
    ecx = eax;
    PUSH32(esp, 0x00302BB7u); RECOMP_ABI_CALL(0x0057524Eu, sub_0057524E); /* call 0x0057524E */

loc_00302BB7: ;
    ecx = MEM32(esi + 0xE8);
    PUSH32(esp, 1);
    PUSH32(esp, 0x00302BC4u); RECOMP_ABI_CALL(0x0002A168u, sub_0002A168); /* call 0x0002A168 */

loc_00302BC4: ;
    ecx = esi;
    PUSH32(esp, 0x00302BCBu); RECOMP_ABI_CALL(0x000259CEu, sub_000259CE); /* call 0x000259CE */

loc_00302BCB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00302BD1u); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_00302BD1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00302BDA: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00302BE0u); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_00302BE0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00302BEAu); RECOMP_ABI_CALL(0x00014476u, sub_00014476); /* call 0x00014476 */

loc_00302BEA: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302BF9u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302BF9: ;
    ecx = eax;
    PUSH32(esp, 0x00302C00u); RECOMP_ABI_CALL(0x0055E06Bu, sub_0055E06B); /* call 0x0055E06B */

loc_00302C00: ;
    edx = esp + 0x10;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00302C0Bu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302C0B: ;
    ecx = eax;
    PUSH32(esp, 0x00302C12u); RECOMP_ABI_CALL(0x0055E084u, sub_0055E084); /* call 0x0055E084 */

loc_00302C12: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00302C19u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00302C19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302C29; /* je: equal / zero */

loc_00302C20: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00302C26u); RECOMP_ABI_CALL(0x0002A0B4u, sub_0002A0B4); /* call 0x0002A0B4 */

loc_00302C26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00302C29: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00302C3B; /* je: equal / zero */

loc_00302C33: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302C3B; /* je: equal / zero */

loc_00302C37: ;
    SET_LO8(ebx, 1);
    goto loc_00302C3D;

loc_00302C3B: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00302C3D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302C48; /* je: equal / zero */

loc_00302C43: ;
    eax = 1;

loc_00302C48: ;
    PUSH32(esp, 1);
    MEM32(esi + 0x218) = eax;
    MEM32(esi + 0x21C) = eax;
    MEM32(esi + 0x220) = eax;
    MEM32(esi + 0x224) = edi;
    PUSH32(esp, 0x00302C67u); RECOMP_ABI_CALL(0x0001D189u, sub_0001D189); /* call 0x0001D189 */

loc_00302C67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00302C71u); RECOMP_ABI_CALL(0x0002CF5Du, sub_0002CF5D); /* call 0x0002CF5D */

loc_00302C71: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00302C7Au); RECOMP_ABI_CALL(0x00018D2Du, sub_00018D2D); /* call 0x00018D2D */

loc_00302C7A: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = 4;
    MEM32(esp + 0x34) = 3;
    MEM32(esp + 0x28) = 5;
    MEM32(esp + 0x38) = 5;
    MEM32(esp + 0x3C) = 2;
    MEM32(esp + 0x40) = 0xF;
    PUSH32(esp, 0x00302CB4u); RECOMP_ABI_CALL(0x00011172u, sub_00011172); /* call 0x00011172 */

loc_00302CB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x1FC) = eax;
    PUSH32(esp, 0x00302CC5u); RECOMP_ABI_CALL(0x0002BFBDu, sub_0002BFBD); /* call 0x0002BFBD */

loc_00302CC5: ;
    ecx = MEM32(esi + 0x1FC);
    MEM8(ecx + 0x18) = 1;
    ecx = esi;
    PUSH32(esp, 0x00302CD6u); RECOMP_ABI_CALL(0x00015FB0u, sub_00015FB0); /* call 0x00015FB0 */

loc_00302CD6: ;
    ecx = MEM32(esi + 0x1E4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00302CE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302CDEu); } /* indirect call */
    }

loc_00302CE1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302CEF; /* je: equal / zero */

loc_00302CE5: ;
    eax = MEM32(esi + 0x1E4);
    MEM8(eax + 0x1A) = 0;

loc_00302CEF: ;
    PUSH32(esp, 0x00302CF4u); RECOMP_ABI_CALL(0x0003302Eu, sub_0003302E); /* call 0x0003302E */

loc_00302CF4: ;
    ecx = eax;
    PUSH32(esp, 0x00302CFBu); RECOMP_ABI_CALL(0x00019066u, sub_00019066); /* call 0x00019066 */

loc_00302CFB: ;
    ecx = MEM32(0x8FC1E0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302D09u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00302D09: ;
    MEM32(0x8FC1E0) = edi;
    ecx = MEM32(esi + 0x1E4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00302D1Du); RECOMP_ABI_CALL(0x0002F668u, sub_0002F668); /* call 0x0002F668 */

loc_00302D1D: ;
    edx = MEM32(esi + 0x1E4);
    MEM8(edx + 0x18) = 0;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302D39; /* je: equal / zero */

loc_00302D30: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302D39; /* je: equal / zero */

loc_00302D34: ;
    eax = MEM32(esi + 0x34);
    goto loc_00302D3E;

loc_00302D39: ;
    eax = MEM32(0x8C3710);

loc_00302D3E: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302D4Au); RECOMP_ABI_CALL(0x0001D472u, sub_0001D472); /* call 0x0001D472 */

loc_00302D4A: ;
    ecx = esi;
    PUSH32(esp, 0x00302D51u); RECOMP_ABI_CALL(0x0002BC07u, sub_0002BC07); /* call 0x0002BC07 */

loc_00302D51: ;
    ecx = esi;
    PUSH32(esp, 0x00302D58u); RECOMP_ABI_CALL(0x000246E6u, sub_000246E6); /* call 0x000246E6 */

loc_00302D58: ;
    eax = MEM32(esi + 0x1E4);
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0x20C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302D70u); RECOMP_ABI_CALL(0x0001C144u, sub_0001C144); /* call 0x0001C144 */

loc_00302D70: ;
    edx = MEM32(esi + 0x1E4);
    MEM8(edx + 0x18) = 1;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, 0x00302D85u); RECOMP_ABI_CALL(0x0003582Eu, sub_0003582E); /* call 0x0003582E */

loc_00302D85: ;
    eax = MEM32(esi + 0xE8);
    SET_LO8(ebx, MEM8(eax + 0x34D));
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x8A4);
    MEM8(eax + 0x34D) = 1;
    PUSH32(esp, 0x00302DA7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302DA7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302DC3; /* je: equal / zero */

loc_00302DAE: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00302DBCu); RECOMP_ABI_CALL(0x0002941Bu, sub_0002941B); /* call 0x0002941B */

loc_00302DBC: ;
    MEM32(0x901E28) = eax;
    goto loc_00302DC9;

loc_00302DC3: ;
    MEM32(0x901E28) = edi;

loc_00302DC9: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0xE8);
    MEM8(eax + 0x34D) = LO8(ebx);
    PUSH32(esp, 0x00302DE0u); RECOMP_ABI_CALL(0x00035A4Au, sub_00035A4A); /* call 0x00035A4A */

loc_00302DE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1220);
    PUSH32(esp, 0x00302DEBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302DEB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E07; /* je: equal / zero */

loc_00302DF2: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00302E00u); RECOMP_ABI_CALL(0x00037C96u, sub_00037C96); /* call 0x00037C96 */

loc_00302E00: ;
    MEM32(0x901E40) = eax;
    goto loc_00302E0D;

loc_00302E07: ;
    MEM32(0x901E40) = edi;

loc_00302E0D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x120);
    PUSH32(esp, 0x00302E18u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302E18: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E2F; /* je: equal / zero */

loc_00302E1F: ;
    edx = MEM32(esi + 0x1E4);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00302E2Du); RECOMP_ABI_CALL(0x00034050u, sub_00034050); /* call 0x00034050 */

loc_00302E2D: ;
    goto loc_00302E31;

loc_00302E2F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00302E31: ;
    MEM32(esi + 0x1EC) = eax;
    PUSH32(esp, 0x00302E3Cu); RECOMP_ABI_CALL(0x00036FF3u, sub_00036FF3); /* call 0x00036FF3 */

loc_00302E3C: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00302E46u); RECOMP_ABI_CALL(0x000376E2u, sub_000376E2); /* call 0x000376E2 */

loc_00302E46: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E5B; /* je: equal / zero */

loc_00302E4F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E5B; /* je: equal / zero */

loc_00302E53: ;
    eax = MEM32(0x904C10);
    PUSH32(esp, eax);
    goto loc_00302E5D;

loc_00302E5B: ;
    PUSH32(esp, 5);

loc_00302E5D: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00302E67u); RECOMP_ABI_CALL(0x00037D77u, sub_00037D77); /* call 0x00037D77 */

loc_00302E67: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00302E71u); RECOMP_ABI_CALL(0x00032886u, sub_00032886); /* call 0x00032886 */

loc_00302E71: ;
    ecx = MEM32(esi + 0x1E4);
    edx = MEM32(ecx + 0xE0);
    eax = MEM32(esi + 0x1EC);
    MEM32(edx + 0x1C) = eax;
    ecx = MEM32(esi + 0x1EC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, 0x00302E98u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_00302E98: ;
    ecx = eax;
    PUSH32(esp, 0x00302E9Fu); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_00302E9F: ;
    edx = MEM32(esi + 0x1EC);
    eax = MEM32(esi + 0x1E4);
    ecx = MEM32(eax + 0xD4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00302EB7u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_00302EB7: ;
    PUSH32(esp, 0x00302EBCu); RECOMP_ABI_CALL(0x0002AA2Du, sub_0002AA2D); /* call 0x0002AA2D */

loc_00302EBC: ;
    ecx = MEM32(0x8FC1DC);
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302ECEu); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00302ECE: ;
    edx = MEM32(0x8FC1D8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(0x8FC1DC) = edi;
    PUSH32(esp, 0x00302EE1u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00302EE1: ;
    SET_LO8(eax, MEM8(0x8C36FD));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x8FC1D8) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00302F01; /* jne: not equal / not zero */

loc_00302EF3: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi + 0x214) = ebx;
    PUSH32(esp, 0x00302F01u); RECOMP_ABI_CALL(0x000358E7u, sub_000358E7); /* call 0x000358E7 */

loc_00302F01: ;
    ecx = 0x8B21B8;
    PUSH32(esp, 0x00302F0Bu); RECOMP_ABI_CALL(0x0002201Cu, sub_0002201C); /* call 0x0002201C */

loc_00302F0B: ;
    ecx = 0x8F2100;
    PUSH32(esp, 0x00302F15u); RECOMP_ABI_CALL(0x00035847u, sub_00035847); /* call 0x00035847 */

loc_00302F15: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F22; /* je: equal / zero */

loc_00302F1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302F38; /* jne: not equal / not zero */

loc_00302F22: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x00302F2Cu); RECOMP_ABI_CALL(0x00024A29u, sub_00024A29); /* call 0x00024A29 */

loc_00302F2C: ;
    PUSH32(esp, 4);
    ecx = 0x8F1868;
    PUSH32(esp, 0x00302F38u); RECOMP_ABI_CALL(0x000365B7u, sub_000365B7); /* call 0x000365B7 */

loc_00302F38: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00302F3Fu); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00302F3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F4F; /* je: equal / zero */

loc_00302F46: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00302F4Cu); RECOMP_ABI_CALL(0x0002A0B4u, sub_0002A0B4); /* call 0x0002A0B4 */

loc_00302F4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00302F4F: ;
    PUSH32(esp, 0x00302F54u); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_00302F54: ;
    ecx = eax;
    PUSH32(esp, 0x00302F5Bu); RECOMP_ABI_CALL(0x00035FFEu, sub_00035FFE); /* call 0x00035FFE */

loc_00302F5B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302F6Au); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302F6A: ;
    ecx = eax;
    PUSH32(esp, 0x00302F71u); RECOMP_ABI_CALL(0x0055E084u, sub_0055E084); /* call 0x0055E084 */

loc_00302F71: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00302F78u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00302F78: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F9B; /* je: equal / zero */

loc_00302F7F: ;
    edx = esp + 0x1C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00302F8Bu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302F8B: ;
    ecx = eax;
    PUSH32(esp, 0x00302F92u); RECOMP_ABI_CALL(0x0055E0FDu, sub_0055E0FD); /* call 0x0055E0FD */

loc_00302F92: ;
    MEM32(esi + 0x20) = 2;
    goto loc_00302FB0;

loc_00302F9B: ;
    eax = esp + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302FA6u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302FA6: ;
    ecx = eax;
    PUSH32(esp, 0x00302FADu); RECOMP_ABI_CALL(0x0055E0FDu, sub_0055E0FD); /* call 0x0055E0FD */

loc_00302FAD: ;
    MEM32(esi + 0x20) = ebx;

loc_00302FB0: ;
    ecx = esi;
    PUSH32(esp, 0x00302FB7u); RECOMP_ABI_CALL(0x00028FFCu, sub_00028FFC); /* call 0x00028FFC */

loc_00302FB7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00302FBDu); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_00302FBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);

loc_00302FC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00302C30
 * Original: 0x00302C30 - 0x00302FC7 (919 bytes, 243 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302C30: ;
    PUSH32(esp, ebx);
    if (_flags /* je: equal / zero */) goto loc_00302C3B;

loc_00302C33: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302C3B; /* je: equal / zero */

loc_00302C37: ;
    SET_LO8(ebx, 1);
    goto loc_00302C3D;

loc_00302C3B: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00302C3D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302C48; /* je: equal / zero */

loc_00302C43: ;
    eax = 1;

loc_00302C48: ;
    PUSH32(esp, 1);
    MEM32(esi + 0x218) = eax;
    MEM32(esi + 0x21C) = eax;
    MEM32(esi + 0x220) = eax;
    MEM32(esi + 0x224) = edi;
    PUSH32(esp, 0x00302C67u); RECOMP_ABI_CALL(0x0001D189u, sub_0001D189); /* call 0x0001D189 */

loc_00302C67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00302C71u); RECOMP_ABI_CALL(0x0002CF5Du, sub_0002CF5D); /* call 0x0002CF5D */

loc_00302C71: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00302C7Au); RECOMP_ABI_CALL(0x00018D2Du, sub_00018D2D); /* call 0x00018D2D */

loc_00302C7A: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = 4;
    MEM32(esp + 0x34) = 3;
    MEM32(esp + 0x28) = 5;
    MEM32(esp + 0x38) = 5;
    MEM32(esp + 0x3C) = 2;
    MEM32(esp + 0x40) = 0xF;
    PUSH32(esp, 0x00302CB4u); RECOMP_ABI_CALL(0x00011172u, sub_00011172); /* call 0x00011172 */

loc_00302CB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x1FC) = eax;
    PUSH32(esp, 0x00302CC5u); RECOMP_ABI_CALL(0x0002BFBDu, sub_0002BFBD); /* call 0x0002BFBD */

loc_00302CC5: ;
    ecx = MEM32(esi + 0x1FC);
    MEM8(ecx + 0x18) = 1;
    ecx = esi;
    PUSH32(esp, 0x00302CD6u); RECOMP_ABI_CALL(0x00015FB0u, sub_00015FB0); /* call 0x00015FB0 */

loc_00302CD6: ;
    ecx = MEM32(esi + 0x1E4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00302CE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302CDEu); } /* indirect call */
    }

loc_00302CE1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302CEF; /* je: equal / zero */

loc_00302CE5: ;
    eax = MEM32(esi + 0x1E4);
    MEM8(eax + 0x1A) = 0;

loc_00302CEF: ;
    PUSH32(esp, 0x00302CF4u); RECOMP_ABI_CALL(0x0003302Eu, sub_0003302E); /* call 0x0003302E */

loc_00302CF4: ;
    ecx = eax;
    PUSH32(esp, 0x00302CFBu); RECOMP_ABI_CALL(0x00019066u, sub_00019066); /* call 0x00019066 */

loc_00302CFB: ;
    ecx = MEM32(0x8FC1E0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302D09u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00302D09: ;
    MEM32(0x8FC1E0) = edi;
    ecx = MEM32(esi + 0x1E4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00302D1Du); RECOMP_ABI_CALL(0x0002F668u, sub_0002F668); /* call 0x0002F668 */

loc_00302D1D: ;
    edx = MEM32(esi + 0x1E4);
    MEM8(edx + 0x18) = 0;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302D39; /* je: equal / zero */

loc_00302D30: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302D39; /* je: equal / zero */

loc_00302D34: ;
    eax = MEM32(esi + 0x34);
    goto loc_00302D3E;

loc_00302D39: ;
    eax = MEM32(0x8C3710);

loc_00302D3E: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302D4Au); RECOMP_ABI_CALL(0x0001D472u, sub_0001D472); /* call 0x0001D472 */

loc_00302D4A: ;
    ecx = esi;
    PUSH32(esp, 0x00302D51u); RECOMP_ABI_CALL(0x0002BC07u, sub_0002BC07); /* call 0x0002BC07 */

loc_00302D51: ;
    ecx = esi;
    PUSH32(esp, 0x00302D58u); RECOMP_ABI_CALL(0x000246E6u, sub_000246E6); /* call 0x000246E6 */

loc_00302D58: ;
    eax = MEM32(esi + 0x1E4);
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0x20C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302D70u); RECOMP_ABI_CALL(0x0001C144u, sub_0001C144); /* call 0x0001C144 */

loc_00302D70: ;
    edx = MEM32(esi + 0x1E4);
    MEM8(edx + 0x18) = 1;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, 0x00302D85u); RECOMP_ABI_CALL(0x0003582Eu, sub_0003582E); /* call 0x0003582E */

loc_00302D85: ;
    eax = MEM32(esi + 0xE8);
    SET_LO8(ebx, MEM8(eax + 0x34D));
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x8A4);
    MEM8(eax + 0x34D) = 1;
    PUSH32(esp, 0x00302DA7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302DA7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302DC3; /* je: equal / zero */

loc_00302DAE: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00302DBCu); RECOMP_ABI_CALL(0x0002941Bu, sub_0002941B); /* call 0x0002941B */

loc_00302DBC: ;
    MEM32(0x901E28) = eax;
    goto loc_00302DC9;

loc_00302DC3: ;
    MEM32(0x901E28) = edi;

loc_00302DC9: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0xE8);
    MEM8(eax + 0x34D) = LO8(ebx);
    PUSH32(esp, 0x00302DE0u); RECOMP_ABI_CALL(0x00035A4Au, sub_00035A4A); /* call 0x00035A4A */

loc_00302DE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1220);
    PUSH32(esp, 0x00302DEBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302DEB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E07; /* je: equal / zero */

loc_00302DF2: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00302E00u); RECOMP_ABI_CALL(0x00037C96u, sub_00037C96); /* call 0x00037C96 */

loc_00302E00: ;
    MEM32(0x901E40) = eax;
    goto loc_00302E0D;

loc_00302E07: ;
    MEM32(0x901E40) = edi;

loc_00302E0D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x120);
    PUSH32(esp, 0x00302E18u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302E18: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E2F; /* je: equal / zero */

loc_00302E1F: ;
    edx = MEM32(esi + 0x1E4);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00302E2Du); RECOMP_ABI_CALL(0x00034050u, sub_00034050); /* call 0x00034050 */

loc_00302E2D: ;
    goto loc_00302E31;

loc_00302E2F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00302E31: ;
    MEM32(esi + 0x1EC) = eax;
    PUSH32(esp, 0x00302E3Cu); RECOMP_ABI_CALL(0x00036FF3u, sub_00036FF3); /* call 0x00036FF3 */

loc_00302E3C: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00302E46u); RECOMP_ABI_CALL(0x000376E2u, sub_000376E2); /* call 0x000376E2 */

loc_00302E46: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E5B; /* je: equal / zero */

loc_00302E4F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E5B; /* je: equal / zero */

loc_00302E53: ;
    eax = MEM32(0x904C10);
    PUSH32(esp, eax);
    goto loc_00302E5D;

loc_00302E5B: ;
    PUSH32(esp, 5);

loc_00302E5D: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00302E67u); RECOMP_ABI_CALL(0x00037D77u, sub_00037D77); /* call 0x00037D77 */

loc_00302E67: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00302E71u); RECOMP_ABI_CALL(0x00032886u, sub_00032886); /* call 0x00032886 */

loc_00302E71: ;
    ecx = MEM32(esi + 0x1E4);
    edx = MEM32(ecx + 0xE0);
    eax = MEM32(esi + 0x1EC);
    MEM32(edx + 0x1C) = eax;
    ecx = MEM32(esi + 0x1EC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, 0x00302E98u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_00302E98: ;
    ecx = eax;
    PUSH32(esp, 0x00302E9Fu); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_00302E9F: ;
    edx = MEM32(esi + 0x1EC);
    eax = MEM32(esi + 0x1E4);
    ecx = MEM32(eax + 0xD4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00302EB7u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_00302EB7: ;
    PUSH32(esp, 0x00302EBCu); RECOMP_ABI_CALL(0x0002AA2Du, sub_0002AA2D); /* call 0x0002AA2D */

loc_00302EBC: ;
    ecx = MEM32(0x8FC1DC);
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302ECEu); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00302ECE: ;
    edx = MEM32(0x8FC1D8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(0x8FC1DC) = edi;
    PUSH32(esp, 0x00302EE1u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00302EE1: ;
    SET_LO8(eax, MEM8(0x8C36FD));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x8FC1D8) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00302F01; /* jne: not equal / not zero */

loc_00302EF3: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi + 0x214) = ebx;
    PUSH32(esp, 0x00302F01u); RECOMP_ABI_CALL(0x000358E7u, sub_000358E7); /* call 0x000358E7 */

loc_00302F01: ;
    ecx = 0x8B21B8;
    PUSH32(esp, 0x00302F0Bu); RECOMP_ABI_CALL(0x0002201Cu, sub_0002201C); /* call 0x0002201C */

loc_00302F0B: ;
    ecx = 0x8F2100;
    PUSH32(esp, 0x00302F15u); RECOMP_ABI_CALL(0x00035847u, sub_00035847); /* call 0x00035847 */

loc_00302F15: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F22; /* je: equal / zero */

loc_00302F1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302F38; /* jne: not equal / not zero */

loc_00302F22: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x00302F2Cu); RECOMP_ABI_CALL(0x00024A29u, sub_00024A29); /* call 0x00024A29 */

loc_00302F2C: ;
    PUSH32(esp, 4);
    ecx = 0x8F1868;
    PUSH32(esp, 0x00302F38u); RECOMP_ABI_CALL(0x000365B7u, sub_000365B7); /* call 0x000365B7 */

loc_00302F38: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00302F3Fu); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00302F3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F4F; /* je: equal / zero */

loc_00302F46: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00302F4Cu); RECOMP_ABI_CALL(0x0002A0B4u, sub_0002A0B4); /* call 0x0002A0B4 */

loc_00302F4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00302F4F: ;
    PUSH32(esp, 0x00302F54u); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_00302F54: ;
    ecx = eax;
    PUSH32(esp, 0x00302F5Bu); RECOMP_ABI_CALL(0x00035FFEu, sub_00035FFE); /* call 0x00035FFE */

loc_00302F5B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302F6Au); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302F6A: ;
    ecx = eax;
    PUSH32(esp, 0x00302F71u); RECOMP_ABI_CALL(0x0055E084u, sub_0055E084); /* call 0x0055E084 */

loc_00302F71: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00302F78u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00302F78: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F9B; /* je: equal / zero */

loc_00302F7F: ;
    edx = esp + 0x1C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00302F8Bu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302F8B: ;
    ecx = eax;
    PUSH32(esp, 0x00302F92u); RECOMP_ABI_CALL(0x0055E0FDu, sub_0055E0FD); /* call 0x0055E0FD */

loc_00302F92: ;
    MEM32(esi + 0x20) = 2;
    goto loc_00302FB0;

loc_00302F9B: ;
    eax = esp + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302FA6u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302FA6: ;
    ecx = eax;
    PUSH32(esp, 0x00302FADu); RECOMP_ABI_CALL(0x0055E0FDu, sub_0055E0FD); /* call 0x0055E0FD */

loc_00302FAD: ;
    MEM32(esi + 0x20) = ebx;

loc_00302FB0: ;
    ecx = esi;
    PUSH32(esp, 0x00302FB7u); RECOMP_ABI_CALL(0x00028FFCu, sub_00028FFC); /* call 0x00028FFC */

loc_00302FB7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00302FBDu); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_00302FBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00302C31
 * Original: 0x00302C31 - 0x00302FC7 (918 bytes, 242 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302C31(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302C31: ;
    if (_flags /* je: equal / zero */) goto loc_00302C3B;

loc_00302C33: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302C3B; /* je: equal / zero */

loc_00302C37: ;
    SET_LO8(ebx, 1);
    goto loc_00302C3D;

loc_00302C3B: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00302C3D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302C48; /* je: equal / zero */

loc_00302C43: ;
    eax = 1;

loc_00302C48: ;
    PUSH32(esp, 1);
    MEM32(esi + 0x218) = eax;
    MEM32(esi + 0x21C) = eax;
    MEM32(esi + 0x220) = eax;
    MEM32(esi + 0x224) = edi;
    PUSH32(esp, 0x00302C67u); RECOMP_ABI_CALL(0x0001D189u, sub_0001D189); /* call 0x0001D189 */

loc_00302C67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00302C71u); RECOMP_ABI_CALL(0x0002CF5Du, sub_0002CF5D); /* call 0x0002CF5D */

loc_00302C71: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x00302C7Au); RECOMP_ABI_CALL(0x00018D2Du, sub_00018D2D); /* call 0x00018D2D */

loc_00302C7A: ;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    MEM32(esp + 0x2C) = 4;
    MEM32(esp + 0x34) = 3;
    MEM32(esp + 0x28) = 5;
    MEM32(esp + 0x38) = 5;
    MEM32(esp + 0x3C) = 2;
    MEM32(esp + 0x40) = 0xF;
    PUSH32(esp, 0x00302CB4u); RECOMP_ABI_CALL(0x00011172u, sub_00011172); /* call 0x00011172 */

loc_00302CB4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x1FC) = eax;
    PUSH32(esp, 0x00302CC5u); RECOMP_ABI_CALL(0x0002BFBDu, sub_0002BFBD); /* call 0x0002BFBD */

loc_00302CC5: ;
    ecx = MEM32(esi + 0x1FC);
    MEM8(ecx + 0x18) = 1;
    ecx = esi;
    PUSH32(esp, 0x00302CD6u); RECOMP_ABI_CALL(0x00015FB0u, sub_00015FB0); /* call 0x00015FB0 */

loc_00302CD6: ;
    ecx = MEM32(esi + 0x1E4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00302CE1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00302CDEu); } /* indirect call */
    }

loc_00302CE1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302CEF; /* je: equal / zero */

loc_00302CE5: ;
    eax = MEM32(esi + 0x1E4);
    MEM8(eax + 0x1A) = 0;

loc_00302CEF: ;
    PUSH32(esp, 0x00302CF4u); RECOMP_ABI_CALL(0x0003302Eu, sub_0003302E); /* call 0x0003302E */

loc_00302CF4: ;
    ecx = eax;
    PUSH32(esp, 0x00302CFBu); RECOMP_ABI_CALL(0x00019066u, sub_00019066); /* call 0x00019066 */

loc_00302CFB: ;
    ecx = MEM32(0x8FC1E0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302D09u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00302D09: ;
    MEM32(0x8FC1E0) = edi;
    ecx = MEM32(esi + 0x1E4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00302D1Du); RECOMP_ABI_CALL(0x0002F668u, sub_0002F668); /* call 0x0002F668 */

loc_00302D1D: ;
    edx = MEM32(esi + 0x1E4);
    MEM8(edx + 0x18) = 0;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302D39; /* je: equal / zero */

loc_00302D30: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302D39; /* je: equal / zero */

loc_00302D34: ;
    eax = MEM32(esi + 0x34);
    goto loc_00302D3E;

loc_00302D39: ;
    eax = MEM32(0x8C3710);

loc_00302D3E: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302D4Au); RECOMP_ABI_CALL(0x0001D472u, sub_0001D472); /* call 0x0001D472 */

loc_00302D4A: ;
    ecx = esi;
    PUSH32(esp, 0x00302D51u); RECOMP_ABI_CALL(0x0002BC07u, sub_0002BC07); /* call 0x0002BC07 */

loc_00302D51: ;
    ecx = esi;
    PUSH32(esp, 0x00302D58u); RECOMP_ABI_CALL(0x000246E6u, sub_000246E6); /* call 0x000246E6 */

loc_00302D58: ;
    eax = MEM32(esi + 0x1E4);
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0x20C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302D70u); RECOMP_ABI_CALL(0x0001C144u, sub_0001C144); /* call 0x0001C144 */

loc_00302D70: ;
    edx = MEM32(esi + 0x1E4);
    MEM8(edx + 0x18) = 1;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, 0x00302D85u); RECOMP_ABI_CALL(0x0003582Eu, sub_0003582E); /* call 0x0003582E */

loc_00302D85: ;
    eax = MEM32(esi + 0xE8);
    SET_LO8(ebx, MEM8(eax + 0x34D));
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x8A4);
    MEM8(eax + 0x34D) = 1;
    PUSH32(esp, 0x00302DA7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302DA7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302DC3; /* je: equal / zero */

loc_00302DAE: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00302DBCu); RECOMP_ABI_CALL(0x0002941Bu, sub_0002941B); /* call 0x0002941B */

loc_00302DBC: ;
    MEM32(0x901E28) = eax;
    goto loc_00302DC9;

loc_00302DC3: ;
    MEM32(0x901E28) = edi;

loc_00302DC9: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0xE8);
    MEM8(eax + 0x34D) = LO8(ebx);
    PUSH32(esp, 0x00302DE0u); RECOMP_ABI_CALL(0x00035A4Au, sub_00035A4A); /* call 0x00035A4A */

loc_00302DE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1220);
    PUSH32(esp, 0x00302DEBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302DEB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E07; /* je: equal / zero */

loc_00302DF2: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00302E00u); RECOMP_ABI_CALL(0x00037C96u, sub_00037C96); /* call 0x00037C96 */

loc_00302E00: ;
    MEM32(0x901E40) = eax;
    goto loc_00302E0D;

loc_00302E07: ;
    MEM32(0x901E40) = edi;

loc_00302E0D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x120);
    PUSH32(esp, 0x00302E18u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302E18: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E2F; /* je: equal / zero */

loc_00302E1F: ;
    edx = MEM32(esi + 0x1E4);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00302E2Du); RECOMP_ABI_CALL(0x00034050u, sub_00034050); /* call 0x00034050 */

loc_00302E2D: ;
    goto loc_00302E31;

loc_00302E2F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00302E31: ;
    MEM32(esi + 0x1EC) = eax;
    PUSH32(esp, 0x00302E3Cu); RECOMP_ABI_CALL(0x00036FF3u, sub_00036FF3); /* call 0x00036FF3 */

loc_00302E3C: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00302E46u); RECOMP_ABI_CALL(0x000376E2u, sub_000376E2); /* call 0x000376E2 */

loc_00302E46: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E5B; /* je: equal / zero */

loc_00302E4F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E5B; /* je: equal / zero */

loc_00302E53: ;
    eax = MEM32(0x904C10);
    PUSH32(esp, eax);
    goto loc_00302E5D;

loc_00302E5B: ;
    PUSH32(esp, 5);

loc_00302E5D: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00302E67u); RECOMP_ABI_CALL(0x00037D77u, sub_00037D77); /* call 0x00037D77 */

loc_00302E67: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00302E71u); RECOMP_ABI_CALL(0x00032886u, sub_00032886); /* call 0x00032886 */

loc_00302E71: ;
    ecx = MEM32(esi + 0x1E4);
    edx = MEM32(ecx + 0xE0);
    eax = MEM32(esi + 0x1EC);
    MEM32(edx + 0x1C) = eax;
    ecx = MEM32(esi + 0x1EC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, 0x00302E98u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_00302E98: ;
    ecx = eax;
    PUSH32(esp, 0x00302E9Fu); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_00302E9F: ;
    edx = MEM32(esi + 0x1EC);
    eax = MEM32(esi + 0x1E4);
    ecx = MEM32(eax + 0xD4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00302EB7u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_00302EB7: ;
    PUSH32(esp, 0x00302EBCu); RECOMP_ABI_CALL(0x0002AA2Du, sub_0002AA2D); /* call 0x0002AA2D */

loc_00302EBC: ;
    ecx = MEM32(0x8FC1DC);
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302ECEu); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00302ECE: ;
    edx = MEM32(0x8FC1D8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(0x8FC1DC) = edi;
    PUSH32(esp, 0x00302EE1u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00302EE1: ;
    SET_LO8(eax, MEM8(0x8C36FD));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x8FC1D8) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00302F01; /* jne: not equal / not zero */

loc_00302EF3: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi + 0x214) = ebx;
    PUSH32(esp, 0x00302F01u); RECOMP_ABI_CALL(0x000358E7u, sub_000358E7); /* call 0x000358E7 */

loc_00302F01: ;
    ecx = 0x8B21B8;
    PUSH32(esp, 0x00302F0Bu); RECOMP_ABI_CALL(0x0002201Cu, sub_0002201C); /* call 0x0002201C */

loc_00302F0B: ;
    ecx = 0x8F2100;
    PUSH32(esp, 0x00302F15u); RECOMP_ABI_CALL(0x00035847u, sub_00035847); /* call 0x00035847 */

loc_00302F15: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F22; /* je: equal / zero */

loc_00302F1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302F38; /* jne: not equal / not zero */

loc_00302F22: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x00302F2Cu); RECOMP_ABI_CALL(0x00024A29u, sub_00024A29); /* call 0x00024A29 */

loc_00302F2C: ;
    PUSH32(esp, 4);
    ecx = 0x8F1868;
    PUSH32(esp, 0x00302F38u); RECOMP_ABI_CALL(0x000365B7u, sub_000365B7); /* call 0x000365B7 */

loc_00302F38: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00302F3Fu); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00302F3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F4F; /* je: equal / zero */

loc_00302F46: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00302F4Cu); RECOMP_ABI_CALL(0x0002A0B4u, sub_0002A0B4); /* call 0x0002A0B4 */

loc_00302F4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00302F4F: ;
    PUSH32(esp, 0x00302F54u); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_00302F54: ;
    ecx = eax;
    PUSH32(esp, 0x00302F5Bu); RECOMP_ABI_CALL(0x00035FFEu, sub_00035FFE); /* call 0x00035FFE */

loc_00302F5B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302F6Au); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302F6A: ;
    ecx = eax;
    PUSH32(esp, 0x00302F71u); RECOMP_ABI_CALL(0x0055E084u, sub_0055E084); /* call 0x0055E084 */

loc_00302F71: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00302F78u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00302F78: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F9B; /* je: equal / zero */

loc_00302F7F: ;
    edx = esp + 0x1C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00302F8Bu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302F8B: ;
    ecx = eax;
    PUSH32(esp, 0x00302F92u); RECOMP_ABI_CALL(0x0055E0FDu, sub_0055E0FD); /* call 0x0055E0FD */

loc_00302F92: ;
    MEM32(esi + 0x20) = 2;
    goto loc_00302FB0;

loc_00302F9B: ;
    eax = esp + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302FA6u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302FA6: ;
    ecx = eax;
    PUSH32(esp, 0x00302FADu); RECOMP_ABI_CALL(0x0055E0FDu, sub_0055E0FD); /* call 0x0055E0FD */

loc_00302FAD: ;
    MEM32(esi + 0x20) = ebx;

loc_00302FB0: ;
    ecx = esi;
    PUSH32(esp, 0x00302FB7u); RECOMP_ABI_CALL(0x00028FFCu, sub_00028FFC); /* call 0x00028FFC */

loc_00302FB7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00302FBDu); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_00302FBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00302D30
 * Original: 0x00302D30 - 0x00302FC7 (663 bytes, 180 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00302D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00302D30: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302D39; /* je: equal / zero */

loc_00302D34: ;
    eax = MEM32(esi + 0x34);
    goto loc_00302D3E;

loc_00302D39: ;
    eax = MEM32(0x8C3710);

loc_00302D3E: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302D4Au); RECOMP_ABI_CALL(0x0001D472u, sub_0001D472); /* call 0x0001D472 */

loc_00302D4A: ;
    ecx = esi;
    PUSH32(esp, 0x00302D51u); RECOMP_ABI_CALL(0x0002BC07u, sub_0002BC07); /* call 0x0002BC07 */

loc_00302D51: ;
    ecx = esi;
    PUSH32(esp, 0x00302D58u); RECOMP_ABI_CALL(0x000246E6u, sub_000246E6); /* call 0x000246E6 */

loc_00302D58: ;
    eax = MEM32(esi + 0x1E4);
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0x20C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302D70u); RECOMP_ABI_CALL(0x0001C144u, sub_0001C144); /* call 0x0001C144 */

loc_00302D70: ;
    edx = MEM32(esi + 0x1E4);
    MEM8(edx + 0x18) = 1;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, 0x00302D85u); RECOMP_ABI_CALL(0x0003582Eu, sub_0003582E); /* call 0x0003582E */

loc_00302D85: ;
    eax = MEM32(esi + 0xE8);
    SET_LO8(ebx, MEM8(eax + 0x34D));
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x8A4);
    MEM8(eax + 0x34D) = 1;
    PUSH32(esp, 0x00302DA7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302DA7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302DC3; /* je: equal / zero */

loc_00302DAE: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00302DBCu); RECOMP_ABI_CALL(0x0002941Bu, sub_0002941B); /* call 0x0002941B */

loc_00302DBC: ;
    MEM32(0x901E28) = eax;
    goto loc_00302DC9;

loc_00302DC3: ;
    MEM32(0x901E28) = edi;

loc_00302DC9: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0xE8);
    MEM8(eax + 0x34D) = LO8(ebx);
    PUSH32(esp, 0x00302DE0u); RECOMP_ABI_CALL(0x00035A4Au, sub_00035A4A); /* call 0x00035A4A */

loc_00302DE0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x1220);
    PUSH32(esp, 0x00302DEBu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302DEB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E07; /* je: equal / zero */

loc_00302DF2: ;
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00302E00u); RECOMP_ABI_CALL(0x00037C96u, sub_00037C96); /* call 0x00037C96 */

loc_00302E00: ;
    MEM32(0x901E40) = eax;
    goto loc_00302E0D;

loc_00302E07: ;
    MEM32(0x901E40) = edi;

loc_00302E0D: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x120);
    PUSH32(esp, 0x00302E18u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00302E18: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E2F; /* je: equal / zero */

loc_00302E1F: ;
    edx = MEM32(esi + 0x1E4);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00302E2Du); RECOMP_ABI_CALL(0x00034050u, sub_00034050); /* call 0x00034050 */

loc_00302E2D: ;
    goto loc_00302E31;

loc_00302E2F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00302E31: ;
    MEM32(esi + 0x1EC) = eax;
    PUSH32(esp, 0x00302E3Cu); RECOMP_ABI_CALL(0x00036FF3u, sub_00036FF3); /* call 0x00036FF3 */

loc_00302E3C: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00302E46u); RECOMP_ABI_CALL(0x000376E2u, sub_000376E2); /* call 0x000376E2 */

loc_00302E46: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E5B; /* je: equal / zero */

loc_00302E4F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302E5B; /* je: equal / zero */

loc_00302E53: ;
    eax = MEM32(0x904C10);
    PUSH32(esp, eax);
    goto loc_00302E5D;

loc_00302E5B: ;
    PUSH32(esp, 5);

loc_00302E5D: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00302E67u); RECOMP_ABI_CALL(0x00037D77u, sub_00037D77); /* call 0x00037D77 */

loc_00302E67: ;
    ecx = 0x8FC5D8;
    PUSH32(esp, 0x00302E71u); RECOMP_ABI_CALL(0x00032886u, sub_00032886); /* call 0x00032886 */

loc_00302E71: ;
    ecx = MEM32(esi + 0x1E4);
    edx = MEM32(ecx + 0xE0);
    eax = MEM32(esi + 0x1EC);
    MEM32(edx + 0x1C) = eax;
    ecx = MEM32(esi + 0x1EC);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x1E4);
    PUSH32(esp, 0x00302E98u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_00302E98: ;
    ecx = eax;
    PUSH32(esp, 0x00302E9Fu); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_00302E9F: ;
    edx = MEM32(esi + 0x1EC);
    eax = MEM32(esi + 0x1E4);
    ecx = MEM32(eax + 0xD4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00302EB7u); RECOMP_ABI_CALL(0x00022CB0u, sub_00022CB0); /* call 0x00022CB0 */

loc_00302EB7: ;
    PUSH32(esp, 0x00302EBCu); RECOMP_ABI_CALL(0x0002AA2Du, sub_0002AA2D); /* call 0x0002AA2D */

loc_00302EBC: ;
    ecx = MEM32(0x8FC1DC);
    ebx = 1;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302ECEu); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00302ECE: ;
    edx = MEM32(0x8FC1D8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    MEM32(0x8FC1DC) = edi;
    PUSH32(esp, 0x00302EE1u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00302EE1: ;
    SET_LO8(eax, MEM8(0x8C36FD));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(0x8FC1D8) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00302F01; /* jne: not equal / not zero */

loc_00302EF3: ;
    PUSH32(esp, ebx);
    ecx = esi;
    MEM32(esi + 0x214) = ebx;
    PUSH32(esp, 0x00302F01u); RECOMP_ABI_CALL(0x000358E7u, sub_000358E7); /* call 0x000358E7 */

loc_00302F01: ;
    ecx = 0x8B21B8;
    PUSH32(esp, 0x00302F0Bu); RECOMP_ABI_CALL(0x0002201Cu, sub_0002201C); /* call 0x0002201C */

loc_00302F0B: ;
    ecx = 0x8F2100;
    PUSH32(esp, 0x00302F15u); RECOMP_ABI_CALL(0x00035847u, sub_00035847); /* call 0x00035847 */

loc_00302F15: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F22; /* je: equal / zero */

loc_00302F1E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00302F38; /* jne: not equal / not zero */

loc_00302F22: ;
    ecx = 0x8B2228;
    PUSH32(esp, 0x00302F2Cu); RECOMP_ABI_CALL(0x00024A29u, sub_00024A29); /* call 0x00024A29 */

loc_00302F2C: ;
    PUSH32(esp, 4);
    ecx = 0x8F1868;
    PUSH32(esp, 0x00302F38u); RECOMP_ABI_CALL(0x000365B7u, sub_000365B7); /* call 0x000365B7 */

loc_00302F38: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00302F3Fu); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00302F3F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F4F; /* je: equal / zero */

loc_00302F46: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00302F4Cu); RECOMP_ABI_CALL(0x0002A0B4u, sub_0002A0B4); /* call 0x0002A0B4 */

loc_00302F4C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00302F4F: ;
    PUSH32(esp, 0x00302F54u); RECOMP_ABI_CALL(0x0002C373u, sub_0002C373); /* call 0x0002C373 */

loc_00302F54: ;
    ecx = eax;
    PUSH32(esp, 0x00302F5Bu); RECOMP_ABI_CALL(0x00035FFEu, sub_00035FFE); /* call 0x00035FFE */

loc_00302F5B: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00302F6Au); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302F6A: ;
    ecx = eax;
    PUSH32(esp, 0x00302F71u); RECOMP_ABI_CALL(0x0055E084u, sub_0055E084); /* call 0x0055E084 */

loc_00302F71: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x00302F78u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00302F78: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00302F9B; /* je: equal / zero */

loc_00302F7F: ;
    edx = esp + 0x1C;
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00302F8Bu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302F8B: ;
    ecx = eax;
    PUSH32(esp, 0x00302F92u); RECOMP_ABI_CALL(0x0055E0FDu, sub_0055E0FD); /* call 0x0055E0FD */

loc_00302F92: ;
    MEM32(esi + 0x20) = 2;
    goto loc_00302FB0;

loc_00302F9B: ;
    eax = esp + 0x20;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00302FA6u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_00302FA6: ;
    ecx = eax;
    PUSH32(esp, 0x00302FADu); RECOMP_ABI_CALL(0x0055E0FDu, sub_0055E0FD); /* call 0x0055E0FD */

loc_00302FAD: ;
    MEM32(esi + 0x20) = ebx;

loc_00302FB0: ;
    ecx = esi;
    PUSH32(esp, 0x00302FB7u); RECOMP_ABI_CALL(0x00028FFCu, sub_00028FFC); /* call 0x00028FFC */

loc_00302FB7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00302FBDu); RECOMP_ABI_CALL(0x0059CEB4u, sub_0059CEB4); /* call 0x0059CEB4 */

loc_00302FBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00303100
 * Original: 0x00303100 - 0x0030311E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00303100: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00303108u); RECOMP_ABI_CALL(0x0002D417u, sub_0002D417); /* call 0x0002D417 */

loc_00303108: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00303118; /* je: equal / zero */

loc_0030310F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00303115u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00303115: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00303118: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303130
 * Original: 0x00303130 - 0x0030318F (95 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00303130: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030317F; /* je: equal / zero */

loc_00303139: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0030317F; /* je: equal / zero */

loc_0030313D: ;
    SET_LO8(eax, MEM8(0x8FC3AE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, 0);
    if (CMP_EQ(_fa, _fb)) goto loc_00303168; /* je: equal / zero */

loc_00303148: ;
    PUSH32(esp, 8);
    MEM8(0x8FC449) = 0;
    PUSH32(esp, 0x00303156u); RECOMP_ABI_CALL(0x00017103u, sub_00017103); /* call 0x00017103 */

loc_00303156: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0030315Du); RECOMP_ABI_CALL(0x00019DBDu, sub_00019DBD); /* call 0x00019DBD */

loc_0030315D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x8FC44A) = 1;
    esp += 4; return; /* ret */

loc_00303168: ;
    MEM8(0x8FC449) = 1;
    PUSH32(esp, 0x00303174u); RECOMP_ABI_CALL(0x0002E894u, sub_0002E894); /* call 0x0002E894 */

loc_00303174: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0030317Bu); RECOMP_ABI_CALL(0x00019DBDu, sub_00019DBD); /* call 0x00019DBD */

loc_0030317B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0030317F: ;
    PUSH32(esp, 1);
    MEM8(0x8FC449) = 0;
    PUSH32(esp, 0x0030318Du); RECOMP_ABI_CALL(0x00019DBDu, sub_00019DBD); /* call 0x00019DBD */

loc_0030318D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003031B0
 * Original: 0x003031B0 - 0x0030320F (95 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003031B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003031B0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003031FA; /* je: equal / zero */

loc_003031B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003031FA; /* je: equal / zero */

loc_003031BD: ;
    SET_LO8(eax, MEM8(0x8FC3AE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003031FB; /* je: equal / zero */

loc_003031C6: ;
    PUSH32(esp, 0);
    ecx = 0x8FC5D8;
    MEM8(0x8FC449) = 1;
    PUSH32(esp, 0x003031D9u); RECOMP_ABI_CALL(0x00026DB0u, sub_00026DB0); /* call 0x00026DB0 */

loc_003031D9: ;
    PUSH32(esp, 2);
    MEM8(0x8FC449) = 0;
    PUSH32(esp, 0x003031E7u); RECOMP_ABI_CALL(0x00019DBDu, sub_00019DBD); /* call 0x00019DBD */

loc_003031E7: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(0x8FC5D4) = xmm0.f[0]; /* movss */

loc_003031FA: ;
    esp += 4; return; /* ret */

loc_003031FB: ;
    MEM8(0x8FC449) = 0;
    MEM32(esp + 4) = 2;
    g_seh_ebp = ebp; sub_00019DBD(); return; /* tail jmp 0x00019DBD */

}

/**
 * sub_00303230
 * Original: 0x00303230 - 0x00303231 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303230(void)
{

loc_00303230: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303240
 * Original: 0x00303240 - 0x00303241 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303240(void)
{

loc_00303240: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303250
 * Original: 0x00303250 - 0x00303359 (265 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303250(void)
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

loc_00303250: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 4);
    MEM8(0x8FC449) = 1;
    PUSH32(esp, 0x00303261u); RECOMP_ABI_CALL(0x00019DBDu, sub_00019DBD); /* call 0x00019DBD */

loc_00303261: ;
    eax = esp + 0x18;
    PUSH32(esp, 0x32);
    PUSH32(esp, eax);
    MEM32(0x8FC430) = 0x32;
    PUSH32(esp, 0x00303277u); RECOMP_ABI_CALL(0x00026216u, sub_00026216); /* call 0x00026216 */

loc_00303277: ;
    xmm3 = XMM_SCALAR(MEMF(0x7AA7EC)); /* movss */
    edx = MEM32(0x8FC430);
    xmm4 = XMM_SCALAR(MEMF(0x7AA7D8)); /* movss */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    goto loc_003032A0;

    /* nop */
    /* nop */

loc_003032A0: ;
    eax = MEM32(ecx * 4 + 0x8E8EB8);
    esi = MEM32(eax + 0x1B4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00303343; /* jne: not equal / not zero */

loc_003032B5: ;
    SET_LO8(ebx, MEM8(eax + 0x1DC));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00303343; /* jl: less (signed <) */

loc_003032C3: ;
    eax = MEM32(eax + 0x20);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax);
    MEM32(esp + 0x10) = esi;
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    MEM32(esp + 0x18) = eax;
    xmm2.f[0] = xmm2.f[0] - MEMF(esp + 0x18); /* subss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    MEM32(esp + 0x14) = esi;
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 8) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00303343; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm0.f[0]) */

loc_00303339: ;
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00303343; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm0.f[0]) */

loc_0030333E: ;
    xmm3 = xmm0; /* movaps */
    edx = ecx;

loc_00303343: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x28 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003032A0; /* jl: less (signed <) */

loc_0030334D: ;
    POP32(esp, esi);
    MEM32(0x8FC430) = edx;
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
 * sub_003033A0
 * Original: 0x003033A0 - 0x003033B0 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003033A0(void)
{

loc_003033A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x8C37C8;
    PUSH32(esp, 0x003033AFu); RECOMP_ABI_CALL(0x0001B0FFu, sub_0001B0FF); /* call 0x0001B0FF */

loc_003033AF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003033C0
 * Original: 0x003033C0 - 0x003033D7 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003033C0(void)
{

loc_003033C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003033E0
 * Original: 0x003033E0 - 0x0030340F (47 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003033E0(void)
{

loc_003033E0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0x3C) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00303420
 * Original: 0x00303420 - 0x00303424 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303420(void)
{

loc_00303420: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_00303430
 * Original: 0x00303430 - 0x00303445 (21 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303430(void)
{

loc_00303430: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00303441u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030343Eu); } /* indirect call */
    }

loc_00303441: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303450
 * Original: 0x00303450 - 0x00303465 (21 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303450(void)
{

loc_00303450: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303461u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030345Eu); } /* indirect call */
    }

loc_00303461: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303470
 * Original: 0x00303470 - 0x0030348A (26 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303470(void)
{

loc_00303470: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = ecx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00303486u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303483u); } /* indirect call */
    }

loc_00303486: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00303490
 * Original: 0x00303490 - 0x0030349C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303490(void)
{

loc_00303490: ;
    eax = ecx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0030349Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303498u); } /* indirect call */
    }

loc_0030349B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003034A0
 * Original: 0x003034A0 - 0x003034A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003034A0(void)
{

loc_003034A0: ;
    eax = MEM32(ecx + 0x24);
    esp += 4; return; /* ret */

}

/**
 * sub_003034B0
 * Original: 0x003034B0 - 0x003034BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003034B0(void)
{

loc_003034B0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x1C) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003034C0
 * Original: 0x003034C0 - 0x003034D0 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003034C0(void)
{

loc_003034C0: ;
    eax = ecx;
    MEM32(eax) = 0x64;
    MEM32(eax + 4) = 0x400;
    esp += 4; return; /* ret */

}

/**
 * sub_003034E0
 * Original: 0x003034E0 - 0x003034E9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003034E0(void)
{

loc_003034E0: ;
    eax = ecx;
    MEM32(eax) = 0x8255FC;
    esp += 4; return; /* ret */

}

/**
 * sub_003034F0
 * Original: 0x003034F0 - 0x003034F9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003034F0(void)
{

loc_003034F0: ;
    eax = ecx;
    MEM32(eax) = 0x825600;
    esp += 4; return; /* ret */

}

/**
 * sub_00303500
 * Original: 0x00303500 - 0x00303503 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00303500(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00303500: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00303510
 * Original: 0x00303510 - 0x0030351A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00303510: ;
    PUSH32(esp, 0x00303515u); RECOMP_ABI_CALL(0x0002D8FEu, sub_0002D8FE); /* call 0x0002D8FE */

loc_00303515: ;
    g_seh_ebp = ebp; sub_00030496(); return; /* tail jmp 0x00030496 */

}

/**
 * sub_00303520
 * Original: 0x00303520 - 0x0030352A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00303520: ;
    PUSH32(esp, 0x00303525u); RECOMP_ABI_CALL(0x00024533u, sub_00024533); /* call 0x00024533 */

loc_00303525: ;
    g_seh_ebp = ebp; sub_0001C63A(); return; /* tail jmp 0x0001C63A */

}

/**
 * sub_00303530
 * Original: 0x00303530 - 0x0030353A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00303530: ;
    PUSH32(esp, 0x00303535u); RECOMP_ABI_CALL(0x0001A3CBu, sub_0001A3CB); /* call 0x0001A3CB */

loc_00303535: ;
    g_seh_ebp = ebp; sub_00014593(); return; /* tail jmp 0x00014593 */

}

/**
 * sub_00303540
 * Original: 0x00303540 - 0x0030354A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00303540: ;
    PUSH32(esp, 0x00303545u); RECOMP_ABI_CALL(0x00036242u, sub_00036242); /* call 0x00036242 */

loc_00303545: ;
    g_seh_ebp = ebp; sub_0002BA4A(); return; /* tail jmp 0x0002BA4A */

}

/**
 * sub_00303550
 * Original: 0x00303550 - 0x0030355A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00303550: ;
    PUSH32(esp, 0x00303555u); RECOMP_ABI_CALL(0x0002FE7Eu, sub_0002FE7E); /* call 0x0002FE7E */

loc_00303555: ;
    g_seh_ebp = ebp; sub_00016EF1(); return; /* tail jmp 0x00016EF1 */

}

/**
 * sub_00303560
 * Original: 0x00303560 - 0x0030356A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00303560: ;
    PUSH32(esp, 0x00303565u); RECOMP_ABI_CALL(0x0002899Eu, sub_0002899E); /* call 0x0002899E */

loc_00303565: ;
    g_seh_ebp = ebp; sub_0002F7FD(); return; /* tail jmp 0x0002F7FD */

}

/**
 * sub_00303570
 * Original: 0x00303570 - 0x0030357A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00303570: ;
    PUSH32(esp, 0x00303575u); RECOMP_ABI_CALL(0x000175CCu, sub_000175CC); /* call 0x000175CC */

loc_00303575: ;
    g_seh_ebp = ebp; sub_00013A5D(); return; /* tail jmp 0x00013A5D */

}

/**
 * sub_00303580
 * Original: 0x00303580 - 0x0030358A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00303580: ;
    PUSH32(esp, 0x00303585u); RECOMP_ABI_CALL(0x0002CC15u, sub_0002CC15); /* call 0x0002CC15 */

loc_00303585: ;
    g_seh_ebp = ebp; sub_00014525(); return; /* tail jmp 0x00014525 */

}

/**
 * sub_00303590
 * Original: 0x00303590 - 0x0030359A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00303590: ;
    PUSH32(esp, 0x00303595u); RECOMP_ABI_CALL(0x000120A4u, sub_000120A4); /* call 0x000120A4 */

loc_00303595: ;
    g_seh_ebp = ebp; sub_00031017(); return; /* tail jmp 0x00031017 */

}

/**
 * sub_003035A0
 * Original: 0x003035A0 - 0x003035AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003035A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003035A0: ;
    PUSH32(esp, 0x003035A5u); RECOMP_ABI_CALL(0x0001C2BBu, sub_0001C2BB); /* call 0x0001C2BB */

loc_003035A5: ;
    g_seh_ebp = ebp; sub_00011091(); return; /* tail jmp 0x00011091 */

}

/**
 * sub_003035B0
 * Original: 0x003035B0 - 0x003035BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003035B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003035B0: ;
    PUSH32(esp, 0x003035B5u); RECOMP_ABI_CALL(0x0002DED0u, sub_0002DED0); /* call 0x0002DED0 */

loc_003035B5: ;
    g_seh_ebp = ebp; sub_00017CE3(); return; /* tail jmp 0x00017CE3 */

}

/**
 * sub_003035C0
 * Original: 0x003035C0 - 0x003035CA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003035C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003035C0: ;
    PUSH32(esp, 0x003035C5u); RECOMP_ABI_CALL(0x0001E061u, sub_0001E061); /* call 0x0001E061 */

loc_003035C5: ;
    g_seh_ebp = ebp; sub_0002910F(); return; /* tail jmp 0x0002910F */

}

/**
 * sub_003035D0
 * Original: 0x003035D0 - 0x00303648 (120 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003035D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003035D0: ;
    PUSH32(esp, 0x003035D5u); RECOMP_ABI_CALL(0x0002D8FEu, sub_0002D8FE); /* call 0x0002D8FE */

loc_003035D5: ;
    PUSH32(esp, 0x003035DAu); RECOMP_ABI_CALL(0x00030496u, sub_00030496); /* call 0x00030496 */

loc_003035DA: ;
    PUSH32(esp, 0x003035DFu); RECOMP_ABI_CALL(0x00024533u, sub_00024533); /* call 0x00024533 */

loc_003035DF: ;
    PUSH32(esp, 0x003035E4u); RECOMP_ABI_CALL(0x0001C63Au, sub_0001C63A); /* call 0x0001C63A */

loc_003035E4: ;
    PUSH32(esp, 0x003035E9u); RECOMP_ABI_CALL(0x0001A3CBu, sub_0001A3CB); /* call 0x0001A3CB */

loc_003035E9: ;
    PUSH32(esp, 0x003035EEu); RECOMP_ABI_CALL(0x00014593u, sub_00014593); /* call 0x00014593 */

loc_003035EE: ;
    PUSH32(esp, 0x003035F3u); RECOMP_ABI_CALL(0x00036242u, sub_00036242); /* call 0x00036242 */

loc_003035F3: ;
    PUSH32(esp, 0x003035F8u); RECOMP_ABI_CALL(0x0002BA4Au, sub_0002BA4A); /* call 0x0002BA4A */

loc_003035F8: ;
    PUSH32(esp, 0x003035FDu); RECOMP_ABI_CALL(0x0002FE7Eu, sub_0002FE7E); /* call 0x0002FE7E */

loc_003035FD: ;
    PUSH32(esp, 0x00303602u); RECOMP_ABI_CALL(0x00016EF1u, sub_00016EF1); /* call 0x00016EF1 */

loc_00303602: ;
    PUSH32(esp, 0x00303607u); RECOMP_ABI_CALL(0x0002899Eu, sub_0002899E); /* call 0x0002899E */

loc_00303607: ;
    PUSH32(esp, 0x0030360Cu); RECOMP_ABI_CALL(0x0002F7FDu, sub_0002F7FD); /* call 0x0002F7FD */

loc_0030360C: ;
    PUSH32(esp, 0x00303611u); RECOMP_ABI_CALL(0x000175CCu, sub_000175CC); /* call 0x000175CC */

loc_00303611: ;
    PUSH32(esp, 0x00303616u); RECOMP_ABI_CALL(0x00013A5Du, sub_00013A5D); /* call 0x00013A5D */

loc_00303616: ;
    PUSH32(esp, 0x0030361Bu); RECOMP_ABI_CALL(0x0002CC15u, sub_0002CC15); /* call 0x0002CC15 */

loc_0030361B: ;
    PUSH32(esp, 0x00303620u); RECOMP_ABI_CALL(0x00014525u, sub_00014525); /* call 0x00014525 */

loc_00303620: ;
    PUSH32(esp, 0x00303625u); RECOMP_ABI_CALL(0x000120A4u, sub_000120A4); /* call 0x000120A4 */

loc_00303625: ;
    PUSH32(esp, 0x0030362Au); RECOMP_ABI_CALL(0x00031017u, sub_00031017); /* call 0x00031017 */

loc_0030362A: ;
    PUSH32(esp, 0x0030362Fu); RECOMP_ABI_CALL(0x0001C2BBu, sub_0001C2BB); /* call 0x0001C2BB */

loc_0030362F: ;
    PUSH32(esp, 0x00303634u); RECOMP_ABI_CALL(0x00011091u, sub_00011091); /* call 0x00011091 */

loc_00303634: ;
    PUSH32(esp, 0x00303639u); RECOMP_ABI_CALL(0x0002DED0u, sub_0002DED0); /* call 0x0002DED0 */

loc_00303639: ;
    PUSH32(esp, 0x0030363Eu); RECOMP_ABI_CALL(0x00017CE3u, sub_00017CE3); /* call 0x00017CE3 */

loc_0030363E: ;
    PUSH32(esp, 0x00303643u); RECOMP_ABI_CALL(0x0001E061u, sub_0001E061); /* call 0x0001E061 */

loc_00303643: ;
    g_seh_ebp = ebp; sub_0002910F(); return; /* tail jmp 0x0002910F */

}

/**
 * sub_00303670
 * Original: 0x00303670 - 0x00303685 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303670(void)
{

loc_00303670: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825614);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00303684u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303682u); } /* indirect call */
    }

loc_00303684: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303690
 * Original: 0x00303690 - 0x003036A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303690(void)
{

loc_00303690: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003036A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030369Du); } /* indirect call */
    }

loc_003036A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003036B0
 * Original: 0x003036B0 - 0x003036D7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003036B0(void)
{

loc_003036B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825624;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003036C6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003036C6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A494);
    ecx = eax;
    PUSH32(esp, 0x003036D3u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_003036D3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003036E0
 * Original: 0x003036E0 - 0x003036F5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003036E0(void)
{

loc_003036E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825638);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003036F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003036F2u); } /* indirect call */
    }

loc_003036F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303700
 * Original: 0x00303700 - 0x00303711 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303700(void)
{

loc_00303700: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00303710u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030370Du); } /* indirect call */
    }

loc_00303710: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303720
 * Original: 0x00303720 - 0x00303747 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303720(void)
{

loc_00303720: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825648;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00303736u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00303736: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1AAE5);
    ecx = eax;
    PUSH32(esp, 0x00303743u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00303743: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00303750
 * Original: 0x00303750 - 0x00303765 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303750(void)
{

loc_00303750: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82565C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00303764u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303762u); } /* indirect call */
    }

loc_00303764: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303770
 * Original: 0x00303770 - 0x00303781 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303770(void)
{

loc_00303770: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00303780u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030377Du); } /* indirect call */
    }

loc_00303780: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303790
 * Original: 0x00303790 - 0x003037B7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303790(void)
{

loc_00303790: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82566C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003037A6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003037A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B851);
    ecx = eax;
    PUSH32(esp, 0x003037B3u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_003037B3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003037C0
 * Original: 0x003037C0 - 0x003037D5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003037C0(void)
{

loc_003037C0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825680);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003037D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003037D2u); } /* indirect call */
    }

loc_003037D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003037E0
 * Original: 0x003037E0 - 0x003037F1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003037E0(void)
{

loc_003037E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003037F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003037EDu); } /* indirect call */
    }

loc_003037F0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303800
 * Original: 0x00303800 - 0x00303827 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303800(void)
{

loc_00303800: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825694;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00303816u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00303816: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1BB67);
    ecx = eax;
    PUSH32(esp, 0x00303823u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00303823: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00303830
 * Original: 0x00303830 - 0x00303833 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303830(void)
{

loc_00303830: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00303840
 * Original: 0x00303840 - 0x0030384E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303840(void)
{

loc_00303840: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030384Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030384Au); } /* indirect call */
    }

loc_0030384D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303860
 * Original: 0x00303860 - 0x0030386E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303860(void)
{

loc_00303860: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030386Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030386Au); } /* indirect call */
    }

loc_0030386D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303880
 * Original: 0x00303880 - 0x0030388E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303880(void)
{

loc_00303880: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030388Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030388Au); } /* indirect call */
    }

loc_0030388D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003038A0
 * Original: 0x003038A0 - 0x003038AE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003038A0(void)
{

loc_003038A0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003038ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003038AAu); } /* indirect call */
    }

loc_003038AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003038C0
 * Original: 0x003038C0 - 0x003038CE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003038C0(void)
{

loc_003038C0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003038CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003038CAu); } /* indirect call */
    }

loc_003038CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003038E0
 * Original: 0x003038E0 - 0x003038EE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003038E0(void)
{

loc_003038E0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003038EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003038EAu); } /* indirect call */
    }

loc_003038ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303900
 * Original: 0x00303900 - 0x00303917 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303900(void)
{

loc_00303900: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00303913u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303910u); } /* indirect call */
    }

loc_00303913: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303920
 * Original: 0x00303920 - 0x00303935 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303920(void)
{

loc_00303920: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8256A8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00303934u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303932u); } /* indirect call */
    }

loc_00303934: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303940
 * Original: 0x00303940 - 0x00303951 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303940(void)
{

loc_00303940: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00303950u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030394Du); } /* indirect call */
    }

loc_00303950: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303960
 * Original: 0x00303960 - 0x00303987 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303960(void)
{

loc_00303960: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8256B8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00303976u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00303976: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B07B);
    ecx = eax;
    PUSH32(esp, 0x00303983u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00303983: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00303990
 * Original: 0x00303990 - 0x003039A5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303990(void)
{

loc_00303990: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8256CC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003039A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003039A2u); } /* indirect call */
    }

loc_003039A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003039B0
 * Original: 0x003039B0 - 0x003039C1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003039B0(void)
{

loc_003039B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003039C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003039BDu); } /* indirect call */
    }

loc_003039C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003039D0
 * Original: 0x003039D0 - 0x003039F7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003039D0(void)
{

loc_003039D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8256DC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x003039E6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_003039E6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A0FB);
    ecx = eax;
    PUSH32(esp, 0x003039F3u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_003039F3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00303A00
 * Original: 0x00303A00 - 0x00303A03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303A00(void)
{

loc_00303A00: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00303A10
 * Original: 0x00303A10 - 0x00303A1E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303A10(void)
{

loc_00303A10: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00303A1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303A1Au); } /* indirect call */
    }

loc_00303A1D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303A30
 * Original: 0x00303A30 - 0x00303A3E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303A30(void)
{

loc_00303A30: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00303A3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303A3Au); } /* indirect call */
    }

loc_00303A3D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303A50
 * Original: 0x00303A50 - 0x00303A5E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303A50(void)
{

loc_00303A50: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00303A5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303A5Au); } /* indirect call */
    }

loc_00303A5D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303A70
 * Original: 0x00303A70 - 0x00303A7E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303A70(void)
{

loc_00303A70: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303A7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303A7Au); } /* indirect call */
    }

loc_00303A7D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303A90
 * Original: 0x00303A90 - 0x00303A9E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303A90(void)
{

loc_00303A90: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303A9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303A9Au); } /* indirect call */
    }

loc_00303A9D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303AB0
 * Original: 0x00303AB0 - 0x00303ABE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303AB0(void)
{

loc_00303AB0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303ABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303ABAu); } /* indirect call */
    }

loc_00303ABD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303AD0
 * Original: 0x00303AD0 - 0x00303ADE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303AD0(void)
{

loc_00303AD0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303ADDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303ADAu); } /* indirect call */
    }

loc_00303ADD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303AF0
 * Original: 0x00303AF0 - 0x00303AFE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303AF0(void)
{

loc_00303AF0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303AFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303AFAu); } /* indirect call */
    }

loc_00303AFD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303B10
 * Original: 0x00303B10 - 0x00303B1E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303B10(void)
{

loc_00303B10: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303B1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303B1Au); } /* indirect call */
    }

loc_00303B1D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303B30
 * Original: 0x00303B30 - 0x00303B47 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303B30(void)
{

loc_00303B30: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00303B43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303B40u); } /* indirect call */
    }

loc_00303B43: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303B50
 * Original: 0x00303B50 - 0x00303B67 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303B50(void)
{

loc_00303B50: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00303B63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303B60u); } /* indirect call */
    }

loc_00303B63: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303B70
 * Original: 0x00303B70 - 0x00303B87 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303B70(void)
{

loc_00303B70: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00303B83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303B80u); } /* indirect call */
    }

loc_00303B83: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303B90
 * Original: 0x00303B90 - 0x00303BA5 (21 bytes, 7 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303B90(void)
{

loc_00303B90: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8256F0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00303BA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303BA2u); } /* indirect call */
    }

loc_00303BA4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303BB0
 * Original: 0x00303BB0 - 0x00303BC1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303BB0(void)
{

loc_00303BB0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00303BC0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303BBDu); } /* indirect call */
    }

loc_00303BC0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303BD0
 * Original: 0x00303BD0 - 0x00303BF7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303BD0(void)
{

loc_00303BD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8256FC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00303BE6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00303BE6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B765);
    ecx = eax;
    PUSH32(esp, 0x00303BF3u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00303BF3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00303C00
 * Original: 0x00303C00 - 0x00303C03 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303C00(void)
{

loc_00303C00: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00303C10
 * Original: 0x00303C10 - 0x00303C1E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303C10(void)
{

loc_00303C10: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00303C1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303C1Au); } /* indirect call */
    }

loc_00303C1D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303C30
 * Original: 0x00303C30 - 0x00303C3E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303C30(void)
{

loc_00303C30: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00303C3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303C3Au); } /* indirect call */
    }

loc_00303C3D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303C50
 * Original: 0x00303C50 - 0x00303C5E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303C50(void)
{

loc_00303C50: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303C5Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303C5Au); } /* indirect call */
    }

loc_00303C5D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303C70
 * Original: 0x00303C70 - 0x00303C7E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303C70(void)
{

loc_00303C70: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303C7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303C7Au); } /* indirect call */
    }

loc_00303C7D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303C90
 * Original: 0x00303C90 - 0x00303C9C (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303C90(void)
{

loc_00303C90: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00303C9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303C98u); } /* indirect call */
    }

loc_00303C9B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303CA0
 * Original: 0x00303CA0 - 0x00303CB8 (24 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00303CA0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303CB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303CB1u); } /* indirect call */
    }

loc_00303CB4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303CC0
 * Original: 0x00303CC0 - 0x00303CD7 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303CC0(void)
{

loc_00303CC0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00303CD3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303CD0u); } /* indirect call */
    }

loc_00303CD3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303CE0
 * Original: 0x00303CE0 - 0x00303CF5 (21 bytes, 7 insns)
 * Category: game_camera
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303CE0(void)
{

loc_00303CE0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825710);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00303CF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303CF2u); } /* indirect call */
    }

loc_00303CF4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303D00
 * Original: 0x00303D00 - 0x00303D11 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303D00(void)
{

loc_00303D00: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00303D10u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303D0Du); } /* indirect call */
    }

loc_00303D10: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303D20
 * Original: 0x00303D20 - 0x00303D47 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303D20(void)
{

loc_00303D20: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825724;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00303D36u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00303D36: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1B75C);
    ecx = eax;
    PUSH32(esp, 0x00303D43u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00303D43: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00303D50
 * Original: 0x00303D50 - 0x00303D53 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303D50(void)
{

loc_00303D50: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00303D60
 * Original: 0x00303D60 - 0x00303D6E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303D60(void)
{

loc_00303D60: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00303D6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303D6Au); } /* indirect call */
    }

loc_00303D6D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303D80
 * Original: 0x00303D80 - 0x00303D8E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303D80(void)
{

loc_00303D80: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00303D8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303D8Au); } /* indirect call */
    }

loc_00303D8D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303DA0
 * Original: 0x00303DA0 - 0x00303DAE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303DA0(void)
{

loc_00303DA0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303DADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303DAAu); } /* indirect call */
    }

loc_00303DAD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303DC0
 * Original: 0x00303DC0 - 0x00303DD6 (22 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303DC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00303DC0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303DD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303DCFu); } /* indirect call */
    }

loc_00303DD2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303DE0
 * Original: 0x00303DE0 - 0x00303DF7 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303DE0(void)
{

loc_00303DE0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00303DF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303DF0u); } /* indirect call */
    }

loc_00303DF3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303E00
 * Original: 0x00303E00 - 0x00303E17 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303E00(void)
{

loc_00303E00: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00303E13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303E10u); } /* indirect call */
    }

loc_00303E13: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303E20
 * Original: 0x00303E20 - 0x00303E37 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303E20(void)
{

loc_00303E20: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00303E33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303E30u); } /* indirect call */
    }

loc_00303E33: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303E40
 * Original: 0x00303E40 - 0x00303E55 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303E40(void)
{

loc_00303E40: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825738);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00303E54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303E52u); } /* indirect call */
    }

loc_00303E54: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303E60
 * Original: 0x00303E60 - 0x00303E71 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303E60(void)
{

loc_00303E60: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00303E70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303E6Du); } /* indirect call */
    }

loc_00303E70: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303E80
 * Original: 0x00303E80 - 0x00303EA7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303E80(void)
{

loc_00303E80: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x825748;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00303E96u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00303E96: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1AB6E);
    ecx = eax;
    PUSH32(esp, 0x00303EA3u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00303EA3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00303EB0
 * Original: 0x00303EB0 - 0x00303EB3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303EB0(void)
{

loc_00303EB0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00303EC0
 * Original: 0x00303EC0 - 0x00303ECE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303EC0(void)
{

loc_00303EC0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00303ECDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303ECAu); } /* indirect call */
    }

loc_00303ECD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303EE0
 * Original: 0x00303EE0 - 0x00303EEE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303EE0(void)
{

loc_00303EE0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00303EEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303EEAu); } /* indirect call */
    }

loc_00303EED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303F00
 * Original: 0x00303F00 - 0x00303F0E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303F00(void)
{

loc_00303F00: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303F0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303F0Au); } /* indirect call */
    }

loc_00303F0D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303F20
 * Original: 0x00303F20 - 0x00303F2E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303F20(void)
{

loc_00303F20: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303F2Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303F2Au); } /* indirect call */
    }

loc_00303F2D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303F40
 * Original: 0x00303F40 - 0x00303F4E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303F40(void)
{

loc_00303F40: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303F4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303F4Au); } /* indirect call */
    }

loc_00303F4D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303F60
 * Original: 0x00303F60 - 0x00303F6E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303F60(void)
{

loc_00303F60: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303F6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303F6Au); } /* indirect call */
    }

loc_00303F6D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303F80
 * Original: 0x00303F80 - 0x00303F8E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303F80(void)
{

loc_00303F80: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00303F8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303F8Au); } /* indirect call */
    }

loc_00303F8D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303FA0
 * Original: 0x00303FA0 - 0x00303FB7 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303FA0(void)
{

loc_00303FA0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00303FB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303FB0u); } /* indirect call */
    }

loc_00303FB3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00303FC0
 * Original: 0x00303FC0 - 0x00303FD5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303FC0(void)
{

loc_00303FC0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x82575C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00303FD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303FD2u); } /* indirect call */
    }

loc_00303FD4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00303FE0
 * Original: 0x00303FE0 - 0x00303FF1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00303FE0(void)
{

loc_00303FE0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00303FF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00303FEDu); } /* indirect call */
    }

loc_00303FF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304000
 * Original: 0x00304000 - 0x00304027 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304000(void)
{

loc_00304000: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82576C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xD);
    PUSH32(esp, 0x00304016u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00304016: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1A22C);
    ecx = eax;
    PUSH32(esp, 0x00304023u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00304023: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00304030
 * Original: 0x00304030 - 0x00304033 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304030(void)
{

loc_00304030: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00304040
 * Original: 0x00304040 - 0x0030404E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304040(void)
{

loc_00304040: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030404Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030404Au); } /* indirect call */
    }

loc_0030404D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304060
 * Original: 0x00304060 - 0x0030406E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304060(void)
{

loc_00304060: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0030406Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030406Au); } /* indirect call */
    }

loc_0030406D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304080
 * Original: 0x00304080 - 0x0030408E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304080(void)
{

loc_00304080: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030408Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030408Au); } /* indirect call */
    }

loc_0030408D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003040A0
 * Original: 0x003040A0 - 0x003040AE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003040A0(void)
{

loc_003040A0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003040ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003040AAu); } /* indirect call */
    }

loc_003040AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003040C0
 * Original: 0x003040C0 - 0x003040CE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003040C0(void)
{

loc_003040C0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003040CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003040CAu); } /* indirect call */
    }

loc_003040CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003040E0
 * Original: 0x003040E0 - 0x003040EE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003040E0(void)
{

loc_003040E0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003040EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003040EAu); } /* indirect call */
    }

loc_003040ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304100
 * Original: 0x00304100 - 0x0030410E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304100(void)
{

loc_00304100: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030410Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030410Au); } /* indirect call */
    }

loc_0030410D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304120
 * Original: 0x00304120 - 0x0030412E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304120(void)
{

loc_00304120: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030412Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030412Au); } /* indirect call */
    }

loc_0030412D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304140
 * Original: 0x00304140 - 0x0030414E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304140(void)
{

loc_00304140: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030414Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030414Au); } /* indirect call */
    }

loc_0030414D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304160
 * Original: 0x00304160 - 0x0030416E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304160(void)
{

loc_00304160: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030416Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030416Au); } /* indirect call */
    }

loc_0030416D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304180
 * Original: 0x00304180 - 0x0030418E (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304180(void)
{

loc_00304180: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0030418Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0030418Au); } /* indirect call */
    }

loc_0030418D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003041A0
 * Original: 0x003041A0 - 0x003041AE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003041A0(void)
{

loc_003041A0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 9);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003041ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003041AAu); } /* indirect call */
    }

loc_003041AD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003041C0
 * Original: 0x003041C0 - 0x003041CE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003041C0(void)
{

loc_003041C0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xA);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003041CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003041CAu); } /* indirect call */
    }

loc_003041CD: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003041E0
 * Original: 0x003041E0 - 0x003041EE (14 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003041E0(void)
{

loc_003041E0: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003041EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003041EAu); } /* indirect call */
    }

loc_003041ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00304200
 * Original: 0x00304200 - 0x00304217 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304200(void)
{

loc_00304200: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00304213u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304210u); } /* indirect call */
    }

loc_00304213: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304220
 * Original: 0x00304220 - 0x00304237 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304220(void)
{

loc_00304220: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00304233u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304230u); } /* indirect call */
    }

loc_00304233: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304240
 * Original: 0x00304240 - 0x00304257 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304240(void)
{

loc_00304240: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00304253u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304250u); } /* indirect call */
    }

loc_00304253: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304260
 * Original: 0x00304260 - 0x00304277 (23 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304260(void)
{

loc_00304260: ;
    eax = MEM32(ecx);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00304273u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304270u); } /* indirect call */
    }

loc_00304273: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00304280
 * Original: 0x00304280 - 0x00304295 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00304280(void)
{

loc_00304280: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x825780);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00304294u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00304292u); } /* indirect call */
    }

loc_00304294: ;
    esp += 4; return; /* ret */

}
