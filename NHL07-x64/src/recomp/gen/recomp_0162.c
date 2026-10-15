/**
 * nhl_07_recomp - Recompiled code chunk 162
 * Functions: 250 (0x0031E2B0 - 0x00327480)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0031E2B0
 * Original: 0x0031E2B0 - 0x0031E3D3 (291 bytes, 100 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E2B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E2B0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esi) = 0x827208;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = ebp;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x14) = edi;
    MEM32(esi + 0x1C) = ebp;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x24) = 1;
    if (CMP_G(_fas, _fbs)) goto loc_0031E2FD; /* jg: greater (signed >) */

loc_0031E2E9: ;
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x24) = 8;
    MEM32(esi + 0x18) = ebp;
    goto loc_0031E39F;

loc_0031E2FD: ;
    eax = edi + edi * 2;
    eax = eax * 4 + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x826DF4);
    if (CMP_B(_fa, _fb)) goto loc_0031E323; /* jb: below (unsigned <) */

loc_0031E315: ;
    edx = MEM32(0x8FC1D0);
    ecx = MEM32(edx + 0xE0);
    goto loc_0031E32C;

loc_0031E323: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_0031E32C: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031E331u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031E32Eu); } /* indirect call */
    }

loc_0031E331: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0031E34B; /* je: equal / zero */

loc_0031E336: ;
    PUSH32(esp, 0x2DCCD);
    PUSH32(esp, edi);
    ebx = eax + 4;
    PUSH32(esp, 0xC);
    PUSH32(esp, ebx);
    MEM32(eax) = edi;
    PUSH32(esp, 0x0031E349u); RECOMP_ABI_CALL(0x000199EEu, sub_000199EE); /* call 0x000199EE */

loc_0031E349: ;
    goto loc_0031E34D;

loc_0031E34B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031E34D: ;
    eax = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi + 0x18) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0031E39E; /* jle: less or equal (signed <=) */

loc_0031E359: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0031E360;

    /* nop */

loc_0031E360: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8271F4);
    if (CMP_B(_fa, _fb)) goto loc_0031E37F; /* jb: below (unsigned <) */

loc_0031E371: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    goto loc_0031E388;

loc_0031E37F: ;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);

loc_0031E388: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031E38Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031E38Au); } /* indirect call */
    }

loc_0031E38D: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ebx + ecx) = eax;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031E360; /* jl: less (signed <) */

loc_0031E39E: ;
    POP32(esp, ebx);

loc_0031E39F: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031E3C4u); RECOMP_ABI_CALL(0x00028A8Eu, sub_00028A8E); /* call 0x00028A8E */

loc_0031E3C4: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0031E420
 * Original: 0x0031E420 - 0x0031E445 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E420: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi) = 0x827208;
    PUSH32(esp, 0x0031E435u); RECOMP_ABI_CALL(0x00020CA8u, sub_00020CA8); /* call 0x00020CA8 */

loc_0031E435: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031E444; /* je: equal / zero */

loc_0031E43D: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0031E444u); RECOMP_ABI_CALL(0x00031F49u, sub_00031F49); /* call 0x00031F49 */

loc_0031E444: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031E450
 * Original: 0x0031E450 - 0x0031E492 (66 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0031E450: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = esi;
    PUSH32(esp, edi);
    edi = eax + 1;
    goto loc_0031E460;

    /* nop */

loc_0031E460: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0031E460; /* jne: not equal / not zero */

loc_0031E467: ;
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, 0);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E487u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_0031E487: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0031E4B0
 * Original: 0x0031E4B0 - 0x0031E4C3 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E4B0(void)
{

loc_0031E4B0: ;
    eax = MEM32(ecx + 0x10);
    MEM32(ecx) = 0x827194;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E4C2u); RECOMP_ABI_CALL(0x00020CA8u, sub_00020CA8); /* call 0x00020CA8 */

loc_0031E4C2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031E4D0
 * Original: 0x0031E4D0 - 0x0031E509 (57 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E4D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E4D0: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031E506; /* jne: not equal / not zero */

loc_0031E4D7: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    MEM32(ecx + 8) = eax;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, 0);
    MEM32(ecx + 4) = 1;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0x2C);
    edx = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031E506u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_0031E506: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031E520
 * Original: 0x0031E520 - 0x0031E54F (47 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E520: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031E54E; /* jne: not equal / not zero */

loc_0031E526: ;
    eax = MEM32(ecx + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(ecx + 4) = 2;
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 0x2C);
    edx = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031E54Eu); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_0031E54E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031E560
 * Original: 0x0031E560 - 0x0031E5BB (91 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E560(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E560: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0031E57Au); RECOMP_ABI_CALL(0x0002A000u, sub_0002A000); /* call 0x0002A000 */

loc_0031E57A: ;
    SET_LO8(edx, MEM8(esp + 0x18));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = ecx;
    MEM32(esi + 0x1C) = ecx;
    eax = esi + 0x14;
    MEM32(eax) = 0x7F0C44;
    MEM32(esi + 0x30) = ecx;
    MEM32(esi) = 0x827220;
    MEM32(eax) = 0x827214;
    MEM8(esi + 0x24) = LO8(edx);
    edx = MEM32(edi);
    MEM32(esi + 0x2C) = ecx;
    MEM32(esi + 0x28) = ecx;
    PUSH32(esp, eax);
    ecx = edx;
    MEM32(esi + 0x20) = edx;
    PUSH32(esp, 0x0031E5B4u); RECOMP_ABI_CALL(0x0002C440u, sub_0002C440); /* call 0x0002C440 */

loc_0031E5B4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0031E5E0
 * Original: 0x0031E5E0 - 0x0031E5E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E5E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E5E0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00018B89(); return; /* tail jmp 0x00018B89 */

}

/**
 * sub_0031E5F0
 * Original: 0x0031E5F0 - 0x0031E627 (55 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E5F0(void)
{

loc_0031E5F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    MEM32(esi) = 0x827220;
    MEM32(edi) = 0x827214;
    PUSH32(esp, 0x0031E60Cu); RECOMP_ABI_CALL(0x0001F227u, sub_0001F227); /* call 0x0001F227 */

loc_0031E60C: ;
    MEM32(edi) = 0x7F0C44;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM32(esi) = 0x827194;
    PUSH32(esp, 0x0031E624u); RECOMP_ABI_CALL(0x00020CA8u, sub_00020CA8); /* call 0x00020CA8 */

loc_0031E624: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E640
 * Original: 0x0031E640 - 0x0031E670 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E640(void)
{

loc_0031E640: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, 0x8C42F0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0031E660u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_0031E660: ;
    MEM32(esi + 0x2C) = 0;
    MEM32(esi + 0x28) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E680
 * Original: 0x0031E680 - 0x0031E753 (211 bytes, 83 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E680: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi + 4);
    esi = ecx;
    ecx = MEM32(eax + 0xC);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0031E711; /* je: equal / zero */

loc_0031E693: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0031E6BD; /* je: equal / zero */

loc_0031E696: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031E6B6; /* je: equal / zero */

loc_0031E69D: ;
    MEM32(esi + 8) = 0;
    edx = MEM32(edi + 4);
    edx = MEM32(edx + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0031E6AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031E6ADu); } /* indirect call */
    }

loc_0031E6AF: ;
    MEM32(esi + 4) = 0;

loc_0031E6B6: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031E6BD: ;
    eax = MEM32(eax + 4);
    ecx = MEM32(eax + 0x44);
    eax = MEM32(esi + 0x2C);
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E743; /* je: equal / zero */

loc_0031E6D1: ;
    MEM32(esi + 0x28) = MEM32(esi + 0x28) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = ~edx;
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x2C) = edx;
    eax = MEM32(edi + 4);
    esi = MEM32(esi + 0x10);
    ecx = MEM32(eax + 4);
    edx = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031E701u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_0031E701: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0031E707u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031E705u); } /* indirect call */
    }

loc_0031E707: ;
    POP32(esp, edi);
    eax = 8;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031E711: ;
    ecx = MEM32(eax + 4);
    ecx = MEM32(ecx + 0x44);
    eax = MEM32(esi + 0x2C);
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, eax (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0031E749; /* jne: not equal / not zero */

loc_0031E725: ;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(esi + 0x28);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = edx;
    PUSH32(esp, 0x0031E738u); RECOMP_ABI_CALL(0x00013300u, sub_00013300); /* call 0x00013300 */

loc_0031E738: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031E743; /* je: equal / zero */

loc_0031E73C: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0031E743u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031E740u); } /* indirect call */
    }

loc_0031E743: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0031E749u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031E747u); } /* indirect call */
    }

loc_0031E749: ;
    POP32(esp, edi);
    eax = 8;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031E790
 * Original: 0x0031E790 - 0x0031E7B1 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E790(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E790: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031E798u); RECOMP_ABI_CALL(0x0002F4ABu, sub_0002F4AB); /* call 0x0002F4AB */

loc_0031E798: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E7AB; /* je: equal / zero */

loc_0031E79F: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E7ABu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031E7AB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031E7C0
 * Original: 0x0031E7C0 - 0x0031E7E1 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E7C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031E7C8u); RECOMP_ABI_CALL(0x00016EE2u, sub_00016EE2); /* call 0x00016EE2 */

loc_0031E7C8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E7DB; /* je: equal / zero */

loc_0031E7CF: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E7DBu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031E7DB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031E7F0
 * Original: 0x0031E7F0 - 0x0031E800 (16 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E7F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031E7F0: ;
    ecx = MEM32(0x8FC644);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031E7FF; /* je: equal / zero */

loc_0031E7FA: ;
    g_seh_ebp = ebp; sub_00018125(); return; /* tail jmp 0x00018125 */

loc_0031E7FF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031E810
 * Original: 0x0031E810 - 0x0031E84D (61 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E810: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 8) = 0x7F0C50;
    MEM32(esi + 0x14) = edi;
    MEM32(esi) = 0x8271DC;
    MEM32(esi + 8) = 0x8271D0;
    PUSH32(esp, 0x0031E83Bu); RECOMP_ABI_CALL(0x0001FA24u, sub_0001FA24); /* call 0x0001FA24 */

loc_0031E83B: ;
    MEM32(esi + 0x248) = edi;
    POP32(esp, edi);
    eax = esi;
    MEM8(0x8C42C0) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031E860
 * Original: 0x0031E860 - 0x0031E881 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E860: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031E868u); RECOMP_ABI_CALL(0x00022E40u, sub_00022E40); /* call 0x00022E40 */

loc_0031E868: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031E87B; /* je: equal / zero */

loc_0031E86F: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031E87Bu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031E87B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031E890
 * Original: 0x0031E890 - 0x0031E8DD (77 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E890: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 8) = 0x7F0C50;
    MEM32(esi + 0x14) = eax;
    MEM32(esi) = 0x8271DC;
    MEM32(esi + 8) = 0x8271D0;
    PUSH32(esp, 0x0031E8BAu); RECOMP_ABI_CALL(0x0001FA24u, sub_0001FA24); /* call 0x0001FA24 */

loc_0031E8BA: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 8);
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, edx);
    ecx = esi;
    MEM32(esi + 0x248) = eax;
    PUSH32(esp, 0x0031E8D7u); RECOMP_ABI_CALL(0x00017DE7u, sub_00017DE7); /* call 0x00017DE7 */

loc_0031E8D7: ;
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0031E8F0
 * Original: 0x0031E8F0 - 0x0031E9C0 (208 bytes, 63 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031E8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031E8F0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031E9BC; /* je: equal / zero */

loc_0031E8FE: ;
    SET_LO8(eax, MEM8(0x8FC634));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031E920; /* je: equal / zero */

loc_0031E907: ;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031E913u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031E910u); } /* indirect call */
    }

loc_0031E913: ;
    MEM32(edi + 0x240) = eax;
    MEM8(0x8FC634) = 0;

loc_0031E920: ;
    ecx = MEM32(0x8FC638);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031E957; /* je: equal / zero */

loc_0031E92A: ;
    eax = MEM32(edi + 0x240);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031E936u); RECOMP_ABI_CALL(0x00031D00u, sub_00031D00); /* call 0x00031D00 */

loc_0031E936: ;
    eax = MEM32(0x8FC638);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031E957; /* je: equal / zero */

loc_0031E93F: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031E957; /* je: equal / zero */

loc_0031E944: ;
    PUSH32(esp, 0x0031E949u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0031E949: ;
    MEM32(eax + 0x40C) = 1;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031E957: ;
    ecx = MEM32(0x8FC630);
    ecx = MEM32(ecx);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031E965u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031E962u); } /* indirect call */
    }

loc_0031E965: ;
    esi = eax;
    PUSH32(esp, 0x0031E96Cu); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0031E96C: ;
    ecx = MEM32(0x8FC630);
    edx = MEM32(ecx);
    ecx = MEM32(edx + 8);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x418));
    eax = 0x10624DD3;
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(MEM32(edi + 0x240)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(edi + 0x240);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_0031E9AF; /* jbe: below or equal (unsigned <=) */

loc_0031E993: ;
    SET_LO8(eax, MEM8(0x8C42C0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031E9BC; /* je: equal / zero */

loc_0031E99C: ;
    PUSH32(esp, 0x0031E9A1u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0031E9A1: ;
    MEM32(eax + 0x40C) = 2;

loc_0031E9AB: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031E9AF: ;
    edx = MEM32(0x8FC638);
    SET_LO8(eax, MEM8(edx + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031E9AB; /* je: equal / zero */

loc_0031E9BC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EA00
 * Original: 0x0031EA00 - 0x0031EC9F (671 bytes, 219 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EA00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031EA00: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = esi + -8;
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x0031EA10u); RECOMP_ABI_CALL(0x000242B8u, sub_000242B8); /* call 0x000242B8 */

loc_0031EA10: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031EA65; /* jne: not equal / not zero */

loc_0031EA16: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EC14; /* je: equal / zero */

loc_0031EA1F: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031EA21: ;
    SET_LO16(edx, MEM16(esi + 0x20));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ebx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0031EAC0; /* jbe: below or equal (unsigned <=) */

loc_0031EA2E: ;
    eax = ZX8(MEM8(esi + 0x24));
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EBA4; /* je: equal / zero */

loc_0031EA3D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFDu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFDu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031EA96; /* jne: not equal / not zero */

loc_0031EA42: ;
    eax = ZX16(LO16(edx));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    ecx = esi + 0x25;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x0031EA52u); RECOMP_ABI_CALL(0x000176E4u, sub_000176E4); /* call 0x000176E4 */

loc_0031EA52: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031EABC; /* jne: not equal / not zero */

loc_0031EA56: ;
    PUSH32(esp, 0x0031EA5Bu); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0031EA5B: ;
    MEM32(eax + 0x40C) = 4;

loc_0031EA65: ;
    eax = MEM32(0x8FC638);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = MEM32(esi + 0x23C);
    if (CMP_EQ(_fa, _fb)) goto loc_0031EC36; /* je: equal / zero */

loc_0031EA78: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EC36; /* je: equal / zero */

loc_0031EA80: ;
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EC36; /* je: equal / zero */

loc_0031EA89: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0031EA91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031EA8Eu); } /* indirect call */
    }

loc_0031EA91: ;
    goto loc_0031EC3D;

loc_0031EA96: ;
    _fa = (uint32_t)(MEM32(esi + 0x23C)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x23C), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031EBC8; /* jne: not equal / not zero */

loc_0031EAA3: ;
    ecx = MEM32(esi + -4);
    eax = MEM32(ecx);
    edx = ZX16(LO16(edx));
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edx);
    edx = esi + 0x25;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0031EAB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031EAB2u); } /* indirect call */
    }

loc_0031EAB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031EC9A; /* jne: not equal / not zero */

loc_0031EABC: ;
    MEM16(esi + 0x20) = LO16(ebx);

loc_0031EAC0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 5 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0031EC9A; /* jg: greater (signed >) */

loc_0031EAC9: ;
    eax = MEM32(0x8FC638);
    _fa = (uint32_t)(MEM8(eax + 8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 8), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EC08; /* je: equal / zero */

loc_0031EAD7: ;
    edx = MEM32(esi + 0x18);
    PUSH32(esp, 1);
    ecx = esi + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0031EAE6u); RECOMP_ABI_CALL(0x004579B0u, sub_004579B0); /* call 0x004579B0 */

loc_0031EAE6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EC9A; /* je: equal / zero */

loc_0031EAF2: ;
    if (CMP_LE(_fas, _fbs)) goto loc_0031EBDC; /* jle: less or equal (signed <=) */

loc_0031EAF8: ;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031EB04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031EB01u); } /* indirect call */
    }

loc_0031EB04: ;
    MEM32(esi + 0x238) = eax;
    _fa = (uint32_t)(MEM8(esi + 0x22)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x22), 4 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EA21; /* je: equal / zero */

loc_0031EB14: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x82732C);
    PUSH32(esp, 0x0031EB20u); RECOMP_ABI_CALL(0x00032890u, sub_00032890); /* call 0x00032890 */

loc_0031EB20: ;
    edx = ZX8(MEM8(esi + 0x22));
    PUSH32(esp, edx);
    PUSH32(esp, 0x8272F0);
    PUSH32(esp, 0x0031EB2Fu); RECOMP_ABI_CALL(0x00032890u, sub_00032890); /* call 0x00032890 */

loc_0031EB2F: ;
    eax = ZX16(MEM16(esi + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, 0x8272E0);
    PUSH32(esp, 0x0031EB3Eu); RECOMP_ABI_CALL(0x00032890u, sub_00032890); /* call 0x00032890 */

loc_0031EB3E: ;
    ecx = ZX8(MEM8(esi + 0x26));
    edx = ZX8(MEM8(esi + 0x25));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x8272C0);
    PUSH32(esp, 0x0031EB52u); RECOMP_ABI_CALL(0x00032890u, sub_00032890); /* call 0x00032890 */

loc_0031EB52: ;
    eax = ZX8(MEM8(esi + 0x28));
    ecx = ZX8(MEM8(esi + 0x27));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8272A8);
    PUSH32(esp, 0x0031EB66u); RECOMP_ABI_CALL(0x00032890u, sub_00032890); /* call 0x00032890 */

loc_0031EB66: ;
    edx = ZX8(MEM8(esi + 0x2D));
    eax = ZX8(MEM8(esi + 0x2C));
    ecx = ZX8(MEM8(esi + 0x2B));
    PUSH32(esp, edx);
    edx = ZX8(MEM8(esi + 0x2A));
    PUSH32(esp, eax);
    eax = ZX8(MEM8(esi + 0x29));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82727C);
    PUSH32(esp, 0x0031EB89u); RECOMP_ABI_CALL(0x00032890u, sub_00032890); /* call 0x00032890 */

loc_0031EB89: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x20) = LO16(ebx);
    PUSH32(esp, 0x0031EB95u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0031EB95: ;
    MEM32(eax + 0x40C) = 6;
    goto loc_0031EA65;

loc_0031EBA4: ;
    eax = MEM32(0x8FC638);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EBB4; /* je: equal / zero */

loc_0031EBAD: ;
    ecx = ZX8(MEM8(esi + 0x25));
    MEM32(eax + 4) = ecx;

loc_0031EBB4: ;
    PUSH32(esp, 0x0031EBB9u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0031EBB9: ;
    MEM32(eax + 0x40C) = 3;
    goto loc_0031EA65;

loc_0031EBC8: ;
    PUSH32(esp, 0x0031EBCDu); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0031EBCD: ;
    MEM32(eax + 0x40C) = 5;
    goto loc_0031EA65;

loc_0031EBDC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x827250);
    PUSH32(esp, 0x0031EBE7u); RECOMP_ABI_CALL(0x00032890u, sub_00032890); /* call 0x00032890 */

loc_0031EBE7: ;
    PUSH32(esp, 0x827230);
    PUSH32(esp, 0x0031EBF1u); RECOMP_ABI_CALL(0x00032890u, sub_00032890); /* call 0x00032890 */

loc_0031EBF1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0031EBF9u); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0031EBF9: ;
    MEM32(eax + 0x40C) = 7;
    goto loc_0031EA65;

loc_0031EC08: ;
    edx = MEM32(ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

loc_0031EC14: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EC9A; /* je: equal / zero */

loc_0031EC1D: ;
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x0031EC26u); RECOMP_ABI_CALL(0x00017DE7u, sub_00017DE7); /* call 0x00017DE7 */

loc_0031EC26: ;
    PUSH32(esp, 0x0031EC2Bu); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0031EC2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax + 0x40C) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031EC36: ;
    ecx = ebp;
    PUSH32(esp, 0x0031EC3Du); RECOMP_ABI_CALL(0x00020640u, sub_00020640); /* call 0x00020640 */

loc_0031EC3D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031EC52; /* jne: not equal / not zero */

loc_0031EC42: ;
    ecx = MEM32(esi + -4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFEu);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0031EC4Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031EC4Bu); } /* indirect call */
    }

loc_0031EC4D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031EC52: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031EC8A; /* jne: not equal / not zero */

loc_0031EC57: ;
    _fa = (uint32_t)(MEM32(esi + 0x240)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x240), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EC72; /* je: equal / zero */

loc_0031EC5F: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EC9A; /* je: equal / zero */

loc_0031EC63: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0031EC6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031EC6Au); } /* indirect call */
    }

loc_0031EC6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031EC72: ;
    eax = ZX16(MEM16(esi + 0x20));
    ecx = MEM32(esi + -4);
    edx = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x25) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x25;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFDu);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0031EC85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031EC83u); } /* indirect call */
    }

loc_0031EC85: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0031EC8A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031EC9A; /* jne: not equal / not zero */

loc_0031EC8F: ;
    ecx = MEM32(esi + -4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xFFFFFFFBu);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0031EC9Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031EC98u); } /* indirect call */
    }

loc_0031EC9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0031ED50
 * Original: 0x0031ED50 - 0x0031EDCF (127 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031ED50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031ED50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM8(esi) = 0;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 0x14) = 0;
    MEM32(esi + 0x10) = 0;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031ED77u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031ED74u); } /* indirect call */
    }

loc_0031ED77: ;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(0x8FC630);
    ecx = MEM32(eax);
    eax = 0x88888889u;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(ecx + 8);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    SET_LO8(eax, MEM8(esi));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(5) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x1C) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0031EDCB; /* jne: not equal / not zero */

loc_0031ED95: ;
    PUSH32(esp, 0x0031ED9Au); RECOMP_ABI_CALL(0x0059E42Fu, sub_0059E42F); /* call 0x0059E42F */

loc_0031ED9A: ;
    ecx = eax;
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
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
    if ((_fa != 0)) goto loc_0031EDB6; /* jne: not equal / not zero */

loc_0031EDB1: ;
    eax = 1;

loc_0031EDB6: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x2EB37);
    PUSH32(esp, 0x0031EDC5u); RECOMP_ABI_CALL(0x0059E28Au, sub_0059E28A); /* call 0x0059E28A */

loc_0031EDC5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = 1;

loc_0031EDCB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EDF0
 * Original: 0x0031EDF0 - 0x0031EE01 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EDF0: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EE00; /* je: equal / zero */

loc_0031EDF5: ;
    PUSH32(esp, 0x2EB37);
    PUSH32(esp, 0x0031EDFFu); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_0031EDFF: ;
    POP32(esp, ecx);

loc_0031EE00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031EE10
 * Original: 0x0031EE10 - 0x0031EE31 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EE10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EE10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031EE18u); RECOMP_ABI_CALL(0x0002BA0Eu, sub_0002BA0E); /* call 0x0002BA0E */

loc_0031EE18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031EE2B; /* je: equal / zero */

loc_0031EE1F: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EE2Bu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031EE2B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031EE40
 * Original: 0x0031EE40 - 0x0031EE9B (91 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EE40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031EE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EE99; /* je: equal / zero */

loc_0031EE4A: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031EE51u); RECOMP_ABI_CALL(0x00454140u, sub_00454140); /* call 0x00454140 */

loc_0031EE51: ;
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EE98; /* je: equal / zero */

loc_0031EE5A: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x24C);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031EE73u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031EE70u); } /* indirect call */
    }

loc_0031EE73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EE87; /* je: equal / zero */

loc_0031EE77: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + -4);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0031EE87u); RECOMP_ABI_CALL(0x000154D9u, sub_000154D9); /* call 0x000154D9 */

loc_0031EE87: ;
    POP32(esp, edi);
    MEM32(esi + 0x14) = 0;
    ecx = esi + -8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00032AE3(); return; /* tail jmp 0x00032AE3 */

loc_0031EE98: ;
    POP32(esp, edi);

loc_0031EE99: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EEC0
 * Original: 0x0031EEC0 - 0x0031EEE1 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EEC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EEC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031EEC8u); RECOMP_ABI_CALL(0x0002A3B1u, sub_0002A3B1); /* call 0x0002A3B1 */

loc_0031EEC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031EEDB; /* je: equal / zero */

loc_0031EECF: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031EEDBu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031EEDB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031EEF0
 * Original: 0x0031EEF0 - 0x0031EF5F (111 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EEF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031EF5C; /* jle: less or equal (signed <=) */

loc_0031EEFD: ;
    /* nop */

loc_0031EF00: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(MEM32(eax + edi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edi * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EF54; /* je: equal / zero */

loc_0031EF09: ;
    PUSH32(esp, 0x0031EF0Eu); RECOMP_ABI_CALL(0x0001C531u, sub_0001C531); /* call 0x0001C531 */

loc_0031EF0E: ;
    MEM32(eax + 0x40C) = 0;
    ecx = MEM32(0x8FC63C);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x24C);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031EF32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031EF2Fu); } /* indirect call */
    }

loc_0031EF32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EF4A; /* je: equal / zero */

loc_0031EF36: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(ecx + edi * 4);
    ecx = MEM32(esi + -4);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x0031EF4Au); RECOMP_ABI_CALL(0x000154D9u, sub_000154D9); /* call 0x000154D9 */

loc_0031EF4A: ;
    edx = MEM32(esi + 0x14);
    MEM32(edx + edi * 4) = 0;

loc_0031EF54: ;
    eax = MEM32(esi + 0x24);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031EF00; /* jl: less (signed <) */

loc_0031EF5C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031EF80
 * Original: 0x0031EF80 - 0x0031EFE0 (96 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031EF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031EF80: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x24C);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031EF9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031EF99u); } /* indirect call */
    }

loc_0031EF9C: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031EFDB; /* je: equal / zero */

loc_0031EFA2: ;
    MEM32(esi + 4) = edi;
    MEM32(esi + 0xC) = edi;
    MEM32(esi + 0x10) = edi;
    MEM32(esi + 8) = 0x7F0C50;
    MEM32(esi + 0x14) = edi;
    ecx = esi;
    MEM32(esi) = 0x8271DC;
    MEM32(esi + 8) = 0x8271D0;
    PUSH32(esp, 0x0031EFC9u); RECOMP_ABI_CALL(0x0001FA24u, sub_0001FA24); /* call 0x0001FA24 */

loc_0031EFC9: ;
    MEM32(esi + 0x248) = edi;
    POP32(esp, edi);
    eax = esi;
    MEM8(0x8C42C0) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031EFDB: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031F000
 * Original: 0x0031F000 - 0x0031F032 (50 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F000: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0031F02C; /* jle: less or equal (signed <=) */

loc_0031F012: ;
    eax = MEM32(edi + 8);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F024; /* je: equal / zero */

loc_0031F01C: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0031F024u); RECOMP_ABI_CALL(0x00030BC1u, sub_00030BC1); /* call 0x00030BC1 */

loc_0031F024: ;
    eax = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031F012; /* jl: less (signed <) */

loc_0031F02C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031F040
 * Original: 0x0031F040 - 0x0031F113 (211 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F040: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031F052u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031F052: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(eax + 0x44);
    eax = MEM32(esi + 4);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_0031F0B8; /* jle: less or equal (signed <=) */

loc_0031F066: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + ebp * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F0B0; /* je: equal / zero */

loc_0031F070: ;
    edx = MEM32(esi);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x2C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F0B0; /* je: equal / zero */

loc_0031F07A: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(eax + ebx * 4);
    edi = MEM32(eax + ebp * 4);
    eax = MEM32(edi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0031F0AC; /* jle: less or equal (signed <=) */

loc_0031F090: ;
    edx = MEM32(edi + 8);
    eax = MEM32(edx + ebx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F0A4; /* je: equal / zero */

loc_0031F09A: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031F0A4u); RECOMP_ABI_CALL(0x00030BC1u, sub_00030BC1); /* call 0x00030BC1 */

loc_0031F0A4: ;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031F090; /* jl: less (signed <) */

loc_0031F0AC: ;
    ebx = MEM32(esp + 0x18);

loc_0031F0B0: ;
    eax = MEM32(esi + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031F066; /* jl: less (signed <) */

loc_0031F0B8: ;
    eax = MEM32(esi + 0x10);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031F0E6; /* jle: less or equal (signed <=) */

loc_0031F0C1: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(eax + edi * 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = eax + edi * 8;
    if (CMP_EQ(_fa, _fb)) goto loc_0031F0DE; /* je: equal / zero */

loc_0031F0CE: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(eax + 4);
    ecx = MEM32(ecx + ebx * 4);
    ebp = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(ebp + 8); PUSH32(esp, 0x0031F0DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F0DBu); } /* indirect call */
    }

loc_0031F0DE: ;
    eax = MEM32(esi + 0x10);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031F0C1; /* jl: less (signed <) */

loc_0031F0E6: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F0F6; /* je: equal / zero */

loc_0031F0F0: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0031F0F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F0F4u); } /* indirect call */
    }

loc_0031F0F6: ;
    eax = MEM32(esi + 8);
    MEM32(eax + ebx * 4) = 0;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F10Bu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031F10B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031F150
 * Original: 0x0031F150 - 0x0031F171 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F150: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031F158u); RECOMP_ABI_CALL(0x0001CD79u, sub_0001CD79); /* call 0x0001CD79 */

loc_0031F158: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F16B; /* je: equal / zero */

loc_0031F15F: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F16Bu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031F16B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031F180
 * Original: 0x0031F180 - 0x0031F1BD (61 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F180: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031F18Fu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031F18F: ;
    edi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031F19Cu); RECOMP_ABI_CALL(0x00017FE0u, sub_00017FE0); /* call 0x00017FE0 */

loc_0031F19C: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x10) = edx;
    PUSH32(esp, 0x0031F1ADu); RECOMP_ABI_CALL(0x000303F6u, sub_000303F6); /* call 0x000303F6 */

loc_0031F1AD: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F1B8u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031F1B8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031F1D0
 * Original: 0x0031F1D0 - 0x0031F2AC (220 bytes, 70 insns)
 * Category: game_vtable
 * CC: thiscall, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F1D0: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x68);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x64);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esp + 0x7C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0031F1F3u); RECOMP_ABI_CALL(0x0002E9E3u, sub_0002E9E3); /* call 0x0002E9E3 */

loc_0031F1F3: ;
    MEM32(esi + 0x44) = 0x826E84;
    edi = esi + 0x44;
    MEM32(esi) = 0x82736C;
    MEM32(esi + 4) = 0x827358;
    MEM32(esi + 8) = 0x827354;
    MEM32(edi) = 0x827350;
    MEM32(esi + 0x48) = 1;
    ecx = MEM32(0x8FC62C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031F229u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F226u); } /* indirect call */
    }

loc_0031F229: ;
    ebp = eax;
    eax = MEM32(esp + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 4) = edi;
    MEM32(esp + 0x54) = 0;
    MEM8(esp + 0x14) = 0;
    MEM32(esp + 0x10) = 0x8270A0;
    if (CMP_NE(_fa, _fb)) goto loc_0031F251; /* jne: not equal / not zero */

loc_0031F24B: ;
    MEM8(esp + 0x14) = LO8(eax);
    goto loc_0031F261;

loc_0031F251: ;
    edx = esp + 0x14;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0031F257: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F257; /* jne: not equal / not zero */

loc_0031F261: ;
    ecx = MEM32(0x8FC62C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0031F26Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F269u); } /* indirect call */
    }

loc_0031F26C: ;
    edi = MEM32(esi + 0x20);
    ecx = esp + 0x10;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x64;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    MEM32(esp + 0x60) = ebx;
    ebx = MEM32(edi + 0x50);
    ecx = edi + 0xC;
    MEM32(esp + 0x5C) = eax;
    PUSH32(esp, 0x0031F28Au); RECOMP_ABI_CALL(0x000366B1u, sub_000366B1); /* call 0x000366B1 */

loc_0031F28A: ;
    PUSH32(esp, 0);
    MEM32(edi + 0x50) = ebx;
    edx = MEM32(esi + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0xFFFFFFFBu);
    ecx = esi;
    MEM32(edx + 0x5C) = ebp;
    PUSH32(esp, 0x0031F2A0u); RECOMP_ABI_CALL(0x00015D76u, sub_00015D76); /* call 0x00015D76 */

loc_0031F2A0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_0031F2F0
 * Original: 0x0031F2F0 - 0x0031F2F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F2F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F2F0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_0002CBCF(); return; /* tail jmp 0x0002CBCF */

}

/**
 * sub_0031F300
 * Original: 0x0031F300 - 0x0031F308 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F300: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x44;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00015D76(); return; /* tail jmp 0x00015D76 */

}

/**
 * sub_0031F310
 * Original: 0x0031F310 - 0x0031F3C5 (181 bytes, 49 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F310: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x82736C;
    MEM32(esi + 4) = 0x827358;
    MEM32(esi + 8) = 0x827354;
    MEM32(esi + 0x44) = 0x827350;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031F33Au); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031F33A: ;
    edi = MEM32(esi + 0x2C);
    eax = MEM32(edi + 0x44);
    ecx = MEM32(esi + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    _fa = (uint32_t)(MEM32(eax + ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx + 8), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F37D; /* jne: not equal / not zero */

loc_0031F34D: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F358u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031F358: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031F361u); RECOMP_ABI_CALL(0x00017FE0u, sub_00017FE0); /* call 0x00017FE0 */

loc_0031F361: ;
    edx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x10) = edx;
    PUSH32(esp, 0x0031F372u); RECOMP_ABI_CALL(0x000303F6u, sub_000303F6); /* call 0x000303F6 */

loc_0031F372: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F37Du); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031F37D: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F3B1; /* jne: not equal / not zero */

loc_0031F383: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F38Eu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031F38E: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x0031F396u); RECOMP_ABI_CALL(0x000270E4u, sub_000270E4); /* call 0x000270E4 */

loc_0031F396: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(esi + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x0031F3A6u); RECOMP_ABI_CALL(0x000303F6u, sub_000303F6); /* call 0x000303F6 */

loc_0031F3A6: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F3B1u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031F3B1: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F3BCu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031F3BC: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001CD79(); return; /* tail jmp 0x0001CD79 */

}

/**
 * sub_0031F400
 * Original: 0x0031F400 - 0x0031F4FA (250 bytes, 81 insns)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F400: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x68);
    edx = MEM32(esp + 0x60);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x68);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x70);
    esi = ecx;
    ecx = MEM32(esp + 0x78);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0031F429u); RECOMP_ABI_CALL(0x0002E9E3u, sub_0002E9E3); /* call 0x0002E9E3 */

loc_0031F429: ;
    eax = MEM32(esp + 0x64);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi) = 0x8273A8;
    MEM32(esi + 4) = 0x827394;
    MEM32(esi + 8) = 0x827390;
    MEM32(esi + 0x48) = 1;
    MEM32(esi + 0x44) = ebx;
    MEM32(esp + 0x54) = ebx;
    MEM8(esp + 0x14) = LO8(ebx);
    MEM32(esp + 0x10) = 0x8270A0;
    if (CMP_NE(_fa, _fb)) goto loc_0031F467; /* jne: not equal / not zero */

loc_0031F461: ;
    MEM8(esp + 0x14) = LO8(ebx);
    goto loc_0031F47A;

loc_0031F467: ;
    edx = esp + 0x14;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0031F470: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F470; /* jne: not equal / not zero */

loc_0031F47A: ;
    ecx = MEM32(0x8FC62C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0031F485u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F482u); } /* indirect call */
    }

loc_0031F485: ;
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = edi;
    edi = MEM32(esi + 0x20);
    ebp = MEM32(edi + 0x50);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = edi + 0xC;
    PUSH32(esp, 0x0031F4A0u); RECOMP_ABI_CALL(0x000366B1u, sub_000366B1); /* call 0x000366B1 */

loc_0031F4A0: ;
    MEM32(edi + 0x50) = ebp;
    ecx = MEM32(esi + 0x20);
    MEM32(ecx + 8) = 5;
    edx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x28) = edx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F4C1u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031F4C1: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x0031F4C9u); RECOMP_ABI_CALL(0x0002AEBAu, sub_0002AEBA); /* call 0x0002AEBA */

loc_0031F4C9: ;
    MEM32(esi + 0x10) = MEM32(esi + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0031F4D8u); RECOMP_ABI_CALL(0x000303F6u, sub_000303F6); /* call 0x000303F6 */

loc_0031F4D8: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F4E3u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031F4E3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFBu);
    ecx = esi;
    PUSH32(esp, 0x0031F4EEu); RECOMP_ABI_CALL(0x000154EDu, sub_000154ED); /* call 0x000154ED */

loc_0031F4EE: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_0031F540
 * Original: 0x0031F540 - 0x0031F565 (37 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F540: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F54Eu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031F54E: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0031F559u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F557u); } /* indirect call */
    }

loc_0031F559: ;
    ecx = MEM32(0x8FC628);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_0031F570
 * Original: 0x0031F570 - 0x0031F592 (34 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F570: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F57Eu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031F57E: ;
    ecx = MEM32(esi + 0x24);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0031F586u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F583u); } /* indirect call */
    }

loc_0031F586: ;
    ecx = MEM32(0x8FC628);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_0031F5A0
 * Original: 0x0031F5A0 - 0x0031F5A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F5A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00032B51(); return; /* tail jmp 0x00032B51 */

}

/**
 * sub_0031F5B0
 * Original: 0x0031F5B0 - 0x0031F64A (154 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F5B0: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031F5C3u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031F5C3: ;
    edi = MEM32(esp + 0x34);
    ecx = MEM32(0x8FC628);
    ebx = MEM32(edi + 0x44);
    PUSH32(esp, 0x0031F5D5u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031F5D5: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031F5DEu); RECOMP_ABI_CALL(0x00017FE0u, sub_00017FE0); /* call 0x00017FE0 */

loc_0031F5DE: ;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 1);
    ecx = esi;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x0031F5EFu); RECOMP_ABI_CALL(0x000303F6u, sub_000303F6); /* call 0x000303F6 */

loc_0031F5EF: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F5FAu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031F5FA: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031F636; /* jle: less or equal (signed <=) */

loc_0031F600: ;
    PUSH32(esp, 4);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    MEM32(esp + 0x40) = ebx;
    PUSH32(esp, 0x0031F615u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0031F615: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(esi + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    PUSH32(esp, 4);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 4);
    PUSH32(esp, 0x8C42F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031F636u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_0031F636: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F641u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031F641: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031F670
 * Original: 0x0031F670 - 0x0031F6AC (60 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F670: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 4);
    PUSH32(esp, eax);
    MEM32(esi) = 0x827208;
    PUSH32(esp, 0x0031F685u); RECOMP_ABI_CALL(0x00020CA8u, sub_00020CA8); /* call 0x00020CA8 */

loc_0031F685: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F693; /* je: equal / zero */

loc_0031F68C: ;
    PUSH32(esp, 3);
    PUSH32(esp, 0x0031F693u); RECOMP_ABI_CALL(0x00031F49u, sub_00031F49); /* call 0x00031F49 */

loc_0031F693: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F6A6; /* je: equal / zero */

loc_0031F69A: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F6A6u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031F6A6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031F6C0
 * Original: 0x0031F6C0 - 0x0031F6EE (46 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F6C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM32(esi) = 0x827194;
    PUSH32(esp, 0x0031F6D5u); RECOMP_ABI_CALL(0x00020CA8u, sub_00020CA8); /* call 0x00020CA8 */

loc_0031F6D5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F6E8; /* je: equal / zero */

loc_0031F6DC: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F6E8u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031F6E8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031F700
 * Original: 0x0031F700 - 0x0031F74E (78 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F700: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    edi = esi + 0x14;
    PUSH32(esp, edi);
    MEM32(esi) = 0x827220;
    MEM32(edi) = 0x827214;
    PUSH32(esp, 0x0031F71Cu); RECOMP_ABI_CALL(0x0001F227u, sub_0001F227); /* call 0x0001F227 */

loc_0031F71C: ;
    MEM32(edi) = 0x7F0C44;
    eax = MEM32(esi + 0x10);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    MEM32(esi) = 0x827194;
    PUSH32(esp, 0x0031F734u); RECOMP_ABI_CALL(0x00020CA8u, sub_00020CA8); /* call 0x00020CA8 */

loc_0031F734: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F747; /* je: equal / zero */

loc_0031F73B: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F747u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031F747: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031F770
 * Original: 0x0031F770 - 0x0031F7A2 (50 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F770: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031F786u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F783u); } /* indirect call */
    }

loc_0031F786: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F797; /* je: equal / zero */

loc_0031F78A: ;
    ecx = eax;
    PUSH32(esp, 0x0031F791u); RECOMP_ABI_CALL(0x00021CCFu, sub_00021CCF); /* call 0x00021CCF */

loc_0031F791: ;
    MEM32(0x8FC644) = eax;
    esp += 4; return; /* ret */

loc_0031F797: ;
    MEM32(0x8FC644) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0031F7B0
 * Original: 0x0031F7B0 - 0x0031F80A (90 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F7B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F7B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F7C5; /* je: equal / zero */

loc_0031F7B8: ;
    PUSH32(esp, 0x2EB37);
    PUSH32(esp, 0x0031F7C2u); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_0031F7C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031F7C5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F804; /* je: equal / zero */

loc_0031F7CC: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F7D9u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031F7D9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0031F7FB; /* jl: less (signed <) */

loc_0031F7E4: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031F7F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F7F1u); } /* indirect call */
    }

loc_0031F7F4: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0031F7FB: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031F803u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F800u); } /* indirect call */
    }

loc_0031F803: ;
    POP32(esp, edi);

loc_0031F804: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031F820
 * Original: 0x0031F820 - 0x0031F841 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F820: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031F828u); RECOMP_ABI_CALL(0x0001D0DFu, sub_0001D0DF); /* call 0x0001D0DF */

loc_0031F828: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031F83B; /* je: equal / zero */

loc_0031F82F: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F83Bu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031F83B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031F850
 * Original: 0x0031F850 - 0x0031F90F (191 bytes, 65 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031F850: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8273A8;
    MEM32(esi + 4) = 0x827394;
    MEM32(esi + 8) = 0x827390;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031F873u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031F873: ;
    eax = MEM32(esi + 0x1C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0031F8AD; /* jle: less or equal (signed <=) */

loc_0031F87C: ;
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0031F880: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + ebx + 8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F8A1; /* jne: not equal / not zero */

loc_0031F88E: ;
    ecx = MEM32(esi + 0x28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x44) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F8A1; /* je: equal / zero */

loc_0031F896: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0031F8A1u); RECOMP_ABI_CALL(0x00035C7Au, sub_00035C7A); /* call 0x00035C7A */

loc_0031F8A1: ;
    eax = MEM32(esi + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x64;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0031F880; /* jl: less (signed <) */

loc_0031F8AC: ;
    POP32(esp, ebx);

loc_0031F8AD: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F8B8u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_0031F8B8: ;
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x0031F8C0u); RECOMP_ABI_CALL(0x000270E4u, sub_000270E4); /* call 0x000270E4 */

loc_0031F8C0: ;
    edx = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x34);
    edi = MEM32(esi + 0x28);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x10) = edx;
    MEM32(esi + 0x3C) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0031F8F0; /* je: equal / zero */

loc_0031F8D4: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    MEM32(esi + 0x40) = edx;
    eax = MEM32(ecx);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0031F8E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F8E2u); } /* indirect call */
    }

loc_0031F8E4: ;
    ecx = MEM32(esi + 0x40);
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x3C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0031F8D4; /* jne: not equal / not zero */

loc_0031F8F0: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F8FBu); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031F8FB: ;
    ecx = MEM32(0x8FC628);
    PUSH32(esp, 0x0031F906u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_0031F906: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001CD79(); return; /* tail jmp 0x0001CD79 */

}

/**
 * sub_0031F940
 * Original: 0x0031F940 - 0x0031FA49 (265 bytes, 82 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031F940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031F940: ;
    eax = MEM32(0x8FC62C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031FA47; /* jne: not equal / not zero */

loc_0031F950: ;
    _fa = (uint32_t)(MEM32(0x8FC630)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8FC630), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031F985; /* jne: not equal / not zero */

loc_0031F958: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031F96Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F96Au); } /* indirect call */
    }

loc_0031F96D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F97F; /* je: equal / zero */

loc_0031F971: ;
    ecx = eax;
    PUSH32(esp, 0x0031F978u); RECOMP_ABI_CALL(0x000194B7u, sub_000194B7); /* call 0x000194B7 */

loc_0031F978: ;
    MEM32(0x8FC630) = eax;
    goto loc_0031F985;

loc_0031F97F: ;
    MEM32(0x8FC630) = edi;

loc_0031F985: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031F99Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F998u); } /* indirect call */
    }

loc_0031F99B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F9BC; /* je: equal / zero */

loc_0031F9A1: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031F9AAu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_0031F9AA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0031F9B4u); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_0031F9B4: ;
    MEM32(0x8FC628) = esi;
    goto loc_0031F9C2;

loc_0031F9BC: ;
    MEM32(0x8FC628) = edi;

loc_0031F9C2: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031F9D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031F9D4u); } /* indirect call */
    }

loc_0031F9D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031F9E9; /* je: equal / zero */

loc_0031F9DB: ;
    ecx = eax;
    PUSH32(esp, 0x0031F9E2u); RECOMP_ABI_CALL(0x00021CCFu, sub_00021CCF); /* call 0x00021CCF */

loc_0031F9E2: ;
    MEM32(0x8FC644) = eax;
    goto loc_0031F9EF;

loc_0031F9E9: ;
    MEM32(0x8FC644) = edi;

loc_0031F9EF: ;
    eax = MEM32(0x8FC63C);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, 0xB0);
    PUSH32(esp, 0x826DF4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0031FA07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031FA04u); } /* indirect call */
    }

loc_0031FA07: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031FA40; /* je: equal / zero */

loc_0031FA0D: ;
    ecx = esi;
    PUSH32(esp, 0x0031FA14u); RECOMP_ABI_CALL(0x00025951u, sub_00025951); /* call 0x00025951 */

loc_0031FA14: ;
    ecx = esi;
    MEM32(esi) = 0x8271B8;
    MEM32(esi + 0x84) = 0x8271AC;
    MEM32(esi + 0xA8) = edi;
    MEM32(esi + 0xAC) = edi;
    PUSH32(esp, 0x0031FA37u); RECOMP_ABI_CALL(0x000319A4u, sub_000319A4); /* call 0x000319A4 */

loc_0031FA37: ;
    MEM32(0x8FC62C) = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0031FA40: ;
    MEM32(0x8FC62C) = edi;
    POP32(esp, esi);

loc_0031FA47: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FA90
 * Original: 0x0031FA90 - 0x0031FAF7 (103 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FA90: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8FC644);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031FAEB; /* je: equal / zero */

loc_0031FA9B: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031FAAD; /* je: equal / zero */

loc_0031FAA0: ;
    PUSH32(esp, 0x2EB37);
    PUSH32(esp, 0x0031FAAAu); RECOMP_ABI_CALL(0x0059E31Fu, sub_0059E31F); /* call 0x0059E31F */

loc_0031FAAA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0031FAAD: ;
    PUSH32(esp, edi);
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031FABAu); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031FABA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0031FAE2; /* jl: less (signed <) */

loc_0031FAC5: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031FAD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031FAD2u); } /* indirect call */
    }

loc_0031FAD5: ;
    POP32(esp, edi);
    MEM32(0x8FC644) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0031FAE2: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031FAEAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031FAE7u); } /* indirect call */
    }

loc_0031FAEA: ;
    POP32(esp, edi);

loc_0031FAEB: ;
    MEM32(0x8FC644) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FB10
 * Original: 0x0031FB10 - 0x0031FB31 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FB10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0031FB18u); RECOMP_ABI_CALL(0x000124B4u, sub_000124B4); /* call 0x000124B4 */

loc_0031FB18: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0031FB2B; /* je: equal / zero */

loc_0031FB1F: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031FB2Bu); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_0031FB2B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031FB40
 * Original: 0x0031FB40 - 0x0031FBD0 (144 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FB40: ;
    ecx = MEM32(0x8FC62C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0031FBCF; /* je: equal / zero */

loc_0031FB4E: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0031FB55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031FB53u); } /* indirect call */
    }

loc_0031FB55: ;
    MEM32(0x8FC62C) = 0;
    PUSH32(esp, 0x0031FB64u); RECOMP_ABI_CALL(0x00020FD7u, sub_00020FD7); /* call 0x00020FD7 */

loc_0031FB64: ;
    ecx = MEM32(0x8FC628);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0031FBA9; /* je: equal / zero */

loc_0031FB70: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0031FB76u); RECOMP_ABI_CALL(0x0059E46Eu, sub_0059E46E); /* call 0x0059E46E */

loc_0031FB76: ;
    edi = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031FB82u); RECOMP_ABI_CALL(0x0059D501u, sub_0059D501); /* call 0x0059D501 */

loc_0031FB82: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1E000 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_L(_fas, _fbs)) goto loc_0031FBA0; /* jl: less (signed <) */

loc_0031FB8D: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0031FB9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031FB9Bu); } /* indirect call */
    }

loc_0031FB9E: ;
    goto loc_0031FBA8;

loc_0031FBA0: ;
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0031FBA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0031FBA5u); } /* indirect call */
    }

loc_0031FBA8: ;
    POP32(esp, edi);

loc_0031FBA9: ;
    ecx = MEM32(0x8FC630);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x8FC628) = 0;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0031FBCF; /* je: equal / zero */

loc_0031FBBE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0031FBC5u); RECOMP_ABI_CALL(0x00016AF5u, sub_00016AF5); /* call 0x00016AF5 */

loc_0031FBC5: ;
    MEM32(0x8FC630) = 0;

loc_0031FBCF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FC00
 * Original: 0x0031FC00 - 0x0031FC0E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031FC00: ;
    MEM32(ecx) = 0x827BA0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00036805(); return; /* tail jmp 0x00036805 */

}

/**
 * sub_0031FC20
 * Original: 0x0031FC20 - 0x0031FC24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FC20(void)
{

loc_0031FC20: ;
    SET_LO8(eax, MEM8(ecx + 0xB));
    esp += 4; return; /* ret */

}

/**
 * sub_0031FC30
 * Original: 0x0031FC30 - 0x0031FC34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FC30(void)
{

loc_0031FC30: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FC40
 * Original: 0x0031FC40 - 0x0031FC43 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FC40(void)
{

loc_0031FC40: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FC50
 * Original: 0x0031FC50 - 0x0031FC97 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FC50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FC50: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, 1);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM8(esi + 0xA) = LO8(ecx);
    MEM8(esi + 0xD) = LO8(ecx);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(eax);
    MEM8(esi + 9) = LO8(eax);
    MEM8(esi + 0xB) = LO8(eax);
    MEM8(esi + 0xC) = LO8(eax);
    PUSH32(esp, 0x0031FC84u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_0031FC84: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    POP32(esp, edi);
    MEM32(esi + 0x1C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031FCB0
 * Original: 0x0031FCB0 - 0x0031FCB3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FCB0(void)
{

loc_0031FCB0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031FCC0
 * Original: 0x0031FCC0 - 0x0031FCD6 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FCC0(void)
{

loc_0031FCC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x907DE8);
    ecx = esi + 0x10;
    PUSH32(esp, 0x0031FCD0u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_0031FCD0: ;
    MEM8(esi + 0xC) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FCE0
 * Original: 0x0031FCE0 - 0x0031FCE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FCE0(void)
{

loc_0031FCE0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FCF0
 * Original: 0x0031FCF0 - 0x0031FCF8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FCF0(void)
{

loc_0031FCF0: ;
    MEM8(ecx + 0xF8) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FD00
 * Original: 0x0031FD00 - 0x0031FD0F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FD00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FD00: ;
    SET_LO8(edx, MEM8(ecx + 0xF8));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_0031FD20
 * Original: 0x0031FD20 - 0x0031FD2B (11 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FD20(void)
{

loc_0031FD20: ;
    eax = MEM32(esp + 4);
    eax = MEM32(ecx + eax * 4 + 0xC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031FD30
 * Original: 0x0031FD30 - 0x0031FD3E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FD30(void)
{

loc_0031FD30: ;
    MEM32(ecx) = 0;
    MEM32(ecx + 4) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FD50
 * Original: 0x0031FD50 - 0x0031FD5E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FD50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FD50: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM8(ecx + 8) = LO8(eax);
    MEM8(ecx + 9) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FD70
 * Original: 0x0031FD70 - 0x0031FD8A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FD70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FD70: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM8(ecx + 8) = LO8(eax);
    MEM8(ecx + 9) = LO8(eax);
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM8(ecx + 0x14) = LO8(eax);
    MEM8(ecx + 0x15) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FD90
 * Original: 0x0031FD90 - 0x0031FD9B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FD90(void)
{

loc_0031FD90: ;
    MEM32(ecx) = 0xFFFFFFFFu;
    MEM8(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FDA0
 * Original: 0x0031FDA0 - 0x0031FDAA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FDA0(void)
{

loc_0031FDA0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031FDB0
 * Original: 0x0031FDB0 - 0x0031FDB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FDB0(void)
{

loc_0031FDB0: ;
    SET_LO8(eax, MEM8(ecx + 0x21));
    esp += 4; return; /* ret */

}

/**
 * sub_0031FDC0
 * Original: 0x0031FDC0 - 0x0031FDCA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FDC0(void)
{

loc_0031FDC0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x20) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031FDD0
 * Original: 0x0031FDD0 - 0x0031FDDD (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FDD0(void)
{

loc_0031FDD0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x354) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031FDE0
 * Original: 0x0031FDE0 - 0x0031FE09 (41 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FDE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FDE0: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM8(ecx) = LO8(eax);
    MEMF(ecx + 0x24) = xmm0.f[0]; /* movss */
    MEMF(ecx + 0x28) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x2C) = edx;
    MEM32(ecx + 0x30) = edx;
    MEM8(ecx + 0x20) = LO8(eax);
    MEM8(ecx + 0x21) = LO8(eax);
    MEM32(ecx + 0x34) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FE20
 * Original: 0x0031FE20 - 0x0031FE2E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FE20(void)
{

loc_0031FE20: ;
    MEM32(ecx + 4) = 0xFFFFFFFFu;
    MEM32(ecx) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FE40
 * Original: 0x0031FE40 - 0x0031FE4E (14 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FE40(void)
{

loc_0031FE40: ;
    MEM32(ecx) = 0xFFFFFFFFu;
    MEM32(ecx + 4) = 0xFFFFFFFFu;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FE60
 * Original: 0x0031FE60 - 0x0031FE6A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FE60(void)
{

loc_0031FE60: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0031FE70
 * Original: 0x0031FE70 - 0x0031FE81 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FE70: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    SET_LO8(eax, LO8(edx));
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0031FE90
 * Original: 0x0031FE90 - 0x0031FEBF (47 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FE90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FE90: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx) = LO16(eax);
    MEM16(ecx + 2) = LO16(eax);
    MEM16(ecx + 4) = LO16(eax);
    MEM16(ecx + 6) = LO16(eax);
    MEM16(ecx + 8) = LO16(eax);
    MEM16(ecx + 0x10) = LO16(eax);
    MEM16(ecx + 0x12) = LO16(eax);
    MEM16(ecx + 0xA) = LO16(eax);
    MEM16(ecx + 0xC) = LO16(eax);
    MEM16(ecx + 0xE) = LO16(eax);
    MEM8(ecx + 0x14) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FED0
 * Original: 0x0031FED0 - 0x0031FEEC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FED0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FED0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(ecx) = 0xD;
    MEM8(ecx + 4) = LO8(eax);
    MEM8(ecx + 0x10) = LO8(eax);
    PUSH32(esp, 0x907DE8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0031FEEBu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_0031FEEB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FF00
 * Original: 0x0031FF00 - 0x0031FF22 (34 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FF00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FF00: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(esp + 8));
    MEM32(ecx + 0x38) = eax;
    MEM8(ecx + 0x48) = 0;
    MEM8(ecx + 0x3C) = LO8(edx);
    PUSH32(esp, 0x907DE8);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0031FF1Fu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_0031FF1F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031FF04
 * Original: 0x0031FF04 - 0x0031FF22 (30 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FF04(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FF04: ;
    SET_LO8(edx, MEM8(esp + 8));
    MEM32(ecx + 0x38) = eax;
    MEM8(ecx + 0x48) = 0;
    MEM8(ecx + 0x3C) = LO8(edx);
    PUSH32(esp, 0x907DE8);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0031FF1Fu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_0031FF1F: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0031FF30
 * Original: 0x0031FF30 - 0x0031FF38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031FF30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00036805(); return; /* tail jmp 0x00036805 */

}

/**
 * sub_0031FF40
 * Original: 0x0031FF40 - 0x0031FF68 (40 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FF40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FF40: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM16(ecx) = LO16(eax);
    MEM16(ecx + 2) = LO16(eax);
    MEM16(ecx + 4) = LO16(eax);
    PUSH32(esp, 0x907DE8);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0031FF67u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_0031FF67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0031FF80
 * Original: 0x0031FF80 - 0x0031FF88 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FF80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0031FF80: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00036805(); return; /* tail jmp 0x00036805 */

}

/**
 * sub_0031FF90
 * Original: 0x0031FF90 - 0x0031FFEA (90 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0031FF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0031FF90: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x108);
    PUSH32(esp, esi);
    eax = esp + 8;
    PUSH32(esp, 0x7E63F0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0031FFAEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0031FFAE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 4;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0031FFBDu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_0031FFBD: ;
    ecx = eax;
    PUSH32(esp, 0x0031FFC4u); RECOMP_ABI_CALL(0x0001C720u, sub_0001C720); /* call 0x0001C720 */

loc_0031FFC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0031FFCA; /* jne: not equal / not zero */

loc_0031FFC8: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0031FFCA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x110);
    PUSH32(esp, 0x827BB4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0031FFDDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0031FFDD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00320000
 * Original: 0x00320000 - 0x0032001A (26 bytes, 11 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320000: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320014; /* je: equal / zero */

loc_00320009: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320014; /* je: equal / zero */

loc_0032000D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320014; /* je: equal / zero */

loc_00320011: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00320014: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00320020
 * Original: 0x00320020 - 0x00320058 (56 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320020: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320057; /* je: equal / zero */

loc_00320024: ;
    PUSH32(esp, 0x00320029u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00320029: ;
    ecx = eax;
    PUSH32(esp, 0x00320030u); RECOMP_ABI_CALL(0x0001FC9Au, sub_0001FC9A); /* call 0x0001FC9A */

loc_00320030: ;
    edx = MEM32(esp + 4);
    eax = SX16(LO16(eax));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM16(0x896162)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896162), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320044; /* je: equal / zero */

loc_00320043: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00320044: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00320054u); RECOMP_ABI_CALL(0x00035D10u, sub_00035D10); /* call 0x00035D10 */

loc_00320054: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00320057: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320070
 * Original: 0x00320070 - 0x00320076 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320070(void)
{

loc_00320070: ;
    eax = MEM32(0x8FC758);
    esp += 4; return; /* ret */

}

/**
 * sub_00320080
 * Original: 0x00320080 - 0x003200AC (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320080: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx + 0xC;
    edi = 0xF;
    /* nop */

loc_00320090: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003200A3; /* je: equal / zero */

loc_00320096: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0032009Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032009Au); } /* indirect call */
    }

loc_0032009D: ;
    MEM32(esi) = 0;

loc_003200A3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00320090; /* jne: not equal / not zero */

loc_003200A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003200C0
 * Original: 0x003200C0 - 0x00320112 (82 bytes, 28 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003200C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003200C0: ;
    eax = MEM32(0x8FC1D0);
    ecx = MEM32(eax + 0x1E4);
    PUSH32(esp, 0x003200D0u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_003200D0: ;
    ecx = eax;
    PUSH32(esp, 0x003200D7u); RECOMP_ABI_CALL(0x000330B5u, sub_000330B5); /* call 0x000330B5 */

loc_003200D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032010F; /* je: equal / zero */

loc_003200DB: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003200E8; /* je: equal / zero */

loc_003200E3: ;
    edx = MEM32(eax + 0x38);
    MEM32(ecx) = edx;

loc_003200E8: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003200F5; /* je: equal / zero */

loc_003200F0: ;
    edx = MEM32(eax + 0x3C);
    MEM32(ecx) = edx;

loc_003200F5: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320102; /* je: equal / zero */

loc_003200FD: ;
    edx = MEM32(eax + 0x40);
    MEM32(ecx) = edx;

loc_00320102: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032010F; /* je: equal / zero */

loc_0032010A: ;
    eax = MEM32(eax + 0x44);
    MEM32(ecx) = eax;

loc_0032010F: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00320130
 * Original: 0x00320130 - 0x00320243 (275 bytes, 77 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320130(void)
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

loc_00320130: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    SET_LO8(eax, MEM8(ebp + 0xF9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    esi = MEM32(ebp + edi * 4 + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_00320162; /* jne: not equal / not zero */

loc_00320150: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320237; /* je: equal / zero */

loc_00320159: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320237; /* je: equal / zero */

loc_00320162: ;
    SET_LO8(eax, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320237; /* jne: not equal / not zero */

loc_0032016D: ;
    SET_LO8(eax, MEM8(esp + 0x120));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320187; /* jne: not equal / not zero */

loc_00320178: ;
    ecx = MEM32(ebp + 0xF4);
    eax = edi + edi * 4;
    _fa = (uint32_t)(MEM8(ecx + eax * 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + eax * 4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003201B5; /* jne: not equal / not zero */

loc_00320187: ;
    edx = edi + 5;
    PUSH32(esp, edx);
    eax = esp + 0x18;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032019Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032019A: ;
    eax = MEM32(ebp + 0xF4);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = edi + edi * 4;
    ecx = MEM32(eax + edx * 4 + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003201B2u); RECOMP_ABI_CALL(0x00505BB0u, sub_00505BB0); /* call 0x00505BB0 */

loc_003201B2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003201B5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x11C)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 0xB) = 0;
    MEM8(esi + 9) = 0;
    MEM8(esi + 0xA) = LO8(ebx);
    ecx = esp + 0x10;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00320200; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_003201DC: ;
    edx = MEM32(esp + 0x120);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003201E9u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_003201E9: ;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x003201F2u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003201F2: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x003201FBu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003201FB: ;
    MEM8(esi + 0xC) = LO8(ebx);
    goto loc_00320220;

loc_00320200: ;
    PUSH32(esp, 0x4479C000);
    PUSH32(esp, 0x0032020Au); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_0032020A: ;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x00320213u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00320213: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0032021Cu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0032021C: ;
    MEM8(esi + 0xC) = 0;

loc_00320220: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00320236; /* ja: above (unsigned >) */

loc_00320225: ;
    eax = ZX8(MEM8(edi + 0x32024C));
    { uint32_t _jt = MEM32(eax * 4 + 0x320244); /* switch: 2 entries, 2 targets */
    if (_jt == 0x00320233u) goto loc_00320233;
    if (_jt == 0x00320236u) goto loc_00320236;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00320233: ;
    MEM8(esi + 0xD) = LO8(ebx);

loc_00320236: ;
    POP32(esp, ebx);

loc_00320237: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003202B0
 * Original: 0x003202B0 - 0x00320311 (97 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003202B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003202B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi + edi * 4 + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003202F1; /* je: equal / zero */

loc_003202C0: ;
    SET_LO8(ecx, MEM8(eax + 0xA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003202F1; /* je: equal / zero */

loc_003202C7: ;
    ecx = MEM32(esi + 0xF4);
    eax = edi + edi * 4;
    edx = MEM32(ecx + eax * 4 + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003202DAu); RECOMP_ABI_CALL(0x0002BDE2u, sub_0002BDE2); /* call 0x0002BDE2 */

loc_003202DA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003202F1; /* je: equal / zero */

loc_003202E1: ;
    eax = MEM32(esi + edi * 4 + 0xC);
    MEM8(eax + 9) = 1;
    ecx = MEM32(esi + edi * 4 + 0xC);
    MEM8(ecx + 0xA) = 0;

loc_003202F1: ;
    esi = MEM32(esi + edi * 4 + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032030A; /* je: equal / zero */

loc_003202F9: ;
    SET_LO8(eax, MEM8(esi + 9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032030A; /* je: equal / zero */

loc_00320300: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0032030A: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00320330
 * Original: 0x00320330 - 0x00320363 (51 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320330(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320330: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320360; /* je: equal / zero */

loc_00320339: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320360; /* je: equal / zero */

loc_0032033D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00320344u); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_00320344: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320360; /* jne: not equal / not zero */

loc_0032034C: ;
    PUSH32(esp, 0x00320351u); RECOMP_ABI_CALL(0x0001C1D5u, sub_0001C1D5); /* call 0x0001C1D5 */

loc_00320351: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00320360; /* jne: not equal / not zero */

loc_00320355: ;
    PUSH32(esp, 0x0032035Au); RECOMP_ABI_CALL(0x0002CAB2u, sub_0002CAB2); /* call 0x0002CAB2 */

loc_0032035A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

loc_00320360: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00320370
 * Original: 0x00320370 - 0x0032039C (44 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320370: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320397; /* je: equal / zero */

loc_0032037F: ;
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00320391u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00320391: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = edi;

loc_00320397: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003203B0
 * Original: 0x003203B0 - 0x003203F0 (64 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003203B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003203B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003203C2u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_003203C2: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003203DAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003203DA: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003203E9u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_003203E9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00320400
 * Original: 0x00320400 - 0x00320448 (72 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320400: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032043E; /* je: equal / zero */

loc_00320412: ;
    eax = MEM32(esp + 0x108);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 0xC;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    MEM8(esi) = 0;
    PUSH32(esp, 0x00320430u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00320430: ;
    edx = esp + 0x14;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032043Bu); RECOMP_ABI_CALL(0x00508450u, sub_00508450); /* call 0x00508450 */

loc_0032043B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032043E: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00320460
 * Original: 0x00320460 - 0x003204ED (141 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320460: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x48);
    eax = MEM32(esi + ecx * 4 + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003204E9; /* je: equal / zero */

loc_0032046E: ;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x100), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320488; /* je: equal / zero */

loc_00320476: ;
    ecx = MEM32(eax + 4);
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0xFC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 0xFC), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00320488; /* je: equal / zero */

loc_00320484: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_0032048C;

loc_00320488: ;
    SET_LO8(ecx, MEM8(esp + 8));

loc_0032048C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(eax + 0xB) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003204B0; /* je: equal / zero */

loc_00320493: ;
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003204E9; /* je: equal / zero */

loc_0032049B: ;
    PUSH32(esp, 0x7E94C8);
    PUSH32(esp, 0x827BCC);
    ecx = esi;
    PUSH32(esp, 0x003204ACu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003204AC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003204B0: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x7E94C4);
    PUSH32(esp, 0x003204BFu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_003204BF: ;
    PUSH32(esp, 0x827BCC);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003204D7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003204D7: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003204E6u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_003204E6: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003204E9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00320510
 * Original: 0x00320510 - 0x00320547 (55 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320510(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320510: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032052Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032052E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x18;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032053Eu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_0032053E: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00320560
 * Original: 0x00320560 - 0x00320617 (183 bytes, 60 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320560: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi + 8) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = esi + 0xC;

loc_00320572: ;
    edi = MEM32(ebp);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320603; /* je: equal / zero */

loc_0032057D: ;
    SET_LO8(eax, MEM8(edi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320603; /* je: equal / zero */

loc_00320584: ;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003205A1; /* je: equal / zero */

loc_00320589: ;
    ecx = ebx + 5;
    PUSH32(esp, ecx);
    edx = esi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032059Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032059B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = ebx;

loc_003205A1: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), eax (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003205CA; /* je: equal / zero */

loc_003205A9: ;
    SET_LO8(eax, MEM8(edi + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320603; /* je: equal / zero */

loc_003205B0: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x7E94C8);
    PUSH32(esp, 0x003205BFu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_003205BF: ;
    PUSH32(esp, 0x827BCC);
    ecx = esi + 0x4C;
    PUSH32(esp, ecx);
    goto loc_003205E2;

loc_003205CA: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x7E94C4);
    PUSH32(esp, 0x003205D9u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_003205D9: ;
    PUSH32(esp, 0x827BCC);
    edx = esi + 0x4C;
    PUSH32(esp, edx);

loc_003205E2: ;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003205F1u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003205F1: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00320600u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00320600: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00320603: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00320572; /* jl: less (signed <) */

loc_00320610: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00320650
 * Original: 0x00320650 - 0x00320750 (256 bytes, 72 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00320650: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320749; /* je: equal / zero */

loc_00320664: ;
    SET_LO8(edx, MEM8(esi + 8));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003206EF; /* jne: not equal / not zero */

loc_0032066F: ;
    edx = MEM32(ecx + 0xF0);
    MEM32(ecx + edx * 4 + 0xCC) = eax;
    eax = MEM32(ecx + 0xF0);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x80000007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_0032068F; /* jns: not sign (positive) */

loc_0032068A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0032068F: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    MEM32(ecx + 0xF0) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003206CB; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_003206A4: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x003206B2u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_003206B2: ;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x003206BBu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003206BB: ;
    ecx = esp + 4;
    PUSH32(esp, 0x003206C4u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003206C4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003206CB: ;
    PUSH32(esp, 0);
    ecx = esp + 8;
    PUSH32(esp, 0x003206D6u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_003206D6: ;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x003206DFu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003206DF: ;
    ecx = esp + 4;
    PUSH32(esp, 0x003206E8u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003206E8: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_003206EF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    ecx = esp + 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00320729; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00320702: ;
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032070Cu); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_0032070C: ;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x00320715u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00320715: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0032071Eu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0032071E: ;
    MEM8(esi + 0xC) = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00320729: ;
    PUSH32(esp, 0x4479C000);
    PUSH32(esp, 0x00320733u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00320733: ;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x0032073Cu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_0032073C: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00320745u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00320745: ;
    MEM8(esi + 0xC) = 0;

loc_00320749: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00320790
 * Original: 0x00320790 - 0x0032080C (124 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00320790(void)
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

loc_00320790: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ebp = MEM32(esi + 0xEC);
    PUSH32(esp, edi);
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    /* nop */

loc_003207A0: ;
    eax = MEM32(esi + 0xEC);
    edi = MEM32(esi + eax * 4 + 0xCC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003207E7; /* je: equal / zero */

loc_003207B2: ;
    eax = MEM32(esi + edi * 4 + 0xC);
    edx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003207E7; /* je: equal / zero */

loc_003207BE: ;
    PUSH32(esp, 0);
    ecx = eax + 0x10;
    PUSH32(esp, 0x003207C8u); RECOMP_ABI_CALL(0x00024EEDu, sub_00024EED); /* call 0x00024EED */

loc_003207C8: ;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003207D4u); RECOMP_ABI_CALL(0x0002CE7Cu, sub_0002CE7C); /* call 0x0002CE7C */

loc_003207D4: ;
    eax = MEM32(esi + 0xEC);
    MEM32(esi + eax * 4 + 0xCC) = 0xFFFFFFFFu;
    SET_LO8(ecx, 1);

loc_003207E7: ;
    eax = MEM32(esi + 0xEC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x80000007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_003207FA; /* jns: not sign (positive) */

loc_003207F5: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003207FA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esi + 0xEC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00320808; /* je: equal / zero */

loc_00320804: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003207A0; /* je: equal / zero */

loc_00320808: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00320830
 * Original: 0x00320830 - 0x003208DB (171 bytes, 65 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00320830: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x100);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320849; /* je: equal / zero */

loc_0032083F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003208D6; /* jne: not equal / not zero */

loc_00320849: ;
    eax = MEM32(edi + 0x48);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = edi + 0xC;
    goto loc_00320860;

    /* nop */

loc_00320860: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x1C) (32-bit) */
    ebx = MEM32(ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_003208A5; /* je: equal / zero */

loc_00320869: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003208A5; /* je: equal / zero */

loc_0032086D: ;
    ecx = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi + 8), ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003208A5; /* je: equal / zero */

loc_00320875: ;
    SET_LO8(eax, MEM8(ebx + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003208A5; /* je: equal / zero */

loc_0032087C: ;
    _fa = (uint32_t)(MEM32(edi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x48), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320899; /* je: equal / zero */

loc_00320881: ;
    edx = esi + 5;
    PUSH32(esp, edx);
    eax = edi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00320893u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00320893: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = esi;

loc_00320899: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x003208A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003208A2u); } /* indirect call */
    }

loc_003208A5: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00320860; /* jl: less (signed <) */

loc_003208AE: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM32(edi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x48), eax (32-bit) */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003208D6; /* je: equal / zero */

loc_003208BA: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = edi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003208CCu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003208CC: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = edx;

loc_003208D6: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00320910
 * Original: 0x00320910 - 0x00320925 (21 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320910(void)
{

loc_00320910: ;
    MEM32(ecx + 0x100) = 0xFFFFFFFFu;
    MEM32(ecx + 0xFC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00320930
 * Original: 0x00320930 - 0x00320952 (34 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320930: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032094E; /* je: equal / zero */

loc_0032093D: ;
    PUSH32(esp, 0x907DE8);
    ecx = esi + 0x10;
    PUSH32(esp, 0x0032094Au); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_0032094A: ;
    MEM8(esi + 0xC) = 1;

loc_0032094E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00320960
 * Original: 0x00320960 - 0x003209AA (74 bytes, 22 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00320960: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003209A4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_00320972: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ecx + eax * 4 + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003209A3; /* je: equal / zero */

loc_0032097F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    ecx = esp + 8;
    PUSH32(esp, 0x0032098Du); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_0032098D: ;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    PUSH32(esp, 0x00320996u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00320996: ;
    ecx = esp + 4;
    PUSH32(esp, 0x0032099Fu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0032099F: ;
    MEM8(esi + 0xC) = 1;

loc_003209A3: ;
    POP32(esp, esi);

loc_003209A4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003209C0
 * Original: 0x003209C0 - 0x003209EA (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003209C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003209C0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003209E9; /* je: equal / zero */

loc_003209C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003209E9; /* je: equal / zero */

loc_003209CD: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003209E9; /* je: equal / zero */

loc_003209D6: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003209E9; /* je: equal / zero */

loc_003209DD: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003209E9u); RECOMP_ABI_CALL(0x0001D710u, sub_0001D710); /* call 0x0001D710 */

loc_003209E9: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320A00
 * Original: 0x00320A00 - 0x00320A72 (114 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00320A00: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00320A71; /* je: equal / zero */

loc_00320A09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00320A71; /* je: equal / zero */

loc_00320A0D: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00320A71; /* je: equal / zero */

loc_00320A16: ;
    PUSH32(esp, 0x00320A1Bu); RECOMP_ABI_CALL(0x000189EFu, sub_000189EF); /* call 0x000189EF */

loc_00320A1B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00320A71; /* jne: not equal / not zero */

loc_00320A1F: ;
    ecx = MEM32(0x8FC758);
    PUSH32(esp, 0x00320A2Au); RECOMP_ABI_CALL(0x000151D7u, sub_000151D7); /* call 0x000151D7 */

loc_00320A2A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00320A71; /* jne: not equal / not zero */

loc_00320A2E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00320A36u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00320A36: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00320A54; /* je: equal / zero */

loc_00320A41: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00320A48u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00320A48: ;
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
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00320A70; /* jne: not equal / not zero */

loc_00320A54: ;
    eax = MEM32(0x8FC758);
    eax = MEM32(eax + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00320A70; /* je: equal / zero */

loc_00320A60: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + esi * 8 + 0x20) = ecx;
    MEM32(eax + esi * 8 + 0x24) = 0xFFFFFFFFu;

loc_00320A70: ;
    POP32(esp, esi);

loc_00320A71: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320A90
 * Original: 0x00320A90 - 0x00320AC6 (54 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320A90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320A90: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320AC5; /* je: equal / zero */

loc_00320A9A: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320AC5; /* je: equal / zero */

loc_00320AA3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320AC5; /* je: equal / zero */

loc_00320AA7: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320AC5; /* je: equal / zero */

loc_00320AAE: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    MEM32(eax + esi * 8 + 0x28) = edx;
    PUSH32(esp, 0x00320AC4u); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_00320AC4: ;
    POP32(esp, esi);

loc_00320AC5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320AE0
 * Original: 0x00320AE0 - 0x00320B21 (65 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320AE0: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00320B1F; /* je: equal / zero */

loc_00320AED: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320B1F; /* je: equal / zero */

loc_00320AF6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320B1F; /* je: equal / zero */

loc_00320AFA: ;
    PUSH32(esp, 5);
    PUSH32(esp, 0x00320B01u); RECOMP_ABI_CALL(0x000368FFu, sub_000368FF); /* call 0x000368FF */

loc_00320B01: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320B1F; /* je: equal / zero */

loc_00320B05: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320B1F; /* je: equal / zero */

loc_00320B0C: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    edx = MEM32(esp + 8);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + edx * 8 + 0x28) = ecx;

loc_00320B1F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00320B40
 * Original: 0x00320B40 - 0x00320B65 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320B40: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320B64; /* je: equal / zero */

loc_00320B49: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320B64; /* je: equal / zero */

loc_00320B4D: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320B64; /* je: equal / zero */

loc_00320B56: ;
    eax = MEM32(eax + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320B64; /* je: equal / zero */

loc_00320B5D: ;
    MEM8(eax + 0x288) = 1;

loc_00320B64: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320B70
 * Original: 0x00320B70 - 0x00320B95 (37 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320B70: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320B94; /* je: equal / zero */

loc_00320B79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320B94; /* je: equal / zero */

loc_00320B7D: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320B94; /* je: equal / zero */

loc_00320B86: ;
    eax = MEM32(eax + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320B94; /* je: equal / zero */

loc_00320B8D: ;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x20) = ecx;

loc_00320B94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320BA0
 * Original: 0x00320BA0 - 0x00320BB8 (24 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320BA0: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320BB7; /* je: equal / zero */

loc_00320BA9: ;
    eax = MEM32(eax + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320BB7; /* je: equal / zero */

loc_00320BB0: ;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 0x20) = LO8(ecx);

loc_00320BB7: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320BC0
 * Original: 0x00320BC0 - 0x00320C04 (68 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320BC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320BC0: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00320C03; /* je: equal / zero */

loc_00320BCA: ;
    eax = MEM32(0x8FC1D0);
    eax = MEM32(eax + 0x218);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00320BF8; /* je: equal / zero */

loc_00320BDA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00320BEC; /* je: equal / zero */

loc_00320BDD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00320BF8; /* jne: not equal / not zero */

loc_00320BE0: ;
    eax = 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00320BEBu); RECOMP_ABI_CALL(0x000361CAu, sub_000361CA); /* call 0x000361CA */

loc_00320BEB: ;
    esp += 4; return; /* ret */

loc_00320BEC: ;
    eax = 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00320BF7u); RECOMP_ABI_CALL(0x000361CAu, sub_000361CA); /* call 0x000361CA */

loc_00320BF7: ;
    esp += 4; return; /* ret */

loc_00320BF8: ;
    eax = 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00320C03u); RECOMP_ABI_CALL(0x000361CAu, sub_000361CA); /* call 0x000361CA */

loc_00320C03: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00320C20
 * Original: 0x00320C20 - 0x00320C26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320C20(void)
{

loc_00320C20: ;
    eax = 0x8FC658;
    esp += 4; return; /* ret */

}

/**
 * sub_00320C30
 * Original: 0x00320C30 - 0x00320C72 (66 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320C30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320C30: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edi);
    edi = ecx + eax * 2;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + edi * 4 + 0x20) = ebx;
    MEM8(ecx + esi + 0x28) = 1;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + esi + 0x28) = 0;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00320C90
 * Original: 0x00320C90 - 0x00320D11 (129 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320C90: ;
    eax = MEM32(0x8FC758);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x108));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00320CD6; /* je: equal / zero */

loc_00320CAB: ;
    PUSH32(esp, 0x827BE8);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00320CC3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00320CC3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00320CD3u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00320CD3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00320CD6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00320D06; /* je: equal / zero */

loc_00320CDB: ;
    PUSH32(esp, 0x827BD8);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00320CF3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00320CF3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00320D03u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00320D03: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00320D06: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00320D40
 * Original: 0x00320D40 - 0x00320DB7 (119 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320D40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x00320D75u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00320D75: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    POP32(esp, edi);
    MEM32(esi + 0x20) = ebx;
    MEM8(esi + 0x154) = LO8(ebx);
    MEM8(esi + 0x158) = LO8(ebx);
    MEM8(esi + 0x64) = LO8(ebx);
    MEM8(esi + 0xA4) = LO8(ebx);
    MEM8(esi + 0x160) = LO8(ebx);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi) = 0x827BF8;
    MEM32(esi + 0x15C) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00320DE0
 * Original: 0x00320DE0 - 0x00320E55 (117 bytes, 34 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320DE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320DE0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = 1;
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = 1;
    PUSH32(esp, 0x00320E15u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00320E15: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x1C) = ecx;
    PUSH32(esp, 0x907DE8);
    ecx = esi + 0xA8;
    MEM32(esi) = 0x827C0C;
    MEM8(esi + 0xA0) = 1;
    MEM8(esi + 0xA1) = LO8(ebx);
    MEM32(esi + 0xA4) = ebx;
    PUSH32(esp, 0x00320E4Au); RECOMP_ABI_CALL(0x0001BE6Au, sub_0001BE6A); /* call 0x0001BE6A */

loc_00320E4A: ;
    POP32(esp, edi);
    MEM8(esi + 0x20) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00320E80
 * Original: 0x00320E80 - 0x00320E87 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320E80(void)
{

loc_00320E80: ;
    MEM8(ecx + 0x20) = 0;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00320E90
 * Original: 0x00320E90 - 0x00320F40 (176 bytes, 65 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00320E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00320E90: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00320ED6; /* je: equal / zero */

loc_00320E9C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ebp;
    eax = edi + 0x20;

loc_00320EA3: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00320ECB; /* jne: not equal / not zero */

loc_00320EAD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00320EC7; /* je: equal / zero */

loc_00320EB1: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00320ECB; /* jne: not equal / not zero */

loc_00320EBD: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_00320EA3; /* jne: not equal / not zero */

loc_00320EC7: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00320ED0;

loc_00320ECB: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00320ED0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00320F27; /* je: equal / zero */

loc_00320ED6: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM8(edi + 0xA0) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00320F0C; /* je: equal / zero */

loc_00320EE1: ;
    PUSH32(esp, 0x80);
    eax = edi + 0x20;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00320EF0u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00320EF0: ;
    ecx = MEM32(esp + 0x1C);
    SET_LO8(edx, MEM8(esp + 0x20));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xA4) = ecx;
    MEM8(edi + 0xA1) = LO8(edx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00320F0C: ;
    ecx = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM8(edi + 0x20) = 0;
    MEM32(edi + 0xA4) = ecx;
    MEM8(edi + 0xA1) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00320F27: ;
    edx = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(esp + 0x14));
    MEM32(edi + 0xA4) = edx;
    MEM8(edi + 0xA1) = LO8(eax);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00320F70
 * Original: 0x00320F70 - 0x00320FCC (92 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320F70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320F70: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x280);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    MEM32(eax + esi + 0x20) = ecx;
    eax = MEM32(esi + 0x280);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    PUSH32(esp, 0x3F);
    PUSH32(esp, edx);
    ecx = eax + esi + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00320F9Eu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00320F9E: ;
    edx = MEM32(esi + 0x280);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    MEM8(edx + esi + 0x63) = 0;
    eax = MEM32(esi + 0x280);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x80000007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00320FC2; /* jns: not sign (positive) */

loc_00320FBD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00320FC2: ;
    MEM32(esi + 0x280) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00320FF0
 * Original: 0x00320FF0 - 0x00321018 (40 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00320FF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00320FF0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00321014; /* je: equal / zero */

loc_00320FFB: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, eax);
    eax = esi + 0x240;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032100Au); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032100A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x27F) = 0;

loc_00321014: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321030
 * Original: 0x00321030 - 0x0032108A (90 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321030: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(ecx + 0x20) = edx;
    MEM8(ecx + 0x24) = LO8(eax);
    MEM32(ecx + 0x64) = edx;
    MEM8(ecx + 0x68) = LO8(eax);
    MEM32(ecx + 0xA8) = edx;
    MEM8(ecx + 0xAC) = LO8(eax);
    MEM32(ecx + 0xEC) = edx;
    MEM8(ecx + 0xF0) = LO8(eax);
    MEM32(ecx + 0x130) = edx;
    MEM8(ecx + 0x134) = LO8(eax);
    MEM32(ecx + 0x174) = edx;
    MEM8(ecx + 0x178) = LO8(eax);
    MEM32(ecx + 0x1B8) = edx;
    MEM8(ecx + 0x1BC) = LO8(eax);
    MEM32(ecx + 0x1FC) = edx;
    MEM8(ecx + 0x200) = LO8(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_003210A0
 * Original: 0x003210A0 - 0x003210F6 (86 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003210A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003210A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, 1);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM8(esi + 0xA) = LO8(ecx);
    MEM8(esi + 0xD) = LO8(ecx);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(eax);
    MEM8(esi + 9) = LO8(eax);
    MEM8(esi + 0xB) = LO8(eax);
    MEM8(esi + 0xC) = LO8(eax);
    PUSH32(esp, 0x003210D4u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_003210D4: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi) = 0x827C20;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321110
 * Original: 0x00321110 - 0x0032116D (93 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321110(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321110: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x00321145u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00321145: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x1C) = ecx;
    ecx = esi + 0x24;
    MEM32(esi) = 0x827C34;
    MEM8(esi + 0x20) = LO8(ebx);
    MEM8(esi + 0x21) = LO8(ebx);
    PUSH32(esp, 0x00321165u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_00321165: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321190
 * Original: 0x00321190 - 0x003211E2 (82 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321190(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321190: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x003211C5u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_003211C5: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    POP32(esp, edi);
    MEM8(esi + 0x20) = LO8(ebx);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi) = 0x827C48;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321200
 * Original: 0x00321200 - 0x00321242 (66 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321200(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321200: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 0xB)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(edi + 0xB) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032123E; /* je: equal / zero */

loc_0032120B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), 0xA (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321230; /* je: equal / zero */

loc_00321216: ;
    PUSH32(esp, 0xF);
    ecx = esi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00321226u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321226: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = 0xA;

loc_00321230: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(edx, MEM8(edi + 0x20));
    ecx = esi;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032123Du); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_0032123D: ;
    POP32(esp, esi);

loc_0032123E: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321260
 * Original: 0x00321260 - 0x0032126C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321260: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_00321270
 * Original: 0x00321270 - 0x003212DB (107 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321270(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321270: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = 1;
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = 1;
    PUSH32(esp, 0x003212A5u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_003212A5: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x3E0) = eax;
    MEM32(esi + 0x3E8) = eax;
    POP32(esp, edi);
    MEM8(esi + 0x3E4) = LO8(ebx);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi) = 0x827C5C;
    MEM8(esi + 0x3EC) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321300
 * Original: 0x00321300 - 0x0032130E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321300: ;
    MEM32(ecx) = 0x827BA0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00036805(); return; /* tail jmp 0x00036805 */

}

/**
 * sub_00321320
 * Original: 0x00321320 - 0x00321391 (113 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321320(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321320: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032138E; /* je: equal / zero */

loc_00321328: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032138C; /* jle: less or equal (signed <=) */

loc_00321334: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = eax + 0x4C;
    edi = ecx + 0x20;
    /* nop */

loc_00321340: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x827C70);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00321350u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321350: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0032135Bu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_0032135B: ;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00321370u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321370: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x0032137Fu); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_0032137F: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00321340; /* jl: less (signed <) */

loc_0032138A: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0032138C: ;
    POP32(esp, esi);
    POP32(esp, ebp);

loc_0032138E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003213B0
 * Original: 0x003213B0 - 0x003213D1 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003213B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003213B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003213CA; /* je: equal / zero */

loc_003213B8: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003213C4u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003213C4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003213CA: ;
    MEM8(ecx + 0x20) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003213E0
 * Original: 0x003213E0 - 0x003213FE (30 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003213E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003213E0: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0x3F);
    PUSH32(esp, eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = edx + ecx + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003213F8u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003213F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00321410
 * Original: 0x00321410 - 0x0032141E (14 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321410: ;
    eax = MEM32(esp + 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ecx + 0x60;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321430
 * Original: 0x00321430 - 0x00321447 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321430(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321430: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x320) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x320;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321441u); RECOMP_ABI_CALL(0x000133A5u, sub_000133A5); /* call 0x000133A5 */

loc_00321441: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321450
 * Original: 0x00321450 - 0x0032147A (42 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321450: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321470; /* je: equal / zero */

loc_00321458: ;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x330) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x330;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7E02AC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032146Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032146A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00321470: ;
    MEM8(ecx + 0x330) = 0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321490
 * Original: 0x00321490 - 0x003214F7 (103 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321490: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x003214C5u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_003214C5: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x744) = eax;
    MEM8(esi + 0x748) = LO8(eax);
    POP32(esp, edi);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x74C) = ebx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi) = 0x827C78;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321510
 * Original: 0x00321510 - 0x0032151E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321510: ;
    MEM32(ecx) = 0x827BA0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00036805(); return; /* tail jmp 0x00036805 */

}

/**
 * sub_00321530
 * Original: 0x00321530 - 0x0032155C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321530: ;
    eax = ecx + 0x24;
    edx = 0xF;

loc_00321538: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00321538; /* jne: not equal / not zero */

loc_00321541: ;
    eax = ecx + 0x3E4;
    ecx = 3;
    /* nop */

loc_00321550: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00321550; /* jne: not equal / not zero */

loc_0032155B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00321570
 * Original: 0x00321570 - 0x00321732 (450 bytes, 128 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321570: ;
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = ecx;
    _fa = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x20), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321728; /* jne: not equal / not zero */

loc_00321583: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321727; /* je: equal / zero */

loc_00321593: ;
    eax = MEM32(ebp + 0x744);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_003216A3; /* ja: above (unsigned >) */

loc_003215A3: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x321734); /* switch: 6 entries, 4 targets */
    if (_jt == 0x003215AAu) goto loc_003215AA;
    if (_jt == 0x003215F5u) goto loc_003215F5;
    if (_jt == 0x0032163Fu) goto loc_0032163F;
    if (_jt == 0x003216A3u) goto loc_003216A3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003215AA: ;
    eax = ebp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, 0x827CE8);
    ecx = esi;
    PUSH32(esp, 0x003215BAu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003215BA: ;
    ecx = ebp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x827CE0);
    ecx = esi;
    PUSH32(esp, 0x003215CAu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003215CA: ;
    edx = ebp + 0xA4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x827CD8);
    ecx = esi;
    PUSH32(esp, 0x003215DDu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003215DD: ;
    eax = ebp + 0xE4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x827CD0);
    ecx = esi;
    PUSH32(esp, 0x003215F0u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003215F0: ;
    goto loc_003216A3;

loc_003215F5: ;
    ecx = ebp + 0x504;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x827CE0);
    ecx = esi;
    PUSH32(esp, 0x00321608u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00321608: ;
    edx = ebp + 0x3E4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x827CC8);
    ecx = esi;
    PUSH32(esp, 0x0032161Bu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_0032161B: ;
    PUSH32(esp, 0x827CB8);
    PUSH32(esp, 0x827CB0);
    ecx = esi;
    PUSH32(esp, 0x0032162Cu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_0032162C: ;
    PUSH32(esp, 0x827CB8);
    PUSH32(esp, 0x827CA8);
    ecx = esi;
    PUSH32(esp, 0x0032163Du); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_0032163D: ;
    goto loc_003216A3;

loc_0032163F: ;
    PUSH32(esp, ebx);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x1A4;
    goto loc_00321650;

    /* nop */

loc_00321650: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, 0x827C70);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321660u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321660: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx + -384;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00321676u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00321676: ;
    eax = edi + 6;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x827C70);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00321689u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321689: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00321699u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00321699: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00321650; /* jl: less (signed <) */

loc_003216A2: ;
    POP32(esp, ebx);

loc_003216A3: ;
    eax = MEM32(ebp + 0x744);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003216B9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003216B9: ;
    edx = esp + 0x38;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003216C8u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_003216C8: ;
    PUSH32(esp, 0x827C9C);
    edi = esi + 0x4C;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003216E0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003216E0: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003216EFu); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_003216EF: ;
    PUSH32(esp, 0x827C8C);
    PUSH32(esp, edi);
    eax = esp + 0x80;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321707u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321707: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x90;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032171Au); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_0032171A: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x00321726u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00321726: ;
    POP32(esp, edi);

loc_00321727: ;
    POP32(esp, esi);

loc_00321728: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x140) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x140;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321732
 * Original: 0x00321732 - 0x003217D0 (158 bytes, 142 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321732(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00321732: ;
    edi = edi;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x16A30032) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    MEM32(0xF5003216u) = eax;
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x163F0032) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    RECOMP_UNIMPL("aas", 0x00321748u); /* TODO: aas */
    PUSH32(esp, 0 /* seg:ss */);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_003217D0
 * Original: 0x003217D0 - 0x00321834 (100 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003217D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003217D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x00321805u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00321805: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x600) = eax;
    MEM8(esi + 0x605) = LO8(eax);
    POP32(esp, edi);
    MEM8(esi + 0x604) = LO8(ebx);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi) = 0x827CF0;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321850
 * Original: 0x00321850 - 0x0032185E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321850: ;
    MEM32(ecx) = 0x827BA0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00036805(); return; /* tail jmp 0x00036805 */

}

/**
 * sub_00321870
 * Original: 0x00321870 - 0x0032189C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321870: ;
    eax = ecx + 0x20;
    edx = 0xA;

loc_00321878: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00321878; /* jne: not equal / not zero */

loc_00321881: ;
    eax = ecx + 0x2A0;
    ecx = 3;
    /* nop */

loc_00321890: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00321890; /* jne: not equal / not zero */

loc_0032189B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003218B0
 * Original: 0x003218B0 - 0x00321A72 (450 bytes, 125 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003218B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003218B0: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x604));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321A68; /* je: equal / zero */

loc_003218C7: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x12C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321A67; /* je: equal / zero */

loc_003218D7: ;
    eax = MEM32(esi + 0x600);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00321967; /* je: equal / zero */

loc_003218E6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003219E1; /* jne: not equal / not zero */

loc_003218ED: ;
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x827CE8);
    ecx = edi;
    PUSH32(esp, 0x00321900u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00321900: ;
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x827CE0);
    ecx = edi;
    PUSH32(esp, 0x00321910u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00321910: ;
    edx = esi + 0x60;
    PUSH32(esp, edx);
    PUSH32(esp, 0x827CC8);
    ecx = edi;
    PUSH32(esp, 0x00321920u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00321920: ;
    eax = esi + 0xA0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x827CB0);
    ecx = edi;
    PUSH32(esp, 0x00321933u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00321933: ;
    ecx = esi + 0x2A0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x827CA8);
    ecx = edi;
    PUSH32(esp, 0x00321946u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00321946: ;
    edx = esi + 0x3C0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x827D18);
    ecx = edi;
    PUSH32(esp, 0x00321959u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00321959: ;
    eax = esi + 0x4E0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x827D10);
    goto loc_003219B9;

loc_00321967: ;
    ecx = esi + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x827CE8);
    ecx = edi;
    PUSH32(esp, 0x0032197Au); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_0032197A: ;
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x827CE0);
    ecx = edi;
    PUSH32(esp, 0x0032198Au); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_0032198A: ;
    eax = esi + 0x60;
    PUSH32(esp, eax);
    PUSH32(esp, 0x827CC8);
    ecx = edi;
    PUSH32(esp, 0x0032199Au); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_0032199A: ;
    ecx = esi + 0x2A0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x827CB0);
    ecx = edi;
    PUSH32(esp, 0x003219ADu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003219AD: ;
    edx = esi + 0x3C0;
    PUSH32(esp, edx);
    PUSH32(esp, 0x827CA8);

loc_003219B9: ;
    ecx = edi;
    PUSH32(esp, 0x003219C0u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003219C0: ;
    SET_LO8(eax, MEM8(esi + 0x605));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x7E94C8;
    if (CMP_EQ(_fa, _fb)) goto loc_003219D4; /* je: equal / zero */

loc_003219CF: ;
    eax = 0x7E94C4;

loc_003219D4: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x827D04);
    PUSH32(esp, 0x003219E1u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003219E1: ;
    eax = MEM32(esi + 0x600);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003219F8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003219F8: ;
    edx = esp + 0x18;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00321A07u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00321A07: ;
    PUSH32(esp, 0x827C9C);
    ebx = edi + 0x4C;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00321A1Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321A1F: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00321A2Eu); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00321A2E: ;
    PUSH32(esp, 0x827C8C);
    PUSH32(esp, ebx);
    eax = esp + 0x60;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321A43u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321A43: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x70;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00321A53u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00321A53: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00321A5Fu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00321A5F: ;
    MEM8(esi + 0x604) = 0;
    POP32(esp, ebx);

loc_00321A67: ;
    POP32(esp, edi);

loc_00321A68: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321AF0
 * Original: 0x00321AF0 - 0x00321B08 (24 bytes, 4 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00321AF0: ;
    MEM32(0x8FC768) = 0;
    MEM32(ecx) = 0x827BA0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00036805(); return; /* tail jmp 0x00036805 */

}

/**
 * sub_00321B10
 * Original: 0x00321B10 - 0x00321B4A (58 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00321B10: ;
    eax = MEM32(esp + 4);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x4C) = ecx;
    if ((_fca > _fcb)) goto loc_00321B3B; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_00321B2E: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00321B3E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00321B3B: ;
    xmm0 = xmm1; /* movaps */

loc_00321B3E: ;
    MEMF(eax + 0x44) = xmm0.f[0]; /* movss */
    MEM8(eax + 0x41) = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00321B60
 * Original: 0x00321B60 - 0x00321BE1 (129 bytes, 42 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321B60: ;
    eax = MEM32(0x8FC758);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 0x108));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 4 (8-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (TEST_Z(_fa, _fb)) goto loc_00321BA6; /* je: equal / zero */

loc_00321B7B: ;
    PUSH32(esp, 0x827D2C);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = esp + 0x10;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321B93u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321B93: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00321BA3u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00321BA3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00321BA6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321BD6; /* je: equal / zero */

loc_00321BAB: ;
    PUSH32(esp, 0x827D20);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    edx = esp + 0x10;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00321BC3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321BC3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x20;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321BD3u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00321BD3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00321BD6: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321C10
 * Original: 0x00321C10 - 0x00321C6C (92 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321C10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321C10: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(ecx, 1);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM8(esi + 0xA) = LO8(ecx);
    MEM8(esi + 0xD) = LO8(ecx);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(eax);
    MEM8(esi + 9) = LO8(eax);
    MEM8(esi + 0xB) = LO8(eax);
    MEM8(esi + 0xC) = LO8(eax);
    PUSH32(esp, 0x00321C44u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00321C44: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi) = 0x827D38;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x28) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321C90
 * Original: 0x00321C90 - 0x00321C93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321C90: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00321CA0
 * Original: 0x00321CA0 - 0x00321D0B (107 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321CA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321CA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = ecx;
    eax = MEM32(ebx + esi * 8 + 0x20);
    _fa = (uint32_t)(MEM32(ebx + esi * 8 + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + esi * 8 + 0x24), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321D06; /* je: equal / zero */

loc_00321CB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00321D06; /* jl: less (signed <) */

loc_00321CB6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00321D06; /* jge: greater or equal (signed >=) */

loc_00321CBB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = 0x827DDC;
    if (CMP_EQ(_fa, _fb)) goto loc_00321CC9; /* je: equal / zero */

loc_00321CC4: ;
    ecx = 0x827DC8;

loc_00321CC9: ;
    eax = MEM32(eax * 4 + 0x8C43A4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00321CDEu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00321CDE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = 0x827DB0;
    if (CMP_EQ(_fa, _fb)) goto loc_00321CEC; /* je: equal / zero */

loc_00321CE7: ;
    eax = 0x827D98;

loc_00321CEC: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00321CF4u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_00321CF4: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00321CFDu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00321CFD: ;
    ecx = MEM32(ebx + esi * 8 + 0x20);
    MEM32(ebx + esi * 8 + 0x24) = ecx;
    POP32(esp, edi);

loc_00321D06: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00321D30
 * Original: 0x00321D30 - 0x00321D9F (111 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321D30: ;
    SET_LO8(eax, MEM8(esp + 4));
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xC (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00321D96; /* je: equal / zero */

loc_00321D3E: ;
    PUSH32(esp, esi);
    esi = MEM32(0x8FC758);
    PUSH32(esp, 0x827D2C);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321D5Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321D5D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x1C;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00321D6Du); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00321D6D: ;
    PUSH32(esp, 0x827D20);
    PUSH32(esp, esi);
    edx = esp + 0x2C;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00321D82u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321D82: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x3C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00321D92u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00321D92: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);

loc_00321D96: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321DC0
 * Original: 0x00321DC0 - 0x00321DC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321DC0(void)
{

loc_00321DC0: ;
    eax = MEM32(0x8FCA48);
    esp += 4; return; /* ret */

}

/**
 * sub_00321DD0
 * Original: 0x00321DD0 - 0x00321DD6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321DD0(void)
{

loc_00321DD0: ;
    SET_LO8(eax, MEM8(0x8FCA4C));
    esp += 4; return; /* ret */

}

/**
 * sub_00321DE0
 * Original: 0x00321DE0 - 0x00321DE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321DE0(void)
{

loc_00321DE0: ;
    SET_LO16(eax, MEM16(ecx + 0xC0));
    esp += 4; return; /* ret */

}

/**
 * sub_00321DF0
 * Original: 0x00321DF0 - 0x00321DFF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321DF0(void)
{

loc_00321DF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    PUSH32(esp, 0x00321DFBu); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_00321DFB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00321E10
 * Original: 0x00321E10 - 0x00321E7C (108 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321E10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00321E10: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321E74; /* je: equal / zero */

loc_00321E1B: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321E27; /* je: equal / zero */

loc_00321E23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321E74; /* jne: not equal / not zero */

loc_00321E27: ;
    eax = MEM32(ecx + 0x48);
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00321E74; /* je: equal / zero */

loc_00321E31: ;
    edx = MEM32(ecx);
    eax = esp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00321E3Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00321E37u); } /* indirect call */
    }

loc_00321E3A: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00321E52; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00321E4D: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00321E74; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_00321E52: ;
    xmm0 = XMM_SCALAR(MEMF(0x8C4350)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00321E74; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00321E5F: ;
    xmm0 = XMM_SCALAR(MEMF(0x8C4354)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00321E74; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00321E6C: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00321E74: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00321EA0
 * Original: 0x00321EA0 - 0x00321EAF (15 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321EA0(void)
{

loc_00321EA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x18;
    PUSH32(esp, 0x00321EABu); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_00321EAB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00321EC0
 * Original: 0x00321EC0 - 0x00322098 (472 bytes, 137 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00321EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00321EC0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00321ED0u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00321ED0: ;
    ecx = eax;
    PUSH32(esp, 0x00321ED7u); RECOMP_ABI_CALL(0x00026996u, sub_00026996); /* call 0x00026996 */

loc_00321ED7: ;
    ecx = eax;
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x88888889u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((5) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = edx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x1F) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00321F02u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00321F02: ;
    ecx = eax;
    PUSH32(esp, 0x00321F09u); RECOMP_ABI_CALL(0x00026996u, sub_00026996); /* call 0x00026996 */

loc_00321F09: ;
    ecx = eax;
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
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    ebx = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_00321FCA; /* jle: less or equal (signed <=) */

loc_00321F2F: ;
    _fa = (uint32_t)(MEM16(edi + 0x20)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x20), LO16(esi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321F3F; /* jne: not equal / not zero */

loc_00321F35: ;
    _fa = (uint32_t)(MEM16(edi + 0x22)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x22), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032208C; /* je: equal / zero */

loc_00321F3F: ;
    edx = SX16(LO16(ebx));
    eax = SX16(LO16(esi));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8FC658);
    MEM16(edi + 0x20) = LO16(esi);
    MEM16(edi + 0x22) = LO16(ebx);
    PUSH32(esp, 0x00321F59u); RECOMP_ABI_CALL(0x00035D10u, sub_00035D10); /* call 0x00035D10 */

loc_00321F59: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00321F68u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00321F68: ;
    esi = MEM32(esp + 0x124);
    PUSH32(esp, 0x827E00);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00321F87u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321F87: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00321F96u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00321F96: ;
    PUSH32(esp, 0x827DF0);
    PUSH32(esp, esi);
    ecx = esp + 0x40;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00321FABu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00321FAB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x50;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00321FBBu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00321FBB: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00321FCA: ;
    PUSH32(esp, 0x00321FCFu); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00321FCF: ;
    ecx = eax;
    PUSH32(esp, 0x00321FD6u); RECOMP_ABI_CALL(0x00026996u, sub_00026996); /* call 0x00026996 */

loc_00321FD6: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0xA;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(MEM16(edi + 0x22)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x22), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00321FEE; /* jne: not equal / not zero */

loc_00321FE4: ;
    _fa = (uint32_t)(MEM16(edi + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x24), LO16(edx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032208C; /* je: equal / zero */

loc_00321FEE: ;
    MEM16(edi + 0x24) = LO16(edx);
    PUSH32(esp, 1);
    edx = SX16(LO16(edx));
    eax = SX16(LO16(ebx));
    PUSH32(esp, 1);
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB7CC); /* mulss */
    PUSH32(esp, ecx);
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x8FC658);
    MEM16(edi + 0x22) = LO16(ebx);
    PUSH32(esp, 0x00322024u); RECOMP_ABI_CALL(0x0001271Bu, sub_0001271B); /* call 0x0001271B */

loc_00322024: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00322033u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00322033: ;
    esi = MEM32(esp + 0x128);
    PUSH32(esp, 0x827E00);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00322052u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00322052: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00322061u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00322061: ;
    PUSH32(esp, 0x827DF0);
    PUSH32(esp, esi);
    ecx = esp + 0x44;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00322076u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00322076: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00322089u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00322089: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032208C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00322110
 * Original: 0x00322110 - 0x00322117 (7 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322110(void)
{

loc_00322110: ;
    MEM8(ecx + 0x48) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00322120
 * Original: 0x00322120 - 0x0032217A (90 bytes, 31 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322120: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x00322155u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00322155: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x1C) = ecx;
    ecx = esi + 0x24;
    MEM32(esi) = 0x827E10;
    MEM8(esi + 0x20) = LO8(ebx);
    PUSH32(esp, 0x00322172u); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_00322172: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00322190
 * Original: 0x00322190 - 0x00322197 (7 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322190(void)
{

loc_00322190: ;
    MEM8(ecx + 0x20) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003221A0
 * Original: 0x003221A0 - 0x003221F2 (82 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003221A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003221A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x003221D5u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_003221D5: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    POP32(esp, edi);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi) = 0x827E24;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00322210
 * Original: 0x00322210 - 0x00322214 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322210: ;
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00322220
 * Original: 0x00322220 - 0x00322239 (25 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322220(void)
{

loc_00322220: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0032222Eu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_0032222E: ;
    MEM32(esi + 0x20) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00322240
 * Original: 0x00322240 - 0x0032224A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322240(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322240: ;
    MEM32(ecx + 0x20) = 0;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00322250
 * Original: 0x00322250 - 0x003222A5 (85 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322250: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x00322285u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00322285: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    POP32(esp, edi);
    MEM8(esi + 0x20) = LO8(ebx);
    MEM8(esi + 0x21) = LO8(ebx);
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi) = 0x827E38;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003222C0
 * Original: 0x003222C0 - 0x003222CE (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003222C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003222C0: ;
    MEM32(ecx) = 0x827BA0;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00036805(); return; /* tail jmp 0x00036805 */

}

/**
 * sub_003222E0
 * Original: 0x003222E0 - 0x00322307 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003222E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003222E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x003222F1u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003222F1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00322301; /* je: equal / zero */

loc_003222F8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003222FEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003222FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00322301: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00322310
 * Original: 0x00322310 - 0x00322344 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322310(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322310: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322343; /* je: equal / zero */

loc_0032231A: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322343; /* je: equal / zero */

loc_00322323: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322343; /* je: equal / zero */

loc_00322327: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322343; /* je: equal / zero */

loc_0032232E: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    MEM32(eax + edx * 8 + 0x28) = 1;
    PUSH32(esp, 0x00322343u); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_00322343: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00322360
 * Original: 0x00322360 - 0x00322394 (52 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322360: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322393; /* je: equal / zero */

loc_0032236A: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322393; /* je: equal / zero */

loc_00322373: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322393; /* je: equal / zero */

loc_00322377: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322393; /* je: equal / zero */

loc_0032237E: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    MEM32(eax + edx * 8 + 0x28) = 2;
    PUSH32(esp, 0x00322393u); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_00322393: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003223B0
 * Original: 0x003223B0 - 0x003223D7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003223B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003223B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x003223C1u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003223C1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003223D1; /* je: equal / zero */

loc_003223C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003223CEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003223CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003223D1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003223E0
 * Original: 0x003223E0 - 0x00322418 (56 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003223E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003223E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xA8;
    MEM32(esi) = 0x827C0C;
    PUSH32(esp, 0x003223F4u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003223F4: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x00322402u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00322402: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00322412; /* je: equal / zero */

loc_00322409: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032240Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032240F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00322412: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00322430
 * Original: 0x00322430 - 0x00322457 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322430: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x00322441u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00322441: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00322451; /* je: equal / zero */

loc_00322448: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032244Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032244E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00322451: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00322460
 * Original: 0x00322460 - 0x00322495 (53 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322460: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x24;
    MEM32(esi) = 0x827C34;
    PUSH32(esp, 0x00322471u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00322471: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x0032247Fu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0032247F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032248F; /* je: equal / zero */

loc_00322486: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032248Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032248C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032248F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003224B0
 * Original: 0x003224B0 - 0x003224D7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003224B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003224B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x003224C1u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003224C1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003224D1; /* je: equal / zero */

loc_003224C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003224CEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003224CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003224D1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003224E0
 * Original: 0x003224E0 - 0x00322501 (33 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003224E0(void)
{

loc_003224E0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 0x350) = eax;
    MEM32(ecx + 0x358) = edx;
    MEM32(ecx + 0x354) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00322510
 * Original: 0x00322510 - 0x00322537 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322510: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x00322521u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00322521: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00322531; /* je: equal / zero */

loc_00322528: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032252Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032252E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00322531: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00322540
 * Original: 0x00322540 - 0x00322575 (53 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322540: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x24;
    MEM32(esi) = 0x827E10;
    PUSH32(esp, 0x00322551u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00322551: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x0032255Fu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0032255F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032256F; /* je: equal / zero */

loc_00322566: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032256Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032256C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032256F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00322590
 * Original: 0x00322590 - 0x003225B7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322590: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x003225A1u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003225A1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003225B1; /* je: equal / zero */

loc_003225A8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003225AEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003225AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003225B1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003225C0
 * Original: 0x003225C0 - 0x003225D9 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003225C0(void)
{

loc_003225C0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5BF0;
    esp += 4; return; /* ret */

}

/**
 * sub_003225E0
 * Original: 0x003225E0 - 0x003225F9 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003225E0(void)
{

loc_003225E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    SET_LO8(eax, MEM8(eax + ecx + 0x8F5BF0));
    esp += 4; return; /* ret */

}

/**
 * sub_00322600
 * Original: 0x00322600 - 0x00322619 (25 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322600(void)
{

loc_00322600: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = eax + ecx + 0x8F5C00;
    esp += 4; return; /* ret */

}

/**
 * sub_00322620
 * Original: 0x00322620 - 0x0032263E (30 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322620: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = MEM32(eax + ecx + 0x8F5C2C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00322650
 * Original: 0x00322650 - 0x0032269C (76 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322650: ;
    eax = MEM32(esp + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    SET_LO8(ecx, MEM8(eax + 0x8F5B96));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0032267F; /* jne: not equal / not zero */

loc_00322665: ;
    ecx = eax + 0x8F5B54;
    eax = MEM32(esp + 0xC);
    esi = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00322673: ;
    SET_LO8(edx, MEM8(ecx));
    MEM8(esi + ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322673; /* jne: not equal / not zero */

loc_0032267D: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0032267F: ;
    eax = MEM32(eax + 0x8F5B1C);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, 0x827E4C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00322695u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00322695: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003226B0
 * Original: 0x003226B0 - 0x003226D0 (32 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003226B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003226B0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003226C6; /* je: equal / zero */

loc_003226B9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003226C6; /* je: equal / zero */

loc_003226BD: ;
    eax = MEM32(0x8FC758);
    eax = MEM32(eax + 0x30);
    esp += 4; return; /* ret */

loc_003226C6: ;
    ecx = MEM32(0x8FC758);
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_003226E0
 * Original: 0x003226E0 - 0x003226F0 (16 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003226E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003226E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003226E8u); RECOMP_ABI_CALL(0x000234D5u, sub_000234D5); /* call 0x000234D5 */

loc_003226E8: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00036805(); return; /* tail jmp 0x00036805 */

}

/**
 * sub_00322700
 * Original: 0x00322700 - 0x00322757 (87 bytes, 27 insns)
 * Category: game_io
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322700: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x827E58);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x00322723u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00322723: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00322732u); RECOMP_ABI_CALL(0x00508450u, sub_00508450); /* call 0x00508450 */

loc_00322732: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x31 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032274E; /* jne: not equal / not zero */

loc_0032273D: ;
    SET_LO8(eax, MEM8(esp + 1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032274E; /* jne: not equal / not zero */

loc_00322745: ;
    SET_LO8(eax, 1);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0032274E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00322770
 * Original: 0x00322770 - 0x003227A6 (54 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00322770: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    esi = 0xE;
    edi = ebx + 0x44;
    /* nop */

loc_00322780: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032279A; /* je: equal / zero */

loc_00322786: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032279A; /* je: equal / zero */

loc_0032278E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x0032279Au); RECOMP_ABI_CALL(0x0002CE7Cu, sub_0002CE7C); /* call 0x0002CE7C */

loc_0032279A: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00322780; /* jge: greater or equal (signed >=) */

loc_003227A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003227C0
 * Original: 0x003227C0 - 0x00322890 (208 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003227C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003227C0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x110);
    esi = ecx;
    ebp = MEM32(esi + edi * 4 + 0xC);
    SET_LO8(eax, MEM8(ebp + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322884; /* je: equal / zero */

loc_003227E1: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322801; /* je: equal / zero */

loc_003227E9: ;
    eax = edi + 5;
    PUSH32(esp, eax);
    ecx = esi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003227FBu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003227FB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = edi;

loc_00322801: ;
    PUSH32(esp, 0);
    ecx = esi;
    PUSH32(esp, 0x0032280Au); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_0032280A: ;
    eax = MEM32(esi + 0xF4);
    edx = edi + edi * 4;
    _fa = (uint32_t)(MEM8(eax + edx * 4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + edx * 4), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322846; /* jne: not equal / not zero */

loc_00322819: ;
    ecx = edi + 5;
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032282Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032282C: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x0032283Bu); RECOMP_ABI_CALL(0x00505BB0u, sub_00505BB0); /* call 0x00505BB0 */

loc_0032283B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + 9) = 0;
    MEM8(ebp + 0xA) = 1;

loc_00322846: ;
    _fa = (uint32_t)(MEM32(esi + 0x100)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x100), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322862; /* jne: not equal / not zero */

loc_0032284E: ;
    MEM32(esi + 0x100) = 0xFFFFFFFFu;
    MEM32(esi + 0xFC) = 0;

loc_00322862: ;
    MEM8(ebp + 8) = 0;
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322883; /* je: equal / zero */

loc_0032286B: ;
    ecx = ebx + 5;
    PUSH32(esp, ecx);
    edx = esi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032287Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032287D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = ebx;

loc_00322883: ;
    POP32(esp, ebx);

loc_00322884: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003228D0
 * Original: 0x003228D0 - 0x003228F6 (38 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003228D0(void)
{

loc_003228D0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x003228E4u); RECOMP_ABI_CALL(0x00034451u, sub_00034451); /* call 0x00034451 */

loc_003228E4: ;
    MEM32(esi + 0x100) = edi;
    POP32(esp, edi);
    MEM32(esi + 0xFC) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00322900
 * Original: 0x00322900 - 0x003229D0 (208 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00322900: ;
    eax = ZX8(MEM8(esp + 4));
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0032296B; /* ja: above (unsigned >) */

loc_0032290D: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x32296C); /* switch: 13 entries, 8 targets */
    if (_jt == 0x00322914u) goto loc_00322914;
    if (_jt == 0x00322921u) goto loc_00322921;
    if (_jt == 0x0032292Eu) goto loc_0032292E;
    if (_jt == 0x0032293Bu) goto loc_0032293B;
    if (_jt == 0x00322948u) goto loc_00322948;
    if (_jt == 0x00322951u) goto loc_00322951;
    if (_jt == 0x0032295Eu) goto loc_0032295E;
    if (_jt == 0x0032296Bu) goto loc_0032296B;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00322914: ;
    MEM32(esp + 4) = 0;
    g_seh_ebp = ebp; sub_0002CA3F(); return; /* tail jmp 0x0002CA3F */

loc_00322921: ;
    MEM32(esp + 4) = 2;
    g_seh_ebp = ebp; sub_0002CA3F(); return; /* tail jmp 0x0002CA3F */

loc_0032292E: ;
    MEM32(esp + 4) = 3;
    g_seh_ebp = ebp; sub_0002CA3F(); return; /* tail jmp 0x0002CA3F */

loc_0032293B: ;
    MEM32(esp + 4) = 4;
    g_seh_ebp = ebp; sub_0002CA3F(); return; /* tail jmp 0x0002CA3F */

loc_00322948: ;
    PUSH32(esp, 0x0032294Du); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_0032294D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032296B; /* jne: not equal / not zero */

loc_00322951: ;
    MEM32(esp + 4) = 9;
    g_seh_ebp = ebp; sub_0002CA3F(); return; /* tail jmp 0x0002CA3F */

loc_0032295E: ;
    MEM32(esp + 4) = 6;
    g_seh_ebp = ebp; sub_0002CA3F(); return; /* tail jmp 0x0002CA3F */

loc_0032296B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003229D0
 * Original: 0x003229D0 - 0x003229F0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003229D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003229D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x20);
    edx = ZX8(MEM8(eax + 0x1C));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003229E2u); RECOMP_ABI_CALL(0x0003216Au, sub_0003216A); /* call 0x0003216A */

loc_003229E2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003229F0
 * Original: 0x003229F0 - 0x00322A7B (139 bytes, 50 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003229F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003229F0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x1C);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00322A68; /* je: equal / zero */

loc_003229FC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00322A35; /* je: equal / zero */

loc_003229FF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00322A7A; /* jne: not equal / not zero */

loc_00322A02: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322A7A; /* je: equal / zero */

loc_00322A0C: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322A7A; /* je: equal / zero */

loc_00322A15: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322A7A; /* je: equal / zero */

loc_00322A19: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322A7A; /* je: equal / zero */

loc_00322A20: ;
    edx = MEM32(edx + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    MEM32(eax + edx * 8 + 0x28) = 2;
    PUSH32(esp, 0x00322A34u); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_00322A34: ;
    esp += 4; return; /* ret */

loc_00322A35: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322A7A; /* je: equal / zero */

loc_00322A3F: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322A7A; /* je: equal / zero */

loc_00322A48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322A7A; /* je: equal / zero */

loc_00322A4C: ;
    eax = MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322A7A; /* je: equal / zero */

loc_00322A53: ;
    edx = MEM32(edx + 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 5);
    MEM32(eax + edx * 8 + 0x28) = 1;
    PUSH32(esp, 0x00322A67u); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_00322A67: ;
    esp += 4; return; /* ret */

loc_00322A68: ;
    ecx = MEM32(edx + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 0x24));
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00322A77u); RECOMP_ABI_CALL(0x000361ACu, sub_000361AC); /* call 0x000361AC */

loc_00322A77: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00322A7A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00322AA0
 * Original: 0x00322AA0 - 0x003230DE (1598 bytes, 463 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00322AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00322AA0: ;
    eax = MEM32(0x8FC758);
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003230D7; /* je: equal / zero */

loc_00322AB3: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003230D7; /* je: equal / zero */

loc_00322AC2: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x00322AD9u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00322AD9: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00322AE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322ADDu); } /* indirect call */
    }

loc_00322AE0: ;
    ecx = MEM32(0x8F9CCC);
    ebx = eax;
    PUSH32(esp, 0x00322AEDu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00322AED: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00322AF4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322AF1u); } /* indirect call */
    }

loc_00322AF4: ;
    ebp = eax;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x20) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00322B4D; /* je: equal / zero */

loc_00322B03: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322B4D; /* je: equal / zero */

loc_00322B07: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322B4D; /* je: equal / zero */

loc_00322B0B: ;
    PUSH32(esp, 0x00322B10u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_00322B10: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322B4D; /* jne: not equal / not zero */

loc_00322B14: ;
    esi = MEM32(esp + 0x14C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    PUSH32(esp, 3);
    PUSH32(esp, 0);
    ecx = ebx;
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_00322B3A; /* jge: greater or equal (signed >=) */

loc_00322B27: ;
    edi = MEM32(esp + 0x154);
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00322B34u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322B31u); } /* indirect call */
    }

loc_00322B34: ;
    MEM32(esp + 0x18) = eax;
    goto loc_00322B5B;

loc_00322B3A: ;
    eax = MEM32(esp + 0x154);
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00322B47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322B44u); } /* indirect call */
    }

loc_00322B47: ;
    MEM32(esp + 0x18) = eax;
    goto loc_00322B54;

loc_00322B4D: ;
    esi = MEM32(esp + 0x14C);

loc_00322B54: ;
    edi = MEM32(esp + 0x148);

loc_00322B5B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00322B6E; /* jge: greater or equal (signed >=) */

loc_00322B66: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00322B6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322B69u); } /* indirect call */
    }

loc_00322B6C: ;
    goto loc_00322B74;

loc_00322B6E: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00322B74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322B71u); } /* indirect call */
    }

loc_00322B74: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = 0x827F28;
    if (CMP_GE(_fas, _fbs)) goto loc_00322B8D; /* jge: greater or equal (signed >=) */

loc_00322B85: ;
    MEM32(esp + 0x10) = 0x7E0380;

loc_00322B8D: ;
    ebp = edi;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x54);
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x778);
    edi = esi + ebp;
    eax = edi + 0x8F5BF0;
    edx = esp + 0x44;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00322BA7: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322BA7; /* jne: not equal / not zero */

loc_00322BB1: ;
    eax = edi + 0x8F5C00;
    edx = esp + 0xC4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00322BC0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322BC0; /* jne: not equal / not zero */

loc_00322BCA: ;
    eax = esp + 0x44;
    edx = eax + 1;

loc_00322BD1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322BD1; /* jne: not equal / not zero */

loc_00322BD8: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax;
    eax = esp + 0xC4;
    esi = eax + 1;

loc_00322BE6: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322BE6; /* jne: not equal / not zero */

loc_00322BED: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x11) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x11 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00322BFF; /* jbe: below or equal (unsigned <=) */

loc_00322BF6: ;
    MEM8(esp + 0x45) = 0x2E;
    MEM8(esp + 0x46) = LO8(ecx);

loc_00322BFF: ;
    ecx = MEM32(esp + 0x14);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x14);
    edx = esp + 0xC8;
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00322C23u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00322C23: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x10);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0x827F1C);
    PUSH32(esp, 0x00322C37u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00322C37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00322C40u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00322C40: ;
    ecx = eax;
    PUSH32(esp, 0x00322C47u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00322C47: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322C52; /* jne: not equal / not zero */

loc_00322C4B: ;
    MEM16(esp + 0x24) = 0x23;

loc_00322C52: ;
    eax = MEM32(edi + 0x8F5C2C);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esi + 0xC0;
    PUSH32(esp, 0x8237D4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00322C74u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00322C74: ;
    eax = MEM32(esp + 0x160);
    ecx = esi + 0x40;
    edi = esi + 0x80;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM8(esi + 0x41) = 0;
    MEM8(esi + 0x81) = 0;
    esi = MEM32(esp + 0x154);
    MEM8(ecx) = 0x20;
    MEM8(edi) = 0x20;
    if (CMP_NE(_fa, _fb)) goto loc_00322CC2; /* jne: not equal / not zero */

loc_00322CA4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322CEB; /* jne: not equal / not zero */

loc_00322CA8: ;
    eax = MEM32(0x7E177C);
    MEM32(ecx) = eax;
    edx = MEM32(0x7E1780);
    MEM32(ecx + 4) = edx;
    eax = MEM32(0x7E1784);
    MEM32(ecx + 8) = eax;
    goto loc_00322D2D;

loc_00322CC2: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322CEB; /* jne: not equal / not zero */

loc_00322CC7: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 0x8F5C00;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x8F5BF0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E8F90);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00322CE6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00322CE6: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00322D2D;

loc_00322CEB: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 0x8F5C00;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x8F5BF0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E8F90);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00322D0Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00322D0A: ;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x54);
    eax = esi + ebp;
    edx = (uint32_t)(int32_t)SMEM8(eax + 0x8F5BF0);
    ecx = eax + 0x8F5C00;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E8F90);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00322D2Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00322D2A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00322D2D: ;
    eax = (uint32_t)(int32_t)SMEM16(esp + 0x15C);
    edi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = edi + 0x120;
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x00322D4Cu); RECOMP_ABI_CALL(0x00320020u, sub_00320020); /* call 0x00320020 */

loc_00322D4C: ;
    eax = MEM32(esp + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 3;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322DC9; /* jne: not equal / not zero */

loc_00322D5F: ;
    PUSH32(esp, 0x20);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x827EFC);
    PUSH32(esp, 0x00322D72u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00322D72: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00322D7Bu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00322D7B: ;
    ecx = eax;
    PUSH32(esp, 0x00322D82u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00322D82: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322EF6; /* jne: not equal / not zero */

loc_00322D8A: ;
    edx = MEM32(0x827EE8);
    eax = MEM32(0x827EEC);
    ecx = MEM32(0x827EF0);
    MEM32(0x7B891F) = edx;
    SET_LO16(edx, MEM16(0x827EF4));
    MEM32(0x7B8923) = eax;
    SET_LO8(eax, MEM8(0x827EF6));
    MEM32(0x7B8927) = ecx;
    MEM16(0x7B892B) = LO16(edx);
    MEM8(0x7B892D) = LO8(eax);
    goto loc_00322EF6;

loc_00322DC9: ;
    eax = MEM32(esp + 0x158);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00322EB9; /* je: equal / zero */

loc_00322DDC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00322E52; /* je: equal / zero */

loc_00322DDF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00322EF6; /* jne: not equal / not zero */

loc_00322DE6: ;
    PUSH32(esp, 0x20);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x827ED4);
    PUSH32(esp, 0x00322DF9u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00322DF9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00322E02u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00322E02: ;
    ecx = eax;
    PUSH32(esp, 0x00322E09u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00322E09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322EF6; /* jne: not equal / not zero */

loc_00322E11: ;
    ecx = MEM32(0x827EBC);
    edx = MEM32(0x827EC0);
    eax = MEM32(0x827EC4);
    MEM32(0x7B891F) = ecx;
    ecx = MEM32(0x827EC8);
    MEM32(0x7B8923) = edx;
    SET_LO16(edx, MEM16(0x827ECC));
    MEM32(0x7B8927) = eax;
    MEM32(0x7B892B) = ecx;
    MEM16(0x7B892F) = LO16(edx);
    goto loc_00322EF6;

loc_00322E52: ;
    PUSH32(esp, 0x20);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x827EA8);
    PUSH32(esp, 0x00322E65u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00322E65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00322E6Eu); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00322E6E: ;
    ecx = eax;
    PUSH32(esp, 0x00322E75u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00322E75: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322EF6; /* jne: not equal / not zero */

loc_00322E7D: ;
    eax = MEM32(0x827E94);
    ecx = MEM32(0x827E98);
    edx = MEM32(0x827E9C);
    MEM32(0x7B891F) = eax;
    SET_LO16(eax, MEM16(0x827EA0));
    MEM32(0x7B8923) = ecx;
    SET_LO8(ecx, MEM8(0x827EA2));
    MEM32(0x7B8927) = edx;
    MEM16(0x7B892B) = LO16(eax);
    MEM8(0x7B892D) = LO8(ecx);
    goto loc_00322EF6;

loc_00322EB9: ;
    PUSH32(esp, 0x20);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E12D4);
    PUSH32(esp, 0x00322ECCu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00322ECC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00322ED5u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00322ED5: ;
    ecx = eax;
    PUSH32(esp, 0x00322EDCu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00322EDC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322EF6; /* jne: not equal / not zero */

loc_00322EE0: ;
    edx = MEM32(0x7E12D4);
    SET_LO8(eax, MEM8(0x7E12D8));
    MEM32(0x7B891F) = edx;
    MEM8(0x7B8923) = LO8(eax);

loc_00322EF6: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322F07; /* je: equal / zero */

loc_00322EFF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322F07; /* je: equal / zero */

loc_00322F03: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322F3C; /* jne: not equal / not zero */

loc_00322F07: ;
    ebp = MEM32(esp + 0x14C);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x12 (32-bit) */
    edi = MEM32(esp + 0x148);
    if (CMP_GE(_fas, _fbs)) goto loc_00322F7C; /* jge: greater or equal (signed >=) */

loc_00322F1A: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00322F27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322F24u); } /* indirect call */
    }

loc_00322F27: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    esi = eax;
    eax = MEM32(ebx);
    PUSH32(esp, edi);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00322F36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322F33u); } /* indirect call */
    }

loc_00322F36: ;
    MEM32(esp + 0x18) = eax;
    goto loc_00322F7E;

loc_00322F3C: ;
    eax = MEM32(esp + 0x14C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x12 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00322F6E; /* jge: greater or equal (signed >=) */

loc_00322F48: ;
    edx = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x154);
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00322F5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322F59u); } /* indirect call */
    }

loc_00322F5C: ;
    edi = MEM32(esp + 0x148);
    ebp = MEM32(esp + 0x14C);
    esi = eax;
    goto loc_00322F7E;

loc_00322F6E: ;
    edi = MEM32(esp + 0x148);
    ebp = MEM32(esp + 0x14C);

loc_00322F7C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00322F7E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x12 (32-bit) */
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 2);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_00322F92; /* jge: greater or equal (signed >=) */

loc_00322F8B: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00322F90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322F8Du); } /* indirect call */
    }

loc_00322F90: ;
    goto loc_00322F97;

loc_00322F92: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00322F97u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00322F94u); } /* indirect call */
    }

loc_00322F97: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = edx + ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00322FB5; /* je: equal / zero */

loc_00322FAD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00322FB5; /* je: equal / zero */

loc_00322FB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322FCC; /* jne: not equal / not zero */

loc_00322FB5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322FCC; /* jne: not equal / not zero */

loc_00322FB9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322FCC; /* jne: not equal / not zero */

loc_00322FBD: ;
    esi = MEM32(esp + 0x10);
    MEM8(esi + 0xE0) = LO8(ebx);
    goto loc_0032304C;

loc_00322FCC: ;
    PUSH32(esp, 0x10);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, 0x827E84);
    PUSH32(esp, 0x00322FDDu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00322FDD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00322FE6u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00322FE6: ;
    ecx = eax;
    PUSH32(esp, 0x00322FEDu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00322FED: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00322FF8; /* jne: not equal / not zero */

loc_00322FF1: ;
    MEM16(esp + 0x34) = 0x47;

loc_00322FF8: ;
    PUSH32(esp, 0x10);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x827E74);
    PUSH32(esp, 0x00323009u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00323009: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00323012u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00323012: ;
    ecx = eax;
    PUSH32(esp, 0x00323019u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00323019: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323024; /* jne: not equal / not zero */

loc_0032301D: ;
    MEM16(esp + 0x24) = 0x41;

loc_00323024: ;
    ecx = MEM32(esp + 0x10);
    edx = esp + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    eax = esp + 0x3C;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xE0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x827E64);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00323045u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323045: ;
    esi = MEM32(esp + 0x28);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032304C: ;
    ecx = MEM32(0x8F9CCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032307C; /* je: equal / zero */

loc_00323056: ;
    PUSH32(esp, 0x0032305Bu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0032305B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00323062u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032305Fu); } /* indirect call */
    }

loc_00323062: ;
    edx = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00323074u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00323071u); } /* indirect call */
    }

loc_00323074: ;
    MEM32(esi + 0x138) = eax;
    goto loc_00323086;

loc_0032307C: ;
    MEM32(esi + 0x138) = 0xFFFFFFFFu;

loc_00323086: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, 0x40A00000);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(edx + 0x20) = 1;
    PUSH32(esp, 0);
    MEM8(esi + 0x13C) = LO8(eax);
    PUSH32(esp, 0x003230AEu); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_003230AE: ;
    ecx = MEM32(0x8FC758);
    PUSH32(esp, 0);
    PUSH32(esp, 0xC);
    esi = ecx;
    PUSH32(esp, 0x003230BFu); RECOMP_ABI_CALL(0x00034451u, sub_00034451); /* call 0x00034451 */

loc_003230BF: ;
    POP32(esp, edi);
    MEM32(esi + 0x100) = 0;
    MEM32(esi + 0xFC) = 0xC;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003230D7: ;
    _fb = (uint32_t)(0x134) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x134;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00323270
 * Original: 0x00323270 - 0x003232D4 (100 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323270(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00323270: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003232D3; /* je: equal / zero */

loc_00323279: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003232D3; /* je: equal / zero */

loc_0032327D: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003232D3; /* je: equal / zero */

loc_00323287: ;
    PUSH32(esp, 0x0032328Cu); RECOMP_ABI_CALL(0x000151D7u, sub_000151D7); /* call 0x000151D7 */

loc_0032328C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003232D3; /* jne: not equal / not zero */

loc_00323290: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00323298u); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_00323298: ;
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003232B6; /* je: equal / zero */

loc_003232A3: ;
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x003232AAu); RECOMP_ABI_CALL(0x00014A11u, sub_00014A11); /* call 0x00014A11 */

loc_003232AA: ;
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
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003232D2; /* jne: not equal / not zero */

loc_003232B6: ;
    eax = MEM32(0x8FC758);
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003232D2; /* je: equal / zero */

loc_003232C2: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003232D2u); RECOMP_ABI_CALL(0x0001B037u, sub_0001B037); /* call 0x0001B037 */

loc_003232D2: ;
    POP32(esp, esi);

loc_003232D3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003232F0
 * Original: 0x003232F0 - 0x0032333E (78 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003232F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003232F0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032333D; /* je: equal / zero */

loc_003232F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032333D; /* je: equal / zero */

loc_003232FD: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032333D; /* je: equal / zero */

loc_00323307: ;
    PUSH32(esp, 0x0032330Cu); RECOMP_ABI_CALL(0x000151D7u, sub_000151D7); /* call 0x000151D7 */

loc_0032330C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032333D; /* jne: not equal / not zero */

loc_00323310: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax * 4 + 0x8F6A6C);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032333D; /* je: equal / zero */

loc_00323320: ;
    ecx = MEM32(0x8FC758);
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032333D; /* je: equal / zero */

loc_0032332D: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032333Du); RECOMP_ABI_CALL(0x00028AB6u, sub_00028AB6); /* call 0x00028AB6 */

loc_0032333D: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323360
 * Original: 0x00323360 - 0x003233B9 (89 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323360: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003233AF; /* je: equal / zero */

loc_00323369: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003233AF; /* je: equal / zero */

loc_0032336D: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003233AE; /* je: equal / zero */

loc_00323379: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003233AD; /* je: equal / zero */

loc_00323381: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00323397u); RECOMP_ABI_CALL(0x00026DF6u, sub_00026DF6); /* call 0x00026DF6 */

loc_00323397: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003233B0; /* je: equal / zero */

loc_0032339F: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    ecx = edi;
    PUSH32(esp, 0x003233ADu); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_003233AD: ;
    POP32(esp, esi);

loc_003233AE: ;
    POP32(esp, edi);

loc_003233AF: ;
    esp += 4; return; /* ret */

loc_003233B0: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00018355(); return; /* tail jmp 0x00018355 */

}

/**
 * sub_00323369
 * Original: 0x00323369 - 0x003233B9 (80 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323369(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323369: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003233AF; /* je: equal / zero */

loc_0032336D: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003233AE; /* je: equal / zero */

loc_00323379: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003233AD; /* je: equal / zero */

loc_00323381: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00323397u); RECOMP_ABI_CALL(0x00026DF6u, sub_00026DF6); /* call 0x00026DF6 */

loc_00323397: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003233B0; /* je: equal / zero */

loc_0032339F: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    ecx = edi;
    PUSH32(esp, 0x003233ADu); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_003233AD: ;
    POP32(esp, esi);

loc_003233AE: ;
    POP32(esp, edi);

loc_003233AF: ;
    esp += 4; return; /* ret */

loc_003233B0: ;
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, edi);
    g_seh_ebp = ebp; sub_00018355(); return; /* tail jmp 0x00018355 */

}

/**
 * sub_003233D0
 * Original: 0x003233D0 - 0x003233FD (45 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003233D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003233D0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003233FC; /* je: equal / zero */

loc_003233D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003233FC; /* je: equal / zero */

loc_003233DD: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003233FC; /* je: equal / zero */

loc_003233E6: ;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003233FC; /* je: equal / zero */

loc_003233ED: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003233FCu); RECOMP_ABI_CALL(0x00031C38u, sub_00031C38); /* call 0x00031C38 */

loc_003233FC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323410
 * Original: 0x00323410 - 0x00323438 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323410: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323437; /* je: equal / zero */

loc_00323419: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323437; /* je: equal / zero */

loc_0032341D: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323437; /* je: equal / zero */

loc_00323426: ;
    ecx = MEM32(eax + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323437; /* je: equal / zero */

loc_0032342D: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00323437u); RECOMP_ABI_CALL(0x00037CD7u, sub_00037CD7); /* call 0x00037CD7 */

loc_00323437: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323450
 * Original: 0x00323450 - 0x0032348E (62 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323450: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0032348C; /* je: equal / zero */

loc_0032345D: ;
    PUSH32(esp, 0xB);
    PUSH32(esp, 3);
    PUSH32(esp, 0x00323466u); RECOMP_ABI_CALL(0x00034451u, sub_00034451); /* call 0x00034451 */

loc_00323466: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xB);
    ecx = esi;
    MEM32(esi + 0x100) = 0xB;
    MEM32(esi + 0xFC) = 3;
    PUSH32(esp, 0x00323485u); RECOMP_ABI_CALL(0x00025F0Fu, sub_00025F0F); /* call 0x00025F0F */

loc_00323485: ;
    eax = MEM32(esi + 0x38);
    MEM8(eax + 0x20) = 1;

loc_0032348C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003234A0
 * Original: 0x003234A0 - 0x003234C2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003234A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003234A0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003234AD; /* je: equal / zero */

loc_003234A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003234C1; /* jne: not equal / not zero */

loc_003234AD: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003234C1; /* je: equal / zero */

loc_003234B6: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003234C1; /* je: equal / zero */

loc_003234BD: ;
    MEM8(eax + 0x20) = 1;

loc_003234C1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003234D0
 * Original: 0x003234D0 - 0x003234F2 (34 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003234D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003234D0: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003234DD; /* je: equal / zero */

loc_003234D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003234F1; /* jne: not equal / not zero */

loc_003234DD: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003234F1; /* je: equal / zero */

loc_003234E6: ;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003234F1; /* je: equal / zero */

loc_003234ED: ;
    MEM8(eax + 0x48) = 1;

loc_003234F1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323500
 * Original: 0x00323500 - 0x0032352A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323500: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323529; /* je: equal / zero */

loc_00323509: ;
    SET_LO8(ecx, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032351E; /* je: equal / zero */

loc_00323514: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032351E; /* je: equal / zero */

loc_00323519: ;
    eax = MEM32(eax + 0x30);
    goto loc_00323521;

loc_0032351E: ;
    eax = MEM32(eax + 0x18);

loc_00323521: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323529; /* je: equal / zero */

loc_00323525: ;
    MEM8(eax + 0x20) = 1;

loc_00323529: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00323540
 * Original: 0x00323540 - 0x0032356C (44 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323540: ;
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323565; /* je: equal / zero */

loc_00323549: ;
    SET_LO8(ecx, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032355E; /* je: equal / zero */

loc_00323554: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032355E; /* je: equal / zero */

loc_00323559: ;
    eax = MEM32(eax + 0x30);
    goto loc_00323561;

loc_0032355E: ;
    eax = MEM32(eax + 0x18);

loc_00323561: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323568; /* jne: not equal / not zero */

loc_00323565: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00323568: ;
    SET_LO8(eax, MEM8(eax + 0x21));
    esp += 4; return; /* ret */

}

/**
 * sub_00323580
 * Original: 0x00323580 - 0x00323616 (150 bytes, 53 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323580: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x003235B5u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_003235B5: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi) = 0x827F38;
    if (CMP_EQ(_fa, _fb)) goto loc_003235EC; /* je: equal / zero */

loc_003235D0: ;
    SET_LO8(ecx, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003235E5; /* je: equal / zero */

loc_003235DB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003235E5; /* je: equal / zero */

loc_003235E0: ;
    eax = MEM32(eax + 0x30);
    goto loc_003235E8;

loc_003235E5: ;
    eax = MEM32(eax + 0x18);

loc_003235E8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003235F0; /* jne: not equal / not zero */

loc_003235EC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003235F3;

loc_003235F0: ;
    SET_LO8(eax, MEM8(eax + 0x21));

loc_003235F3: ;
    MEM8(esi + 0x38) = LO8(eax);
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM8(esi + 0x28) = LO8(ebx);
    MEM8(esi + 0x29) = LO8(ebx);
    POP32(esp, edi);
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM8(esi + 0x34) = LO8(ebx);
    MEM8(esi + 0x35) = LO8(ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00323640
 * Original: 0x00323640 - 0x00323667 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323640: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x00323651u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00323651: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323661; /* je: equal / zero */

loc_00323658: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032365Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032365E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00323661: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00323670
 * Original: 0x00323670 - 0x003238A9 (569 bytes, 178 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323670: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x118);
    eax = MEM32(ebx + 0x48);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_003236A8; /* je: equal / zero */

loc_00323690: ;
    eax = esi + 5;
    PUSH32(esp, eax);
    ecx = ebx + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003236A2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003236A2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x48) = esi;

loc_003236A8: ;
    ecx = ebx;
    PUSH32(esp, 0x003236AFu); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_003236AF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032389D; /* je: equal / zero */

loc_003236B7: ;
    SET_LO8(eax, MEM8(ebp + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003236D1; /* je: equal / zero */

loc_003236BE: ;
    ecx = ebx;
    PUSH32(esp, 0x003236C5u); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_003236C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032389D; /* je: equal / zero */

loc_003236CD: ;
    MEM8(ebp + 0xD) = 0;

loc_003236D1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebp + 0x20;
    MEM32(esp + 0xC) = esi;
    MEM32(esp + 0x10) = ecx;
    PUSH32(esp, edi);
    /* nop */

loc_003236E0: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003236E2: ;
    SET_LO8(eax, MEM8(ecx + edi + 8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003237B3; /* je: equal / zero */

loc_003236EE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = 0x8C43F4;
    if (CMP_EQ(_fa, _fb)) goto loc_003236FC; /* je: equal / zero */

loc_003236F7: ;
    eax = 0x8C43DC;

loc_003236FC: ;
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(eax + edx * 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x0032370Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032370D: ;
    esi = edi + esi * 2;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = MEM32(esi + 0x8C43C8);
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC658);
    MEM32(esp + 0x28) = ecx;
    PUSH32(esp, 0x0032372Cu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_0032372C: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    ebp = ebx + 0x4C;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323744u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323744: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323753u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00323753: ;
    eax = MEM32(esi + 0x8C43B4);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esp + 0x50;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032376Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032376A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x60;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032377Au); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_0032377A: ;
    esi = MEM32(esp + 0x58);
    eax = MEM32(esp + 0x5C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 2);
    MEM8(eax + edi + 8) = 0;
    ecx = ecx * 4 + 4;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x003237A2u); RECOMP_ABI_CALL(0x00034451u, sub_00034451); /* call 0x00034451 */

loc_003237A2: ;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x003237ABu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_003237AB: ;
    ebp = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);

loc_003237B3: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003236E2; /* jl: less (signed <) */

loc_003237BD: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_003236E0; /* jl: less (signed <) */

loc_003237D2: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, MEM8(0x8F6A27));
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003237E7; /* jne: not equal / not zero */

loc_003237E3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00323804;

loc_003237E7: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003237F6; /* je: equal / zero */

loc_003237EC: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003237F6; /* je: equal / zero */

loc_003237F1: ;
    eax = MEM32(ecx + 0x30);
    goto loc_003237F9;

loc_003237F6: ;
    eax = MEM32(ecx + 0x18);

loc_003237F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323801; /* jne: not equal / not zero */

loc_003237FD: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00323804;

loc_00323801: ;
    SET_LO8(eax, MEM8(eax + 0x21));

loc_00323804: ;
    _fa = (uint32_t)(MEM8(ebp + 0x38)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x38), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032389D; /* je: equal / zero */

loc_0032380D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323815; /* jne: not equal / not zero */

loc_00323811: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00323832;

loc_00323815: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323824; /* je: equal / zero */

loc_0032381A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323824; /* je: equal / zero */

loc_0032381F: ;
    eax = MEM32(ecx + 0x30);
    goto loc_00323827;

loc_00323824: ;
    eax = MEM32(ecx + 0x18);

loc_00323827: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032382F; /* jne: not equal / not zero */

loc_0032382B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00323832;

loc_0032382F: ;
    SET_LO8(eax, MEM8(eax + 0x21));

loc_00323832: ;
    MEM8(ebp + 0x38) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x7E94C8;
    if (CMP_NE(_fa, _fb)) goto loc_00323843; /* jne: not equal / not zero */

loc_0032383E: ;
    eax = 0x7E94C4;

loc_00323843: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032384Eu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_0032384E: ;
    PUSH32(esp, 0x82805C);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x4C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323866u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323866: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323875u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00323875: ;
    PUSH32(esp, 0x828044);
    PUSH32(esp, ebx);
    edx = esp + 0x44;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032388Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032388A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x54;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032389Au); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_0032389A: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032389D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00323940
 * Original: 0x00323940 - 0x00323B29 (489 bytes, 145 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323940: ;
    eax = MEM32(0x8FC1D0);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(eax + 0x1E4);
    PUSH32(esp, 0x00323953u); RECOMP_ABI_CALL(0x0002B5E5u, sub_0002B5E5); /* call 0x0002B5E5 */

loc_00323953: ;
    ecx = eax;
    PUSH32(esp, 0x0032395Au); RECOMP_ABI_CALL(0x000330B5u, sub_000330B5); /* call 0x000330B5 */

loc_0032395A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323B25; /* je: equal / zero */

loc_00323962: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x48);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323987; /* je: equal / zero */

loc_00323971: ;
    PUSH32(esp, 5);
    ecx = esi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00323981u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323981: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = ebx;

loc_00323987: ;
    _fa = (uint32_t)(MEM8(edi + 0xD)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0xD), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003239A6; /* je: equal / zero */

loc_0032398C: ;
    ecx = esi;
    PUSH32(esp, 0x00323993u); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_00323993: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323B23; /* je: equal / zero */

loc_0032399B: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x003239A3u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_003239A3: ;
    MEM8(edi + 0xD) = LO8(ebx);

loc_003239A6: ;
    eax = MEM32(edi + 0x20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003239E9; /* je: equal / zero */

loc_003239AC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00323B23; /* jne: not equal / not zero */

loc_003239B3: ;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x8280CC);
    ecx = esi;
    MEM8(0x8FC658) = LO8(ebx);
    PUSH32(esp, 0x003239CAu); RECOMP_ABI_CALL(0x000227BFu, sub_000227BF); /* call 0x000227BF */

loc_003239CA: ;
    _fa = (uint32_t)(MEM8(0x8FC658)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8FC658), 0x31 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00323B23; /* jne: not equal / not zero */

loc_003239D7: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x003239E0u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_003239E0: ;
    POP32(esp, esi);
    MEM32(edi + 0x20) = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_003239E9: ;
    eax = MEM32(edi + 0x15C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00323A28; /* jl: less (signed <) */

loc_003239F3: ;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003239FEu); RECOMP_ABI_CALL(0x000133A5u, sub_000133A5); /* call 0x000133A5 */

loc_003239FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x8280BC);
    ecx = esi;
    PUSH32(esp, 0x00323A12u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00323A12: ;
    PUSH32(esp, 0x8280AC);
    ecx = esi;
    PUSH32(esp, 0x00323A1Eu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_00323A1E: ;
    MEM32(edi + 0x15C) = 0xFFFFFFFFu;

loc_00323A28: ;
    SET_LO8(eax, MEM8(edi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, ebp);
    ebp = edi + 0x24;
    if (CMP_EQ(_fa, _fb)) goto loc_00323A43; /* je: equal / zero */

loc_00323A33: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x827CE8);
    ecx = esi;
    PUSH32(esp, 0x00323A40u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00323A40: ;
    MEM8(ebp) = LO8(ebx);

loc_00323A43: ;
    SET_LO8(eax, MEM8(edi + 0x64));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    ebp = edi + 0x64;
    if (CMP_EQ(_fa, _fb)) goto loc_00323A5D; /* je: equal / zero */

loc_00323A4D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x827CE0);
    ecx = esi;
    PUSH32(esp, 0x00323A5Au); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00323A5A: ;
    MEM8(ebp) = LO8(ebx);

loc_00323A5D: ;
    SET_LO8(eax, MEM8(edi + 0xA4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    ebp = edi + 0xA4;
    if (CMP_EQ(_fa, _fb)) goto loc_00323A7D; /* je: equal / zero */

loc_00323A6D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x827CC8);
    ecx = esi;
    PUSH32(esp, 0x00323A7Au); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00323A7A: ;
    MEM8(ebp) = LO8(ebx);

loc_00323A7D: ;
    SET_LO8(eax, MEM8(edi + 0xE4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    ebp = edi + 0xE4;
    if (CMP_EQ(_fa, _fb)) goto loc_00323A9D; /* je: equal / zero */

loc_00323A8D: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x827CB0);
    ecx = esi;
    PUSH32(esp, 0x00323A9Au); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00323A9A: ;
    MEM8(ebp) = LO8(ebx);

loc_00323A9D: ;
    SET_LO8(eax, MEM8(edi + 0x124));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    ebp = edi + 0x124;
    if (CMP_EQ(_fa, _fb)) goto loc_00323ABD; /* je: equal / zero */

loc_00323AAD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x827D18);
    ecx = esi;
    PUSH32(esp, 0x00323ABAu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00323ABA: ;
    MEM8(ebp) = LO8(ebx);

loc_00323ABD: ;
    SET_LO8(eax, MEM8(edi + 0x104));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    ebp = edi + 0x104;
    if (CMP_EQ(_fa, _fb)) goto loc_00323ADD; /* je: equal / zero */

loc_00323ACD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x827D10);
    ecx = esi;
    PUSH32(esp, 0x00323ADAu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00323ADA: ;
    MEM8(ebp) = LO8(ebx);

loc_00323ADD: ;
    _fa = (uint32_t)(MEM8(edi + 0x160)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x160), LO8(ebx) (8-bit) */
    POP32(esp, ebp);
    eax = 0x82809C;
    if (CMP_NE(_fa, _fb)) goto loc_00323AF0; /* jne: not equal / not zero */

loc_00323AEB: ;
    eax = 0x82808C;

loc_00323AF0: ;
    PUSH32(esp, 0x7E94C8);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00323AFDu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00323AFD: ;
    edx = edi + 0x144;
    PUSH32(esp, edx);
    PUSH32(esp, 0x827CA8);
    ecx = esi;
    PUSH32(esp, 0x00323B10u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00323B10: ;
    PUSH32(esp, 0x828078);
    ecx = esi;
    PUSH32(esp, 0x00323B1Cu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_00323B1C: ;
    MEM32(edi + 0x20) = 2;

loc_00323B23: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00323B25: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00323BB0
 * Original: 0x00323BB0 - 0x00323D3E (398 bytes, 116 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323BB0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x110);
    eax = MEM32(ebp + 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00323BE4; /* je: equal / zero */

loc_00323BCE: ;
    PUSH32(esp, 0x11);
    eax = ebp + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00323BDEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323BDE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x48) = edi;

loc_00323BE4: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323BFE; /* je: equal / zero */

loc_00323BEB: ;
    ecx = ebp;
    PUSH32(esp, 0x00323BF2u); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_00323BF2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323D32; /* je: equal / zero */

loc_00323BFA: ;
    MEM8(esi + 0xD) = 0;

loc_00323BFE: ;
    SET_LO8(eax, MEM8(esi + 0xA0));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00323CC6; /* je: equal / zero */

loc_00323C0D: ;
    ebx = esi + 0x20;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00323C1Bu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00323C1B: ;
    PUSH32(esp, 0x828110);
    edi = ebp + 0x4C;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323C33u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323C33: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323C42u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00323C42: ;
    eax = MEM32(esi + 0xA4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 0x7E94C8;
    if (CMP_NE(_fa, _fb)) goto loc_00323C59; /* jne: not equal / not zero */

loc_00323C54: ;
    eax = 0x7E94C4;

loc_00323C59: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00323C64u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00323C64: ;
    PUSH32(esp, 0x828100);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323C79u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323C79: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323C88u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00323C88: ;
    PUSH32(esp, 0x8280F0);
    PUSH32(esp, edi);
    ecx = esp + 0x40;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00323C9Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323C9D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x50;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00323CADu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00323CAD: ;
    SET_LO8(edx, MEM8(ebx));
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ebp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00323CBFu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00323CBF: ;
    MEM8(esi + 0xA0) = 0;

loc_00323CC6: ;
    SET_LO8(eax, MEM8(esi + 0xA1));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323D31; /* je: equal / zero */

loc_00323CD0: ;
    PUSH32(esp, ebp);
    ecx = esp + 0x14;
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00323CE3u); RECOMP_ABI_CALL(0x0002D5B6u, sub_0002D5B6); /* call 0x0002D5B6 */

loc_00323CE3: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00323CEBu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00323CEB: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00323CF4u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00323CF4: ;
    PUSH32(esp, 0x3F000000);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00323D02u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00323D02: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00323D0Au); RECOMP_ABI_CALL(0x00020280u, sub_00020280); /* call 0x00020280 */

loc_00323D0A: ;
    ecx = esp + 0x10;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00323D15u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00323D15: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323D31; /* je: equal / zero */

loc_00323D19: ;
    PUSH32(esp, 0x907DE8);
    ecx = esi;
    PUSH32(esp, 0x00323D25u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00323D25: ;
    PUSH32(esp, 0x8280E0);
    ecx = ebp;
    PUSH32(esp, 0x00323D31u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_00323D31: ;
    POP32(esp, ebx);

loc_00323D32: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00323DB0
 * Original: 0x00323DB0 - 0x00323E1F (111 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323DB0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = 1;
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = 1;
    PUSH32(esp, 0x00323DE5u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00323DE5: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x1C) = ecx;
    ecx = esi;
    MEM32(esi) = 0x828120;
    MEM32(esi + 0x280) = ebx;
    MEM32(esi + 0x284) = ebx;
    MEM8(esi + 0x288) = 1;
    MEM8(esi + 0x240) = LO8(ebx);
    PUSH32(esp, 0x00323E17u); RECOMP_ABI_CALL(0x0002546Au, sub_0002546A); /* call 0x0002546A */

loc_00323E17: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00323E40
 * Original: 0x00323E40 - 0x00323E67 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323E40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00323E40: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x00323E51u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00323E51: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00323E61; /* je: equal / zero */

loc_00323E58: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00323E5Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00323E5E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00323E61: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00323E70
 * Original: 0x00323E70 - 0x0032404B (475 bytes, 133 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00323E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00323E70: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x108);
    eax = MEM32(ebp + 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00323EA4; /* je: equal / zero */

loc_00323E8E: ;
    PUSH32(esp, 0x12);
    eax = ebp + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00323E9Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323E9E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x48) = edi;

loc_00323EA4: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323EBE; /* je: equal / zero */

loc_00323EAB: ;
    ecx = ebp;
    PUSH32(esp, 0x00323EB2u); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_00323EB2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032403F; /* je: equal / zero */

loc_00323EBA: ;
    MEM8(esi + 0xD) = 0;

loc_00323EBE: ;
    eax = MEM32(esi + 0x284);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x280)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x280) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00323FA6; /* je: equal / zero */

loc_00323ED0: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x44);
    ecx = MEM32(eax + esi + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00323EE7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323EE7: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00323EF6u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00323EF6: ;
    PUSH32(esp, 0x82817C);
    edi = ebp + 0x4C;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323F0Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323F0E: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323F1Du); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00323F1D: ;
    edx = MEM32(esi + 0x284);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x44);
    eax = edx + esi + 0x24;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00323F35u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00323F35: ;
    PUSH32(esp, 0x828170);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323F4Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323F4A: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323F5Cu); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00323F5C: ;
    PUSH32(esp, 0x828164);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00323F71u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323F71: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00323F81u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00323F81: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    ecx = ebp;
    PUSH32(esp, 0x00323F8Du); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00323F8D: ;
    eax = MEM32(esi + 0x284);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x80000007u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_00323FA0; /* jns: not sign (positive) */

loc_00323F9B: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00323FA0: ;
    MEM32(esi + 0x284) = eax;

loc_00323FA6: ;
    SET_LO8(eax, MEM8(esi + 0x240));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi + 0x240;
    if (CMP_EQ(_fa, _fb)) goto loc_0032401F; /* je: equal / zero */

loc_00323FB6: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00323FC1u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00323FC1: ;
    PUSH32(esp, 0x828158);
    esi = ebp + 0x4C;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323FD9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323FD9: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00323FE8u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00323FE8: ;
    PUSH32(esp, 0x828148);
    PUSH32(esp, esi);
    ecx = esp + 0x34;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00323FFDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00323FFD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x44;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032400Du); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_0032400D: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0032401F: ;
    SET_LO8(eax, MEM8(esi + 0x288));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032403F; /* je: equal / zero */

loc_00324029: ;
    PUSH32(esp, 0x828134);
    ecx = ebp;
    MEM8(edi) = 0;
    PUSH32(esp, 0x00324038u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_00324038: ;
    MEM8(esi + 0x288) = 0;

loc_0032403F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003240D0
 * Original: 0x003240D0 - 0x003241D2 (258 bytes, 84 insns)
 * Category: game_network
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003240D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003240D0: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x4C);
    eax = MEM32(esi + 0x48);
    PUSH32(esp, edi);
    edi = 0xE;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ebx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003240FE; /* je: equal / zero */

loc_003240E8: ;
    PUSH32(esp, 0x13);
    eax = esi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003240F8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003240F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = edi;

loc_003240FE: ;
    ecx = esi;
    PUSH32(esp, 0x00324105u); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_00324105: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003241C9; /* je: equal / zero */

loc_0032410D: ;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003241C9; /* je: equal / zero */

loc_00324119: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032414A; /* jne: not equal / not zero */

loc_0032411E: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x8281C0);
    ecx = esi;
    PUSH32(esp, 0x0032412Fu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_0032412F: ;
    PUSH32(esp, 0x8281B0);
    ecx = esi;
    PUSH32(esp, 0x0032413Bu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_0032413B: ;
    ecx = MEM32(ebx + 0x20);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x24) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0032414A: ;
    MEM8(esp + 0xC) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF;
    edi = esp + 0xD;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x40);
    ecx = esp + 0x10;
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x828188);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0x00324170u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00324170: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324179u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00324179: ;
    ecx = eax;
    PUSH32(esp, 0x00324180u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00324180: ;
    edx = MEM32(ebx + 0x20);
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00324193u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324193: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x8281C0);
    ecx = esi;
    PUSH32(esp, 0x003241A7u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003241A7: ;
    PUSH32(esp, 0x8281B0);
    ecx = esi;
    PUSH32(esp, 0x003241B3u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_003241B3: ;
    SET_LO8(eax, MEM8(ebx + 0xB));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003241C3; /* jne: not equal / not zero */

loc_003241BA: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x003241C3u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_003241C3: ;
    ecx = MEM32(ebx + 0x20);
    MEM32(ebx + 0x24) = ecx;

loc_003241C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00324220
 * Original: 0x00324220 - 0x00324390 (368 bytes, 112 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324220: ;
    SET_LO8(eax, MEM8(0x8F6A27));
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xA (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0032423D; /* je: equal / zero */

loc_00324234: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xB (8-bit) */
    ebx = 9;
    if (CMP_NE(_fa, _fb)) goto loc_00324242; /* jne: not equal / not zero */

loc_0032423D: ;
    ebx = 3;

loc_00324242: ;
    esi = MEM32(esp + 0x118);
    _fa = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x48), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324266; /* je: equal / zero */

loc_0032424E: ;
    eax = ebx + 5;
    PUSH32(esp, eax);
    ecx = esi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324260u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324260: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = ebx;

loc_00324266: ;
    SET_LO8(eax, MEM8(edi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324289; /* je: equal / zero */

loc_0032426D: ;
    ecx = esi;
    PUSH32(esp, 0x00324274u); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_00324274: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324384; /* je: equal / zero */

loc_0032427C: ;
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00324285u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00324285: ;
    MEM8(edi + 0xD) = 0;

loc_00324289: ;
    SET_LO8(eax, MEM8(edi + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003242EB; /* je: equal / zero */

loc_00324290: ;
    ebx = MEM32(0x8F1908);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003242D6; /* je: equal / zero */

loc_0032429A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x828228);
    ecx = esi;
    PUSH32(esp, 0x003242A7u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003242A7: ;
    edx = ebx + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82821C);
    ecx = esi;
    PUSH32(esp, 0x003242BAu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003242BA: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x82820C);
    ecx = esi;
    PUSH32(esp, 0x003242CAu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003242CA: ;
    PUSH32(esp, 0x8281F8);
    ecx = esi;
    PUSH32(esp, 0x003242D6u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_003242D6: ;
    PUSH32(esp, 0x907DE8);
    ecx = edi + 0x24;
    MEM8(edi + 0x20) = 0;
    MEM8(edi + 0x21) = 1;
    PUSH32(esp, 0x003242EBu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003242EB: ;
    SET_LO8(eax, MEM8(edi + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324384; /* je: equal / zero */

loc_003242F6: ;
    PUSH32(esp, 0x8281E0);
    eax = esi + 0x4C;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    MEM8(0x8FC658) = 0;
    PUSH32(esp, 0x00324315u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324315: ;
    edx = esp + 0x24;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00324324u); RECOMP_ABI_CALL(0x00508450u, sub_00508450); /* call 0x00508450 */

loc_00324324: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8FC658);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x32) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x32;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00324348; /* je: equal / zero */

loc_00324333: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00324384; /* jne: not equal / not zero */

loc_00324338: ;
    MEM8(edi + 0x21) = 0;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00324348: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x24;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00324353u); RECOMP_ABI_CALL(0x000240BFu, sub_000240BF); /* call 0x000240BF */

loc_00324353: ;
    PUSH32(esp, 0x40800000);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00324361u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00324361: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00324369u); RECOMP_ABI_CALL(0x00020280u, sub_00020280); /* call 0x00020280 */

loc_00324369: ;
    ecx = esp + 0xC;
    SET_LO8(ebx, LO8(eax));
    PUSH32(esp, 0x00324374u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00324374: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324384; /* je: equal / zero */

loc_00324378: ;
    PUSH32(esp, 0x8281CC);
    ecx = esi;
    PUSH32(esp, 0x00324384u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_00324384: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003243F0
 * Original: 0x003243F0 - 0x00324417 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003243F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003243F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x00324401u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00324401: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00324411; /* je: equal / zero */

loc_00324408: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032440Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032440E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324411: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00324420
 * Original: 0x00324420 - 0x003244B6 (150 bytes, 43 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324420: ;
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x3E4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003244B2; /* je: equal / zero */

loc_00324431: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003244B1; /* je: equal / zero */

loc_0032443A: ;
    eax = MEM32(edi + 0x3E0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003244AA; /* jne: not equal / not zero */

loc_00324444: ;
    PUSH32(esp, esi);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0032444Cu); RECOMP_ABI_CALL(0x00027044u, sub_00027044); /* call 0x00027044 */

loc_0032444C: ;
    PUSH32(esp, 0x828078);
    ecx = esi;
    PUSH32(esp, 0x00324458u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_00324458: ;
    eax = MEM32(edi + 0x3E8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x827BB4);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x0032446Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032446E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x8280BC);
    ecx = esi;
    PUSH32(esp, 0x00324482u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00324482: ;
    PUSH32(esp, 0x8280AC);
    ecx = esi;
    PUSH32(esp, 0x0032448Eu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_0032448E: ;
    SET_LO8(eax, MEM8(edi + 0x3EC));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x828244;
    if (CMP_NE(_fa, _fb)) goto loc_003244A2; /* jne: not equal / not zero */

loc_0032449D: ;
    eax = 0x828234;

loc_003244A2: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003244AAu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_003244AA: ;
    MEM8(edi + 0x3E4) = 0;

loc_003244B1: ;
    POP32(esp, esi);

loc_003244B2: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003244E0
 * Original: 0x003244E0 - 0x003247CD (749 bytes, 214 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003244E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003244E0: ;
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    eax = MEM32(edi + 0x48);
    esi = 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00324514; /* je: equal / zero */

loc_003244FE: ;
    PUSH32(esp, 0xB);
    eax = edi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032450Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032450E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = esi;

loc_00324514: ;
    SET_LO8(eax, MEM8(ebp + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324537; /* je: equal / zero */

loc_0032451B: ;
    ecx = edi;
    PUSH32(esp, 0x00324522u); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_00324522: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003247C1; /* je: equal / zero */

loc_0032452A: ;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x00324533u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00324533: ;
    MEM8(ebp + 0xD) = 0;

loc_00324537: ;
    _fa = (uint32_t)(MEM32(ebp + 0x354)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x354), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032473E; /* jne: not equal / not zero */

loc_00324544: ;
    PUSH32(esp, ebx);
    ecx = ebp + 0x20;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324553u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00324553: ;
    PUSH32(esp, 0x8283B4);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x0032456Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032456B: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x0032457Au); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_0032457A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x60;

loc_00324582: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x827C70);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00324592u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324592: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0032459Du); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_0032459D: ;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003245B2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003245B2: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003245C1u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_003245C1: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00324582; /* jl: less (signed <) */

loc_003245CD: ;
    edx = ebp + 0x320;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003245DEu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_003245DE: ;
    PUSH32(esp, 0x8280BC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003245F3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003245F3: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00324602u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00324602: ;
    eax = MEM32(ebp + 0x350);
    ecx = MEM32(eax * 8 + 0x8C4410);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x40;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00324620u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324620: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x50;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324630u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00324630: ;
    ecx = MEM32(ebp + 0x350);
    edx = MEM32(ecx * 8 + 0x8C4414);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324651u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324651: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324661u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00324661: ;
    eax = MEM32(ebp + 0x358);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00324691; /* jne: not equal / not zero */

loc_0032466F: ;
    PUSH32(esp, 0x828244);
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00324684u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324684: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    goto loc_003246D8;

loc_00324691: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003246B8; /* jne: not equal / not zero */

loc_00324696: ;
    PUSH32(esp, 0x828234);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003246ABu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003246AB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    goto loc_003246D8;

loc_003246B8: ;
    PUSH32(esp, 0x8283A8);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003246CDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003246CD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);

loc_003246D8: ;
    PUSH32(esp, 0x003246DDu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_003246DD: ;
    eax = MEM32(ebp + 0x350);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032471F; /* je: equal / zero */

loc_003246EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032471F; /* je: equal / zero */

loc_003246F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032471F; /* je: equal / zero */

loc_003246F5: ;
    esi = MEM32(esp + 0x118);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00324705u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00324705: ;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00324713u); RECOMP_ABI_CALL(0x0001E30Eu, sub_0001E30E); /* call 0x0001E30E */

loc_00324713: ;
    MEM32(ebp + 0x354) = 3;
    goto loc_00324737;

loc_0032471F: ;
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0032472Du); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_0032472D: ;
    MEM32(ebp + 0x354) = 2;

loc_00324737: ;
    edi = MEM32(esp + 0x118);

loc_0032473E: ;
    eax = MEM32(ebp + 0x354);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_003247C1; /* jne: not equal / not zero */

loc_00324749: ;
    PUSH32(esp, 0x828394);
    edx = edi + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    MEM8(0x8FC658) = 0;
    PUSH32(esp, 0x00324768u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324768: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324777u); RECOMP_ABI_CALL(0x00508450u, sub_00508450); /* call 0x00508450 */

loc_00324777: ;
    SET_LO8(eax, MEM8(0x8FC658));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x31 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003247C1; /* jne: not equal / not zero */

loc_00324783: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0032478Cu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_0032478C: ;
    edi = MEM32(edi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003247B7; /* je: equal / zero */

loc_00324793: ;
    PUSH32(esp, 0x40A00000);
    ecx = esp + 0x10;
    PUSH32(esp, 0x003247A1u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_003247A1: ;
    PUSH32(esp, eax);
    ecx = edi + 0x10;
    PUSH32(esp, 0x003247AAu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003247AA: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003247B3u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003247B3: ;
    MEM8(edi + 0xC) = 1;

loc_003247B7: ;
    MEM32(ebp + 0x354) = 3;

loc_003247C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032454E
 * Original: 0x0032454E - 0x003247CD (639 bytes, 180 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032454E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032454E: ;
    PUSH32(esp, 0x00324553u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00324553: ;
    PUSH32(esp, 0x8283B4);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x4C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x0032456Bu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032456B: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x0032457Au); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_0032457A: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + 0x60;

loc_00324582: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x827C70);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00324592u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324592: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0032459Du); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_0032459D: ;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003245B2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003245B2: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003245C1u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_003245C1: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xB (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00324582; /* jl: less (signed <) */

loc_003245CD: ;
    edx = ebp + 0x320;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003245DEu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_003245DE: ;
    PUSH32(esp, 0x8280BC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x003245F3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003245F3: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00324602u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00324602: ;
    eax = MEM32(ebp + 0x350);
    ecx = MEM32(eax * 8 + 0x8C4410);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x40;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00324620u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324620: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x50;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324630u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00324630: ;
    ecx = MEM32(ebp + 0x350);
    edx = MEM32(ecx * 8 + 0x8C4414);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    eax = esp + 0x20;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324651u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324651: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324661u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00324661: ;
    eax = MEM32(ebp + 0x358);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00324691; /* jne: not equal / not zero */

loc_0032466F: ;
    PUSH32(esp, 0x828244);
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00324684u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324684: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x30;
    PUSH32(esp, eax);
    goto loc_003246D8;

loc_00324691: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003246B8; /* jne: not equal / not zero */

loc_00324696: ;
    PUSH32(esp, 0x828234);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003246ABu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003246AB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    goto loc_003246D8;

loc_003246B8: ;
    PUSH32(esp, 0x8283A8);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003246CDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003246CD: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);

loc_003246D8: ;
    PUSH32(esp, 0x003246DDu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_003246DD: ;
    eax = MEM32(ebp + 0x350);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032471F; /* je: equal / zero */

loc_003246EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032471F; /* je: equal / zero */

loc_003246F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032471F; /* je: equal / zero */

loc_003246F5: ;
    esi = MEM32(esp + 0x118);
    PUSH32(esp, 1);
    ecx = esi;
    PUSH32(esp, 0x00324705u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00324705: ;
    PUSH32(esp, 0x40A00000);
    PUSH32(esp, 6);
    ecx = esi;
    PUSH32(esp, 0x00324713u); RECOMP_ABI_CALL(0x0001E30Eu, sub_0001E30E); /* call 0x0001E30E */

loc_00324713: ;
    MEM32(ebp + 0x354) = 3;
    goto loc_00324737;

loc_0032471F: ;
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0032472Du); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_0032472D: ;
    MEM32(ebp + 0x354) = 2;

loc_00324737: ;
    edi = MEM32(esp + 0x118);
    eax = MEM32(ebp + 0x354);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_003247C1; /* jne: not equal / not zero */

loc_00324749: ;
    PUSH32(esp, 0x828394);
    edx = edi + 0x4C;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    MEM8(0x8FC658) = 0;
    PUSH32(esp, 0x00324768u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324768: ;
    ecx = esp + 0x24;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324777u); RECOMP_ABI_CALL(0x00508450u, sub_00508450); /* call 0x00508450 */

loc_00324777: ;
    SET_LO8(eax, MEM8(0x8FC658));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x31 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003247C1; /* jne: not equal / not zero */

loc_00324783: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x0032478Cu); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_0032478C: ;
    edi = MEM32(edi + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003247B7; /* je: equal / zero */

loc_00324793: ;
    PUSH32(esp, 0x40A00000);
    ecx = esp + 0x10;
    PUSH32(esp, 0x003247A1u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_003247A1: ;
    PUSH32(esp, eax);
    ecx = edi + 0x10;
    PUSH32(esp, 0x003247AAu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003247AA: ;
    ecx = esp + 0xC;
    PUSH32(esp, 0x003247B3u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003247B3: ;
    MEM8(edi + 0xC) = 1;

loc_003247B7: ;
    MEM32(ebp + 0x354) = 3;

loc_003247C1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x108) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x108;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00324890
 * Original: 0x00324890 - 0x003248FB (107 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324890(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324890: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM8(ecx + 0x20) = 0;
    eax = ecx + 0x60;
    edx = 0xB;

loc_003248A2: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003248A2; /* jne: not equal / not zero */

loc_003248AB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0xC;
    PUSH32(esp, 0x7E63F0);
    PUSH32(esp, eax);
    edi = ecx + 0x320;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x003248C7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003248C7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 8;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003248D6u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003248D6: ;
    ecx = eax;
    PUSH32(esp, 0x003248DDu); RECOMP_ABI_CALL(0x0001C720u, sub_0001C720); /* call 0x0001C720 */

loc_003248DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003248E3; /* jne: not equal / not zero */

loc_003248E1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003248E3: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x827BB4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003248EFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003248EF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00324920
 * Original: 0x00324920 - 0x00324D32 (1042 bytes, 328 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00324920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00324920: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x12C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00324D29; /* jl: less (signed <) */

loc_0032493C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00324D29; /* jge: greater or equal (signed >=) */

loc_00324945: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0032494Au); RECOMP_ABI_CALL(0x00013373u, sub_00013373); /* call 0x00013373 */

loc_0032494A: ;
    ecx = (uint32_t)(int32_t)SMEM8(edi + 0x8F6F4C);
    eax = ecx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x14;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = MEM32(ecx * 4 + 0x8E8FA8);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0x30);
    eax = (uint32_t)(int32_t)SMEM8(0x8F6A24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0xC) = ecx;
    ebx = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00324998; /* je: equal / zero */

loc_00324978: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324998; /* je: equal / zero */

loc_0032497D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324998; /* je: equal / zero */

loc_00324982: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324998; /* je: equal / zero */

loc_00324987: ;
    edx = MEM32(edi * 4 + 0x8C445C);
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324996u); RECOMP_ABI_CALL(0x00017AAEu, sub_00017AAE); /* call 0x00017AAE */

loc_00324996: ;
    goto loc_003249AB;

loc_00324998: ;
    PUSH32(esp, 0x40);
    eax = esi + 0x20;
    PUSH32(esp, 0x828458);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003249A8u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003249A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003249AB: ;
    PUSH32(esp, 0x10);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x827F1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003249BCu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_003249BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003249C5u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_003249C5: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003249CCu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_003249CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003249D7; /* jne: not equal / not zero */

loc_003249D0: ;
    MEM16(esp + 0x28) = 0x23;

loc_003249D7: ;
    edx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x778);
    ecx = 0x20;
    edi = esp + 0x38;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = 0x20;
    edi = esp + 0xB8;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    edi = edx + eax;
    ecx = edi + 0x8F5BF0;
    PUSH32(esp, ecx);
    edx = esp + 0x3C;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324A1Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324A1A: ;
    eax = edi + 0x8F5C00;
    PUSH32(esp, eax);
    ecx = esp + 0xC8;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324A33u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324A33: ;
    eax = esp + 0x50;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 1;
    /* nop */

loc_00324A40: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00324A40; /* jne: not equal / not zero */

loc_00324A47: ;
    ecx = esp + 0xB8;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + 1;
    MEM32(esp + 0x10) = edx;

loc_00324A57: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00324A57; /* jne: not equal / not zero */

loc_00324A5E: ;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x14 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00324A73; /* jbe: below or equal (unsigned <=) */

loc_00324A69: ;
    MEM8(esp + 0x39) = 0x2E;
    MEM8(esp + 0x3A) = 0;

loc_00324A73: ;
    edx = MEM32(edi + 0x8F5C2C);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    ecx = esp + 0x3C;
    PUSH32(esp, ecx);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    eax = esp + 0x34;
    PUSH32(esp, eax);
    ecx = esi + 0x60;
    PUSH32(esp, 0x828448);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324A9Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324A9F: ;
    ecx = MEM32(0x8F9CCC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324ADD; /* je: equal / zero */

loc_00324AAC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324AB1u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00324AB1: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00324AB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324AB5u); } /* indirect call */
    }

loc_00324AB8: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, 3);
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00324AC7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324AC4u); } /* indirect call */
    }

loc_00324AC7: ;
    edx = esi + 0x320;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324AD4u); RECOMP_ABI_CALL(0x000133A5u, sub_000133A5); /* call 0x000133A5 */

loc_00324AD4: ;
    ecx = MEM32(0x8F9CCC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324ADD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324AE2u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00324AE2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00324AE9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324AE6u); } /* indirect call */
    }

loc_00324AE9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x12 (32-bit) */
    edi = eax;
    PUSH32(esp, 0x3F);
    if (CMP_GE(_fas, _fbs)) goto loc_00324C1F; /* jge: greater or equal (signed >=) */

loc_00324AF6: ;
    eax = esi + 0xA0;
    PUSH32(esp, 0x828438);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324B07u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324B07: ;
    PUSH32(esp, 0x3F);
    ecx = esi + 0xE0;
    PUSH32(esp, 0x828428);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324B1Au); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324B1A: ;
    PUSH32(esp, 0x3F);
    edx = esi + 0x120;
    PUSH32(esp, 0x828418);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324B2Du); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324B2D: ;
    PUSH32(esp, 0x3F);
    eax = esi + 0x160;
    PUSH32(esp, 0x82840C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324B40u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324B40: ;
    eax = MEM32(esp + 0x3C);
    edx = MEM32(edi);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00324B52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324B4Fu); } /* indirect call */
    }

loc_00324B52: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00324B65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324B62u); } /* indirect call */
    }

loc_00324B65: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00324B78u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324B75u); } /* indirect call */
    }

loc_00324B78: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324B8Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324B8E: ;
    PUSH32(esp, 0x3F);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esi + 0x1A0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324BA1u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324BA1: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ecx);
    edx = esp + 0x34;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324BB5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324BB5: ;
    PUSH32(esp, 0x3F);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    ecx = esi + 0x1E0;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324BC8u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324BC8: ;
    edx = MEM32(esp + 0x40);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x4C;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324BDEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324BDE: ;
    PUSH32(esp, 0x3F);
    ecx = esp + 0x58;
    PUSH32(esp, ecx);
    edx = esi + 0x220;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324BF1u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324BF1: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, 0x828408);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324C04u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324C04: ;
    PUSH32(esp, 0x3F);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    edx = esi + 0x260;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324C17u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324C17: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00324D0B;

loc_00324C1F: ;
    eax = esi + 0xE0;
    PUSH32(esp, 0x8283F0);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324C30u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324C30: ;
    PUSH32(esp, 0x3F);
    ecx = esi + 0x120;
    PUSH32(esp, 0x7E1674);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324C43u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324C43: ;
    PUSH32(esp, 0x3F);
    edx = esi + 0x160;
    PUSH32(esp, 0x7E1660);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324C56u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324C56: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(edi);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00324C68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324C65u); } /* indirect call */
    }

loc_00324C68: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00324C7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324C78u); } /* indirect call */
    }

loc_00324C7B: ;
    ebx = MEM32(esp + 0x14);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00324C8B; /* jne: not equal / not zero */

loc_00324C85: ;
    MEM32(esp + 0x10) = eax;
    goto loc_00324C99;

loc_00324C8B: ;
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(esp + 0x10) = eax;

loc_00324C99: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324CA9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324CA9: ;
    PUSH32(esp, 0x3F);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    eax = esi + 0x1E0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324CBCu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324CBC: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    ecx = esp + 0x34;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324CCEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324CCE: ;
    PUSH32(esp, 0x3F);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    eax = esi + 0x220;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324CE1u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324CE1: ;
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    edx = esp + 0x4C;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324CF5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324CF5: ;
    PUSH32(esp, 0x3F);
    eax = esp + 0x58;
    PUSH32(esp, eax);
    ecx = esi + 0x260;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00324D08u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324D08: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324D0B: ;
    edx = MEM32(esp + 0xC);
    MEM32(esi + 0x350) = 2;
    MEM32(esi + 0x358) = edx;
    MEM32(esi + 0x354) = 1;

loc_00324D29: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00324E40
 * Original: 0x00324E40 - 0x003254AB (1643 bytes, 533 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324E40(void)
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

loc_00324E40: ;
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x2C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00324E65; /* je: equal / zero */

loc_00324E59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324E65; /* je: equal / zero */

loc_00324E5D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324E65; /* je: equal / zero */

loc_00324E61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00324E6A;

loc_00324E65: ;
    eax = 1;

loc_00324E6A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebp = ecx;
    ecx = edi;
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x00324E7Eu); RECOMP_ABI_CALL(0x00013373u, sub_00013373); /* call 0x00013373 */

loc_00324E7E: ;
    PUSH32(esp, 0x10);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x827F1C);
    PUSH32(esp, 0x00324E8Fu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00324E8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324E98u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00324E98: ;
    ecx = eax;
    PUSH32(esp, 0x00324E9Fu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00324E9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00324EAA; /* jne: not equal / not zero */

loc_00324EA3: ;
    MEM16(esp + 0x48) = 0x23;

loc_00324EAA: ;
    ebx = MEM32(esp + 0x15C);
    esi = MEM32(esp + 0x160);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 0x8F5C00;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x8F5C2C);
    ecx = eax + 0x8F5BF0;
    PUSH32(esp, ecx);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = edi + 0x60;
    PUSH32(esp, 0x828448);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324EF4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324EF4: ;
    ecx = MEM32(0x8F9CCC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324F28; /* je: equal / zero */

loc_00324F01: ;
    PUSH32(esp, 0x00324F06u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00324F06: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00324F0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324F0Au); } /* indirect call */
    }

loc_00324F0D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00324F18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324F15u); } /* indirect call */
    }

loc_00324F18: ;
    ecx = edi + 0x320;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324F25u); RECOMP_ABI_CALL(0x000133A5u, sub_000133A5); /* call 0x000133A5 */

loc_00324F25: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324F28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00325054; /* jl: less (signed <) */

loc_00324F31: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00324F3D; /* jne: not equal / not zero */

loc_00324F35: ;
    MEM32(esp + 0x28) = 1;

loc_00324F3D: ;
    PUSH32(esp, 0x40);
    ecx = edi + 0x20;
    PUSH32(esp, 0x8284BC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324F4Du); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324F4D: ;
    PUSH32(esp, 0x3F);
    edx = edi + 0xA0;
    PUSH32(esp, 0x8284A8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00324F60u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324F60: ;
    PUSH32(esp, 0x3F);
    eax = edi + 0xE0;
    PUSH32(esp, 0x82849C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324F73u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324F73: ;
    PUSH32(esp, 0x3F);
    ecx = edi + 0x120;
    PUSH32(esp, 0x828494);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324F86u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324F86: ;
    PUSH32(esp, 0x3F);
    edx = edi + 0x160;
    PUSH32(esp, 0x7E1660);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00324F99u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324F99: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x7E5310);

loc_00324FA0: ;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1A0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00324FACu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324FAC: ;
    ecx = MEM32(0x8F9CCC);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00324FBAu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00324FBA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00324FC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324FBEu); } /* indirect call */
    }

loc_00324FC1: ;
    ecx = MEM32(0x8F9CCC);
    edi = eax;
    PUSH32(esp, 0x00324FCEu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00324FCE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00324FD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324FD2u); } /* indirect call */
    }

loc_00324FD5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebp = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_003250BC; /* jge: greater or equal (signed >=) */

loc_00325001: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0032500Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325008u); } /* indirect call */
    }

loc_0032500B: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    MEM32(esp + 0x3C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0032501Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325018u); } /* indirect call */
    }

loc_0032501B: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    MEM32(esp + 0x38) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    MEM32(esp + 0x44) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00325035u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325032u); } /* indirect call */
    }

loc_00325035: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ebp);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00325045u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325042u); } /* indirect call */
    }

loc_00325045: ;
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x38);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003250FE;

loc_00325054: ;
    PUSH32(esp, 0x40);
    edx = edi + 0x20;
    PUSH32(esp, 0x828484);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00325064u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00325064: ;
    PUSH32(esp, 0x3F);
    eax = edi + 0xA0;
    PUSH32(esp, 0x828438);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00325077u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00325077: ;
    PUSH32(esp, 0x3F);
    ecx = edi + 0xE0;
    PUSH32(esp, 0x828428);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032508Au); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032508A: ;
    PUSH32(esp, 0x3F);
    edx = edi + 0x120;
    PUSH32(esp, 0x828418);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032509Du); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032509D: ;
    PUSH32(esp, 0x3F);
    eax = edi + 0x160;
    PUSH32(esp, 0x82840C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003250B0u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003250B0: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x7E1540);
    goto loc_00324FA0;

loc_003250BC: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003250C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003250C3u); } /* indirect call */
    }

loc_003250C6: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003250D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003250CFu); } /* indirect call */
    }

loc_003250D2: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003250DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003250DBu); } /* indirect call */
    }

loc_003250DE: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003250EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003250E7u); } /* indirect call */
    }

loc_003250EA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = edx;

loc_003250FE: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0032529F; /* je: equal / zero */

loc_0032510A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003252C3; /* jne: not equal / not zero */

loc_00325111: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    eax = MEM32(edi);
    ecx = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_00325174; /* jge: greater or equal (signed >=) */

loc_0032511A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00325122u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032511Fu); } /* indirect call */
    }

loc_00325122: ;
    edx = MEM32(esp + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    ebp = eax;
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00325137u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325134u); } /* indirect call */
    }

loc_00325137: ;
    _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00325152u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032514Fu); } /* indirect call */
    }

loc_00325152: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x2C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00325169u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325166u); } /* indirect call */
    }

loc_00325169: ;
    edi = eax;
    _fb = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003252CB;

loc_00325174: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0032517Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325179u); } /* indirect call */
    }

loc_0032517C: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0032518Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032518Au); } /* indirect call */
    }

loc_0032518D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0032519Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032519Bu); } /* indirect call */
    }

loc_0032519E: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003251AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003251ACu); } /* indirect call */
    }

loc_003251AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003251C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003251BDu); } /* indirect call */
    }

loc_003251C0: ;
    PUSH32(esp, 0);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x003251CBu); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_003251CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032521B; /* jne: not equal / not zero */

loc_003251D2: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003251DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003251DBu); } /* indirect call */
    }

loc_003251DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032521B; /* je: equal / zero */

loc_003251E2: ;
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ebx * 4 + 0x8F0040);
    ecx = MEM32(eax * 4 + 0x8F0040);
    SET_LO16(eax, MEM16(edx + 0x18));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x18)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx + 0x18) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032520E; /* jle: less or equal (signed <=) */

loc_0032520A: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0032520E: ;
    PUSH32(esp, 0x00325213u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_00325213: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032521B; /* je: equal / zero */

loc_00325217: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0032521B: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00325227u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325224u); } /* indirect call */
    }

loc_00325227: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0032523Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032523Au); } /* indirect call */
    }

loc_0032523D: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ebx);
    ecx = edi;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00325254u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325251u); } /* indirect call */
    }

loc_00325254: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0032526Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325268u); } /* indirect call */
    }

loc_0032526B: ;
    PUSH32(esp, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00325296u); RECOMP_ABI_CALL(0x00030F1Du, sub_00030F1D); /* call 0x00030F1D */

loc_00325296: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003252C3;

loc_0032529F: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;

loc_003252C3: ;
    edi = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x10);

loc_003252CB: ;
    PUSH32(esp, ebp);
    edx = esp + 0x5C;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003252DBu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003252DB: ;
    PUSH32(esp, 0x3F);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    esi = MEM32(esp + 0x3C);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esi + 0x1E0;
    PUSH32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_003253AA; /* jge: greater or equal (signed >=) */

loc_003252F6: ;
    PUSH32(esp, 0x003252FBu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003252FB: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032530Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032530F: ;
    PUSH32(esp, 0x3F);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    edx = esi + 0x220;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00325325u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00325325: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032533Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032533C: ;
    PUSH32(esp, 0x3F);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    eax = esi + 0x260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00325352u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00325352: ;
    ecx = MEM32(esp + 0x64);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, 0x828408);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00325369u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00325369: ;
    PUSH32(esp, 0x3F);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esi + 0x2A0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032537Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032537C: ;
    PUSH32(esp, edi);
    edx = esp + 0x74;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032538Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032538C: ;
    PUSH32(esp, 0x3F);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esi + 0x2E0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003253A2u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003253A2: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00325484;

loc_003253AA: ;
    PUSH32(esp, 0x003253AFu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003253AF: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003253C3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003253C3: ;
    PUSH32(esp, 0x3F);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    edx = esi + 0x220;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003253D9u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003253D9: ;
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x60;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x828478)); /* fmul qword ptr [0x828478] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x82846C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003253F8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003253F8: ;
    PUSH32(esp, 0x3F);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esi + 0x260;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032540Bu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032540B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00325435; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0032541D: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00325430u); RECOMP_ABI_CALL(0x0001271Bu, sub_0001271B); /* call 0x0001271B */

loc_00325430: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00325447;

loc_00325435: ;
    edx = esp + 0x58;
    PUSH32(esp, 0x7E94C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00325444u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00325444: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00325447: ;
    PUSH32(esp, 0x3F);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esi + 0x2A0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032545Au); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032545A: ;
    PUSH32(esp, edi);
    edx = esp + 0x68;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032546Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032546A: ;
    PUSH32(esp, 0x3F);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x2E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2E0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032547Du); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032547D: ;
    esi = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00325484: ;
    POP32(esp, edi);
    MEM32(esi + 0x358) = ebx;
    MEM32(esi + 0x350) = 4;
    MEM32(esi + 0x354) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00324E4F
 * Original: 0x00324E4F - 0x003254AB (1628 bytes, 528 insns)
 * Category: game_io
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00324E4F(void)
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

loc_00324E4F: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x2C) = edi;
    if (_flags /* je: equal / zero */) goto loc_00324E65;

loc_00324E59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324E65; /* je: equal / zero */

loc_00324E5D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324E65; /* je: equal / zero */

loc_00324E61: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00324E6A;

loc_00324E65: ;
    eax = 1;

loc_00324E6A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ebp = ecx;
    ecx = edi;
    MEM32(esp + 0x28) = ebp;
    PUSH32(esp, 0x00324E7Eu); RECOMP_ABI_CALL(0x00013373u, sub_00013373); /* call 0x00013373 */

loc_00324E7E: ;
    PUSH32(esp, 0x10);
    edx = esp + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x827F1C);
    PUSH32(esp, 0x00324E8Fu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00324E8F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324E98u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00324E98: ;
    ecx = eax;
    PUSH32(esp, 0x00324E9Fu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00324E9F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00324EAA; /* jne: not equal / not zero */

loc_00324EA3: ;
    MEM16(esp + 0x48) = 0x23;

loc_00324EAA: ;
    ebx = MEM32(esp + 0x15C);
    esi = MEM32(esp + 0x160);
    eax = ebx;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x778);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax + 0x8F5C00;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0x8F5C2C);
    ecx = eax + 0x8F5BF0;
    PUSH32(esp, ecx);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0x7F;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edx);
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = edi + 0x60;
    PUSH32(esp, 0x828448);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324EF4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00324EF4: ;
    ecx = MEM32(0x8F9CCC);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00324F28; /* je: equal / zero */

loc_00324F01: ;
    PUSH32(esp, 0x00324F06u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00324F06: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00324F0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324F0Au); } /* indirect call */
    }

loc_00324F0D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00324F18u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324F15u); } /* indirect call */
    }

loc_00324F18: ;
    ecx = edi + 0x320;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324F25u); RECOMP_ABI_CALL(0x000133A5u, sub_000133A5); /* call 0x000133A5 */

loc_00324F25: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00324F28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00325054; /* jl: less (signed <) */

loc_00324F31: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00324F3D; /* jne: not equal / not zero */

loc_00324F35: ;
    MEM32(esp + 0x28) = 1;

loc_00324F3D: ;
    PUSH32(esp, 0x40);
    ecx = edi + 0x20;
    PUSH32(esp, 0x8284BC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324F4Du); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324F4D: ;
    PUSH32(esp, 0x3F);
    edx = edi + 0xA0;
    PUSH32(esp, 0x8284A8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00324F60u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324F60: ;
    PUSH32(esp, 0x3F);
    eax = edi + 0xE0;
    PUSH32(esp, 0x82849C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00324F73u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324F73: ;
    PUSH32(esp, 0x3F);
    ecx = edi + 0x120;
    PUSH32(esp, 0x828494);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00324F86u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324F86: ;
    PUSH32(esp, 0x3F);
    edx = edi + 0x160;
    PUSH32(esp, 0x7E1660);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00324F99u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324F99: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x7E5310);

loc_00324FA0: ;
    _fb = (uint32_t)(0x1A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1A0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00324FACu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00324FAC: ;
    ecx = MEM32(0x8F9CCC);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00324FBAu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00324FBA: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x00324FC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324FBEu); } /* indirect call */
    }

loc_00324FC1: ;
    ecx = MEM32(0x8F9CCC);
    edi = eax;
    PUSH32(esp, 0x00324FCEu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00324FCE: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x00324FD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00324FD2u); } /* indirect call */
    }

loc_00324FD5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ebp = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    ecx = ebp;
    if (CMP_GE(_fas, _fbs)) goto loc_003250BC; /* jge: greater or equal (signed >=) */

loc_00325001: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x0032500Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325008u); } /* indirect call */
    }

loc_0032500B: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    MEM32(esp + 0x3C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0032501Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325018u); } /* indirect call */
    }

loc_0032501B: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    MEM32(esp + 0x38) = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    MEM32(esp + 0x44) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x00325035u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325032u); } /* indirect call */
    }

loc_00325035: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    MEM32(esp + 0x44) = eax;
    eax = MEM32(ebp);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x00325045u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325042u); } /* indirect call */
    }

loc_00325045: ;
    MEM32(esp + 0x40) = eax;
    eax = MEM32(esp + 0x38);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003250FE;

loc_00325054: ;
    PUSH32(esp, 0x40);
    edx = edi + 0x20;
    PUSH32(esp, 0x828484);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00325064u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00325064: ;
    PUSH32(esp, 0x3F);
    eax = edi + 0xA0;
    PUSH32(esp, 0x828438);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00325077u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00325077: ;
    PUSH32(esp, 0x3F);
    ecx = edi + 0xE0;
    PUSH32(esp, 0x828428);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032508Au); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032508A: ;
    PUSH32(esp, 0x3F);
    edx = edi + 0x120;
    PUSH32(esp, 0x828418);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032509Du); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032509D: ;
    PUSH32(esp, 0x3F);
    eax = edi + 0x160;
    PUSH32(esp, 0x82840C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003250B0u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003250B0: ;
    PUSH32(esp, 0x3F);
    PUSH32(esp, 0x7E1540);
    goto loc_00324FA0;

loc_003250BC: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003250C6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003250C3u); } /* indirect call */
    }

loc_003250C6: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003250D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003250CFu); } /* indirect call */
    }

loc_003250D2: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003250DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003250DBu); } /* indirect call */
    }

loc_003250DE: ;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x003250EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003250E7u); } /* indirect call */
    }

loc_003250EA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = edx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x3C) = edx;
    MEM32(esp + 0x40) = edx;

loc_003250FE: ;
    ecx = MEM32(esp + 0x28);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0032529F; /* je: equal / zero */

loc_0032510A: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003252C3; /* jne: not equal / not zero */

loc_00325111: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    eax = MEM32(edi);
    ecx = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_00325174; /* jge: greater or equal (signed >=) */

loc_0032511A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00325122u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032511Fu); } /* indirect call */
    }

loc_00325122: ;
    edx = MEM32(esp + 0x30);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, 0);
    ebp = eax;
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00325137u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325134u); } /* indirect call */
    }

loc_00325137: ;
    _fb = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x00325152u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032514Fu); } /* indirect call */
    }

loc_00325152: ;
    ecx = MEM32(esp + 0x3C);
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x2C) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00325169u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325166u); } /* indirect call */
    }

loc_00325169: ;
    edi = eax;
    _fb = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(esp + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003252CB;

loc_00325174: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0032517Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325179u); } /* indirect call */
    }

loc_0032517C: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x20) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x0032518Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032518Au); } /* indirect call */
    }

loc_0032518D: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0032519Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032519Bu); } /* indirect call */
    }

loc_0032519E: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xD);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEM32(esp + 0x28) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003251AFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003251ACu); } /* indirect call */
    }

loc_003251AF: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0xB);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edi);
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003251C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003251BDu); } /* indirect call */
    }

loc_003251C0: ;
    PUSH32(esp, 0);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x003251CBu); RECOMP_ABI_CALL(0x0002ED2Bu, sub_0002ED2B); /* call 0x0002ED2B */

loc_003251CB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032521B; /* jne: not equal / not zero */

loc_003251D2: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003251DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003251DBu); } /* indirect call */
    }

loc_003251DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032521B; /* je: equal / zero */

loc_003251E2: ;
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ebx * 4 + 0x8F0040);
    ecx = MEM32(eax * 4 + 0x8F0040);
    SET_LO16(eax, MEM16(edx + 0x18));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 0x18)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ecx + 0x18) (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0032520E; /* jle: less or equal (signed <=) */

loc_0032520A: ;
    MEM32(esp + 0x14) = MEM32(esp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0032520E: ;
    PUSH32(esp, 0x00325213u); RECOMP_ABI_CALL(0x0001C095u, sub_0001C095); /* call 0x0001C095 */

loc_00325213: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032521B; /* je: equal / zero */

loc_00325217: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0032521B: ;
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x00325227u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325224u); } /* indirect call */
    }

loc_00325227: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 5);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = ebp;
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0032523Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032523Au); } /* indirect call */
    }

loc_0032523D: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 6);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    PUSH32(esp, ebx);
    ecx = edi;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x00325254u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325251u); } /* indirect call */
    }

loc_00325254: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 7);
    PUSH32(esp, 0);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = edi;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x0032526Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325268u); } /* indirect call */
    }

loc_0032526B: ;
    PUSH32(esp, 1);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x34); /* addss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x50); /* addss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00325296u); RECOMP_ABI_CALL(0x00030F1Du, sub_00030F1D); /* call 0x00030F1D */

loc_00325296: ;
    MEMF(esp + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003252C3;

loc_0032529F: ;
    ecx = MEM32(esp + 0x30);
    edx = MEM32(esp + 0x34);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 0x40);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(esp + 0x3C);
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = ecx;

loc_003252C3: ;
    edi = MEM32(esp + 0x20);
    ebp = MEM32(esp + 0x10);

loc_003252CB: ;
    PUSH32(esp, ebp);
    edx = esp + 0x5C;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003252DBu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003252DB: ;
    PUSH32(esp, 0x3F);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x12) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x12 (32-bit) */
    esi = MEM32(esp + 0x3C);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esi + 0x1E0;
    PUSH32(esp, ecx);
    if (CMP_GE(_fas, _fbs)) goto loc_003253AA; /* jge: greater or equal (signed >=) */

loc_003252F6: ;
    PUSH32(esp, 0x003252FBu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003252FB: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032530Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032530F: ;
    PUSH32(esp, 0x3F);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    edx = esi + 0x220;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00325325u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00325325: ;
    eax = MEM32(esp + 0x48);
    PUSH32(esp, eax);
    ecx = esp + 0x8C;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032533Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032533C: ;
    PUSH32(esp, 0x3F);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    eax = esi + 0x260;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00325352u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00325352: ;
    ecx = MEM32(esp + 0x64);
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x5C;
    PUSH32(esp, 0x828408);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00325369u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00325369: ;
    PUSH32(esp, 0x3F);
    eax = esp + 0x68;
    PUSH32(esp, eax);
    ecx = esi + 0x2A0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032537Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032537C: ;
    PUSH32(esp, edi);
    edx = esp + 0x74;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032538Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032538C: ;
    PUSH32(esp, 0x3F);
    eax = esp + 0x80;
    PUSH32(esp, eax);
    ecx = esi + 0x2E0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003253A2u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003253A2: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00325484;

loc_003253AA: ;
    PUSH32(esp, 0x003253AFu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003253AF: ;
    edx = MEM32(esp + 0x2C);
    PUSH32(esp, edx);
    eax = esp + 0x74;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003253C3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003253C3: ;
    PUSH32(esp, 0x3F);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    edx = esi + 0x220;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003253D9u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003253D9: ;
    fp_push((double)SMEM32(esp + 0x48)); /* fild */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x60;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x828478)); /* fmul qword ptr [0x828478] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x82846C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003253F8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003253F8: ;
    PUSH32(esp, 0x3F);
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esi + 0x260;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032540Bu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032540B: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AA840); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00325435; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AA840)) */

loc_0032541D: ;
    eax = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00325430u); RECOMP_ABI_CALL(0x0001271Bu, sub_0001271B); /* call 0x0001271B */

loc_00325430: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00325447;

loc_00325435: ;
    edx = esp + 0x58;
    PUSH32(esp, 0x7E94C4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00325444u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00325444: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00325447: ;
    PUSH32(esp, 0x3F);
    eax = esp + 0x5C;
    PUSH32(esp, eax);
    ecx = esi + 0x2A0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032545Au); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032545A: ;
    PUSH32(esp, edi);
    edx = esp + 0x68;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032546Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032546A: ;
    PUSH32(esp, 0x3F);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x2E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2E0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032547Du); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032547D: ;
    esi = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00325484: ;
    POP32(esp, edi);
    MEM32(esi + 0x358) = ebx;
    MEM32(esi + 0x350) = 4;
    MEM32(esi + 0x354) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0032544E
 * Original: 0x0032544E - 0x003254AB (93 bytes, 25 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032544E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032544E: ;
    ecx = esi + 0x2A0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0032545Au); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032545A: ;
    PUSH32(esp, edi);
    edx = esp + 0x68;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032546Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032546A: ;
    PUSH32(esp, 0x3F);
    eax = esp + 0x74;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x2E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x2E0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032547Du); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0032547D: ;
    esi = MEM32(esp + 0x50);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 0x358) = ebx;
    MEM32(esi + 0x350) = 4;
    MEM32(esi + 0x354) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x148) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x148;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00325650
 * Original: 0x00325650 - 0x003259B6 (870 bytes, 248 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325650: ;
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xF0);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00325678; /* jne: not equal / not zero */

loc_00325667: ;
    eax = MEM32(esp + 0xF8);
    ebx = eax + eax * 2;
    ebx = ebx * 2 + 0x895B50;

loc_00325678: ;
    ebp = (uint32_t)(int32_t)SMEM8(ebx);
    edi = (uint32_t)(int32_t)SMEM8(ebx + 1);
    ecx = esi;
    MEM32(esp + 0x18) = ebp;
    MEM32(esp + 0x1C) = edi;
    PUSH32(esp, 0x0032568Eu); RECOMP_ABI_CALL(0x00013373u, sub_00013373); /* call 0x00013373 */

loc_0032568E: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 3);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003259A9; /* ja: above (unsigned >) */

loc_0032569C: ;
    eax = ZX8(MEM8(eax + 0x3259CC));
    { uint32_t _jt = MEM32(eax * 4 + 0x3259B8); /* switch: 5 entries, 5 targets */
    if (_jt == 0x003256AAu) goto loc_003256AA;
    if (_jt == 0x003256B9u) goto loc_003256B9;
    if (_jt == 0x003256C8u) goto loc_003256C8;
    if (_jt == 0x003256D7u) goto loc_003256D7;
    if (_jt == 0x003259A9u) goto loc_003259A9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003256AA: ;
    MEM32(esp + 0x14) = 0x828570;
    eax = 0x828564;
    goto loc_003256E4;

loc_003256B9: ;
    MEM32(esp + 0x14) = 0x82854C;
    eax = 0x828538;
    goto loc_003256E4;

loc_003256C8: ;
    MEM32(esp + 0x14) = 0x828528;
    eax = 0x82851C;
    goto loc_003256E4;

loc_003256D7: ;
    MEM32(esp + 0x14) = 0x828500;
    eax = 0x8284EC;

loc_003256E4: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, eax);
    ecx = esi + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003256F0u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003256F0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x2D) = edx;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x25) = edx;
    PUSH32(esp, 0x10);
    eax = esp + 0x24;
    MEM32(esp + 0x2D) = edx;
    PUSH32(esp, eax);
    MEM16(esp + 0x35) = LO16(edx);
    PUSH32(esp, 0x827F1C);
    MEM8(esp + 0x2C) = 0;
    MEM8(esp + 0x3B) = LO8(edx);
    PUSH32(esp, 0x00325720u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00325720: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00325729u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00325729: ;
    ecx = eax;
    PUSH32(esp, 0x00325730u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00325730: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032573B; /* jne: not equal / not zero */

loc_00325734: ;
    MEM16(esp + 0x20) = 0x23;

loc_0032573B: ;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)0x778);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x54);
    eax = edi + ebp;
    ecx = eax + 0x8F5C00;
    edx = eax + 0x8F5BF0;
    eax = MEM32(eax + 0x8F5C2C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x7F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    edx = esi + 0x60;
    PUSH32(esp, 0x828448);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00325774u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00325774: ;
    eax = (uint32_t)(int32_t)SMEM8(ebx + 2);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032577Eu); RECOMP_ABI_CALL(0x0002DFCFu, sub_0002DFCF); /* call 0x0002DFCF */

loc_0032577E: ;
    edx = MEM32(esp + 0x30);
    MEM32(esp + 0x4C) = eax;
    MEM8(esp + 0x50) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x1F;
    edi = esp + 0x51;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x80);
    ecx = esp + 0x38;
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0x003257AEu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_003257AE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003257B7u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_003257B7: ;
    ecx = eax;
    PUSH32(esp, 0x003257BEu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_003257BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003257EA; /* jne: not equal / not zero */

loc_003257C2: ;
    eax = MEM32(0x8284DC);
    ecx = MEM32(0x8284E0);
    edx = MEM32(0x8284E4);
    MEM32(esp + 0x34) = eax;
    SET_LO16(eax, MEM16(0x8284E8));
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x3C) = edx;
    MEM16(esp + 0x40) = LO16(eax);

loc_003257EA: ;
    _fa = (uint32_t)(MEM8(ebx + 3)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 3), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003257FD; /* jne: not equal / not zero */

loc_003257F0: ;
    _fa = (uint32_t)(MEM16(ebx + 4)) & 0xFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 4), 0xFF (16-bit) */
    MEM8(esp + 0x13) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00325802; /* jne: not equal / not zero */

loc_003257FD: ;
    MEM8(esp + 0x13) = 0;

loc_00325802: ;
    edx = MEM32(esp + 0x30);
    MEM8(esp + 0xB4) = 0;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xF;
    edi = esp + 0xB5;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x40);
    ecx = esp + 0xB8;
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, 0x00325831u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00325831: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032583Au); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0032583A: ;
    ecx = eax;
    PUSH32(esp, 0x00325841u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00325841: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003258CF; /* je: equal / zero */

loc_00325849: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003258B1; /* je: equal / zero */

loc_00325851: ;
    PUSH32(esp, 0x8284CC);
    eax = esi + 0xA0;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00325867u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00325867: ;
    ecx = esp + 0xC0;
    PUSH32(esp, ecx);
    edx = esp + 0x44;
    PUSH32(esp, edx);
    eax = esi + 0x120;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00325880u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00325880: ;
    ebx = (uint32_t)(int32_t)SMEM16(ebx + 4);
    ecx = ebx;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = (uint32_t)(int32_t)SMEM8(ebp + ecx + 0x8F5BF0);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebp + 0x8F5C00;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi + 0x160;
    PUSH32(esp, 0x7E8F90);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003258ACu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003258AC: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003258EE;

loc_003258B1: ;
    edx = esp + 0xB4;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esi + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003258CAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003258CA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003258EA;

loc_003258CF: ;
    eax = esp + 0x34;
    edx = esi + 0xA0;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_003258E0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003258E0; /* jne: not equal / not zero */

loc_003258EA: ;
    ebx = MEM32(esp + 0x1C);

loc_003258EE: ;
    ebp = (uint32_t)(int32_t)SMEM16(0x896160);
    edi = esi + 0xE0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032592E; /* je: equal / zero */

loc_003258FF: ;
    PUSH32(esp, 0x00325904u); RECOMP_ABI_CALL(0x00014791u, sub_00014791); /* call 0x00014791 */

loc_00325904: ;
    ecx = eax;
    PUSH32(esp, 0x0032590Bu); RECOMP_ABI_CALL(0x0001FC9Au, sub_0001FC9A); /* call 0x0001FC9A */

loc_0032590B: ;
    eax = SX16(LO16(eax));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM16(0x896162)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x896162), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032591B; /* je: equal / zero */

loc_0032591A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0032591B: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ecx = 0x3C;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0032592Bu); RECOMP_ABI_CALL(0x00035D10u, sub_00035D10); /* call 0x00035D10 */

loc_0032592B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032592E: ;
    ecx = MEM32(0x8F9CCC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00325965; /* je: equal / zero */

loc_00325938: ;
    PUSH32(esp, 0x0032593Du); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0032593D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00325944u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325941u); } /* indirect call */
    }

loc_00325944: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00325953u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325950u); } /* indirect call */
    }

loc_00325953: ;
    ecx = esi + 0x320;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00325960u); RECOMP_ABI_CALL(0x000133A5u, sub_000133A5); /* call 0x000133A5 */

loc_00325960: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00325969;

loc_00325965: ;
    edi = MEM32(esp + 0x18);

loc_00325969: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x358) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00325998; /* je: equal / zero */

loc_00325977: ;
    POP32(esp, edi);
    MEM32(esi + 0x350) = 0;
    MEM32(esi + 0x354) = 1;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00325998: ;
    eax = 1;
    MEM32(esi + 0x350) = eax;
    MEM32(esi + 0x354) = eax;

loc_003259A9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003259B6
 * Original: 0x003259B6 - 0x00325AE0 (298 bytes, 270 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003259B6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003259B6: ;
    edi = edi;
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(eax) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = 0xC8003256u;
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(eax) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    PUSH32(esp, esi);
    SET_LO8(eax, LO8(eax) ^ MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3259) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x3259 (32-bit) */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx + eax) = MEM32(edx + eax) + eax;
    _fa = (uint32_t)(MEM32(edx + eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
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
 * sub_00325AE0
 * Original: 0x00325AE0 - 0x00325C2D (333 bytes, 100 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325AE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00325AE0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, 0x00325AEDu); RECOMP_ABI_CALL(0x00013373u, sub_00013373); /* call 0x00013373 */

loc_00325AED: ;
    ebx = MEM32(esp + 0x30);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    esi = MEM32(esp + 0x34);
    if (CMP_EQ(_fa, _fb)) goto loc_00325AFC; /* je: equal / zero */

loc_00325AF9: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xFFFFFFECu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00325AFC: ;
    PUSH32(esp, 0x10);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x827F1C);
    PUSH32(esp, 0x00325B0Du); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00325B0D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00325B16u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00325B16: ;
    ecx = eax;
    PUSH32(esp, 0x00325B1Du); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00325B1D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00325B28; /* jne: not equal / not zero */

loc_00325B21: ;
    MEM16(esp + 0xC) = 0x23;

loc_00325B28: ;
    ecx = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x54);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x778);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x8F5C2C);
    edx = esi + 0x8F5C00;
    PUSH32(esp, edx);
    eax = esi + 0x8F5BF0;
    PUSH32(esp, eax);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx & 0x7F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    eax = edi + 0x60;
    PUSH32(esp, 0x828448);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00325B62u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00325B62: ;
    eax = MEM32(esi + 0x8F5BDC);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00325B89; /* je: equal / zero */

loc_00325B71: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00325B7C; /* je: equal / zero */

loc_00325B76: ;
    MEM8(edi + 0x20) = 0;
    goto loc_00325B9C;

loc_00325B7C: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x82858C);
    ecx = edi + 0x20;
    PUSH32(esp, ecx);
    goto loc_00325B94;

loc_00325B89: ;
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x828580);
    edx = edi + 0x20;
    PUSH32(esp, edx);

loc_00325B94: ;
    PUSH32(esp, 0x00325B99u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00325B99: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00325B9C: ;
    eax = MEM32(esi + 0x8F5BDC);
    eax = eax & 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 5 (8-bit) */
    eax = MEM32(esi + 0x8F5C10);
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi + 0xA0;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00325BC1u); RECOMP_ABI_CALL(0x00018567u, sub_00018567); /* call 0x00018567 */

loc_00325BC1: ;
    eax = MEM32(esi + 0x8F5C10);
    edx = MEM32(esi + 0x8F5BDC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0xA) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 0x3FF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = edi + 0xE0;
    PUSH32(esp, eax);
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x00325BE8u); RECOMP_ABI_CALL(0x00022EA9u, sub_00022EA9); /* call 0x00022EA9 */

loc_00325BE8: ;
    eax = MEM32(0x8F9CCC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00325C0A; /* je: equal / zero */

loc_00325BF4: ;
    edx = MEM32(esi + 0x8F5BE8);
    ecx = edi + 0x320;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00325C07u); RECOMP_ABI_CALL(0x000133A5u, sub_000133A5); /* call 0x000133A5 */

loc_00325C07: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00325C0A: ;
    MEM32(edi + 0x358) = ebx;
    MEM32(edi + 0x350) = 7;
    MEM32(edi + 0x354) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00325C80
 * Original: 0x00325C80 - 0x00325CA7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325C80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00325C80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x00325C91u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00325C91: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00325CA1; /* je: equal / zero */

loc_00325C98: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00325C9Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00325C9E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00325CA1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00325CB0
 * Original: 0x00325CB0 - 0x00325DCB (283 bytes, 82 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00325CB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(edi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x48), 7 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00325CD8; /* je: equal / zero */

loc_00325CBE: ;
    PUSH32(esp, 0xC);
    eax = edi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00325CCEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00325CCE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = 7;

loc_00325CD8: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00325CFD; /* je: equal / zero */

loc_00325CDF: ;
    ecx = edi;
    PUSH32(esp, 0x00325CE6u); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_00325CE6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00325D9E; /* je: equal / zero */

loc_00325CEE: ;
    MEM8(esi + 0xD) = 0;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00325D9E; /* jne: not equal / not zero */

loc_00325CFD: ;
    eax = MEM32(esi + 0x20);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00325DA3; /* je: equal / zero */

loc_00325D07: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00325D7A; /* je: equal / zero */

loc_00325D0A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00325D9E; /* jne: not equal / not zero */

loc_00325D11: ;
    PUSH32(esp, 0x8285A8);
    ecx = edi;
    PUSH32(esp, 0x00325D1Du); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_00325D1D: ;
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x828598);
    ecx = edi;
    PUSH32(esp, 0x00325D2Eu); RECOMP_ABI_CALL(0x000227BFu, sub_000227BF); /* call 0x000227BF */

loc_00325D2E: ;
    _fa = (uint32_t)(MEM8(0x8FC658)) & 0xFFu; _fb = (uint32_t)(0x31) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x8FC658), 0x31 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00325D9E; /* jne: not equal / not zero */

loc_00325D37: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x00325D40u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00325D40: ;
    eax = MEM32(esi + 0x744);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(0x7AD42C)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00325D5A; /* je: equal / zero */

loc_00325D52: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AD448)); /* movss */

loc_00325D5A: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 7);
    ecx = edi;
    PUSH32(esp, 0x00325D6Eu); RECOMP_ABI_CALL(0x0001E30Eu, sub_0001E30E); /* call 0x0001E30E */

loc_00325D6E: ;
    POP32(esp, edi);
    MEM32(esi + 0x20) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00325D7A: ;
    ecx = MEM32(esi + 0x74C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    MEM32(esi + 0x74C) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00325D9E; /* jl: less (signed <) */

loc_00325D8E: ;
    PUSH32(esp, 0x00325D93u); RECOMP_ABI_CALL(0x00016A2Du, sub_00016A2D); /* call 0x00016A2D */

loc_00325D93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00325D9E; /* jne: not equal / not zero */

loc_00325D97: ;
    MEM32(esi + 0x20) = 3;

loc_00325D9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00325DA3: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00325DABu); RECOMP_ABI_CALL(0x00014F39u, sub_00014F39); /* call 0x00014F39 */

loc_00325DAB: ;
    eax = MEM32(esi + 0x744);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00325D97; /* jne: not equal / not zero */

loc_00325DB5: ;
    POP32(esp, edi);
    MEM32(esi + 0x20) = 2;
    MEM32(esi + 0x74C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00325E20
 * Original: 0x00325E20 - 0x00325F3F (287 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325E20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325E20: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0x24;
    ecx = 0xF;

loc_00325E31: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00325E31; /* jne: not equal / not zero */

loc_00325E3A: ;
    ebx = ebp + 0x3E4;
    eax = ebx;
    ecx = 3;

loc_00325E47: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00325E47; /* jne: not equal / not zero */

loc_00325E52: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x00325E5Du); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00325E5D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00325E64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325E61u); } /* indirect call */
    }

loc_00325E64: ;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00325E68: ;
    eax = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x84); PUSH32(esp, 0x00325E75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325E6Fu); } /* indirect call */
    }

loc_00325E75: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ecx = edi;
    MEM32(esp + esi * 4 + 0x18) = eax;
    { uint32_t _icall_target = MEM32(edx + 0x84); PUSH32(esp, 0x00325E86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325E80u); } /* indirect call */
    }

loc_00325E86: ;
    MEM32(esp + esi * 4 + 0x28) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00325E68; /* jl: less (signed <) */

loc_00325E90: ;
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    edx = MEM32(esp + 0x30);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    _fb = (uint32_t)(0x8F6378) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F6378;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x8F6378) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8F6378;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    _fb = (uint32_t)(0x8F6378) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x8F6378;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F6378) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F6378;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x8F6378) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8F6378;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x8285C4);
    _fb = (uint32_t)(0x504) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x504;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00325EE5u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00325EE5: ;
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x38);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    ecx = MEM32(esp + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    _fb = (uint32_t)(0x8F5C00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x8F5C00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x8F5C00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5C00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x34);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    _fb = (uint32_t)(0x8F5C00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x8F5C00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x8F5C00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x8F5C00;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x8F5C00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8F5C00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x8285C4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00325F34u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00325F34: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00325F90
 * Original: 0x00325F90 - 0x00326249 (697 bytes, 213 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00325F90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00325F90: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = esi + 0x24;
    PUSH32(esp, edi);
    eax = ebx;
    ecx = 0xF;

loc_00325FA5: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00325FA5; /* jne: not equal / not zero */

loc_00325FAE: ;
    eax = esi + 0x3E4;
    ecx = 3;
    /* nop */

loc_00325FC0: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00325FC0; /* jne: not equal / not zero */

loc_00325FCB: ;
    SET_LO16(ecx, MEM16(0x8F6B76));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(0x8F6BD2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(0x8F6BD2) (16-bit) */
    ecx = MEM32(0x8F9CCC);
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    edi = eax;
    PUSH32(esp, 0x00325FEBu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_00325FEB: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00325FF2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325FEFu); } /* indirect call */
    }

loc_00325FF2: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00325FFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00325FF9u); } /* indirect call */
    }

loc_00325FFC: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00326008u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326008: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6A24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003261E8; /* ja: above (unsigned >) */

loc_0032601C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x32624C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00326023u) goto loc_00326023;
    if (_jt == 0x0032606Du) goto loc_0032606D;
    if (_jt == 0x003260B7u) goto loc_003260B7;
    if (_jt == 0x003260FEu) goto loc_003260FE;
    if (_jt == 0x00326173u) goto loc_00326173;
    if (_jt == 0x003261E8u) goto loc_003261E8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00326023: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x828654);
    PUSH32(esp, 0x00326034u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00326034: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032603Du); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0032603D: ;
    ecx = eax;
    PUSH32(esp, 0x00326044u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00326044: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6A30);
    ecx = eax + 0x7D7;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7D6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326066u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326066: ;
    PUSH32(esp, 0);
    goto loc_003261B8;

loc_0032606D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x828638);
    PUSH32(esp, 0x0032607Eu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0032607E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326087u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00326087: ;
    ecx = eax;
    PUSH32(esp, 0x0032608Eu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0032608E: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6A30);
    ecx = eax + 0x7D7;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7D6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003260B0u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003260B0: ;
    PUSH32(esp, 3);
    goto loc_00326143;

loc_003260B7: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x828620);
    PUSH32(esp, 0x003260C8u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_003260C8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003260D1u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_003260D1: ;
    ecx = eax;
    PUSH32(esp, 0x003260D8u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_003260D8: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6A30);
    ecx = eax + 0x7D7;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7D6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003260FAu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003260FA: ;
    PUSH32(esp, 4);
    goto loc_00326143;

loc_003260FE: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x82860C);
    PUSH32(esp, 0x0032610Fu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_0032610F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326118u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00326118: ;
    ecx = eax;
    PUSH32(esp, 0x0032611Fu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_0032611F: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6A30);
    ecx = eax + 0x7D7;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7D6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326141u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326141: ;
    PUSH32(esp, 2);

loc_00326143: ;
    ecx = esi + 0xA4;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00326154u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326154: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x7E0D78);
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00326166u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326166: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00326173: ;
    PUSH32(esp, 0xFFFFFFFFu);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8285F0);
    PUSH32(esp, 0x00326184u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_00326184: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032618Du); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0032618D: ;
    ecx = eax;
    PUSH32(esp, 0x00326194u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00326194: ;
    eax = (uint32_t)(int32_t)SMEM8(0x8F6A30);
    ecx = eax + 0x7D7;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x7D6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x7D6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003261B6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003261B6: ;
    PUSH32(esp, 1);

loc_003261B8: ;
    ecx = esi + 0xA4;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003261C9u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003261C9: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003261DBu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003261DB: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003261E8: ;
    edx = esp + 0xC;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, edx);
    PUSH32(esp, 0x8285D8);
    PUSH32(esp, 0x003261F9u); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_003261F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326202u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_00326202: ;
    ecx = eax;
    PUSH32(esp, 0x00326209u); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_00326209: ;
    eax = esp + 0xC;
    ecx = esi + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00326217u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326217: ;
    PUSH32(esp, 1);
    edx = esi + 0xA4;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0032622Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032622A: ;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032623Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032623C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x80;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00326320
 * Original: 0x00326320 - 0x0032634C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00326320: ;
    eax = ecx + 0x24;
    edx = 0xF;

loc_00326328: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326328; /* jne: not equal / not zero */

loc_00326331: ;
    eax = ecx + 0x3E4;
    ecx = 3;
    /* nop */

loc_00326340: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326340; /* jne: not equal / not zero */

loc_0032634B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00326360
 * Original: 0x00326360 - 0x0032638C (44 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00326360: ;
    eax = ecx + 0x24;
    edx = 0xF;

loc_00326368: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326368; /* jne: not equal / not zero */

loc_00326371: ;
    eax = ecx + 0x3E4;
    ecx = 3;
    /* nop */

loc_00326380: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326380; /* jne: not equal / not zero */

loc_0032638B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003263A0
 * Original: 0x003263A0 - 0x00326440 (160 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003263A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003263A0: ;
    PUSH32(esp, ecx);
    MEM32(esp) = ecx;
    eax = ecx + 0x24;
    edx = 0xF;
    /* nop */

loc_003263B0: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003263B0; /* jne: not equal / not zero */

loc_003263B9: ;
    eax = ecx + 0x3E4;
    ecx = 3;

loc_003263C4: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003263C4; /* jne: not equal / not zero */

loc_003263CF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003263D5: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x003263DDu); RECOMP_ABI_CALL(0x00035D6Fu, sub_00035D6F); /* call 0x00035D6F */

loc_003263DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    ebx = eax;
    PUSH32(esp, 0x003263E7u); RECOMP_ABI_CALL(0x00035D6Fu, sub_00035D6F); /* call 0x00035D6F */

loc_003263E7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xF (32-bit) */
    ebp = eax;
    edi = esi;
    eax = esi + 6;
    if (CMP_L(_fas, _fbs)) goto loc_003263FD; /* jl: less (signed <) */

loc_003263F6: ;
    edi = 0xE;
    goto loc_00326407;

loc_003263FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00326407; /* jl: less (signed <) */

loc_00326402: ;
    eax = 0xE;

loc_00326407: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax + ebx + 0x24;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032641Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032641E: ;
    PUSH32(esp, ebp);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = edi + ebx + 0x24;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00326431u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326431: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003263D5; /* jl: less (signed <) */

loc_0032643A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00326470
 * Original: 0x00326470 - 0x00326497 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00326470: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x00326481u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00326481: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00326491; /* je: equal / zero */

loc_00326488: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032648Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032648E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00326491: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003264A0
 * Original: 0x003264A0 - 0x0032650C (108 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003264A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003264A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(edi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x48), 8 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003264C8; /* je: equal / zero */

loc_003264AE: ;
    PUSH32(esp, 0xD);
    eax = edi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003264BEu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_003264BE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = 8;

loc_003264C8: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003264EE; /* je: equal / zero */

loc_003264CF: ;
    ecx = edi;
    PUSH32(esp, 0x003264D6u); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_003264D6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00326507; /* je: equal / zero */

loc_003264DA: ;
    PUSH32(esp, 0);
    ecx = edi;
    MEM8(esi + 0xD) = 0;
    PUSH32(esp, 0x003264E7u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_003264E7: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326507; /* jne: not equal / not zero */

loc_003264EE: ;
    SET_LO8(eax, MEM8(esi + 0x604));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00326507; /* je: equal / zero */

loc_003264F8: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00326500u); RECOMP_ABI_CALL(0x0001DEBDu, sub_0001DEBD); /* call 0x0001DEBD */

loc_00326500: ;
    MEM8(esi + 0x604) = 0;

loc_00326507: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00326530
 * Original: 0x00326530 - 0x0032668C (348 bytes, 104 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326530: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(esp + 0x20));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x20;
    MEM8(esi + 0x605) = LO8(eax);
    MEM32(esp + 0x10) = esi;
    eax = edi;
    ecx = 0xA;

loc_00326551: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326551; /* jne: not equal / not zero */

loc_0032655A: ;
    eax = esi + 0x2A0;
    ecx = 3;

loc_00326565: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326565; /* jne: not equal / not zero */

loc_00326570: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0032657Bu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0032657B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00326582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032657Fu); } /* indirect call */
    }

loc_00326582: ;
    ebp = eax;
    eax = MEM32(0x828698);
    MEM32(edi) = eax;
    SET_LO16(ecx, MEM16(0x82869C));
    MEM16(edi + 4) = LO16(ecx);
    eax = MEM32(0x828690);
    edx = esi + 0x60;
    MEM32(edx) = eax;
    SET_LO16(ecx, MEM16(0x828694));
    MEM16(edx + 4) = LO16(ecx);
    SET_LO8(eax, MEM8(0x828696));
    MEM8(edx + 6) = LO8(eax);
    ecx = MEM32(0x828678);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    edx = MEM32(0x82867C);
    MEM32(esi + 4) = edx;
    eax = MEM32(0x828680);
    MEM32(esi + 8) = eax;
    ecx = MEM32(0x828684);
    MEM32(esi + 0xC) = ecx;
    SET_LO16(edx, MEM16(0x828688));
    MEM16(esi + 0x10) = LO16(edx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 0x14;
    /* nop */

loc_003265F0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003265F2: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00326601u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003265FEu); } /* indirect call */
    }

loc_00326601: ;
    MEM32(edi) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003265F2; /* jl: less (signed <) */

loc_0032660C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003265F0; /* jl: less (signed <) */

loc_00326612: ;
    edi = MEM32(esp + 0x30);
    ebx = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x778);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x2A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2A0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00326630;

    /* nop */

loc_00326630: ;
    edx = MEM32(esp + esi * 4 + 0x24);
    ecx = MEM32(esp + esi * 4 + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    eax = edx + edi + 0x8F5C00;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    PUSH32(esp, eax);
    eax = MEM32(esp + esi * 4 + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    edx = ecx + edi + 0x8F5C00;
    PUSH32(esp, edx);
    ecx = eax + edi + 0x8F5C00;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82866C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00326668u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326668: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x120;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00326630; /* jl: less (signed <) */

loc_00326677: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx + 0x604) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0032656D
 * Original: 0x0032656D - 0x0032668C (287 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032656D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032656D: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_00326565(); return; } /* jne: not equal / not zero */

loc_00326570: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0032657Bu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0032657B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00326582u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032657Fu); } /* indirect call */
    }

loc_00326582: ;
    ebp = eax;
    eax = MEM32(0x828698);
    MEM32(edi) = eax;
    SET_LO16(ecx, MEM16(0x82869C));
    MEM16(edi + 4) = LO16(ecx);
    eax = MEM32(0x828690);
    edx = esi + 0x60;
    MEM32(edx) = eax;
    SET_LO16(ecx, MEM16(0x828694));
    MEM16(edx + 4) = LO16(ecx);
    SET_LO8(eax, MEM8(0x828696));
    MEM8(edx + 6) = LO8(eax);
    ecx = MEM32(0x828678);
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    edx = MEM32(0x82867C);
    MEM32(esi + 4) = edx;
    eax = MEM32(0x828680);
    MEM32(esi + 8) = eax;
    ecx = MEM32(0x828684);
    MEM32(esi + 0xC) = ecx;
    SET_LO16(edx, MEM16(0x828688));
    MEM16(esi + 0x10) = LO16(edx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 0x14;
    /* nop */

loc_003265F0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003265F2: ;
    ecx = MEM32(esp + 0x30);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x44); PUSH32(esp, 0x00326601u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003265FEu); } /* indirect call */
    }

loc_00326601: ;
    MEM32(edi) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003265F2; /* jl: less (signed <) */

loc_0032660C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003265F0; /* jl: less (signed <) */

loc_00326612: ;
    edi = MEM32(esp + 0x30);
    ebx = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x778);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x2A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2A0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00326630;

    /* nop */

loc_00326630: ;
    edx = MEM32(esp + esi * 4 + 0x24);
    ecx = MEM32(esp + esi * 4 + 0x1C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    eax = edx + edi + 0x8F5C00;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    PUSH32(esp, eax);
    eax = MEM32(esp + esi * 4 + 0x18);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    edx = ecx + edi + 0x8F5C00;
    PUSH32(esp, edx);
    ecx = eax + edi + 0x8F5C00;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82866C);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00326668u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326668: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x120;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00326630; /* jl: less (signed <) */

loc_00326677: ;
    edx = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(edx + 0x604) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003266F0
 * Original: 0x003266F0 - 0x0032686B (379 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003266F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003266F0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(eax, MEM8(esp + 0x38));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 0x20;
    MEM8(esi + 0x605) = LO8(eax);
    MEM32(esp + 0x10) = esi;
    eax = edi;
    ecx = 0xA;

loc_00326711: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326711; /* jne: not equal / not zero */

loc_0032671A: ;
    eax = esi + 0x2A0;
    ecx = 3;

loc_00326725: ;
    MEM8(eax) = 0;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x120;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00326725; /* jne: not equal / not zero */

loc_00326730: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x0032673Bu); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_0032673B: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00326742u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0032673Fu); } /* indirect call */
    }

loc_00326742: ;
    ebp = eax;
    eax = MEM32(0x828698);
    MEM32(edi) = eax;
    SET_LO16(ecx, MEM16(0x82869C));
    MEM16(edi + 4) = LO16(ecx);
    edx = MEM32(0x828580);
    MEM32(esi + 0x60) = edx;
    eax = MEM32(0x828584);
    MEM32(esi + 0x64) = eax;
    edx = MEM32(0x828690);
    ecx = esi + 0xA0;
    MEM32(ecx) = edx;
    SET_LO16(eax, MEM16(0x828694));
    MEM16(ecx + 4) = LO16(eax);
    SET_LO8(edx, MEM8(0x828696));
    MEM8(ecx + 6) = LO8(edx);
    eax = MEM32(0x8286B0);
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xE0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    ecx = MEM32(0x8286B4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(0x8286B8);
    MEM32(esi + 8) = edx;
    SET_LO16(eax, MEM16(0x8286BC));
    MEM16(esi + 0xC) = LO16(eax);
    SET_LO8(ecx, MEM8(0x8286BE));
    MEM8(esi + 0xE) = LO8(ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esp + 0x14;

loc_003267C0: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003267C2: ;
    eax = MEM32(esp + 0x48);
    edx = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x3C); PUSH32(esp, 0x003267D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003267CEu); } /* indirect call */
    }

loc_003267D1: ;
    MEM32(edi) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003267C2; /* jl: less (signed <) */

loc_003267DC: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003267C0; /* jl: less (signed <) */

loc_003267E2: ;
    edi = MEM32(esp + 0x48);
    ebx = MEM32(esp + 0x10);
    edi = (uint32_t)((int32_t)edi * (int32_t)0x778);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x2A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x2A0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00326800;

    /* nop */

loc_00326800: ;
    ecx = MEM32(esp + esi * 4 + 0x38);
    eax = MEM32(esp + esi * 4 + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    edx = ecx + edi + 0x8F5C00;
    PUSH32(esp, edx);
    edx = MEM32(esp + esi * 4 + 0x24);
    ecx = eax + edi + 0x8F5C00;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x54);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + esi * 4 + 0x1C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x54);
    eax = edx + edi + 0x8F5C00;
    PUSH32(esp, eax);
    edx = ecx + edi + 0x8F5C00;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8286A0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00326847u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326847: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x120;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00326800; /* jl: less (signed <) */

loc_00326856: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 0x604) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003268D0
 * Original: 0x003268D0 - 0x003269A8 (216 bytes, 64 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003268D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003268D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x00326905u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00326905: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi) = 0x8286C4;
    if (CMP_EQ(_fa, _fb)) goto loc_0032693C; /* je: equal / zero */

loc_00326920: ;
    SET_LO8(ecx, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00326935; /* je: equal / zero */

loc_0032692B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00326935; /* je: equal / zero */

loc_00326930: ;
    eax = MEM32(eax + 0x30);
    goto loc_00326938;

loc_00326935: ;
    eax = MEM32(eax + 0x18);

loc_00326938: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326940; /* jne: not equal / not zero */

loc_0032693C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00326943;

loc_00326940: ;
    SET_LO8(eax, MEM8(eax + 0x21));

loc_00326943: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEM8(esi + 0x90) = LO8(eax);
    MEM32(0x8FC768) = esi;
    MEM8(esi + 0x20) = LO8(ebx);
    MEM8(esi + 0x40) = LO8(ebx);
    MEM8(esi + 0x41) = LO8(ebx);
    MEM32(esi + 0x54) = ebx;
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    eax = 0xFFFFFFFFu;
    MEM32(esi + 0x4C) = eax;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x84) = eax;
    MEM32(esi + 0x88) = eax;
    POP32(esp, edi);
    MEM8(esi + 0x58) = LO8(ebx);
    MEM8(esi + 0x78) = LO8(ebx);
    MEM8(esi + 0x79) = LO8(ebx);
    MEM32(esi + 0x8C) = ebx;
    MEMF(esi + 0x7C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x80) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003269E0
 * Original: 0x003269E0 - 0x00326A11 (49 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003269E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003269E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(0x8FC768) = 0;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x003269FBu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_003269FB: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00326A0B; /* je: equal / zero */

loc_00326A02: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00326A08u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00326A08: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00326A0B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00326A20
 * Original: 0x00326A20 - 0x00326EE1 (1217 bytes, 367 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326A20(void)
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

loc_00326A20: ;
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x110));
    esp = esp - 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x118);
    eax = MEM32(ebx + 0x48);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ecx;
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00326A58; /* je: equal / zero */

loc_00326A42: ;
    PUSH32(esp, 8);
    eax = ebx + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326A52u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326A52: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x48) = edi;

loc_00326A58: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326B1A; /* je: equal / zero */

loc_00326A63: ;
    ecx = ebx;
    PUSH32(esp, 0x00326A6Au); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_00326A6A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00326ED5; /* je: equal / zero */

loc_00326A72: ;
    edi = esi + 0x20;
    eax = 0x8F5B6E;
    edx = edi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_00326A80: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00326A80; /* jne: not equal / not zero */

loc_00326A8A: ;
    _fb = (uint32_t)(0x58) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x58)) >> 32) & 1);
    esi = esi + 0x58;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x8F62E6;
    edx = esi;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00326A96: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00326A96; /* jne: not equal / not zero */

loc_00326AA0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x82887C);
    ecx = ebx;
    PUSH32(esp, 0x00326AADu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00326AAD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x828868);
    ecx = ebx;
    PUSH32(esp, 0x00326ABAu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00326ABA: ;
    PUSH32(esp, 0x828854);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x4C)) >> 32) & 1);
    ebx = ebx + 0x4C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00326AD2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326AD2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x34;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00326AE2u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00326AE2: ;
    ecx = MEM32(esp + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    MEM32(ecx + 0x50) = eax;
    MEMF(ecx + 0x48) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x88) = eax;
    MEMF(ecx + 0x80) = xmm0.f[0]; /* movss */
    MEM8(ecx + 0xD) = 0;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x110)) >> 32) & 1);
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00326B1A: ;
    PUSH32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00326B30;

loc_00326B22: ;
    esi = MEM32(esp + 0x10);
    goto loc_00326B30;

    /* nop */
    /* nop */

loc_00326B30: ;
    eax = MEM32(ebp * 4 + 0x8F0040);
    edx = MEM32(eax);
    ecx = (uint32_t)(int32_t)SMEM8(eax + 0xD2);
    edx = (uint32_t)(int32_t)SMEM8(edx + 0xD2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_00326B8E; /* js: sign (negative) */

loc_00326B4B: ;
    ecx = MEM32(eax);
    edx = (uint32_t)(int32_t)SMEM8(ecx + 0xD2);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0xD2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_G(_fas, _fbs)) goto loc_00326B8E; /* jg: greater (signed >) */

loc_00326B61: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00326B67u); RECOMP_ABI_CALL(0x00035C61u, sub_00035C61); /* call 0x00035C61 */

loc_00326B67: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00326B7E; /* jne: not equal / not zero */

loc_00326B6E: ;
    ecx = ebp;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(ecx)) >> 32) & 1);
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x54) = 2;
    goto loc_00326B9C;

loc_00326B7E: ;
    edx = ebp;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x54) = 0;
    goto loc_00326B9C;

loc_00326B8E: ;
    eax = ebp;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x54) = 1;

loc_00326B9C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x44)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 0x48); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00326C15; /* jnp: not parity */

loc_00326BAB: ;
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AB8B0); /* mulss */
    ecx = (int32_t)xmm0.f[0]; /* cvttss2si */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00326BC7u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326BC7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = 0x828840;
    if (CMP_EQ(_fa, _fb)) goto loc_00326BD8; /* je: equal / zero */

loc_00326BD3: ;
    edi = 0x82882C;

loc_00326BD8: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC658);
    PUSH32(esp, 0x00326BE7u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00326BE7: ;
    PUSH32(esp, edi);
    edx = ebx + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326BFBu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326BFB: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326C0Au); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00326C0A: ;
    eax = MEM32(esi + 0x44);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x48) = eax;
    edi = ebp;

loc_00326C15: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x50) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00326CD0; /* je: equal / zero */

loc_00326C21: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00326C84; /* jge: greater or equal (signed >=) */

loc_00326C26: ;
    ecx = MEM32(ebp * 4 + 0x8F0040);
    edx = MEM32(ecx);
    edx = (uint32_t)(int32_t)SMEM8(edx + 0xD2);
    edi = (uint32_t)(int32_t)SMEM8(ecx + 0xD2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(edx));
    edi = edi - edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00326C55; /* jle: less or equal (signed <=) */

loc_00326C43: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00326C4E; /* jne: not equal / not zero */

loc_00326C47: ;
    eax = 0x828818;
    goto loc_00326C89;

loc_00326C4E: ;
    eax = 0x828804;
    goto loc_00326C89;

loc_00326C55: ;
    edx = MEM32(ecx);
    edx = (uint32_t)(int32_t)SMEM8(edx + 0xD2);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + 0xD2);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edx));
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_00326C7B; /* jns: not sign (positive) */

loc_00326C69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00326C74; /* jne: not equal / not zero */

loc_00326C6D: ;
    eax = 0x8287FC;
    goto loc_00326C89;

loc_00326C74: ;
    eax = 0x8287F4;
    goto loc_00326C89;

loc_00326C7B: ;
    eax = MEM32(eax * 4 + 0x8C446C);
    goto loc_00326C89;

loc_00326C84: ;
    eax = 0x8287E0;

loc_00326C89: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    edi = 0x8287CC;
    if (CMP_EQ(_fa, _fb)) goto loc_00326C97; /* je: equal / zero */

loc_00326C92: ;
    edi = 0x8287B8;

loc_00326C97: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326CA2u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00326CA2: ;
    PUSH32(esp, edi);
    edx = ebx + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326CB6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326CB6: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326CC5u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00326CC5: ;
    eax = MEM32(esi + 0x4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x50) = eax;
    edi = ebp;

loc_00326CD0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_GE(_fas, _fbs)) goto loc_00326CE3; /* jge: greater or equal (signed >=) */

loc_00326CD4: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00326B22; /* jl: less (signed <) */

loc_00326CDE: ;
    goto loc_00326E00;

loc_00326CE3: ;
    ebp = 0x8287A8;
    if (CMP_EQ(_fa, _fb)) goto loc_00326CEF; /* je: equal / zero */

loc_00326CEA: ;
    ebp = 0x828798;

loc_00326CEF: ;
    edx = MEM32(esp + 0x10);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = MEM32(ecx + edx + 0x54);
    MEM32(esp + 0x14) = 0x7E94C4;
    MEM32(esp + 0x18) = 0x7E94C8;
    MEM32(esp + 0x1C) = 0x7FAAB4;
    ecx = MEM32(esp + eax * 4 + 0x14);
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00326D23u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00326D23: ;
    PUSH32(esp, ebp);
    esi = ebx + 0x4C;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326D37u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326D37: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326D46u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00326D46: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = 0x82877C;
    if (CMP_EQ(_fa, _fb)) goto loc_00326D57; /* je: equal / zero */

loc_00326D52: ;
    eax = 0x828760;

loc_00326D57: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edx = esp + 0x28;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00326D68u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326D68: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x38;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326D78u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00326D78: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = 0x828754;
    if (CMP_EQ(_fa, _fb)) goto loc_00326D89; /* je: equal / zero */

loc_00326D84: ;
    eax = 0x828748;

loc_00326D89: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00326D9Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326D9A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x38;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00326DAAu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00326DAA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = 0x828730;
    if (CMP_EQ(_fa, _fb)) goto loc_00326DBB; /* je: equal / zero */

loc_00326DB6: ;
    eax = 0x828718;

loc_00326DBB: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326DCCu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326DCC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x38;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00326DDCu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00326DDC: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 3);
    ecx = ebx;
    edx = edx * 4 + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00326DF7u); RECOMP_ABI_CALL(0x00034451u, sub_00034451); /* call 0x00034451 */

loc_00326DF7: ;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x00326E00u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00326E00: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(edx, MEM8(0x8F6A27));
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00326E15; /* jne: not equal / not zero */

loc_00326E11: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00326E32;

loc_00326E15: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00326E24; /* je: equal / zero */

loc_00326E1A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00326E24; /* je: equal / zero */

loc_00326E1F: ;
    eax = MEM32(ecx + 0x30);
    goto loc_00326E27;

loc_00326E24: ;
    eax = MEM32(ecx + 0x18);

loc_00326E27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00326E2F; /* jne: not equal / not zero */

loc_00326E2B: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00326E32;

loc_00326E2F: ;
    SET_LO8(eax, MEM8(eax + 0x21));

loc_00326E32: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x90)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x90), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00326ED5; /* je: equal / zero */

loc_00326E42: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00326E4A; /* jne: not equal / not zero */

loc_00326E46: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00326E67;

loc_00326E4A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00326E59; /* je: equal / zero */

loc_00326E4F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xB (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00326E59; /* je: equal / zero */

loc_00326E54: ;
    eax = MEM32(ecx + 0x30);
    goto loc_00326E5C;

loc_00326E59: ;
    eax = MEM32(ecx + 0x18);

loc_00326E5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00326E64; /* jne: not equal / not zero */

loc_00326E60: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00326E67;

loc_00326E64: ;
    SET_LO8(eax, MEM8(eax + 0x21));

loc_00326E67: ;
    MEM8(esi + 0x90) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = 0x7E94C8;
    if (CMP_NE(_fa, _fb)) goto loc_00326E7B; /* jne: not equal / not zero */

loc_00326E76: ;
    eax = 0x7E94C4;

loc_00326E7B: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326E86u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00326E86: ;
    PUSH32(esp, 0x82805C);
    esi = ebx + 0x4C;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326E9Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326E9E: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326EADu); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00326EAD: ;
    PUSH32(esp, 0x828044);
    PUSH32(esp, esi);
    eax = esp + 0x44;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326EC2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326EC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x54;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00326ED2u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00326ED2: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x40)) >> 32) & 1);
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00326ED5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x110)) >> 32) & 1);
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00326C65
 * Original: 0x00326C65 - 0x00326EE1 (636 bytes, 196 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326C65(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00326C65: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_00326C7B; /* jns: not sign (positive) */

loc_00326C69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326C74; /* jne: not equal / not zero */

loc_00326C6D: ;
    eax = 0x8287FC;
    goto loc_00326C89;

loc_00326C74: ;
    eax = 0x8287F4;
    goto loc_00326C89;

loc_00326C7B: ;
    eax = MEM32(eax * 4 + 0x8C446C);
    goto loc_00326C89;

    eax = 0x8287E0;

loc_00326C89: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edi = 0x8287CC;
    if (CMP_EQ(_fa, _fb)) goto loc_00326C97; /* je: equal / zero */

loc_00326C92: ;
    edi = 0x8287B8;

loc_00326C97: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326CA2u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00326CA2: ;
    PUSH32(esp, edi);
    edx = ebx + 0x4C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326CB6u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326CB6: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326CC5u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00326CC5: ;
    eax = MEM32(esi + 0x4C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x50) = eax;
    edi = ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00326CE3; /* jge: greater or equal (signed >=) */

loc_00326CD4: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00326B22(); return; } /* jl: less (signed <) */

loc_00326CDE: ;
    goto loc_00326E00;

loc_00326CE3: ;
    ebp = 0x8287A8;
    if (CMP_EQ(_fa, _fb)) goto loc_00326CEF; /* je: equal / zero */

loc_00326CEA: ;
    ebp = 0x828798;

loc_00326CEF: ;
    edx = MEM32(esp + 0x10);
    ecx = edi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    eax = MEM32(ecx + edx + 0x54);
    MEM32(esp + 0x14) = 0x7E94C4;
    MEM32(esp + 0x18) = 0x7E94C8;
    MEM32(esp + 0x1C) = 0x7FAAB4;
    ecx = MEM32(esp + eax * 4 + 0x14);
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00326D23u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00326D23: ;
    PUSH32(esp, ebp);
    esi = ebx + 0x4C;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326D37u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326D37: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326D46u); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00326D46: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = 0x82877C;
    if (CMP_EQ(_fa, _fb)) goto loc_00326D57; /* je: equal / zero */

loc_00326D52: ;
    eax = 0x828760;

loc_00326D57: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edx = esp + 0x28;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00326D68u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326D68: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x38;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326D78u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00326D78: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = 0x828754;
    if (CMP_EQ(_fa, _fb)) goto loc_00326D89; /* je: equal / zero */

loc_00326D84: ;
    eax = 0x828748;

loc_00326D89: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x28;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00326D9Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326D9A: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    edx = esp + 0x38;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00326DAAu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00326DAA: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = 0x828730;
    if (CMP_EQ(_fa, _fb)) goto loc_00326DBB; /* je: equal / zero */

loc_00326DB6: ;
    eax = 0x828718;

loc_00326DBB: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = esp + 0x28;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326DCCu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326DCC: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x38;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00326DDCu); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00326DDC: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 3);
    ecx = ebx;
    edx = edx * 4 + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00326DF7u); RECOMP_ABI_CALL(0x00034451u, sub_00034451); /* call 0x00034451 */

loc_00326DF7: ;
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x00326E00u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_00326E00: ;
    ecx = MEM32(0x8FC758);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, MEM8(0x8F6A27));
    POP32(esp, ebp);
    if (CMP_NE(_fa, _fb)) goto loc_00326E15; /* jne: not equal / not zero */

loc_00326E11: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00326E32;

loc_00326E15: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00326E24; /* je: equal / zero */

loc_00326E1A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00326E24; /* je: equal / zero */

loc_00326E1F: ;
    eax = MEM32(ecx + 0x30);
    goto loc_00326E27;

loc_00326E24: ;
    eax = MEM32(ecx + 0x18);

loc_00326E27: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326E2F; /* jne: not equal / not zero */

loc_00326E2B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00326E32;

loc_00326E2F: ;
    SET_LO8(eax, MEM8(eax + 0x21));

loc_00326E32: ;
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x90)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x90), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00326ED5; /* je: equal / zero */

loc_00326E42: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326E4A; /* jne: not equal / not zero */

loc_00326E46: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00326E67;

loc_00326E4A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00326E59; /* je: equal / zero */

loc_00326E4F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00326E59; /* je: equal / zero */

loc_00326E54: ;
    eax = MEM32(ecx + 0x30);
    goto loc_00326E5C;

loc_00326E59: ;
    eax = MEM32(ecx + 0x18);

loc_00326E5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00326E64; /* jne: not equal / not zero */

loc_00326E60: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00326E67;

loc_00326E64: ;
    SET_LO8(eax, MEM8(eax + 0x21));

loc_00326E67: ;
    MEM8(esi + 0x90) = LO8(eax);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = 0x7E94C8;
    if (CMP_NE(_fa, _fb)) goto loc_00326E7B; /* jne: not equal / not zero */

loc_00326E76: ;
    eax = 0x7E94C4;

loc_00326E7B: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326E86u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00326E86: ;
    PUSH32(esp, 0x82805C);
    esi = ebx + 0x4C;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326E9Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326E9E: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326EADu); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00326EAD: ;
    PUSH32(esp, 0x828044);
    PUSH32(esp, esi);
    eax = esp + 0x44;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326EC2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326EC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x54;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00326ED2u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00326ED2: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00326ED5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00326E6F
 * Original: 0x00326E6F - 0x00326EE1 (114 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00326E6F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00326E6F: ;
    eax = 0x7E94C8;
    if (_flags /* jne: not equal / not zero */) goto loc_00326E7B;

loc_00326E76: ;
    eax = 0x7E94C4;

loc_00326E7B: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326E86u); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_00326E86: ;
    PUSH32(esp, 0x82805C);
    esi = ebx + 0x4C;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326E9Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326E9E: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x00326EADu); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_00326EAD: ;
    PUSH32(esp, 0x828044);
    PUSH32(esp, esi);
    eax = esp + 0x44;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00326EC2u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00326EC2: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x54;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00326ED2u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00326ED2: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x110) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x110;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00327020
 * Original: 0x00327020 - 0x003270EF (207 bytes, 66 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00327020: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003270EA; /* je: equal / zero */

loc_00327030: ;
    _fa = (uint32_t)(MEM32(edi + 0x48)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x48), 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327050; /* je: equal / zero */

loc_00327036: ;
    PUSH32(esp, 9);
    eax = edi + 0x4C;
    PUSH32(esp, 0x827BC0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00327046u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327046: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x48) = 4;

loc_00327050: ;
    SET_LO8(eax, MEM8(esi + 0xD));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0032706A; /* je: equal / zero */

loc_00327057: ;
    ecx = edi;
    PUSH32(esp, 0x0032705Eu); RECOMP_ABI_CALL(0x00030C0Cu, sub_00030C0C); /* call 0x00030C0C */

loc_0032705E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003270EA; /* je: equal / zero */

loc_00327066: ;
    MEM8(esi + 0xD) = 0;

loc_0032706A: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x24), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003270AA; /* je: equal / zero */

loc_00327072: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003270AA; /* jl: less (signed <) */

loc_00327076: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003270AA; /* jge: greater or equal (signed >=) */

loc_0032707B: ;
    ecx = MEM32(eax * 4 + 0x8C43A4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x827DDC);
    ecx = edi;
    PUSH32(esp, 0x0032708Fu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_0032708F: ;
    PUSH32(esp, 0x827DB0);
    ecx = edi;
    PUSH32(esp, 0x0032709Bu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_0032709B: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x003270A4u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_003270A4: ;
    edx = MEM32(esi + 0x20);
    MEM32(esi + 0x24) = edx;

loc_003270AA: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003270EA; /* je: equal / zero */

loc_003270B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003270EA; /* jl: less (signed <) */

loc_003270B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003270EA; /* jge: greater or equal (signed >=) */

loc_003270BB: ;
    eax = MEM32(eax * 4 + 0x8C43A4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x827DC8);
    ecx = edi;
    PUSH32(esp, 0x003270CFu); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_003270CF: ;
    PUSH32(esp, 0x827D98);
    ecx = edi;
    PUSH32(esp, 0x003270DBu); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_003270DB: ;
    PUSH32(esp, 1);
    ecx = edi;
    PUSH32(esp, 0x003270E4u); RECOMP_ABI_CALL(0x00026630u, sub_00026630); /* call 0x00026630 */

loc_003270E4: ;
    ecx = MEM32(esi + 0x28);
    MEM32(esi + 0x2C) = ecx;

loc_003270EA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00327130
 * Original: 0x00327130 - 0x003271BF (143 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00327130: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x00327165u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00327165: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    eax = MEM32(0x8FC758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x1C) = ecx;
    MEM32(esi) = 0x828890;
    if (CMP_EQ(_fa, _fb)) goto loc_0032719C; /* je: equal / zero */

loc_00327180: ;
    SET_LO8(ecx, MEM8(0x8F6A27));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xA) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xA (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327195; /* je: equal / zero */

loc_0032718B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327195; /* je: equal / zero */

loc_00327190: ;
    eax = MEM32(eax + 0x30);
    goto loc_00327198;

loc_00327195: ;
    eax = MEM32(eax + 0x18);

loc_00327198: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003271A0; /* jne: not equal / not zero */

loc_0032719C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003271A3;

loc_003271A0: ;
    SET_LO8(eax, MEM8(eax + 0x21));

loc_003271A3: ;
    MEM8(esi + 0x34) = LO8(eax);
    eax = 0xFFFFFFFFu;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003271F0
 * Original: 0x003271F0 - 0x00327217 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003271F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003271F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x00327201u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00327201: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00327211; /* je: equal / zero */

loc_00327208: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032720Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032720E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00327211: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00327220
 * Original: 0x00327220 - 0x0032731B (251 bytes, 81 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327220: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = ecx;
    eax = MEM32(ebx + esi * 8 + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + esi * 8 + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + esi * 8 + 0x24) (32-bit) */
    ebp = ebx + esi * 8 + 0x28;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    if (CMP_EQ(_fa, _fb)) goto loc_003272C9; /* je: equal / zero */

loc_00327240: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003272B3; /* je: equal / zero */

loc_00327245: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00327252; /* je: equal / zero */

loc_00327248: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003272C2; /* jne: not equal / not zero */

loc_0032724B: ;
    PUSH32(esp, 0x8288CC);
    goto loc_00327257;

loc_00327252: ;
    PUSH32(esp, 0x8288C4);

loc_00327257: ;
    eax = MEM32(esi * 4 + 0x8C44B0);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00327266u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00327266: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032726Cu); RECOMP_ABI_CALL(0x0001CAEFu, sub_0001CAEF); /* call 0x0001CAEF */

loc_0032726C: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x778);
    edx = ecx + eax + 0x8F5C00;
    eax = MEM32(esi * 4 + 0x8C44A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00327291u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00327291: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 5);
    ecx = ecx * 4 + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003272A9u); RECOMP_ABI_CALL(0x00034451u, sub_00034451); /* call 0x00034451 */

loc_003272A9: ;
    edx = MEM32(esi * 4 + 0x8C4498);
    PUSH32(esp, edx);
    goto loc_003272BB;

loc_003272B3: ;
    eax = MEM32(esi * 4 + 0x8C448C);
    PUSH32(esp, eax);

loc_003272BB: ;
    ecx = edi;
    PUSH32(esp, 0x003272C2u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_003272C2: ;
    ecx = MEM32(ebp);
    MEM32(ebx + esi * 8 + 0x24) = ecx;

loc_003272C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003272CFu); RECOMP_ABI_CALL(0x0001CAEFu, sub_0001CAEF); /* call 0x0001CAEF */

loc_003272CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327314; /* je: equal / zero */

loc_003272D7: ;
    ebp = MEM32(ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00327314; /* jle: less or equal (signed <=) */

loc_003272DE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00327314; /* jg: greater (signed >) */

loc_003272E3: ;
    ecx = MEM32(esi * 4 + 0x8C44A4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x778);
    eax = edx + eax + 0x8F5C00;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00327305u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00327305: ;
    edx = MEM32(esi * 4 + 0x8C4480);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00327314u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_00327314: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0032726F
 * Original: 0x0032726F - 0x0032731B (172 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0032726F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0032726F: ;
    ecx = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x778);
    edx = ecx + eax + 0x8F5C00;
    eax = MEM32(esi * 4 + 0x8C44A4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00327291u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00327291: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, 5);
    ecx = ecx * 4 + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003272A9u); RECOMP_ABI_CALL(0x00034451u, sub_00034451); /* call 0x00034451 */

loc_003272A9: ;
    edx = MEM32(esi * 4 + 0x8C4498);
    PUSH32(esp, edx);
    goto loc_003272BB;

    eax = MEM32(esi * 4 + 0x8C448C);
    PUSH32(esp, eax);

loc_003272BB: ;
    ecx = edi;
    PUSH32(esp, 0x003272C2u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_003272C2: ;
    ecx = MEM32(ebp);
    MEM32(ebx + esi * 8 + 0x24) = ecx;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003272CFu); RECOMP_ABI_CALL(0x0001CAEFu, sub_0001CAEF); /* call 0x0001CAEF */

loc_003272CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00327314; /* je: equal / zero */

loc_003272D7: ;
    ebp = MEM32(ebp);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00327314; /* jle: less or equal (signed <=) */

loc_003272DE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00327314; /* jg: greater (signed >) */

loc_003272E3: ;
    ecx = MEM32(esi * 4 + 0x8C44A4);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x54);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x778);
    eax = edx + eax + 0x8F5C00;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x00327305u); RECOMP_ABI_CALL(0x00030E4Bu, sub_00030E4B); /* call 0x00030E4B */

loc_00327305: ;
    edx = MEM32(esi * 4 + 0x8C4480);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00327314u); RECOMP_ABI_CALL(0x00011D84u, sub_00011D84); /* call 0x00011D84 */

loc_00327314: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00327360
 * Original: 0x00327360 - 0x00327405 (165 bytes, 50 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00327360: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 1);
    PUSH32(esp, 0x4479F99A);
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    MEM32(esi + 4) = edi;
    MEM8(esi + 8) = LO8(ebx);
    MEM8(esi + 9) = LO8(ebx);
    MEM8(esi + 0xA) = LO8(eax);
    MEM8(esi + 0xB) = LO8(ebx);
    MEM8(esi + 0xC) = LO8(ebx);
    MEM8(esi + 0xD) = LO8(eax);
    PUSH32(esp, 0x00327395u); RECOMP_ABI_CALL(0x00015745u, sub_00015745); /* call 0x00015745 */

loc_00327395: ;
    eax = MEM32(edi + 0x10);
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(edi + 8);
    MEM32(esi + 0x1C) = ecx;
    ecx = esi + 0x40;
    MEM32(esi) = 0x8288E0;
    PUSH32(esp, 0x003273AFu); RECOMP_ABI_CALL(0x000323E0u, sub_000323E0); /* call 0x000323E0 */

loc_003273AF: ;
    MEM8(esi + 0x4C) = LO8(ebx);
    MEM32(esi + 0x50) = ebx;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(esi + 0x20) = LO16(eax);
    MEM16(esi + 0x22) = LO16(eax);
    MEM16(esi + 0x24) = LO16(eax);
    MEM16(esi + 0x26) = LO16(eax);
    MEM16(esi + 0x28) = LO16(eax);
    MEM16(esi + 0x30) = LO16(eax);
    MEM16(esi + 0x32) = LO16(eax);
    MEM16(esi + 0x2A) = LO16(eax);
    MEM16(esi + 0x2C) = LO16(eax);
    MEM16(esi + 0x2E) = LO16(eax);
    MEM8(esi + 0x34) = LO8(ebx);
    PUSH32(esp, 0x907DE8);
    ecx = esi + 0x40;
    MEM32(esi + 0x38) = 0xD;
    MEM8(esi + 0x3C) = LO8(ebx);
    MEM8(esi + 0x48) = LO8(ebx);
    PUSH32(esp, 0x003273FDu); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_003273FD: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00327430
 * Original: 0x00327430 - 0x00327465 (53 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00327430: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x40;
    MEM32(esi) = 0x8288E0;
    PUSH32(esp, 0x00327441u); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_00327441: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x827BA0;
    PUSH32(esp, 0x0032744Fu); RECOMP_ABI_CALL(0x00036805u, sub_00036805); /* call 0x00036805 */

loc_0032744F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0032745F; /* je: equal / zero */

loc_00327456: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0032745Cu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0032745C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0032745F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00327480
 * Original: 0x00327480 - 0x00327585 (261 bytes, 79 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00327480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00327480: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ecx;
    SET_LO8(eax, MEM8(edi + 0x48));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0032757B; /* jne: not equal / not zero */

loc_00327494: ;
    eax = MEM32(edi + 0x38);
    PUSH32(esp, ebx);
    ecx = eax + -10;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_A(_fa, _fb)) goto loc_003274FD; /* ja: above (unsigned >) */

loc_003274A3: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x327588); /* switch: 4 entries, 3 targets */
    if (_jt == 0x003274AAu) goto loc_003274AA;
    if (_jt == 0x003274EAu) goto loc_003274EA;
    if (_jt == 0x003274F6u) goto loc_003274F6;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003274AA: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    edx = MEM32(eax * 4 + 0x8F0040);
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003274D8; /* je: equal / zero */

loc_003274C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003274CF; /* jne: not equal / not zero */

loc_003274C6: ;
    eax = 0x8289D0;
    SET_LO8(ebx, 1);
    goto loc_00327504;

loc_003274CF: ;
    eax = 0x8289B8;
    SET_LO8(ebx, 1);
    goto loc_00327504;

loc_003274D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = 0x8289A0;
    if (CMP_EQ(_fa, _fb)) goto loc_003274E6; /* je: equal / zero */

loc_003274E1: ;
    eax = 0x828988;

loc_003274E6: ;
    SET_LO8(ebx, 1);
    goto loc_00327504;

loc_003274EA: ;
    eax = MEM32(0x8EACE4);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(ebx, 1);
    goto loc_00327504;

loc_003274F6: ;
    eax = 0x7B891F;
    goto loc_00327504;

loc_003274FD: ;
    eax = MEM32(eax * 4 + 0x8C44BC);

loc_00327504: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0032750Fu); RECOMP_ABI_CALL(0x0002F2D0u, sub_0002F2D0); /* call 0x0002F2D0 */

loc_0032750F: ;
    esi = MEM32(esp + 0x118);
    PUSH32(esp, 0x828978);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x4C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x0032752Eu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0032752E: ;
    PUSH32(esp, 0x8FC908);
    PUSH32(esp, 0x8FC7D0);
    PUSH32(esp, 0x0032753Du); RECOMP_ABI_CALL(0x00508370u, sub_00508370); /* call 0x00508370 */

loc_0032753D: ;
    PUSH32(esp, 0x8280F0);
    PUSH32(esp, esi);
    eax = esp + 0x34;
    PUSH32(esp, 0x7E73C0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00327552u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00327552: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x44;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00327562u); RECOMP_ABI_CALL(0x005084B0u, sub_005084B0); /* call 0x005084B0 */

loc_00327562: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x907DE8);
    ecx = edi + 0x40;
    MEM8(edi + 0x3C) = LO8(ebx);
    PUSH32(esp, 0x00327575u); RECOMP_ABI_CALL(0x0001FAF6u, sub_0001FAF6); /* call 0x0001FAF6 */

loc_00327575: ;
    POP32(esp, esi);
    MEM8(edi + 0x48) = 1;
    POP32(esp, ebx);

loc_0032757B: ;
    POP32(esp, edi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}
