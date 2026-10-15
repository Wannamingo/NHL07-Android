/**
 * nhl_07_recomp - Recompiled code chunk 127
 * Functions: 250 (0x001CACC0 - 0x001CF220)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_001CACC0
 * Original: 0x001CACC0 - 0x001CAD0E (78 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CACC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CACC0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = 0x7F07A0;
    if (CMP_EQ(_fa, _fb)) goto loc_001CAD0C; /* je: equal / zero */

loc_001CACD0: ;
    PUSH32(esp, esi);

loc_001CACD1: ;
    eax = MEM32(edi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CACF8; /* je: equal / zero */

loc_001CACD8: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CACE6; /* je: equal / zero */

loc_001CACE4: ;
    MEM32(ecx) = edx;

loc_001CACE6: ;
    esi = MEM32(eax + 8);
    PUSH32(esp, eax);
    ecx = 0x8F4BE0;
    PUSH32(esp, 0x001CACF4u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_001CACF4: ;
    eax = esi;
    goto loc_001CACFB;

loc_001CACF8: ;
    eax = MEM32(edi + 0x20);

loc_001CACFB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CAD01u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CAD01: ;
    eax = MEM32(edi + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CACD1; /* jne: not equal / not zero */

loc_001CAD0B: ;
    POP32(esp, esi);

loc_001CAD0C: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CAD30
 * Original: 0x001CAD30 - 0x001CADA8 (120 bytes, 53 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAD30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CAD30: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax * 8 + 0x8B3E28);
    ecx = MEM32(ecx + 8);
    eax = MEM32(ecx + 0x50);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_001CAD95; /* jle: less or equal (signed <=) */

loc_001CAD4F: ;
    ebp = MEM32(ecx + 0x54);

loc_001CAD52: ;
    ecx = MEM32(ebp);
    esi = MEM32(esp + 0x14);
    ecx = MEM32(ecx + 0xC);
    /* nop */

loc_001CAD60: ;
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001CAD84; /* jne: not equal / not zero */

loc_001CAD68: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAD80; /* je: equal / zero */

loc_001CAD6C: ;
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(edx, LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(MEM8(esi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), MEM8(esi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_001CAD84; /* jne: not equal / not zero */

loc_001CAD76: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_001CAD60; /* jne: not equal / not zero */

loc_001CAD80: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_001CAD89;

loc_001CAD84: ;
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(ecx) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_001CAD89: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAD9F; /* je: equal / zero */

loc_001CAD8D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(8)) >> 32) & 1);
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_001CAD52; /* jl: less (signed <) */

loc_001CAD95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_001CAD9F: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CADD0
 * Original: 0x001CADD0 - 0x001CAE57 (135 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CADD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CADD0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAE42; /* je: equal / zero */

loc_001CADDA: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_001CADE0: ;
    eax = MEM32(ebx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CAE05; /* je: equal / zero */

loc_001CADE7: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(eax);
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CADF5; /* je: equal / zero */

loc_001CADF3: ;
    MEM32(ecx) = edx;

loc_001CADF5: ;
    edi = MEM32(eax + 8);
    PUSH32(esp, eax);
    ecx = 0x8F4BE0;
    PUSH32(esp, 0x001CAE03u); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_001CAE03: ;
    goto loc_001CAE08;

loc_001CAE05: ;
    edi = MEM32(ebx + 0x20);

loc_001CAE08: ;
    eax = MEM32(edi);
    esi = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001CAE15u); RECOMP_ABI_CALL(0x000209E2u, sub_000209E2); /* call 0x000209E2 */

loc_001CAE15: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x50) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CAE25; /* jge: greater or equal (signed >=) */

loc_001CAE1D: ;
    ecx = MEM32(esi + 0x54);
    eax = ecx + eax * 8;
    goto loc_001CAE27;

loc_001CAE25: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CAE27: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    MEM32(edx + 0x44) = 1;
    PUSH32(esp, 0x001CAE36u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CAE36: ;
    eax = MEM32(ebx + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CADE0; /* jne: not equal / not zero */

loc_001CAE40: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_001CAE42: ;
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CAE4Bu); RECOMP_ABI_CALL(0x0001ED27u, sub_0001ED27); /* call 0x0001ED27 */

loc_001CAE4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x14) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CAE80
 * Original: 0x001CAE80 - 0x001CAFE7 (359 bytes, 106 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CAE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CAE80: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x124) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi + 0x128) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi) = 0x7F0750;
    MEM8(esi + 0x12C) = LO8(eax);
    MEM32(esi + 0x130) = eax;
    if ((_fa == 0)) goto loc_001CAFA6; /* je: equal / zero */

loc_001CAEC8: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CAFDA; /* jne: not equal / not zero */

loc_001CAECF: ;
    ecx = MEM32(0x8F219C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8FA280);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CAEDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAEDCu); } /* indirect call */
    }

loc_001CAEDF: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + ecx * 4 + 8) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x8F21A0);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8FA280);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CAEF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAEF6u); } /* indirect call */
    }

loc_001CAEF9: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + ecx * 4 + 8) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x8F21A4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8FA280);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CAF13u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAF10u); } /* indirect call */
    }

loc_001CAF13: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + ecx * 4 + 8) = eax;
    ecx = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    MEM32(esi + 4) = ecx;
    ecx = MEM32(0x8F21B0);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x8F21BC) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8FA280);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CAF39u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAF36u); } /* indirect call */
    }

loc_001CAF39: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + ecx * 4 + 8) = eax;
    ecx = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    MEM32(esi + 4) = ecx;
    ecx = MEM32(0x8F21A8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x8F2178) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8FA280);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CAF5Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAF5Cu); } /* indirect call */
    }

loc_001CAF5F: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + ecx * 4 + 8) = eax;
    ecx = MEM32(esi + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    MEM32(esi + 4) = ecx;
    ecx = MEM32(0x8F21AC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x8F2174) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8FA280);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CAF85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAF82u); } /* indirect call */
    }

loc_001CAF85: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + ecx * 4 + 8) = eax;
    eax = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(0x8F21C0) = eax;
    PUSH32(esp, 0x001CAFA0u); RECOMP_ABI_CALL(0x00029FD3u, sub_00029FD3); /* call 0x00029FD3 */

loc_001CAFA0: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001CAFA6: ;
    ecx = MEM32(0x8F2194);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8FA280);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CAFB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAFB3u); } /* indirect call */
    }

loc_001CAFB6: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + ecx * 4 + 8) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x8F2198);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8FA280);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CAFD0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CAFCDu); } /* indirect call */
    }

loc_001CAFD0: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + ecx * 4 + 8) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CAFDA: ;
    ecx = esi;
    PUSH32(esp, 0x001CAFE1u); RECOMP_ABI_CALL(0x00029FD3u, sub_00029FD3); /* call 0x00029FD3 */

loc_001CAFE1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CB040
 * Original: 0x001CB040 - 0x001CB064 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB040(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB040: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F0750;
    PUSH32(esp, 0x001CB04Eu); RECOMP_ABI_CALL(0x0001547Au, sub_0001547A); /* call 0x0001547A */

loc_001CB04E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CB05E; /* je: equal / zero */

loc_001CB055: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CB05Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CB05B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CB05E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CB070
 * Original: 0x001CB070 - 0x001CB211 (417 bytes, 121 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB070: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x128);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fa == 0)) goto loc_001CB1BB; /* je: equal / zero */

loc_001CB09F: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CB209; /* jne: not equal / not zero */

loc_001CB0A6: ;
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(0x8F219C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001CB0BAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB0B7u); } /* indirect call */
    }

loc_001CB0BA: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(0x8F21A0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001CB0CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB0CBu); } /* indirect call */
    }

loc_001CB0CE: ;
    _fa = (uint32_t)(MEM8(esp + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x1C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB147; /* je: equal / zero */

loc_001CB0D4: ;
    eax = MEM32(0x8F2174);
    ecx = MEM32(esi + eax * 4 + 8);
    MEM32(ecx + 0x44) = ebx;
    edx = MEM32(0x8F21C0);
    eax = MEM32(esi + edx * 4 + 8);
    MEM32(eax + 0x44) = ebx;
    ecx = MEM32(0x8F21BC);
    edx = MEM32(esi + ecx * 4 + 8);
    eax = 1;
    MEM32(edx + 0x44) = eax;
    ecx = MEM32(0x8F2178);
    edx = MEM32(esi + ecx * 4 + 8);
    MEM32(edx + 0x44) = eax;
    eax = MEM32(0x8F21BC);
    ecx = MEM32(esi + eax * 4 + 8);
    edx = MEM32(ecx);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x8F21A4);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CB125u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB122u); } /* indirect call */
    }

loc_001CB125: ;
    ecx = MEM32(0x8F2178);
    ecx = MEM32(esi + ecx * 4 + 8);
    edx = MEM32(ecx);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x8F21B0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CB13Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB13Cu); } /* indirect call */
    }

loc_001CB13F: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001CB147: ;
    ecx = MEM32(0x8F21BC);
    edx = MEM32(esi + ecx * 4 + 8);
    MEM32(edx + 0x44) = ebx;
    eax = MEM32(0x8F2178);
    ecx = MEM32(esi + eax * 4 + 8);
    MEM32(ecx + 0x44) = ebx;
    edx = MEM32(0x8F2174);
    ecx = MEM32(esi + edx * 4 + 8);
    eax = 1;
    MEM32(ecx + 0x44) = eax;
    edx = MEM32(0x8F21C0);
    ecx = MEM32(esi + edx * 4 + 8);
    MEM32(ecx + 0x44) = eax;
    edx = MEM32(0x8F2174);
    ecx = MEM32(esi + edx * 4 + 8);
    eax = MEM32(ecx);
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(0x8F21A8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x001CB19Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB197u); } /* indirect call */
    }

loc_001CB19A: ;
    eax = MEM32(0x8F21C0);
    ecx = MEM32(esi + eax * 4 + 8);
    edx = MEM32(ecx);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x8F21AC);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CB1B3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB1B0u); } /* indirect call */
    }

loc_001CB1B3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_001CB1BB: ;
    ecx = MEM32(esi + 8);
    edx = MEM32(ecx);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x8F2194);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CB1CEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB1CBu); } /* indirect call */
    }

loc_001CB1CE: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7F0660)); /* movss */
    ecx = MEM32(esi + 0xC);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(0x8F2198);
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x001CB209u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB206u); } /* indirect call */
    }

loc_001CB209: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CB280
 * Original: 0x001CB280 - 0x001CB2A4 (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB280: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F075C;
    PUSH32(esp, 0x001CB28Eu); RECOMP_ABI_CALL(0x0001547Au, sub_0001547A); /* call 0x0001547A */

loc_001CB28E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CB29E; /* je: equal / zero */

loc_001CB295: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CB29Bu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CB29B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CB29E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CB2B0
 * Original: 0x001CB2B0 - 0x001CB2D7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB2B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x7F0768;
    PUSH32(esp, 0x001CB2C1u); RECOMP_ABI_CALL(0x0001F14Bu, sub_0001F14B); /* call 0x0001F14B */

loc_001CB2C1: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CB2D1; /* je: equal / zero */

loc_001CB2C8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CB2CEu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CB2CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CB2D1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CB2E0
 * Original: 0x001CB2E0 - 0x001CB368 (136 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB2E0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = ebx;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = ebx;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    edi = esi + 0x50;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    ecx = edi;
    MEM32(esi) = 0x7F076C;
    PUSH32(esp, 0x001CB342u); RECOMP_ABI_CALL(0x0002B22Au, sub_0002B22A); /* call 0x0002B22A */

loc_001CB342: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    MEM32(esi + 4) = edi;
    POP32(esp, edi);
    MEM8(esi + 0x100) = LO8(ebx);
    MEMF(esi + 0xF0) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x60) = 0x8F23A8;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CB390
 * Original: 0x001CB390 - 0x001CB3FD (109 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB390(void)
{
    int _flags = 0; /* fallback flag var */
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_001CB390: ;
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xF0)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(edx);
    eax = ecx + 0x14;
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x18); /* comiss */
    edx = MEM32(esp + 8);
    esi = MEM32(edx);
    eax = ecx + 0x20;
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001CB3D7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x18)) */

loc_001CB3CE: ;
    eax = MEM32(ecx + 0xF0);
    MEM32(ecx + 0x18) = eax;

loc_001CB3D7: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xF0)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 0x24); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_001CB3EE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx + 0x24)) */

loc_001CB3E5: ;
    edx = MEM32(ecx + 0xF0);
    MEM32(ecx + 0x24) = edx;

loc_001CB3EE: ;
    MEM8(ecx + 0x100) = 0;
    PUSH32(esp, 0x001CB3FAu); RECOMP_ABI_CALL(0x0002A8A7u, sub_0002A8A7); /* call 0x0002A8A7 */

loc_001CB3FA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CB420
 * Original: 0x001CB420 - 0x001CB443 (35 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB420: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CB428u); RECOMP_ABI_CALL(0x00029E25u, sub_00029E25); /* call 0x00029E25 */

loc_001CB428: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CB43D; /* je: equal / zero */

loc_001CB42F: ;
    ecx = MEM32(0x9092A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CB43Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB43Au); } /* indirect call */
    }

loc_001CB43D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CB450
 * Original: 0x001CB450 - 0x001CB4D2 (130 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CB450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    MEM32(esp + 0x28) = 9;
    MEM32(esp + 0x2C) = 0xB;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CB485u); RECOMP_ABI_CALL(0x0001E09Du, sub_0001E09D); /* call 0x0001E09D */

loc_001CB485: ;
    esi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001CB490: ;
    edi = MEM32(esp + ebx * 4 + 0x18);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CB4A1u); RECOMP_ABI_CALL(0x001CA560u, sub_001CA560); /* call 0x001CA560 */

loc_001CB4A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CB4C0; /* jne: not equal / not zero */

loc_001CB4A8: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CB490; /* jl: less (signed <) */

loc_001CB4AE: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CB4B7u); RECOMP_ABI_CALL(0x00029E25u, sub_00029E25); /* call 0x00029E25 */

loc_001CB4B7: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001CB4C0: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CB4C9u); RECOMP_ABI_CALL(0x00029E25u, sub_00029E25); /* call 0x00029E25 */

loc_001CB4C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001CB500
 * Original: 0x001CB500 - 0x001CB587 (135 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001CB500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB500: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x64;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    MEM32(esp + 0x28) = 0xF;
    MEM32(esp + 0x2C) = 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CB535u); RECOMP_ABI_CALL(0x0001E09Du, sub_0001E09D); /* call 0x0001E09D */

loc_001CB535: ;
    esi = MEM32(ebp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001CB540: ;
    edi = MEM32(esp + ebx * 4 + 0x18);
    xmm0 = XMM_SCALAR(MEMF(0x7ABD68)); /* movss */
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CB556u); RECOMP_ABI_CALL(0x001CA560u, sub_001CA560); /* call 0x001CA560 */

loc_001CB556: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CB575; /* jne: not equal / not zero */

loc_001CB55D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CB540; /* jl: less (signed <) */

loc_001CB563: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CB56Cu); RECOMP_ABI_CALL(0x00029E25u, sub_00029E25); /* call 0x00029E25 */

loc_001CB56C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_001CB575: ;
    ecx = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001CB57Eu); RECOMP_ABI_CALL(0x00029E25u, sub_00029E25); /* call 0x00029E25 */

loc_001CB57E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001CB5B0
 * Original: 0x001CB5B0 - 0x001CB5C1 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB5B0(void)
{

loc_001CB5B0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CB5D0
 * Original: 0x001CB5D0 - 0x001CB600 (48 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB5D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB5D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB5FE; /* je: equal / zero */

loc_001CB5DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_001CB5FA; /* je: equal / zero */

loc_001CB5E1: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = edi;
    MEM32(edx + 4) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001CB5EF; /* je: equal / zero */

loc_001CB5ED: ;
    MEM32(ecx) = edx;

loc_001CB5EF: ;
    PUSH32(esp, eax);
    ecx = 0x8F4BE0;
    PUSH32(esp, 0x001CB5FAu); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_001CB5FA: ;
    MEM32(esi + 8) = edi;
    POP32(esp, edi);

loc_001CB5FE: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CB610
 * Original: 0x001CB610 - 0x001CBA89 (1145 bytes, 344 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CB610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CB610: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x909394);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x64);
    PUSH32(esp, ebx);
    MEM32(0x8F2194) = ebx;
    MEM32(0x8F2198) = ebx;
    MEM32(0x8F219C) = ebx;
    MEM32(0x8F21A0) = ebx;
    MEM32(0x8F21A4) = ebx;
    MEM32(0x8F21A8) = ebx;
    MEM32(0x8F21AC) = ebx;
    MEM32(0x8F21B0) = ebx;
    MEM32(0x8F21B4) = ebx;
    MEM8(0x8F2170) = LO8(ebx);
    eax = MEM32(eax + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7F0860);
    PUSH32(esp, 0x001CB669u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_001CB669: ;
    ecx = eax;
    PUSH32(esp, 0x001CB670u); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_001CB670: ;
    ecx = MEM32(0x8FC1D0);
    MEM32(0x8F21B8) = eax;
    eax = MEM32(ecx + 0xE8);
    SET_LO8(edx, MEM8(eax + 0x34D));
    MEM8(eax + 0x34D) = 1;
    _fa = (uint32_t)(MEM32(0x8F21B8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x8F21B8), ebx (32-bit) */
    MEM8(esp + 0xB) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_001CB98A; /* je: equal / zero */

loc_001CB69E: ;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CB6C6; /* jne: not equal / not zero */

loc_001CB6A7: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x001CB6AFu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001CB6AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB6BF; /* je: equal / zero */

loc_001CB6B6: ;
    ecx = eax;
    PUSH32(esp, 0x001CB6BDu); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_001CB6BD: ;
    goto loc_001CB6C1;

loc_001CB6BF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CB6C1: ;
    MEM32(0x8FA278) = eax;

loc_001CB6C6: ;
    PUSH32(esp, 0x30649);
    PUSH32(esp, 1);
    esi = eax;
    eax = MEM32(0x8F21B8);
    PUSH32(esp, 0x7F084C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CB6DFu); RECOMP_ABI_CALL(0x005984FDu, sub_005984FD); /* call 0x005984FD */

loc_001CB6DF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001CB6EAu); RECOMP_ABI_CALL(0x0001120Du, sub_0001120D); /* call 0x0001120D */

loc_001CB6EA: ;
    MEM32(0x8F2194) = eax;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CB717; /* jne: not equal / not zero */

loc_001CB6F8: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x001CB700u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001CB700: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB710; /* je: equal / zero */

loc_001CB707: ;
    ecx = eax;
    PUSH32(esp, 0x001CB70Eu); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_001CB70E: ;
    goto loc_001CB712;

loc_001CB710: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CB712: ;
    MEM32(0x8FA278) = eax;

loc_001CB717: ;
    ecx = MEM32(0x8F21B8);
    PUSH32(esp, 0x30649);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7F0838);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x001CB731u); RECOMP_ABI_CALL(0x005984FDu, sub_005984FD); /* call 0x005984FD */

loc_001CB731: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001CB73Cu); RECOMP_ABI_CALL(0x0001120Du, sub_0001120D); /* call 0x0001120D */

loc_001CB73C: ;
    MEM32(0x8F2198) = eax;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CB769; /* jne: not equal / not zero */

loc_001CB74A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x001CB752u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001CB752: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB762; /* je: equal / zero */

loc_001CB759: ;
    ecx = eax;
    PUSH32(esp, 0x001CB760u); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_001CB760: ;
    goto loc_001CB764;

loc_001CB762: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CB764: ;
    MEM32(0x8FA278) = eax;

loc_001CB769: ;
    edx = MEM32(0x8F21B8);
    PUSH32(esp, 0x30649);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7F0824);
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0x001CB783u); RECOMP_ABI_CALL(0x005984FDu, sub_005984FD); /* call 0x005984FD */

loc_001CB783: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001CB78Eu); RECOMP_ABI_CALL(0x0001120Du, sub_0001120D); /* call 0x0001120D */

loc_001CB78E: ;
    MEM32(0x8F219C) = eax;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(0x8F2170) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_001CB7C2; /* jne: not equal / not zero */

loc_001CB7A3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x001CB7ABu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001CB7AB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB7BB; /* je: equal / zero */

loc_001CB7B2: ;
    ecx = eax;
    PUSH32(esp, 0x001CB7B9u); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_001CB7B9: ;
    goto loc_001CB7BD;

loc_001CB7BB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CB7BD: ;
    MEM32(0x8FA278) = eax;

loc_001CB7C2: ;
    PUSH32(esp, 0x30649);
    PUSH32(esp, 1);
    esi = eax;
    eax = MEM32(0x8F21B8);
    PUSH32(esp, 0x7F0810);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CB7DBu); RECOMP_ABI_CALL(0x005984FDu, sub_005984FD); /* call 0x005984FD */

loc_001CB7DB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001CB7E6u); RECOMP_ABI_CALL(0x0001120Du, sub_0001120D); /* call 0x0001120D */

loc_001CB7E6: ;
    MEM32(0x8F21A0) = eax;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM8(0x8F2170) = LO8(ebx);
    if (CMP_NE(_fa, _fb)) goto loc_001CB819; /* jne: not equal / not zero */

loc_001CB7FA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x001CB802u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001CB802: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB812; /* je: equal / zero */

loc_001CB809: ;
    ecx = eax;
    PUSH32(esp, 0x001CB810u); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_001CB810: ;
    goto loc_001CB814;

loc_001CB812: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CB814: ;
    MEM32(0x8FA278) = eax;

loc_001CB819: ;
    ecx = MEM32(0x8F21B8);
    PUSH32(esp, 0x30649);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7F07F8);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x001CB833u); RECOMP_ABI_CALL(0x005984FDu, sub_005984FD); /* call 0x005984FD */

loc_001CB833: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001CB83Eu); RECOMP_ABI_CALL(0x0001120Du, sub_0001120D); /* call 0x0001120D */

loc_001CB83E: ;
    MEM32(0x8F21A4) = eax;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CB86B; /* jne: not equal / not zero */

loc_001CB84C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x001CB854u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001CB854: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB864; /* je: equal / zero */

loc_001CB85B: ;
    ecx = eax;
    PUSH32(esp, 0x001CB862u); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_001CB862: ;
    goto loc_001CB866;

loc_001CB864: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CB866: ;
    MEM32(0x8FA278) = eax;

loc_001CB86B: ;
    edx = MEM32(0x8F21B8);
    PUSH32(esp, 0x30649);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7F07E0);
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0x001CB885u); RECOMP_ABI_CALL(0x005984FDu, sub_005984FD); /* call 0x005984FD */

loc_001CB885: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001CB890u); RECOMP_ABI_CALL(0x0001120Du, sub_0001120D); /* call 0x0001120D */

loc_001CB890: ;
    MEM32(0x8F21A8) = eax;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CB8BD; /* jne: not equal / not zero */

loc_001CB89E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x001CB8A6u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001CB8A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB8B6; /* je: equal / zero */

loc_001CB8AD: ;
    ecx = eax;
    PUSH32(esp, 0x001CB8B4u); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_001CB8B4: ;
    goto loc_001CB8B8;

loc_001CB8B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CB8B8: ;
    MEM32(0x8FA278) = eax;

loc_001CB8BD: ;
    PUSH32(esp, 0x30649);
    PUSH32(esp, 1);
    esi = eax;
    eax = MEM32(0x8F21B8);
    PUSH32(esp, 0x7F07C8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CB8D6u); RECOMP_ABI_CALL(0x005984FDu, sub_005984FD); /* call 0x005984FD */

loc_001CB8D6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001CB8E1u); RECOMP_ABI_CALL(0x0001120Du, sub_0001120D); /* call 0x0001120D */

loc_001CB8E1: ;
    MEM32(0x8F21AC) = eax;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CB90E; /* jne: not equal / not zero */

loc_001CB8EF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x001CB8F7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001CB8F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB907; /* je: equal / zero */

loc_001CB8FE: ;
    ecx = eax;
    PUSH32(esp, 0x001CB905u); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_001CB905: ;
    goto loc_001CB909;

loc_001CB907: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CB909: ;
    MEM32(0x8FA278) = eax;

loc_001CB90E: ;
    ecx = MEM32(0x8F21B8);
    PUSH32(esp, 0x30649);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7F07B0);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x001CB928u); RECOMP_ABI_CALL(0x005984FDu, sub_005984FD); /* call 0x005984FD */

loc_001CB928: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001CB933u); RECOMP_ABI_CALL(0x0001120Du, sub_0001120D); /* call 0x0001120D */

loc_001CB933: ;
    MEM32(0x8F21B0) = eax;
    eax = MEM32(0x8FA278);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CB960; /* jne: not equal / not zero */

loc_001CB941: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x001CB949u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001CB949: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CB959; /* je: equal / zero */

loc_001CB950: ;
    ecx = eax;
    PUSH32(esp, 0x001CB957u); RECOMP_ABI_CALL(0x0002E9A7u, sub_0002E9A7); /* call 0x0002E9A7 */

loc_001CB957: ;
    goto loc_001CB95B;

loc_001CB959: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CB95B: ;
    MEM32(0x8FA278) = eax;

loc_001CB960: ;
    edx = MEM32(0x8F21B8);
    PUSH32(esp, 0x30649);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7F07A4);
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0x001CB97Au); RECOMP_ABI_CALL(0x005984FDu, sub_005984FD); /* call 0x005984FD */

loc_001CB97A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x001CB985u); RECOMP_ABI_CALL(0x0001120Du, sub_0001120D); /* call 0x0001120D */

loc_001CB985: ;
    MEM32(0x8F21B4) = eax;

loc_001CB98A: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001CB990: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x134);
    PUSH32(esp, 0x001CB99Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001CB99B: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CBA1E; /* je: equal / zero */

loc_001CB9A4: ;
    MEM32(esi + 4) = ebx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi) = 0x7F0750;
    MEM32(esi + 0x124) = 0xFFFFFFFFu;
    MEM32(esi + 0x128) = ebx;
    MEM8(esi + 0x12C) = LO8(ebx);
    MEM32(esi + 0x130) = ebx;
    ecx = MEM32(0x8F2194);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8FA280);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CB9EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CB9EAu); } /* indirect call */
    }

loc_001CB9ED: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + ecx * 4 + 8) = eax;
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x8F2198);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8FA280);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CBA07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CBA04u); } /* indirect call */
    }

loc_001CBA07: ;
    ecx = MEM32(esi + 4);
    MEM32(esi + ecx * 4 + 8) = eax;
    eax = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x001CBA1Cu); RECOMP_ABI_CALL(0x00029FD3u, sub_00029FD3); /* call 0x00029FD3 */

loc_001CBA1C: ;
    goto loc_001CBA20;

loc_001CBA1E: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CBA20: ;
    MEM32(edi + 0x8F217C) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xC (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CB990; /* jle: less or equal (signed <=) */

loc_001CBA32: ;
    esi = 0x10;
    POP32(esp, edi);
    goto loc_001CBA40;

    /* nop */

loc_001CBA40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x134);
    PUSH32(esp, 0x001CBA4Bu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001CBA4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CBA5F; /* je: equal / zero */

loc_001CBA52: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = eax;
    PUSH32(esp, 0x001CBA5Du); RECOMP_ABI_CALL(0x00036945u, sub_00036945); /* call 0x00036945 */

loc_001CBA5D: ;
    goto loc_001CBA61;

loc_001CBA5F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CBA61: ;
    MEM32(esi + 0x8F217C) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x14 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CBA40; /* jle: less or equal (signed <=) */

loc_001CBA6F: ;
    edx = MEM32(0x8FC1D0);
    eax = MEM32(edx + 0xE8);
    SET_LO8(ecx, MEM8(esp + 0xB));
    POP32(esp, esi);
    MEM8(eax + 0x34D) = LO8(ecx);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CBBB0
 * Original: 0x001CBBB0 - 0x001CBC85 (213 bytes, 74 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBBB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CBBB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    eax = MEM32(ecx + 4);
    SET_LO8(ecx, MEM8(ecx + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    MEM8(esp + 0x10) = LO8(ecx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(esp + 0x1C) = esi;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_001CBBEA; /* jne: not equal / not zero */

loc_001CBBE3: ;
    edi = 3;
    goto loc_001CBBF9;

loc_001CBBEA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CBBF9; /* jne: not equal / not zero */

loc_001CBBEF: ;
    ecx = 4;
    edi = 5;

loc_001CBBF9: ;
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001CBC4C; /* jg: greater (signed >) */

loc_001CBC00: ;
    edx = MEM32(ecx * 4 + 0x8F217C);
    _fa = (uint32_t)(MEM8(edx + 0x12C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x12C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CBC3F; /* jne: not equal / not zero */

loc_001CBC10: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CBC31; /* jne: not equal / not zero */

loc_001CBC14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x124)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x124) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CBC31; /* jne: not equal / not zero */

loc_001CBC1C: ;
    SET_LO8(ebx, 1);
    MEM8(edx + 0x12C) = LO8(ebx);
    edx = MEM32(ecx * 4 + 0x8F217C);
    MEM32(esp + 0x1C) = edx;
    goto loc_001CBC3F;

loc_001CBC31: ;
    edx = MEM32(edx + 0x130);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CBC3F; /* jl: less (signed <) */

loc_001CBC3B: ;
    esi = edx;
    ebp = ecx;

loc_001CBC3F: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CBC00; /* jle: less or equal (signed <=) */

loc_001CBC44: ;
    ecx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CBC7B; /* jne: not equal / not zero */

loc_001CBC4C: ;
    esi = MEM32(ebp * 4 + 0x8F217C);
    ecx = MEM32(esp + 0x14);
    MEM32(esi + 0x124) = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM8(esi + 0x12C) = 1;
    PUSH32(esp, 0x001CBC71u); RECOMP_ABI_CALL(0x00031C79u, sub_00031C79); /* call 0x00031C79 */

loc_001CBC71: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001CBC7B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CBCC0
 * Original: 0x001CBCC0 - 0x001CBCDE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBCC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CBCC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x001CBCC8u); RECOMP_ABI_CALL(0x0002DB8Du, sub_0002DB8D); /* call 0x0002DB8D */

loc_001CBCC8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CBCD8; /* je: equal / zero */

loc_001CBCCF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CBCD5u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CBCD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CBCD8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CBCF0
 * Original: 0x001CBCF0 - 0x001CBD80 (144 bytes, 55 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBCF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CBCF0: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx + 0x18;
    if (CMP_EQ(_fa, _fb)) goto loc_001CBD1D; /* je: equal / zero */

loc_001CBD00: ;
    ecx = MEM32(eax + 8);

loc_001CBD03: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CBD67; /* je: equal / zero */

loc_001CBD07: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CBD17; /* je: equal / zero */

loc_001CBD0B: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CBD17; /* je: equal / zero */

loc_001CBD12: ;
    ecx = MEM32(eax + 8);
    goto loc_001CBD19;

loc_001CBD17: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CBD19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CBD03; /* jne: not equal / not zero */

loc_001CBD1D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x100);
    PUSH32(esp, 8);
    PUSH32(esp, 0x001CBD2Au); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_001CBD2A: ;
    esi = eax;
    eax = MEM32(esp + 0x1C);
    MEM32(esi) = ebx;
    ecx = MEM32(0x896158);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x8F4BE0;
    PUSH32(esp, 0x001CBD4Au); RECOMP_ABI_CALL(0x0059CA23u, sub_0059CA23); /* call 0x0059CA23 */

loc_001CBD4A: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CBD53; /* je: equal / zero */

loc_001CBD51: ;
    MEM32(ecx) = eax;

loc_001CBD53: ;
    MEM32(eax) = edi;
    edx = MEM32(edi + 4);
    MEM32(eax + 8) = esi;
    MEM32(eax + 4) = edx;
    MEM32(edi + 4) = eax;
    POP32(esp, esi);

loc_001CBD62: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_001CBD67: ;
    edx = MEM32(0x896158);
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CBD62; /* jle: less or equal (signed <=) */

loc_001CBD78: ;
    POP32(esp, edi);
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CBDB0
 * Original: 0x001CBDB0 - 0x001CBE9B (235 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBDB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CBDB0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edi = ecx;
    PUSH32(esp, edi);
    MEM32(esp + 8) = edi;
    PUSH32(esp, 0x001CBDBEu); RECOMP_ABI_CALL(0x0002F753u, sub_0002F753); /* call 0x0002F753 */

loc_001CBDBE: ;
    MEM32(edi + 0x14) = eax;
    eax = MEM32(edi + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CBE98; /* je: equal / zero */

loc_001CBDCF: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CBDDC; /* je: equal / zero */

loc_001CBDD7: ;
    ebx = MEM32(esi + 8);
    goto loc_001CBDDE;

loc_001CBDDC: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CBDDE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CBE96; /* je: equal / zero */

loc_001CBDE6: ;
    goto loc_001CBDF0;

loc_001CBDE8: ;
    edi = MEM32(esp + 0xC);
    /* nop */

loc_001CBDF0: ;
    eax = MEM32(ebx);
    edi = MEM32(edi + 0x14);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001CBDFDu); RECOMP_ABI_CALL(0x000209E2u, sub_000209E2); /* call 0x000209E2 */

loc_001CBDFD: ;
    ecx = MEM32(ebx + 4);
    edx = MEM32(0x896158);
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    ecx = MEM32(edi + 0x50);
    if (CMP_LE(_fas, _fbs)) goto loc_001CBE32; /* jle: less or equal (signed <=) */

loc_001CBE10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CBE25; /* jge: greater or equal (signed >=) */

loc_001CBE14: ;
    edx = MEM32(edi + 0x54);
    eax = edx + eax * 8;
    eax = MEM32(eax);
    MEM32(eax + 0x44) = 0;
    goto loc_001CBE7C;

loc_001CBE25: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(eax);
    MEM32(eax + 0x44) = 0;
    goto loc_001CBE7C;

loc_001CBE32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CBE3E; /* jge: greater or equal (signed >=) */

loc_001CBE36: ;
    ecx = MEM32(edi + 0x54);
    eax = ecx + eax * 8;
    goto loc_001CBE40;

loc_001CBE3E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CBE40: ;
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    MEM32(edx + 0x44) = 1;
    PUSH32(esp, 0x001CBE4Fu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CBE4F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CBE8C; /* je: equal / zero */

loc_001CBE56: ;
    eax = MEM32(esp + 0xC);
    edi = MEM32(esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CBE7A; /* je: equal / zero */

loc_001CBE63: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CBE6F; /* je: equal / zero */

loc_001CBE6D: ;
    MEM32(eax) = edi;

loc_001CBE6F: ;
    PUSH32(esp, esi);
    ecx = 0x8F4BE0;
    PUSH32(esp, 0x001CBE7Au); RECOMP_ABI_CALL(0x0059CA4Cu, sub_0059CA4C); /* call 0x0059CA4C */

loc_001CBE7A: ;
    esi = edi;

loc_001CBE7C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CBE8C; /* je: equal / zero */

loc_001CBE80: ;
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CBE8C; /* je: equal / zero */

loc_001CBE87: ;
    ebx = MEM32(esi + 8);
    goto loc_001CBE8E;

loc_001CBE8C: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CBE8E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CBDE8; /* jne: not equal / not zero */

loc_001CBE96: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001CBE98: ;
    POP32(esp, edi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CBEE0
 * Original: 0x001CBEE0 - 0x001CBF15 (53 bytes, 21 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBEE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CBEE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001CBEE9u); RECOMP_ABI_CALL(0x0001A4B6u, sub_0001A4B6); /* call 0x0001A4B6 */

loc_001CBEE9: ;
    eax = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x001CBF00u); RECOMP_ABI_CALL(0x00019458u, sub_00019458); /* call 0x00019458 */

loc_001CBF00: ;
    ecx = esi;
    PUSH32(esp, 0x001CBF07u); RECOMP_ABI_CALL(0x00011154u, sub_00011154); /* call 0x00011154 */

loc_001CBF07: ;
    ecx = MEM32(edi);
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
 * sub_001CBF30
 * Original: 0x001CBF30 - 0x001CBF6C (60 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CBF30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x001CBF3Au); RECOMP_ABI_CALL(0x0002A8A7u, sub_0002A8A7); /* call 0x0002A8A7 */

loc_001CBF3A: ;
    ebx = MEM32(esp + 0x10);
    ecx = ebx;
    edi = esi + 8;
    PUSH32(esp, 0x001CBF48u); RECOMP_ABI_CALL(0x0001A4B6u, sub_0001A4B6); /* call 0x0001A4B6 */

loc_001CBF48: ;
    ecx = MEM32(ebx + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CBF56u); RECOMP_ABI_CALL(0x00019458u, sub_00019458); /* call 0x00019458 */

loc_001CBF56: ;
    ecx = ebx;
    PUSH32(esp, 0x001CBF5Du); RECOMP_ABI_CALL(0x00011154u, sub_00011154); /* call 0x00011154 */

loc_001CBF5D: ;
    ecx = MEM32(edi);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CBF80
 * Original: 0x001CBF80 - 0x001CBF86 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBF80(void)
{

loc_001CBF80: ;
    eax = MEM32(0x8FC63C);
    esp += 4; return; /* ret */

}

/**
 * sub_001CBF90
 * Original: 0x001CBF90 - 0x001CBF91 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBF90(void)
{

loc_001CBF90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CBFA0
 * Original: 0x001CBFA0 - 0x001CBFA1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBFA0(void)
{

loc_001CBFA0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CBFB0
 * Original: 0x001CBFB0 - 0x001CBFCB (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBFB0(void)
{

loc_001CBFB0: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CBFCAu); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CBFCA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CBFE0
 * Original: 0x001CBFE0 - 0x001CBFF1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CBFE0(void)
{

loc_001CBFE0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CBFF0u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001CBFF0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC000
 * Original: 0x001CC000 - 0x001CC001 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC000(void)
{

loc_001CC000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC010
 * Original: 0x001CC010 - 0x001CC014 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC010(void)
{

loc_001CC010: ;
    SET_LO8(eax, MEM8(ecx + 0xA));
    esp += 4; return; /* ret */

}

/**
 * sub_001CC020
 * Original: 0x001CC020 - 0x001CC02A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC020(void)
{

loc_001CC020: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC030
 * Original: 0x001CC030 - 0x001CC03A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC030(void)
{

loc_001CC030: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 8) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC040
 * Original: 0x001CC040 - 0x001CC04D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC040(void)
{

loc_001CC040: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x3FC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC050
 * Original: 0x001CC050 - 0x001CC057 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC050(void)
{

loc_001CC050: ;
    eax = ecx + 0x19C;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC060
 * Original: 0x001CC060 - 0x001CC067 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC060(void)
{

loc_001CC060: ;
    eax = ecx + 0x1BC;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC070
 * Original: 0x001CC070 - 0x001CC077 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC070(void)
{

loc_001CC070: ;
    eax = MEM32(ecx + 0x3FC);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC080
 * Original: 0x001CC080 - 0x001CC095 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC080(void)
{

loc_001CC080: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CC094u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CC094: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC0A0
 * Original: 0x001CC0A0 - 0x001CC0B1 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC0A0(void)
{

loc_001CC0A0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CC0B0u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001CC0B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC0C0
 * Original: 0x001CC0C0 - 0x001CC0C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC0C0(void)
{

loc_001CC0C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC0D0
 * Original: 0x001CC0D0 - 0x001CC0D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC0D0(void)
{

loc_001CC0D0: ;
    eax = 0x8F454C;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC0E0
 * Original: 0x001CC0E0 - 0x001CC0F5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC0E0(void)
{

loc_001CC0E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CC0F4u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CC0F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC100
 * Original: 0x001CC100 - 0x001CC111 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC100(void)
{

loc_001CC100: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CC110u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001CC110: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC120
 * Original: 0x001CC120 - 0x001CC12D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC120(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC120: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM8(eax + 9) = LO8(ecx);
    MEM8(eax + 0xA) = LO8(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC130
 * Original: 0x001CC130 - 0x001CC14C (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC130: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_001CC146; /* je: equal / zero */

loc_001CC13A: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CC146u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001CC146: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC160
 * Original: 0x001CC160 - 0x001CC166 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC160(void)
{

loc_001CC160: ;
    eax = MEM32(0x8F44F8);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC170
 * Original: 0x001CC170 - 0x001CC35A (490 bytes, 108 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC170: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ecx + 0x48) = eax;
    MEM32(ecx + 0x4C) = eax;
    MEM32(ecx + 0x50) = 3;
    MEM32(ecx + 0x54) = eax;
    MEM8(ecx + 0x58) = LO8(eax);
    MEM8(ecx + 0x98) = LO8(eax);
    MEM8(ecx + 0xD8) = LO8(eax);
    esi = MEM32(0x7F0BC4);
    edx = ecx + 0x118;
    MEM32(edx) = esi;
    esi = MEM32(0x7F0BC8);
    PUSH32(esp, edi);
    MEM32(edx + 4) = esi;
    esi = 0x8B3FBC;
    edi = edx;
    MEM16(ecx + 8) = 0x30;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001CC1C0: ;
    SET_LO8(edx, MEM8(esi));
    MEM8(edi + esi) = LO8(edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC1C0; /* jne: not equal / not zero */

loc_001CC1CA: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = ecx + 0x12C;

loc_001CC1D2: ;
    MEM32(esi) = eax;
    MEM8(ecx + edx + 0x134) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CC1D2; /* jl: less (signed <) */

loc_001CC1E4: ;
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x404) = edx;
    MEM32(ecx + 0x408) = edx;
    edx = 0x1388;
    MEM32(ecx + 0x414) = edx;
    MEM32(ecx + 0x41C) = edx;
    MEM32(ecx) = 0xFFFFFF9Du;
    MEM32(ecx + 4) = 0xFFFFFF9Du;
    MEM32(ecx + 0x138) = 1;
    MEM8(ecx + 0x58) = LO8(eax);
    MEM8(ecx + 0x13C) = LO8(eax);
    MEM8(ecx + 0x13D) = LO8(eax);
    MEM32(ecx + 0x140) = eax;
    MEM8(ecx + 0x39C) = LO8(eax);
    MEM32(ecx + 0x3BC) = eax;
    MEM32(ecx + 0x3C0) = eax;
    MEM8(ecx + 0x3C4) = LO8(eax);
    MEM32(ecx + 0x3E4) = eax;
    MEM8(ecx + 0x19C) = LO8(eax);
    MEM8(ecx + 0x1BC) = LO8(eax);
    MEM32(ecx + 0x400) = eax;
    MEM32(ecx + 0x3E8) = eax;
    MEM32(ecx + 0x3EC) = eax;
    MEM32(ecx + 0x3F0) = eax;
    MEM32(ecx + 0x3F4) = eax;
    MEM32(ecx + 0x3F8) = eax;
    MEM32(ecx + 0x3FC) = eax;
    MEM32(ecx + 0x40C) = eax;
    MEM32(ecx + 0x418) = 0x2710;
    MEM32(ecx + 0x410) = 0x7530;
    MEM32(ecx + 0x420) = 4;
    esi = 0x3E8;
    MEM32(ecx + 0x424) = esi;
    MEM32(ecx + 0x42C) = esi;
    edx = 0x5DC;
    MEM32(ecx + 0x428) = edx;
    MEM32(ecx + 0x438) = edx;
    MEM32(ecx + 0x430) = 6;
    MEM32(ecx + 0x434) = 0x7D0;
    MEM32(ecx + 0x43C) = eax;
    MEM32(ecx + 0x440) = eax;
    MEM32(ecx + 0x444) = eax;
    MEM32(ecx + 0x448) = eax;
    MEM32(ecx + 0x44C) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx + 0x25C;
    esi = ecx + 0x1DC;
    edx = ecx + 0x14C;

loc_001CC310: ;
    MEM8(ecx + edi + 0x13E) = LO8(eax);
    MEM32(edx + -8) = eax;
    MEM32(edx) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x20) = eax;
    MEM32(edx + 0x28) = eax;
    MEM32(edx + 0x30) = eax;
    MEM32(edx + 0x38) = eax;
    MEM32(edx + 0x40) = eax;
    MEM32(edx + 0x48) = eax;
    MEM8(esi + 0x40) = LO8(eax);
    MEM8(esi) = LO8(eax);
    MEM8(ebx) = LO8(eax);
    MEM8(esi + 0x180) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CC310; /* jl: less (signed <) */

loc_001CC356: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC27E
 * Original: 0x001CC27E - 0x001CC35A (220 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC27E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC27E: ;
    MEM32(ecx + 0x3FC) = eax;
    MEM32(ecx + 0x40C) = eax;
    MEM32(ecx + 0x418) = 0x2710;
    MEM32(ecx + 0x410) = 0x7530;
    MEM32(ecx + 0x420) = 4;
    esi = 0x3E8;
    MEM32(ecx + 0x424) = esi;
    MEM32(ecx + 0x42C) = esi;
    edx = 0x5DC;
    MEM32(ecx + 0x428) = edx;
    MEM32(ecx + 0x438) = edx;
    MEM32(ecx + 0x430) = 6;
    MEM32(ecx + 0x434) = 0x7D0;
    MEM32(ecx + 0x43C) = eax;
    MEM32(ecx + 0x440) = eax;
    MEM32(ecx + 0x444) = eax;
    MEM32(ecx + 0x448) = eax;
    MEM32(ecx + 0x44C) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ecx + 0x25C;
    esi = ecx + 0x1DC;
    edx = ecx + 0x14C;

loc_001CC310: ;
    MEM8(ecx + edi + 0x13E) = LO8(eax);
    MEM32(edx + -8) = eax;
    MEM32(edx) = eax;
    MEM32(edx + 8) = eax;
    MEM32(edx + 0x10) = eax;
    MEM32(edx + 0x18) = eax;
    MEM32(edx + 0x20) = eax;
    MEM32(edx + 0x28) = eax;
    MEM32(edx + 0x30) = eax;
    MEM32(edx + 0x38) = eax;
    MEM32(edx + 0x40) = eax;
    MEM32(edx + 0x48) = eax;
    MEM8(esi + 0x40) = LO8(eax);
    MEM8(esi) = LO8(eax);
    MEM8(ebx) = LO8(eax);
    MEM8(esi + 0x180) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x80;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CC310; /* jl: less (signed <) */

loc_001CC356: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC3E0
 * Original: 0x001CC3E0 - 0x001CC3E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC3E0(void)
{

loc_001CC3E0: ;
    eax = MEM32(0x8F44F4);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC3F0
 * Original: 0x001CC3F0 - 0x001CC535 (325 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CC3F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CC533; /* jle: less or equal (signed <=) */

loc_001CC3FF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_001CC410;

    /* nop */
    /* nop */

loc_001CC410: ;
    esi = MEM32(ebx + ebp * 4);
    edi = 0x7F0C24;
    ecx = 8;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001CC42A; /* jne: not equal / not zero */

loc_001CC423: ;
    MEM8(0x9001E0) = 1;

loc_001CC42A: ;
    esi = MEM32(ebx + ebp * 4);
    edi = 0x7F0C18;
    ecx = 0xA;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001CC44E; /* jne: not equal / not zero */

loc_001CC43D: ;
    MEM32(0x8F4550) = 2;
    MEM8(0x8F4555) = 1;

loc_001CC44E: ;
    esi = MEM32(ebx + ebp * 4);
    edi = 0x7F0C08;
    ecx = 0xC;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001CC474; /* jne: not equal / not zero */

loc_001CC461: ;
    ecx = MEM32(ebx + ebp * 4 + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CC46Cu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_001CC46C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(0x8F4554) = LO8(eax);

loc_001CC474: ;
    esi = MEM32(ebx + ebp * 4);
    edi = 0x7F0BFC;
    ecx = 0xA;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001CC497; /* jne: not equal / not zero */

loc_001CC487: ;
    MEM32(0x8F4550) = 2;
    MEM8(0x8F4555) = LO8(edx);

loc_001CC497: ;
    eax = MEM32(ebx + ebp * 4);
    edi = 0x7F0BEC;
    esi = eax;
    ecx = 0xD;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001CC4B5; /* jne: not equal / not zero */

loc_001CC4AC: ;
    MEM8(0x8F4556) = 1;
    goto loc_001CC523;

loc_001CC4B5: ;
    edi = 0x7F0BE0;
    esi = eax;
    ecx = 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001CC4DA; /* jne: not equal / not zero */

loc_001CC4C7: ;
    MEM32(0x8F4550) = 1;
    MEM8(0x8F4555) = 1;
    goto loc_001CC523;

loc_001CC4DA: ;
    edi = 0x7F0BD4;
    esi = eax;
    ecx = 8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001CC4FE; /* jne: not equal / not zero */

loc_001CC4EC: ;
    MEM32(0x8F4550) = 1;
    MEM8(0x8F4555) = LO8(edx);
    goto loc_001CC523;

loc_001CC4FE: ;
    esi = eax;
    edi = 0x7F0BD0;
    ecx = 4;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_001CC523; /* jne: not equal / not zero */

loc_001CC510: ;
    ecx = MEM32(ebx + ebp * 4 + 4);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CC51Bu); RECOMP_ABI_CALL(0x0001E17Eu, sub_0001E17E); /* call 0x0001E17E */

loc_001CC51B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F454C) = eax;

loc_001CC523: ;
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CC410; /* jl: less (signed <) */

loc_001CC530: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_001CC533: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC590
 * Original: 0x001CC590 - 0x001CC5A8 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC590: ;
    eax = MEM32(0x8F44F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC59C; /* jne: not equal / not zero */

loc_001CC599: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_001CC59C: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    SET_LO8(eax, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_001CC5B0
 * Original: 0x001CC5B0 - 0x001CC5BD (13 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC5B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC5B0: ;
    edx = MEM32(ecx);
    eax = MEM32(esp + 4);
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC5C0
 * Original: 0x001CC5C0 - 0x001CC5CF (15 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC5C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC5C0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(ecx);
    eax = ~eax;
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC5E0
 * Original: 0x001CC5E0 - 0x001CC5E8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC5E0(void)
{

loc_001CC5E0: ;
    PUSH32(esp, 0x001CC5E5u); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_001CC5E5: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC5F0
 * Original: 0x001CC5F0 - 0x001CC5F5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC5F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CC5F0: ;
    g_seh_ebp = ebp; sub_0059E46E(); return; /* tail jmp 0x0059E46E */

}

/**
 * sub_001CC600
 * Original: 0x001CC600 - 0x001CC605 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CC600: ;
    g_seh_ebp = ebp; sub_0059E46F(); return; /* tail jmp 0x0059E46F */

}

/**
 * sub_001CC610
 * Original: 0x001CC610 - 0x001CC615 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CC610: ;
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_001CC620
 * Original: 0x001CC620 - 0x001CC643 (35 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC620(void)
{

loc_001CC620: ;
    eax = MEM32(esp + 4);
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 1));
    MEM8(ecx + 1) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 2));
    MEM8(ecx + 2) = LO8(edx);
    SET_LO8(edx, MEM8(eax + 3));
    MEM8(ecx + 3) = LO8(edx);
    SET_LO8(eax, MEM8(eax + 4));
    MEM8(ecx + 4) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC650
 * Original: 0x001CC650 - 0x001CC665 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC650(void)
{

loc_001CC650: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CC664u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CC664: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC670
 * Original: 0x001CC670 - 0x001CC674 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC670(void)
{

loc_001CC670: ;
    eax = MEM32(ecx + 0x44);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC680
 * Original: 0x001CC680 - 0x001CC684 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC680(void)
{

loc_001CC680: ;
    eax = ecx + 4;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC690
 * Original: 0x001CC690 - 0x001CC696 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC690(void)
{

loc_001CC690: ;
    eax = 0x8C42F0;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC6A0
 * Original: 0x001CC6A0 - 0x001CC6A3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC6A0(void)
{

loc_001CC6A0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC6B0
 * Original: 0x001CC6B0 - 0x001CC6B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC6B0(void)
{

loc_001CC6B0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC6C0
 * Original: 0x001CC6C0 - 0x001CC6C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC6C0(void)
{

loc_001CC6C0: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC6D0
 * Original: 0x001CC6D0 - 0x001CC6D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC6D0(void)
{

loc_001CC6D0: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC6DC
 * Original: 0x001CC6DC - 0x001CC6E0 (4 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC6DC(void)
{

loc_001CC6DC: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_001CC6E0
 * Original: 0x001CC6E0 - 0x001CC6E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC6E0(void)
{

loc_001CC6E0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC6EB
 * Original: 0x001CC6EB - 0x001CC6F0 (5 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC6EB(void)
{

loc_001CC6EB: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_001CC6F0
 * Original: 0x001CC6F0 - 0x001CC6F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC6F0(void)
{

loc_001CC6F0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC700
 * Original: 0x001CC700 - 0x001CC704 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC700(void)
{

loc_001CC700: ;
    eax = ecx + 0xC;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC710
 * Original: 0x001CC710 - 0x001CC717 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC710(void)
{

loc_001CC710: ;
    MEM32(ecx) = 0x7F0C30;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC720
 * Original: 0x001CC720 - 0x001CC727 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC720(void)
{

loc_001CC720: ;
    MEM32(ecx) = 0x7F0C44;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC730
 * Original: 0x001CC730 - 0x001CC734 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC730(void)
{

loc_001CC730: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC740
 * Original: 0x001CC740 - 0x001CC744 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC740(void)
{

loc_001CC740: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC750
 * Original: 0x001CC750 - 0x001CC754 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC750(void)
{

loc_001CC750: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC760
 * Original: 0x001CC760 - 0x001CC764 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC760(void)
{

loc_001CC760: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC770
 * Original: 0x001CC770 - 0x001CC774 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC770(void)
{

loc_001CC770: ;
    eax = MEM32(ecx + 0x10);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC780
 * Original: 0x001CC780 - 0x001CC7A7 (39 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC780: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CC79A; /* jge: greater or equal (signed >=) */

loc_001CC788: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CC79F; /* je: equal / zero */

loc_001CC78D: ;
    ecx = MEM32(ecx + 0x20);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    eax = eax + ecx + 0xC;
    esp += 8; return; /* ret 4 */

loc_001CC79A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CC78D; /* jne: not equal / not zero */

loc_001CC79F: ;
    eax = 0x8C42F0;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC7B0
 * Original: 0x001CC7B0 - 0x001CC7C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC7B0(void)
{

loc_001CC7B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CC7C4u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CC7C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC7D0
 * Original: 0x001CC7D0 - 0x001CC7E5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC7D0(void)
{

loc_001CC7D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CC7E4u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CC7E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC7F0
 * Original: 0x001CC7F0 - 0x001CC7FC (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC7F0: ;
    edx = MEM32(ecx + 0x48);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_001CC800
 * Original: 0x001CC800 - 0x001CC807 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC800(void)
{

loc_001CC800: ;
    MEM32(ecx) = 0x7F0C50;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC810
 * Original: 0x001CC810 - 0x001CC81A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC810(void)
{

loc_001CC810: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CC820
 * Original: 0x001CC820 - 0x001CC826 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC820(void)
{

loc_001CC820: ;
    eax = MEM32(0x8FC644);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC830
 * Original: 0x001CC830 - 0x001CC845 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC830(void)
{

loc_001CC830: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CC844u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CC844: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC850
 * Original: 0x001CC850 - 0x001CC865 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC850(void)
{

loc_001CC850: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CC864u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CC864: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC870
 * Original: 0x001CC870 - 0x001CC899 (41 bytes, 16 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC870(void)
{

loc_001CC870: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CC896u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_001CC896: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001CC8B0
 * Original: 0x001CC8B0 - 0x001CC8C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC8B0(void)
{

loc_001CC8B0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CC8C4u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CC8C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC8D0
 * Original: 0x001CC8D0 - 0x001CC8D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC8D0(void)
{

loc_001CC8D0: ;
    eax = 0x8C42E8;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC8E0
 * Original: 0x001CC8E0 - 0x001CC8F5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC8E0(void)
{

loc_001CC8E0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CC8F4u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CC8F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC900
 * Original: 0x001CC900 - 0x001CC904 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC900(void)
{

loc_001CC900: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC910
 * Original: 0x001CC910 - 0x001CC914 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC910(void)
{

loc_001CC910: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC920
 * Original: 0x001CC920 - 0x001CC924 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC920(void)
{

loc_001CC920: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC930
 * Original: 0x001CC930 - 0x001CC934 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC930(void)
{

loc_001CC930: ;
    eax = MEM32(ecx + 0x54);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC940
 * Original: 0x001CC940 - 0x001CC944 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC940(void)
{

loc_001CC940: ;
    eax = MEM32(ecx + 0x28);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC950
 * Original: 0x001CC950 - 0x001CC954 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC950(void)
{

loc_001CC950: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC960
 * Original: 0x001CC960 - 0x001CC967 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC960(void)
{

loc_001CC960: ;
    eax = MEM32(ecx + 0x28);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC970
 * Original: 0x001CC970 - 0x001CC977 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC970(void)
{

loc_001CC970: ;
    eax = MEM32(ecx + 0x2C);
    eax = MEM32(eax + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_001CC980
 * Original: 0x001CC980 - 0x001CC98B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC980: ;
    edx = MEM32(ecx + 0x28);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_001CC990
 * Original: 0x001CC990 - 0x001CC9A5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC990(void)
{

loc_001CC990: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CC9A4u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CC9A4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC9B0
 * Original: 0x001CC9B0 - 0x001CC9B1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC9B0(void)
{

loc_001CC9B0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC9C0
 * Original: 0x001CC9C0 - 0x001CC9C7 (7 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC9C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC9C0: ;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001CC9D0
 * Original: 0x001CC9D0 - 0x001CC9D6 (6 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC9D0: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = MEM32(ecx + 8) + 1;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001CC9E0
 * Original: 0x001CC9E0 - 0x001CC9EB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC9E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC9E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001CC9F0
 * Original: 0x001CC9F0 - 0x001CCA06 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CC9F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CC9F0: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCA10
 * Original: 0x001CCA10 - 0x001CCA19 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCA10(void)
{

loc_001CCA10: ;
    eax = ecx;
    MEM32(eax) = 0x7F0C5C;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCA20
 * Original: 0x001CCA20 - 0x001CCA27 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCA20(void)
{

loc_001CCA20: ;
    MEM32(ecx) = 0x7F0C5C;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCA30
 * Original: 0x001CCA30 - 0x001CCA33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCA30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCA30: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CCA40
 * Original: 0x001CCA40 - 0x001CCA55 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCA40(void)
{

loc_001CCA40: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CCA54u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CCA54: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCA60
 * Original: 0x001CCA60 - 0x001CCA69 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCA60(void)
{

loc_001CCA60: ;
    eax = ecx;
    MEM32(eax) = 0x7F0C74;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCA70
 * Original: 0x001CCA70 - 0x001CCA74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCA70(void)
{

loc_001CCA70: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_001CCA80
 * Original: 0x001CCA80 - 0x001CCA95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCA80(void)
{

loc_001CCA80: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CCA94u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CCA94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCAA0
 * Original: 0x001CCAA0 - 0x001CCAAF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCAA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCAA0: ;
    edx = MEM32(ecx + 0x48);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x48) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CCAC0
 * Original: 0x001CCAC0 - 0x001CCAC8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCAC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CCAC0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x2C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

}

/**
 * sub_001CCAD0
 * Original: 0x001CCAD0 - 0x001CCAD7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCAD0(void)
{

loc_001CCAD0: ;
    eax = ecx + 0x212;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCAE0
 * Original: 0x001CCAE0 - 0x001CCAE7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCAE0(void)
{

loc_001CCAE0: ;
    eax = ecx + 0x2A0;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCAF0
 * Original: 0x001CCAF0 - 0x001CCAFA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCAF0(void)
{

loc_001CCAF0: ;
    SET_LO8(eax, MEM8(esp + 4));
    MEM8(ecx + 0x40) = LO8(eax);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CCB00
 * Original: 0x001CCB00 - 0x001CCB04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCB00(void)
{

loc_001CCB00: ;
    SET_LO8(eax, MEM8(ecx + 8));
    esp += 4; return; /* ret */

}

/**
 * sub_001CCB10
 * Original: 0x001CCB10 - 0x001CCB19 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCB10(void)
{

loc_001CCB10: ;
    eax = ecx;
    MEM32(eax) = 0x7F0C30;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCB20
 * Original: 0x001CCB20 - 0x001CCB28 (8 bytes, 2 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCB20(void)
{

loc_001CCB20: ;
    eax = 1;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001CCB30
 * Original: 0x001CCB30 - 0x001CCB7D (77 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCB30: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x170);
    eax = eax & MEM32(esi + 0x174);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CCB7B; /* je: equal / zero */

loc_001CCB43: ;
    PUSH32(esp, 0x001CCB48u); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CCB48: ;
    PUSH32(esp, 0x001CCB4Du); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_001CCB4D: ;
    PUSH32(esp, 3);
    ecx = eax + 0x21C;
    PUSH32(esp, 0x001CCB5Au); RECOMP_ABI_CALL(0x0001E8A4u, sub_0001E8A4); /* call 0x0001E8A4 */

loc_001CCB5A: ;
    edx = MEM32(esi + 0x170);
    ecx = MEM32(esi + 0x174);
    eax = 0xFFFFFFFBu;
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x170) = edx;
    MEM32(esi + 0x174) = ecx;

loc_001CCB7B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CCB90
 * Original: 0x001CCB90 - 0x001CCBC9 (57 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CCB90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001CCB9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CCB98u); } /* indirect call */
    }

loc_001CCB9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCBC3; /* je: equal / zero */

loc_001CCB9F: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x8C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CCBAFu); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_001CCBAF: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CCBBAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CCBB7u); } /* indirect call */
    }

loc_001CCBBA: ;
    eax = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_001CCBC3: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CCBE0
 * Original: 0x001CCBE0 - 0x001CCBEB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCBE0(void)
{

loc_001CCBE0: ;
    MEM32(ecx + -424) = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCBF0
 * Original: 0x001CCBF0 - 0x001CCBF5 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCBF0(void)
{

loc_001CCBF0: ;
    SET_LO8(eax, 1);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CCC00
 * Original: 0x001CCC00 - 0x001CCC0A (10 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCC00(void)
{

loc_001CCC00: ;
    eax = MEM32(esp + 4);
    MEM32(0x8F4500) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_001CCC10
 * Original: 0x001CCC10 - 0x001CCC16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCC10(void)
{

loc_001CCC10: ;
    eax = MEM32(0x8F4500);
    esp += 4; return; /* ret */

}

/**
 * sub_001CCC20
 * Original: 0x001CCC20 - 0x001CCD03 (227 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CCC20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    SET_LO8(eax, MEM8(ebx));
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    MEM8(edi) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 1));
    MEM8(edi + 1) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 2));
    MEM8(edi + 2) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 3));
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 4));
    edx = ebx + 0xA;
    MEM8(edi + 4) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = edi + 0xA;
    PUSH32(esp, 0x001CCC55u); RECOMP_ABI_CALL(0x0002BFF9u, sub_0002BFF9); /* call 0x0002BFF9 */

loc_001CCC55: ;
    edx = MEM32(esp + 0x1C);
    MEM8(edi) = 0x6E;
    SET_LO16(eax, MEM16(ebx + 6));
    MEM16(edi + 6) = LO16(eax);
    eax = edi;
    ecx = 1;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ecx;
    esi = edx + 0xE;
    ebp = ebx + 0xE;
    MEM32(esp + 0x10) = eax;
    MEM32(esp + 0x20) = 0xC;

loc_001CCC83: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CCCA8; /* je: equal / zero */

loc_001CCC8B: ;
    edx = MEM32(ebp);
    MEM32(esi) = edx;
    edx = MEM32(ebp + 4);
    MEM32(esi + 4) = edx;
    edx = MEM32(ebp);
    MEM32(eax + esi) = edx;
    edx = MEM32(ebp + 4);
    MEM32(eax + esi + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CCCD3;

loc_001CCCA8: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CCCBE; /* je: equal / zero */

loc_001CCCB0: ;
    edx = MEM32(esi);
    MEM32(eax + esi) = edx;
    edx = MEM32(esi + 4);
    MEM32(eax + esi + 4) = edx;
    goto loc_001CCCD3;

loc_001CCCBE: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CCCC8u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001CCCC8: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CCCD3: ;
    edx = MEM32(esp + 0x20);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x20) = edx;
    if ((_fa != 0)) goto loc_001CCC83; /* jne: not equal / not zero */

loc_001CCCE7: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCCFD; /* je: equal / zero */

loc_001CCCEF: ;
    SET_LO8(ecx, MEM8(edi + 3));
    MEM8(eax + 3) = LO8(ecx);
    SET_LO16(edx, MEM16(edi + 6));
    MEM16(eax + 6) = LO16(edx);

loc_001CCCFD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CCD40
 * Original: 0x001CCD40 - 0x001CCE8B (331 bytes, 107 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CCD40: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    SET_LO8(eax, MEM8(ebx));
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    MEM8(ebp) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 1));
    MEM8(ebp + 1) = LO8(ecx);
    SET_LO8(edx, MEM8(ebx + 2));
    MEM8(ebp + 2) = LO8(edx);
    SET_LO8(eax, MEM8(ebx + 3));
    PUSH32(esp, esi);
    MEM8(ebp + 3) = LO8(eax);
    SET_LO8(ecx, MEM8(ebx + 4));
    PUSH32(esp, edi);
    edx = ebx + 0xA;
    MEM8(ebp + 4) = LO8(ecx);
    PUSH32(esp, edx);
    ecx = ebp + 0xA;
    PUSH32(esp, 0x001CCD78u); RECOMP_ABI_CALL(0x0002BFF9u, sub_0002BFF9); /* call 0x0002BFF9 */

loc_001CCD78: ;
    SET_LO16(eax, MEM16(ebx + 6));
    ecx = MEM32(esp + 0x2C);
    MEM16(ebp + 6) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebp + 8) = LO16(eax);
    MEM32(esp + 0x10) = eax;
    eax = ebx;
    edi = ecx + 0xE;
    edx = ebp + 0xE;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = 1;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = 0xC;
    goto loc_001CCDC0;

loc_001CCDB6: ;
    eax = MEM32(esp + 0x1C);
    /* nop */

loc_001CCDC0: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 6);
    edx = MEM32(esp + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CCE7C; /* je: equal / zero */

loc_001CCDD0: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 2;
    esi = eax;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (MEM32(esi) == MEM32(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsd */
    if ((_flags == 0)) goto loc_001CCDF7; /* jne: not equal / not zero */

loc_001CCDDF: ;
    SET_LO8(ecx, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CCDF7; /* jne: not equal / not zero */

loc_001CCDE7: ;
    ecx = MEM32(esp + 0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 6);
    ecx = MEM32(esp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_001CCE2C; /* jne: not equal / not zero */

loc_001CCDF7: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = ecx;
    SET_LO16(ecx, MEM16(esp + 0x24));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ebp + 8) = MEM16(ebp + 8) | LO16(ecx);
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    edx = MEM32(eax);
    ecx = MEM32(esp + 0x28);
    MEM32(ecx) = edx;
    eax = MEM32(eax + 4);
    MEM32(esp + 0x10) = edi;
    MEM32(ecx + 4) = eax;

loc_001CCE2C: ;
    edi = MEM32(esp + 0x28);

loc_001CCE30: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x18) = eax;
    if ((_fa != 0)) goto loc_001CCDB6; /* jne: not equal / not zero */

loc_001CCE50: ;
    SET_LO16(edx, MEM16(ebx + 6));
    SET_LO8(eax, MEM8(esp + 0x10));
    ecx = MEM32(esp + 0x2C);
    { uint32_t _sv=(uint32_t)(LO8(eax)), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        SET_LO8(eax, _sv << _sc);
        _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0xE) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 0xE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM16(ecx + 6) = LO16(edx);
    MEM8(ebp) = LO8(eax);
    MEM8(ecx) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 3));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ecx + 3) = LO8(eax);
    eax = ZX8(MEM8(ebp));
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001CCE7C: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CCE86u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001CCE86: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001CCE30;

}

/**
 * sub_001CCEE0
 * Original: 0x001CCEE0 - 0x001CD0D9 (505 bytes, 176 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CCEE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CCEE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8C);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x001CCEF8u); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001CCEF8: ;
    edi = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + 0xA;
    ebx = ebp + 0xA;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM8(ebp) = 0x6E;
    PUSH32(esp, 0x001CCF11u); RECOMP_ABI_CALL(0x0002BFF9u, sub_0002BFF9); /* call 0x0002BFF9 */

loc_001CCF11: ;
    esi = MEM32(esp + 0x20);
    ecx = esi + 0xA;
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x001CCF20u); RECOMP_ABI_CALL(0x0002CE68u, sub_0002CE68); /* call 0x0002CE68 */

loc_001CCF20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 6));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edi + 6));
    edx = eax;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CCF3F; /* je: equal / zero */

loc_001CCF35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_001CCF3F: ;
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = esi;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ebx;
    MEM16(ebp + 6) = LO16(eax);
    eax = edi + 0x26;
    ebx = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = eax;
    ecx = 1;
    edx = esi + 0x16;
    eax = ebp + 0xE;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = 2;
    /* nop */

loc_001CCF70: ;
    ebx = (uint32_t)(int32_t)SMEM16(edi + 6);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CCF92; /* je: equal / zero */

loc_001CCF78: ;
    ebp = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ebp;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = MEM32(ebx + eax);
    MEM32(eax) = ebp;
    ebx = MEM32(ebx + eax + 4);
    ebp = MEM32(esp + 0x24);
    MEM32(eax + 4) = ebx;

loc_001CCF92: ;
    ebx = (uint32_t)(int32_t)SMEM16(esi + 6);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CCFAE; /* je: equal / zero */

loc_001CCF9A: ;
    ebx = MEM32(esp + 0x20);
    ebx = MEM32(ebx + eax);
    MEM32(eax) = ebx;
    ebx = MEM32(esp + 0x20);
    ebx = MEM32(ebx + eax + 4);
    MEM32(eax + 4) = ebx;

loc_001CCFAE: ;
    ebx = (uint32_t)(int32_t)SMEM16(edi + 6);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CCFCD; /* je: equal / zero */

loc_001CCFB8: ;
    ebx = MEM32(esp + 0x10);
    ebx = MEM32(ebx + edx);
    MEM32(eax + 8) = ebx;
    ebx = MEM32(esp + 0x10);
    ebx = MEM32(ebx + edx + 4);
    MEM32(eax + 0xC) = ebx;

loc_001CCFCD: ;
    ebx = (uint32_t)(int32_t)SMEM16(esi + 6);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CCFE0; /* je: equal / zero */

loc_001CCFD5: ;
    ebx = MEM32(edx);
    MEM32(eax + 8) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(eax + 0xC) = ebx;

loc_001CCFE0: ;
    ebx = (uint32_t)(int32_t)SMEM16(edi + 6);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CCFFE; /* je: equal / zero */

loc_001CCFEA: ;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + -8);
    MEM32(eax + 0x10) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + -4);
    MEM32(eax + 0x14) = ebx;

loc_001CCFFE: ;
    ebx = (uint32_t)(int32_t)SMEM16(esi + 6);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD012; /* je: equal / zero */

loc_001CD006: ;
    ebx = MEM32(edx + 8);
    MEM32(eax + 0x10) = ebx;
    ebx = MEM32(edx + 0xC);
    MEM32(eax + 0x14) = ebx;

loc_001CD012: ;
    ebx = (uint32_t)(int32_t)SMEM16(edi + 6);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD02F; /* je: equal / zero */

loc_001CD01C: ;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx);
    MEM32(eax + 0x18) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 4);
    MEM32(eax + 0x1C) = ebx;

loc_001CD02F: ;
    ebx = (uint32_t)(int32_t)SMEM16(esi + 6);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD043; /* je: equal / zero */

loc_001CD037: ;
    ebx = MEM32(edx + 0x10);
    MEM32(eax + 0x18) = ebx;
    ebx = MEM32(edx + 0x14);
    MEM32(eax + 0x1C) = ebx;

loc_001CD043: ;
    ebx = (uint32_t)(int32_t)SMEM16(edi + 6);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD061; /* je: equal / zero */

loc_001CD04D: ;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 8);
    MEM32(eax + 0x20) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0xC);
    MEM32(eax + 0x24) = ebx;

loc_001CD061: ;
    ebx = (uint32_t)(int32_t)SMEM16(esi + 6);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD075; /* je: equal / zero */

loc_001CD069: ;
    ebx = MEM32(edx + 0x18);
    MEM32(eax + 0x20) = ebx;
    ebx = MEM32(edx + 0x1C);
    MEM32(eax + 0x24) = ebx;

loc_001CD075: ;
    ebx = (uint32_t)(int32_t)SMEM16(edi + 6);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD093; /* je: equal / zero */

loc_001CD07F: ;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x10);
    MEM32(eax + 0x28) = ebx;
    ebx = MEM32(esp + 0x1C);
    ebx = MEM32(ebx + 0x14);
    MEM32(eax + 0x2C) = ebx;

loc_001CD093: ;
    ebx = (uint32_t)(int32_t)SMEM16(esi + 6);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD0A7; /* je: equal / zero */

loc_001CD09B: ;
    ebx = MEM32(edx + 0x20);
    MEM32(eax + 0x28) = ebx;
    ebx = MEM32(edx + 0x24);
    MEM32(eax + 0x2C) = ebx;

loc_001CD0A7: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esp + 0x1C) = MEM32(esp + 0x1C) + 0x30;
    _fa = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(esp + 0x14);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x30;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = ebx;
    if ((_fa != 0)) goto loc_001CCF70; /* jne: not equal / not zero */

loc_001CD0C3: ;
    eax = ZX8(MEM8(ebp));
    MEM8(ebp + 3) = 1;
    SET_LO8(ecx, MEM8(edi + 2));
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebp + 2) = LO8(ecx);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CD160
 * Original: 0x001CD160 - 0x001CD161 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD160(void)
{

loc_001CD160: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD170
 * Original: 0x001CD170 - 0x001CD189 (25 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD170(void)
{

loc_001CD170: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CD190
 * Original: 0x001CD190 - 0x001CD194 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD190(void)
{

loc_001CD190: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001CD1A0
 * Original: 0x001CD1A0 - 0x001CD1A4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD1A0(void)
{

loc_001CD1A0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_001CD1B0
 * Original: 0x001CD1B0 - 0x001CD1B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD1B0(void)
{

loc_001CD1B0: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD1C0
 * Original: 0x001CD1C0 - 0x001CD1D9 (25 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD1C0(void)
{

loc_001CD1C0: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CD1E0
 * Original: 0x001CD1E0 - 0x001CD1E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD1E0(void)
{

loc_001CD1E0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_001CD1F0
 * Original: 0x001CD1F0 - 0x001CD216 (38 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD1F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD1F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 4);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CD206u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_001CD206: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD220
 * Original: 0x001CD220 - 0x001CD24A (42 bytes, 18 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD220(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD220: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CD23Au); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_001CD23A: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CD260
 * Original: 0x001CD260 - 0x001CD275 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD260: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(ecx + 4);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    MEM8(eax + edx) = LO8(ebx);
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD280
 * Original: 0x001CD280 - 0x001CD2A8 (40 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD280: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    edx = MEM32(esi + 4);
    ecx = MEM32(esp + 8);
    PUSH32(esp, 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x001CD298u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_001CD298: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD2C0
 * Original: 0x001CD2C0 - 0x001CD2D6 (22 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD2C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD2C0: ;
    edx = MEM32(ecx + 4);
    eax = MEM32(ecx + 8);
    eax = ZX8(MEM8(eax + edx));
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    MEM32(ecx + 4) = MEM32(ecx + 4) + 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD2E0
 * Original: 0x001CD2E0 - 0x001CD328 (72 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD2E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD2E0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    PUSH32(esp, 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(esi + 4) = LO8(eax);
    PUSH32(esp, esi);
    MEM32(esi) = 0x7F0C78;
    MEM32(esi + 0x4C) = eax;
    PUSH32(esp, 0x40);
    eax = esi + 5;
    PUSH32(esp, ecx);
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, edx);
    MEM32(esi + 0x48) = 0x40;
    PUSH32(esp, eax);
    MEM32(esi + 0x54) = eax;
    PUSH32(esp, 0x001CD31Cu); RECOMP_ABI_CALL(0x00028A8Eu, sub_00028A8E); /* call 0x00028A8E */

loc_001CD31C: ;
    MEM32(esi + 0x58) = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CD340
 * Original: 0x001CD340 - 0x001CD353 (19 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD340(void)
{

loc_001CD340: ;
    eax = MEM32(ecx + 0x58);
    MEM32(ecx) = 0x7F0C78;
    ecx = MEM32(ecx + 0x54);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CD352u); RECOMP_ABI_CALL(0x00020CA8u, sub_00020CA8); /* call 0x00020CA8 */

loc_001CD352: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD360
 * Original: 0x001CD360 - 0x001CD365 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD360(void)
{

loc_001CD360: ;
    MEM8(ecx + 4) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD370
 * Original: 0x001CD370 - 0x001CD4B4 (324 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CD370: ;
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x90);
    eax = MEM32(edx + 4);
    edx = MEM32(edx + 4);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(eax + 0x10);
    eax = MEM32(eax + 0x14);
    MEM32(esp) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = ecx;
    esi = MEM32(edx + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CD4A8; /* jle: less or equal (signed <=) */

loc_001CD3A6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    goto loc_001CD3B0;

loc_001CD3AB: ;
    ecx = MEM32(esp + 0x18);
    /* nop */

loc_001CD3B0: ;
    ebp = ZX8(MEM8(ecx + eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ebp;
    MEM32(esp + 0x14) = eax;
    edx = ZX8(MEM8(ecx + eax));
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        ebx = _sv >> _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ebp = ebp & 0xFFFFFF7Fu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x14) = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esp + 0x4C;
    /* nop */

loc_001CD3E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CD419; /* jge: greater or equal (signed >=) */

loc_001CD3E6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD3F3; /* je: equal / zero */

loc_001CD3EA: ;
    edx = ZX8(MEM8(ecx + eax));
    MEM32(esi) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_001CD40C;

loc_001CD3F3: ;
    PUSH32(esp, 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CD3FEu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_001CD3FE: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CD40C: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001CD3E0; /* jl: less (signed <) */

loc_001CD419: ;
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CD453; /* jle: less or equal (signed <=) */

loc_001CD422: ;
    esi = esp + 0x54;
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFEu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_001CD430: ;
    PUSH32(esp, 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CD43Bu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_001CD43B: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_001CD430; /* jne: not equal / not zero */

loc_001CD453: ;
    esi = ZX8(MEM8(ecx + eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_001CD474; /* jle: less or equal (signed <=) */

loc_001CD462: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x001CD46Bu); RECOMP_ABI_CALL(0x00013030u, sub_00013030); /* call 0x00013030 */

loc_001CD46B: ;
    MEM32(esp + edi * 4 + 0x24) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CD462; /* jl: less (signed <) */

loc_001CD474: ;
    ecx = MEM32(esp + 0x20);
    eax = MEM32(ecx);
    edx = esp + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    edx = esp + 0x54;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x28);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x001CD48Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CD48Bu); } /* indirect call */
    }

loc_001CD48E: ;
    eax = MEM32(esp + 0xA0);
    ecx = MEM32(eax + 4);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x14) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CD3AB; /* jl: less (signed <) */

loc_001CD4A5: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_001CD4A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x8C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x8C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD510
 * Original: 0x001CD510 - 0x001CD546 (54 bytes, 19 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD510(void)
{

loc_001CD510: ;
    eax = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x001CD533u); RECOMP_ABI_CALL(0x0003448Du, sub_0003448D); /* call 0x0003448D */

loc_001CD533: ;
    MEM32(esi) = 0x7F0C8C;
    MEM32(esi + 0x20) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001CD560
 * Original: 0x001CD560 - 0x001CD587 (39 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD560: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F0C8C;
    PUSH32(esp, 0x001CD56Eu); RECOMP_ABI_CALL(0x0002E72Cu, sub_0002E72C); /* call 0x0002E72C */

loc_001CD56E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CD581; /* je: equal / zero */

loc_001CD575: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CD581u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001CD581: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD590
 * Original: 0x001CD590 - 0x001CD5A9 (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CD590: ;
    eax = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    POP32(esp, esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x20) = edx;
    g_seh_ebp = ebp; sub_00037471(); return; /* tail jmp 0x00037471 */

}

/**
 * sub_001CD5B0
 * Original: 0x001CD5B0 - 0x001CD5B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD5B0(void)
{

loc_001CD5B0: ;
    MEM32(ecx + 0x20) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD5C0
 * Original: 0x001CD5C0 - 0x001CD5ED (45 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD5C0: ;
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CD5E8; /* jle: less or equal (signed <=) */

loc_001CD5C7: ;
    eax = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_001CD5D1; /* jns: not sign (positive) */

loc_001CD5CE: ;
    _fb = (uint32_t)(MEM32(ecx + 0x14)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CD5D1: ;
    edx = MEM32(ecx + 0x18);
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    edx = MEM32(esp + 4);
    MEM32(edx) = eax;
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    SET_LO8(eax, 1);
    esp += 8; return; /* ret 4 */

loc_001CD5E8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD600
 * Original: 0x001CD600 - 0x001CD60D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD600(void)
{

loc_001CD600: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x80) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD610
 * Original: 0x001CD610 - 0x001CD616 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD610(void)
{

loc_001CD610: ;
    eax = MEM32(0x8FC62C);
    esp += 4; return; /* ret */

}

/**
 * sub_001CD620
 * Original: 0x001CD620 - 0x001CD626 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD620(void)
{

loc_001CD620: ;
    eax = MEM32(0x8FC630);
    esp += 4; return; /* ret */

}

/**
 * sub_001CD630
 * Original: 0x001CD630 - 0x001CD645 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD630(void)
{

loc_001CD630: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CD644u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CD644: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD64A
 * Original: 0x001CD64A - 0x001CD650 (6 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD64A(void)
{

loc_001CD64A: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_001CD650
 * Original: 0x001CD650 - 0x001CD665 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD650(void)
{

loc_001CD650: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CD664u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CD664: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD670
 * Original: 0x001CD670 - 0x001CD67A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD670(void)
{

loc_001CD670: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD680
 * Original: 0x001CD680 - 0x001CD695 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD680(void)
{

loc_001CD680: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CD694u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CD694: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD6A0
 * Original: 0x001CD6A0 - 0x001CD6AA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD6A0(void)
{

loc_001CD6A0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x28) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD6B0
 * Original: 0x001CD6B0 - 0x001CD6BA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD6B0(void)
{

loc_001CD6B0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD6C0
 * Original: 0x001CD6C0 - 0x001CD6CA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD6C0(void)
{

loc_001CD6C0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x2C) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD6D0
 * Original: 0x001CD6D0 - 0x001CD6E5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD6D0(void)
{

loc_001CD6D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CD6E4u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CD6E4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD6F0
 * Original: 0x001CD6F0 - 0x001CD71A (42 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD6F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD6F0: ;
    eax = MEM32(0x8F24EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD719; /* je: equal / zero */

loc_001CD6F9: ;
    PUSH32(esp, 0x001CD6FEu); RECOMP_ABI_CALL(0x000150DDu, sub_000150DD); /* call 0x000150DD */

loc_001CD6FE: ;
    ecx = MEM32(0x8F24EC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD70F; /* je: equal / zero */

loc_001CD708: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CD70Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CD70Cu); } /* indirect call */
    }

loc_001CD70F: ;
    MEM32(0x8F24EC) = 0;

loc_001CD719: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CD730
 * Original: 0x001CD730 - 0x001CD736 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD730(void)
{

loc_001CD730: ;
    eax = MEM32(0x8F24EC);
    esp += 4; return; /* ret */

}

/**
 * sub_001CD740
 * Original: 0x001CD740 - 0x001CD756 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD740: ;
    eax = MEM32(0x8F24EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD753; /* je: equal / zero */

loc_001CD749: ;
    ecx = MEM32(eax + 0x58);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD753; /* je: equal / zero */

loc_001CD750: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

loc_001CD753: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CD760
 * Original: 0x001CD760 - 0x001CD7B5 (85 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD760: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x50);
    esi = ecx;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CD774u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CD774: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD79E; /* je: equal / zero */

loc_001CD778: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0xBB8);
    PUSH32(esp, 7);
    PUSH32(esp, 0xE);
    PUSH32(esp, 0xE4A);
    PUSH32(esp, 0xE4A);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001CD79Cu); RECOMP_ABI_CALL(0x000374E9u, sub_000374E9); /* call 0x000374E9 */

loc_001CD79C: ;
    goto loc_001CD7A0;

loc_001CD79E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CD7A0: ;
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x001CD7A8u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_001CD7A8: ;
    ecx = eax;
    PUSH32(esp, 0x001CD7AFu); RECOMP_ABI_CALL(0x0001E692u, sub_0001E692); /* call 0x0001E692 */

loc_001CD7AF: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CD7D0
 * Original: 0x001CD7D0 - 0x001CD812 (66 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CD7D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CD80E; /* jne: not equal / not zero */

loc_001CD7DA: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CD7EBu); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CD7EB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD801; /* je: equal / zero */

loc_001CD7EF: ;
    ecx = eax;
    PUSH32(esp, 0x001CD7F6u); RECOMP_ABI_CALL(0x00035DC4u, sub_00035DC4); /* call 0x00035DC4 */

loc_001CD7F6: ;
    MEM32(esi + 0x38) = eax;
    POP32(esp, esi);
    ecx = eax;
    g_seh_ebp = ebp; sub_00028D18(); return; /* tail jmp 0x00028D18 */

loc_001CD801: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x38) = eax;
    POP32(esp, esi);
    ecx = eax;
    g_seh_ebp = ebp; sub_00028D18(); return; /* tail jmp 0x00028D18 */

loc_001CD80E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CD830
 * Original: 0x001CD830 - 0x001CD849 (25 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD830: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD847; /* je: equal / zero */

loc_001CD83A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001CD840u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CD83Eu); } /* indirect call */
    }

loc_001CD840: ;
    MEM32(esi + 0x38) = 0;

loc_001CD847: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CD850
 * Original: 0x001CD850 - 0x001CD8EC (156 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD850: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 3 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001CD88C; /* jne: not equal / not zero */

loc_001CD85A: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CD86Bu); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CD86B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD887; /* je: equal / zero */

loc_001CD86F: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x50);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001CD885u); RECOMP_ABI_CALL(0x0003448Du, sub_0003448D); /* call 0x0003448D */

loc_001CD885: ;
    goto loc_001CD889;

loc_001CD887: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CD889: ;
    MEM32(esi + 0x34) = eax;

loc_001CD88C: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CD89Du); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CD89D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD8D8; /* je: equal / zero */

loc_001CD8A3: ;
    edx = MEM32(esi + 0x2C);
    eax = MEM32(edx + 0x14);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x50);
    PUSH32(esp, 5);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001CD8B9u); RECOMP_ABI_CALL(0x0003448Du, sub_0003448D); /* call 0x0003448D */

loc_001CD8B9: ;
    MEM32(edi) = 0x7F0C8C;
    MEM32(edi + 0x20) = 0;
    MEM32(esi + 0x30) = edi;
    eax = MEM32(0x8F44F4);
    ecx = MEM32(eax);
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CD8D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x30) = eax;
    eax = MEM32(0x8F44F4);
    ecx = MEM32(eax);
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CD920
 * Original: 0x001CD920 - 0x001CD964 (68 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD920: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD962; /* je: equal / zero */

loc_001CD92A: ;
    eax = MEM32(0x8F44F4);
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD940; /* je: equal / zero */

loc_001CD939: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CD940u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CD93Du); } /* indirect call */
    }

loc_001CD940: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 3 (32-bit) */
    MEM32(esi + 0x30) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001CD962; /* jne: not equal / not zero */

loc_001CD94D: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD95B; /* je: equal / zero */

loc_001CD954: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CD95Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CD958u); } /* indirect call */
    }

loc_001CD95B: ;
    MEM32(esi + 0x34) = 0;

loc_001CD962: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CD96E
 * Original: 0x001CD96E - 0x001CD980 (18 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD96E(void)
{

loc_001CD96E: ;
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_001CD980
 * Original: 0x001CD980 - 0x001CDA02 (130 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CD980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CD980: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x58);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_001CD9BF; /* je: equal / zero */

loc_001CD989: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CDA00; /* jne: not equal / not zero */

loc_001CD98C: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CD99Du); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CD99D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD9B8; /* je: equal / zero */

loc_001CD9A1: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001CD9B3u); RECOMP_ABI_CALL(0x0002A000u, sub_0002A000); /* call 0x0002A000 */

loc_001CD9B3: ;
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CD9B8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CD9BF: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, 0);
    PUSH32(esp, 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CD9D0u); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CD9D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CD9F4; /* je: equal / zero */

loc_001CD9D4: ;
    edx = MEM32(esi + 0x2C);
    edx = MEM32(edx + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x001CD9E8u); RECOMP_ABI_CALL(0x00028DAEu, sub_00028DAE); /* call 0x00028DAE */

loc_001CD9E8: ;
    MEM32(esi + 0x50) = eax;
    MEM32(eax + 0x30) = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CD9F4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x50) = eax;
    MEM32(eax + 0x30) = 2;

loc_001CDA00: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CDA30
 * Original: 0x001CDA30 - 0x001CDA4A (26 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CDA30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x50);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDA48; /* je: equal / zero */

loc_001CDA3A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CDA41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDA3Eu); } /* indirect call */
    }

loc_001CDA41: ;
    MEM32(esi + 0x50) = 0;

loc_001CDA48: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CDA50
 * Original: 0x001CDA50 - 0x001CDA6C (28 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CDA50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDA63; /* je: equal / zero */

loc_001CDA5A: ;
    ecx = eax + 4;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001CDA63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDA61u); } /* indirect call */
    }

loc_001CDA63: ;
    MEM32(esi + 0x2C) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CDA80
 * Original: 0x001CDA80 - 0x001CDBAB (299 bytes, 98 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDA80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CDA80: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ecx + 0x2C);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x1C);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x30);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    MEM8(esp + 0x28) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    PUSH32(esp, 0x100);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ecx = esi * 4;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FC63C);
    MEM8(esp + 0x34) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, 0x7F0C98);
    MEM8(esp + 0x3C) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    PUSH32(esp, 0x001CDACFu); RECOMP_ABI_CALL(0x0001F8E4u, sub_0001F8E4); /* call 0x0001F8E4 */

loc_001CDACF: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(esp + 0x24) = eax;
    PUSH32(esp, 0x001CDAE1u); RECOMP_ABI_CALL(0x00032C19u, sub_00032C19); /* call 0x00032C19 */

loc_001CDAE1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_001CDB8D; /* jle: less or equal (signed <=) */

loc_001CDAF7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001CDB00: ;
    eax = MEM32(esp + 0x1C);
    esi = MEM32(eax + ecx * 4);
    SET_LO8(eax, MEM8(esp + 0x38));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDB21; /* jne: not equal / not zero */

loc_001CDB0F: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 0x2C);
    edx = MEM32(eax + 0x2C);
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x44)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x44) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDB7C; /* je: equal / zero */

loc_001CDB21: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDB2F; /* je: equal / zero */

loc_001CDB29: ;
    ecx = MEM32(esi + 0x44);
    MEM32(edi + ebp) = ecx;

loc_001CDB2F: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDB4A; /* je: equal / zero */

loc_001CDB37: ;
    eax = esi + 4;
    edx = ebx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edi;

loc_001CDB40: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDB40; /* jne: not equal / not zero */

loc_001CDB4A: ;
    SET_LO8(eax, MEM8(esp + 0x30));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDB61; /* je: equal / zero */

loc_001CDB52: ;
    edx = MEM32(esp + 0x10);
    ecx = MEM32(edx + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CDB5Fu); RECOMP_ABI_CALL(0x00029736u, sub_00029736); /* call 0x00029736 */

loc_001CDB5F: ;
    MEM32(edi) = eax;

loc_001CDB61: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x40;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001CDB8D; /* je: equal / zero */

loc_001CDB78: ;
    ecx = MEM32(esp + 0x18);

loc_001CDB7C: ;
    eax = MEM32(esp + 0x20);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_001CDB00; /* jl: less (signed <) */

loc_001CDB8D: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CDB9Du); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001CDB9D: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 24; return; /* ret 20 */

}

/**
 * sub_001CDC00
 * Original: 0x001CDC00 - 0x001CDC0A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDC00(void)
{

loc_001CDC00: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x40) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CDC10
 * Original: 0x001CDC10 - 0x001CDC46 (54 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDC10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CDC10: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_001CDC42; /* jne: not equal / not zero */

loc_001CDC1B: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDC42; /* jne: not equal / not zero */

loc_001CDC22: ;
    eax = MEM32(0x8F24EC);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CDC30u); RECOMP_ABI_CALL(0x0001F227u, sub_0001F227); /* call 0x0001F227 */

loc_001CDC30: ;
    ecx = esi;
    MEM8(esi + 0x5C) = 0;
    PUSH32(esp, 0x001CDC3Bu); RECOMP_ABI_CALL(0x0002D250u, sub_0002D250); /* call 0x0002D250 */

loc_001CDC3B: ;
    ecx = esi;
    PUSH32(esp, 0x001CDC42u); RECOMP_ABI_CALL(0x0002CADFu, sub_0002CADF); /* call 0x0002CADF */

loc_001CDC42: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CDC52
 * Original: 0x001CDC52 - 0x001CDC60 (14 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDC52(void)
{

loc_001CDC52: ;
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

}

/**
 * sub_001CDC60
 * Original: 0x001CDC60 - 0x001CDD80 (288 bytes, 89 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CDC60: ;
    eax = MEM32(esp + 4);
    eax = ZX16(MEM16(eax + 0x44));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_001CDD7D; /* ja: above (unsigned >) */

loc_001CDC71: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x1CDD80); /* switch: 13 entries, 13 targets */
    if (_jt == 0x001CDC78u) goto loc_001CDC78;
    if (_jt == 0x001CDC8Eu) goto loc_001CDC8E;
    if (_jt == 0x001CDCA4u) goto loc_001CDCA4;
    if (_jt == 0x001CDCBAu) goto loc_001CDCBA;
    if (_jt == 0x001CDCD0u) goto loc_001CDCD0;
    if (_jt == 0x001CDCE6u) goto loc_001CDCE6;
    if (_jt == 0x001CDCFCu) goto loc_001CDCFC;
    if (_jt == 0x001CDD12u) goto loc_001CDD12;
    if (_jt == 0x001CDD28u) goto loc_001CDD28;
    if (_jt == 0x001CDD3Eu) goto loc_001CDD3E;
    if (_jt == 0x001CDD54u) goto loc_001CDD54;
    if (_jt == 0x001CDD6Au) goto loc_001CDD6A;
    if (_jt == 0x001CDD7Du) goto loc_001CDD7D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_001CDC78: ;
    PUSH32(esp, 0x001CDC7Du); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CDC7D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x94);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CDC8Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDC88u); } /* indirect call */
    }

loc_001CDC8B: ;
    esp += 8; return; /* ret 4 */

loc_001CDC8E: ;
    PUSH32(esp, 0x001CDC93u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CDC93: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x95);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CDCA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDC9Eu); } /* indirect call */
    }

loc_001CDCA1: ;
    esp += 8; return; /* ret 4 */

loc_001CDCA4: ;
    PUSH32(esp, 0x001CDCA9u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CDCA9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x96);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CDCB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDCB4u); } /* indirect call */
    }

loc_001CDCB7: ;
    esp += 8; return; /* ret 4 */

loc_001CDCBA: ;
    PUSH32(esp, 0x001CDCBFu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CDCBF: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x97);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CDCCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDCCAu); } /* indirect call */
    }

loc_001CDCCD: ;
    esp += 8; return; /* ret 4 */

loc_001CDCD0: ;
    PUSH32(esp, 0x001CDCD5u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CDCD5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x98);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CDCE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDCE0u); } /* indirect call */
    }

loc_001CDCE3: ;
    esp += 8; return; /* ret 4 */

loc_001CDCE6: ;
    PUSH32(esp, 0x001CDCEBu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CDCEB: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x99);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CDCF9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDCF6u); } /* indirect call */
    }

loc_001CDCF9: ;
    esp += 8; return; /* ret 4 */

loc_001CDCFC: ;
    PUSH32(esp, 0x001CDD01u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CDD01: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x9A);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CDD0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDD0Cu); } /* indirect call */
    }

loc_001CDD0F: ;
    esp += 8; return; /* ret 4 */

loc_001CDD12: ;
    PUSH32(esp, 0x001CDD17u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CDD17: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x9B);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CDD25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDD22u); } /* indirect call */
    }

loc_001CDD25: ;
    esp += 8; return; /* ret 4 */

loc_001CDD28: ;
    PUSH32(esp, 0x001CDD2Du); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CDD2D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x9C);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CDD3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDD38u); } /* indirect call */
    }

loc_001CDD3B: ;
    esp += 8; return; /* ret 4 */

loc_001CDD3E: ;
    PUSH32(esp, 0x001CDD43u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CDD43: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x9D);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CDD51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDD4Eu); } /* indirect call */
    }

loc_001CDD51: ;
    esp += 8; return; /* ret 4 */

loc_001CDD54: ;
    PUSH32(esp, 0x001CDD59u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CDD59: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x9E);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CDD67u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDD64u); } /* indirect call */
    }

loc_001CDD67: ;
    esp += 8; return; /* ret 4 */

loc_001CDD6A: ;
    PUSH32(esp, 0x001CDD6Fu); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CDD6F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x9F);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CDD7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CDD7Au); } /* indirect call */
    }

loc_001CDD7D: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CDE1E
 * Original: 0x001CDE1E - 0x001CDE20 (2 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDE1E(void)
{

loc_001CDE1E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_001CDE20
 * Original: 0x001CDE20 - 0x001CDE48 (40 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CDE20: ;
    eax = ecx + 4;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 8);
    edx = MEM32(esp + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CDE42u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_001CDE42: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CDE60
 * Original: 0x001CDE60 - 0x001CDE85 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDE60(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CDE60: ;
    eax = ecx + 4;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CDE7Fu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_001CDE7F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CDE90
 * Original: 0x001CDE90 - 0x001CDEBC (44 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CDE90: ;
    eax = ecx + 0x14;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDEB9; /* je: equal / zero */

loc_001CDEAA: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CDEB6u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_001CDEB6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CDEB9: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CDED0
 * Original: 0x001CDED0 - 0x001CDEF9 (41 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CDED0: ;
    eax = ecx + 0x14;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDEF6; /* je: equal / zero */

loc_001CDEEA: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CDEF3u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_001CDEF3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CDEF6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CDF10
 * Original: 0x001CDF10 - 0x001CDF41 (49 bytes, 24 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDF10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CDF10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CDF33; /* jle: less or equal (signed <=) */

loc_001CDF1C: ;
    eax = MEM32(esp + 0x10);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001CDF26: ;
    SET_LO8(edx, MEM8(esi + eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDF3A; /* jne: not equal / not zero */

loc_001CDF2D: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CDF26; /* jl: less (signed <) */

loc_001CDF33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    esp += 16; return; /* ret 12 */

loc_001CDF3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_001CDF50
 * Original: 0x001CDF50 - 0x001CE063 (275 bytes, 86 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CDF50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CDF50: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0x2C (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x5C) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_001CE044; /* jne: not equal / not zero */

loc_001CDF65: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, 0x2C);
    PUSH32(esp, eax);
    edi = esi + 0x30;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CDF76u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_001CDF76: ;
    ecx = 0xFFFFFFFCu;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi + 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_001CDF83: ;
    SET_LO8(edx, MEM8(eax + 0x2C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDFC4; /* jne: not equal / not zero */

loc_001CDF8A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CDF83; /* jl: less (signed <) */

loc_001CDF93: ;
    ecx = 0xFFFFFFECu;
    eax = esi + 0x14;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_001CDFA0: ;
    SET_LO8(edx, MEM8(eax + 0x2C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CDFE0; /* jne: not equal / not zero */

loc_001CDFA7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ecx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CDFA0; /* jl: less (signed <) */

loc_001CDFB0: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x50), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CDFFF; /* je: equal / zero */

loc_001CDFB8: ;
    MEM32(esi + 0x50) = eax;
    MEM32(esi + 0x5C) = 3;
    goto loc_001CE025;

loc_001CDFC4: ;
    PUSH32(esp, 0x7F0CE8);
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CDFD4u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001CDFD4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x5C) = 1;
    goto loc_001CE025;

loc_001CDFE0: ;
    PUSH32(esp, 0x7F0CD0);
    eax = esi + 0x40;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CDFF3u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001CDFF3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x5C) = 2;
    goto loc_001CE025;

loc_001CDFFF: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(MEM32(esi + 0x54)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x54), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE013; /* je: equal / zero */

loc_001CE007: ;
    MEM32(esi + 0x54) = eax;
    MEM32(esi + 0x5C) = 4;
    goto loc_001CE025;

loc_001CE013: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE025; /* je: equal / zero */

loc_001CE01B: ;
    MEM32(esi + 0x58) = eax;
    MEM32(esi + 0x5C) = 5;

loc_001CE025: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    MEM32(ecx) = edi;
    MEM32(edx) = 0x2C;
    ecx = MEM32(esi + 0x5C);
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001CE044: ;
    eax = MEM32(esp + 0x14);
    MEM32(eax) = 0;
    MEM32(esi + 0x5C) = 6;
    ecx = MEM32(esi + 0x5C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001CE0B0
 * Original: 0x001CE0B0 - 0x001CE0D4 (36 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE0B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi) = 0x7F0CFC;
    if (CMP_EQ(_fa, _fb)) goto loc_001CE0CC; /* je: equal / zero */

loc_001CE0C0: ;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CE0CCu); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_001CE0CC: ;
    MEM32(esi) = 0x7F0C50;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE0E0
 * Original: 0x001CE0E0 - 0x001CE0F5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE0E0(void)
{

loc_001CE0E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x8FC644);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CE0EFu); RECOMP_ABI_CALL(0x0001B70Du, sub_0001B70D); /* call 0x0001B70D */

loc_001CE0EF: ;
    MEM8(esi + 0x14) = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE100
 * Original: 0x001CE100 - 0x001CE111 (17 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE100(void)
{

loc_001CE100: ;
    MEM8(ecx + 0x14) = 0;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8FC644);
    PUSH32(esp, 0x001CE110u); RECOMP_ABI_CALL(0x0002E90Cu, sub_0002E90C); /* call 0x0002E90C */

loc_001CE110: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE120
 * Original: 0x001CE120 - 0x001CE13F (31 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE120: ;
    PUSH32(esp, 0x001CE125u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_001CE125: ;
    SET_LO8(ecx, MEM8(eax + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE13E; /* je: equal / zero */

loc_001CE12C: ;
    eax = MEM32(0x8F24EC);
    ecx = MEM32(eax + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8C42F0);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CE13Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE13Bu); } /* indirect call */
    }

loc_001CE13E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE150
 * Original: 0x001CE150 - 0x001CE16C (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE150: ;
    ecx = MEM32(0x8F44F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE16B; /* je: equal / zero */

loc_001CE15A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CE161u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE15Eu); } /* indirect call */
    }

loc_001CE161: ;
    MEM32(0x8F44F0) = 0;

loc_001CE16B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE180
 * Original: 0x001CE180 - 0x001CE186 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE180(void)
{

loc_001CE180: ;
    eax = MEM32(0x8F44F0);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE190
 * Original: 0x001CE190 - 0x001CE197 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE190(void)
{

loc_001CE190: ;
    MEM32(ecx) = 0x7F0C44;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE1A0
 * Original: 0x001CE1A0 - 0x001CE1BB (27 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE1A0: ;
    ecx = MEM32(0x8F4500);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE1BA; /* je: equal / zero */

loc_001CE1AA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001CE1B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE1AEu); } /* indirect call */
    }

loc_001CE1B0: ;
    MEM32(0x8F4500) = 0;

loc_001CE1BA: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE1D0
 * Original: 0x001CE1D0 - 0x001CE1E7 (23 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE1D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE1D0: ;
    MEM32(ecx + 0xC) = 5;
    ecx = MEM32(0x8F4500);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE1E6; /* je: equal / zero */

loc_001CE1E1: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 4)); return; /* indirect tail jmp */

loc_001CE1E6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE1F0
 * Original: 0x001CE1F0 - 0x001CE215 (37 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE1F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0xC) = 6;
    if (CMP_EQ(_fa, _fb)) goto loc_001CE213; /* je: equal / zero */

loc_001CE201: ;
    eax = MEM32(0x8F24EC);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CE20Fu); RECOMP_ABI_CALL(0x0001F227u, sub_0001F227); /* call 0x0001F227 */

loc_001CE20F: ;
    MEM8(esi + 0x10) = 0;

loc_001CE213: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE220
 * Original: 0x001CE220 - 0x001CE242 (34 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE220: ;
    MEM32(ecx + 0xC) = 7;
    ecx = MEM32(0x8F4500);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE241; /* je: equal / zero */

loc_001CE231: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001CE237u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE235u); } /* indirect call */
    }

loc_001CE237: ;
    MEM32(0x8F4500) = 0;

loc_001CE241: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE250
 * Original: 0x001CE250 - 0x001CE258 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE250(void)
{

loc_001CE250: ;
    MEM32(ecx + 0xC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE260
 * Original: 0x001CE260 - 0x001CE268 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE260(void)
{

loc_001CE260: ;
    MEM32(ecx + 0xC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE270
 * Original: 0x001CE270 - 0x001CE2F9 (137 bytes, 45 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE270: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    if ((_fa == 0)) goto loc_001CE2B5; /* je: equal / zero */

loc_001CE27C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CE2F5; /* jne: not equal / not zero */

loc_001CE27F: ;
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE2F5; /* je: equal / zero */

loc_001CE286: ;
    eax = MEM32(0x8F24EC);
    ecx = MEM32(eax + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CE294u); RECOMP_ABI_CALL(0x0001F227u, sub_0001F227); /* call 0x0001F227 */

loc_001CE294: ;
    MEM8(esi + 0x10) = 0;
    PUSH32(esp, 0x001CE29Du); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CE29D: ;
    edx = MEM32(eax);
    POP32(esp, esi);
    MEM32(esp + 8) = 0;
    MEM32(esp + 4) = 0x75;
    ecx = eax;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 8)); return; /* indirect tail jmp */

loc_001CE2B5: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CE2C8; /* jne: not equal / not zero */

loc_001CE2BD: ;
    MEM32(esi + 0xC) = 2;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_001CE2C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CE2F5; /* jne: not equal / not zero */

loc_001CE2CD: ;
    eax = MEM32(0x8F24EC);
    ecx = MEM32(eax + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE2DE; /* je: equal / zero */

loc_001CE2D9: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x001CE2DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE2DBu); } /* indirect call */
    }

loc_001CE2DE: ;
    PUSH32(esp, 0x001CE2E3u); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_001CE2E3: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0x74);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CE2EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE2EBu); } /* indirect call */
    }

loc_001CE2EE: ;
    MEM32(esi + 0xC) = 3;

loc_001CE2F5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CE320
 * Original: 0x001CE320 - 0x001CE346 (38 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE320: ;
    PUSH32(esp, 0x30000);
    PUSH32(esp, 0x20000);
    PUSH32(esp, 0x001CE32Fu); RECOMP_ABI_CALL(0x005CC92Bu, sub_005CC92B); /* call 0x005CC92B */

loc_001CE32F: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CE338u); RECOMP_ABI_CALL(0x005CC92Bu, sub_005CC92B); /* call 0x005CC92B */

loc_001CE338: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8F24E8) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE350
 * Original: 0x001CE350 - 0x001CE386 (54 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE350(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE350: ;
    eax = MEM32(0x8F44F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE385; /* je: equal / zero */

loc_001CE359: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CE385; /* je: equal / zero */

loc_001CE35E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x001CE367u); RECOMP_ABI_CALL(0x005CC92Bu, sub_005CC92B); /* call 0x005CC92B */

loc_001CE367: ;
    eax = MEM32(0x8F24E8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE385; /* je: equal / zero */

loc_001CE373: ;
    PUSH32(esp, 0x30000);
    PUSH32(esp, 0x20000);
    PUSH32(esp, 0x001CE382u); RECOMP_ABI_CALL(0x005CC92Bu, sub_005CC92B); /* call 0x005CC92B */

loc_001CE382: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CE385: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE3A0
 * Original: 0x001CE3A0 - 0x001CE3AE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE3A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE3A0: ;
    edx = MEM32(ecx + 0x224);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    esp += 4; return; /* ret */

}

/**
 * sub_001CE3C0
 * Original: 0x001CE3C0 - 0x001CE3DC (28 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE3C0: ;
    ecx = MEM32(0x8F4508);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE3DB; /* je: equal / zero */

loc_001CE3CA: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001CE3D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE3CEu); } /* indirect call */
    }

loc_001CE3D1: ;
    MEM32(0x8F4508) = 0;

loc_001CE3DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE3F0
 * Original: 0x001CE3F0 - 0x001CE3F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE3F0(void)
{

loc_001CE3F0: ;
    eax = MEM32(0x8F4508);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE400
 * Original: 0x001CE400 - 0x001CE409 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE400(void)
{

loc_001CE400: ;
    eax = ecx;
    MEM32(eax) = 0x7F0D08;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE410
 * Original: 0x001CE410 - 0x001CE45D (77 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE410(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE410: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = 0x7F0D24;
    PUSH32(esp, 0x001CE41Fu); RECOMP_ABI_CALL(0x000269A0u, sub_000269A0); /* call 0x000269A0 */

loc_001CE41F: ;
    _fb = (uint32_t)(0x2A0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2A0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE42Au); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CE42A: ;
    ecx = eax;
    PUSH32(esp, 0x001CE431u); RECOMP_ABI_CALL(0x00037EC6u, sub_00037EC6); /* call 0x00037EC6 */

loc_001CE431: ;
    edi = esi + 4;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM8(0x8F4504) = 1;
    PUSH32(esp, 0x001CE443u); RECOMP_ABI_CALL(0x0059E648u, sub_0059E648); /* call 0x0059E648 */

loc_001CE443: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CE449u); RECOMP_ABI_CALL(0x0059E4CFu, sub_0059E4CF); /* call 0x0059E4CF */

loc_001CE449: ;
    ecx = MEM32(esi + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001CE45C; /* je: equal / zero */

loc_001CE455: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x18); PUSH32(esp, 0x001CE45Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE459u); } /* indirect call */
    }

loc_001CE45C: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE470
 * Original: 0x001CE470 - 0x001CE486 (22 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE470: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001CE47Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE478u); } /* indirect call */
    }

loc_001CE47A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    POP32(esp, esi);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 4)); return; /* indirect tail jmp */

}

/**
 * sub_001CE490
 * Original: 0x001CE490 - 0x001CE498 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE490: ;
    ecx = MEM32(ecx + 0x28);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_001CE4A0
 * Original: 0x001CE4A0 - 0x001CE4E6 (70 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE4A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE4A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x001CE4ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE4A9u); } /* indirect call */
    }

loc_001CE4AB: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE4E3; /* je: equal / zero */

loc_001CE4B3: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x001CE4BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE4B8u); } /* indirect call */
    }

loc_001CE4BB: ;
    ecx = MEM32(0x8FC1D0);
    edx = MEM32(ecx + 0x224);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CE4CE; /* jle: less or equal (signed <=) */

loc_001CE4CB: ;
    MEM8(eax + 3) = MEM8(eax + 3) + 1;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_001CE4CE: ;
    edx = ZX8(MEM8(eax + 3));
    eax = edx + edi * 2 + -2;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }

loc_001CE4E3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE500
 * Original: 0x001CE500 - 0x001CE508 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE500: ;
    ecx = MEM32(ecx + 0x28);
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 8)); return; /* indirect tail jmp */

}

/**
 * sub_001CE510
 * Original: 0x001CE510 - 0x001CE52F (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE510: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x28);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001CE51Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE518u); } /* indirect call */
    }

loc_001CE51B: ;
    MEM8(eax + 3) = MEM8(eax + 3) - 1;
    _fa = (uint32_t)(MEM8(eax + 3)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CE52B; /* jne: not equal / not zero */

loc_001CE520: ;
    ecx = MEM32(esi + 0x28);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x001CE528u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE525u); } /* indirect call */
    }

loc_001CE528: ;
    MEM32(esi + 0x24) = MEM32(esi + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CE52B: ;
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE540
 * Original: 0x001CE540 - 0x001CE544 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE540(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE540: ;
    MEM32(ecx + 0x24) = MEM32(ecx + 0x24) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_001CE550
 * Original: 0x001CE550 - 0x001CE5DD (141 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_001CE550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE550: ;
    SET_LO8(eax, MEM8(0x8F4504));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CE5DA; /* jne: not equal / not zero */

loc_001CE55D: ;
    PUSH32(esp, esi);
    edi = edi;

loc_001CE560: ;
    eax = MEM32(0x8F4508);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE5C6; /* je: equal / zero */

loc_001CE569: ;
    eax = MEM32(0x8BFE7C);
    ecx = 0x8BFE7C;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CE576u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE573u); } /* indirect call */
    }

loc_001CE576: ;
    ecx = MEM32(0x8F4508);
    esi = MEM32(ecx + 0x10);
    edx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_001CE5A2; /* js: sign (negative) */

loc_001CE585: ;
    eax = MEM32(ecx + 0x18);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x10) = MEM32(ecx + 0x10) + eax;
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x8F4508);
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(0x8F4508);
    esi = MEM32(ecx + 0x10);
    eax = edx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_001CE585; /* jns: not sign (positive) */

loc_001CE5A2: ;
    esi = MEM32(ecx + 0x10);
    eax = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(0x8BFE84));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(0x8BFE84)); }
    _fb = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ecx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x2C) = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE5C3u); RECOMP_ABI_CALL(0x0059E4E7u, sub_0059E4E7); /* call 0x0059E4E7 */

loc_001CE5C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CE5C6: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x001CE5CDu); RECOMP_ABI_CALL(0x0059E4E7u, sub_0059E4E7); /* call 0x0059E4E7 */

loc_001CE5CD: ;
    SET_LO8(eax, MEM8(0x8F4504));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE560; /* je: equal / zero */

loc_001CE5D9: ;
    POP32(esp, esi);

loc_001CE5DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CE600
 * Original: 0x001CE600 - 0x001CE626 (38 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE600: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx + 0x20);
    edx = MEM32(ecx + 0x1C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp) = 0;
    MEM32(esp) = edx;
    edx = MEM32(esp);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp);
    PUSH32(esp, eax);
    MEM32(ecx + 0x20) = edx;
    { uint32_t _icall_target = MEM32(ecx + 0x14); PUSH32(esp, 0x001CE622u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x001CE61Fu); } /* indirect call */
    }

loc_001CE622: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CE630
 * Original: 0x001CE630 - 0x001CE63F (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE630(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE630: ;
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x1C) = edx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CE650
 * Original: 0x001CE650 - 0x001CE76F (287 bytes, 71 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE650: ;
    eax = 0x1118;
    PUSH32(esp, 0x001CE65Au); RECOMP_ABI_CALL(0x005CC470u, sub_005CC470); /* call 0x005CC470 */

loc_001CE65A: ;
    eax = MEM32(0x8F44F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE768; /* je: equal / zero */

loc_001CE667: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CE768; /* je: equal / zero */

loc_001CE670: ;
    eax = ZX8(MEM8(0x8F4510));
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE67Du); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CE67D: ;
    ecx = eax;
    PUSH32(esp, 0x001CE684u); RECOMP_ABI_CALL(0x000146A6u, sub_000146A6); /* call 0x000146A6 */

loc_001CE684: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    MEM32(esp + 0x114) = 0x26;
    ecx = esp + 8;
    if (TEST_NZ(_fa, _fb)) goto loc_001CE70D; /* jne: not equal / not zero */

loc_001CE698: ;
    PUSH32(esp, 0x001CE69Du); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_001CE69D: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F0D7C);
    PUSH32(esp, 0x7ECB88);
    ecx = esp + 0x14;
    PUSH32(esp, 0x001CE6B2u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001CE6B2: ;
    PUSH32(esp, 0x80);
    eax = esp + 0x98;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7F0D54);
    MEM8(esp + 0x20) = 0;
    PUSH32(esp, 0x001CE6CEu); RECOMP_ABI_CALL(0x0001C365u, sub_0001C365); /* call 0x0001C365 */

loc_001CE6CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE6D7u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_001CE6D7: ;
    ecx = eax;
    PUSH32(esp, 0x001CE6DEu); RECOMP_ABI_CALL(0x00028354u, sub_00028354); /* call 0x00028354 */

loc_001CE6DE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE6FF; /* je: equal / zero */

loc_001CE6E2: ;
    ecx = MEM32(0x8F4510);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, ecx);
    edx = esp + 0x98;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CE6FCu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_001CE6FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CE6FF: ;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x7E6530);
    goto loc_001CE71E;

loc_001CE70D: ;
    PUSH32(esp, 0x001CE712u); RECOMP_ABI_CALL(0x00019070u, sub_00019070); /* call 0x00019070 */

loc_001CE712: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x7F0D48);
    PUSH32(esp, 0x7ECB88);

loc_001CE71E: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x001CE727u); RECOMP_ABI_CALL(0x00011244u, sub_00011244); /* call 0x00011244 */

loc_001CE727: ;
    edx = esp + 0x118;
    PUSH32(esp, 0x1000);
    ecx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CE73Du); RECOMP_ABI_CALL(0x00017905u, sub_00017905); /* call 0x00017905 */

loc_001CE73D: ;
    ecx = esp;
    PUSH32(esp, ecx);
    ecx = MEM32(0x8F06F4);
    eax = esp + 0x118;
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = 0x4B64ADB;
    PUSH32(esp, 0x001CE75Fu); RECOMP_ABI_CALL(0x00026D4Cu, sub_00026D4C); /* call 0x00026D4C */

loc_001CE75F: ;
    ecx = esp + 8;
    PUSH32(esp, 0x001CE768u); RECOMP_ABI_CALL(0x00036F44u, sub_00036F44); /* call 0x00036F44 */

loc_001CE768: ;
    _fb = (uint32_t)(0x1118) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1118;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001CE7C0
 * Original: 0x001CE7C0 - 0x001CE7C1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE7C0(void)
{

loc_001CE7C0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CE7D0
 * Original: 0x001CE7D0 - 0x001CE88C (188 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE7D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CE7DAu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CE7DA: ;
    edi = eax;
    eax = MEM32(0x8F44F4);
    ecx = MEM32(eax);
    ecx = ecx | 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(0x8F4514) = ebp;
    MEM32(esp + 0x10) = ebp;

loc_001CE7F4: ;
    esi = ZX8(MEM8(esp + 0x10));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = edi;

loc_001CE800: ;
    eax = ZX8(LO8(ebx));
    PUSH32(esp, 1);
    eax = eax | esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001CE811u); RECOMP_ABI_CALL(0x00030EAAu, sub_00030EAA); /* call 0x00030EAA */

loc_001CE811: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 8 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE800; /* jl: less (signed <) */

loc_001CE817: ;
    eax = MEM32(esp + 0x10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_001CE7F4; /* jl: less (signed <) */

loc_001CE825: ;
    ecx = MEM32(0x8F9CCC);
    PUSH32(esp, 0x001CE830u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_001CE830: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001CE837u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE834u); } /* indirect call */
    }

loc_001CE837: ;
    ebx = eax;
    /* nop */

loc_001CE840: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CE842: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CE850u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE84Du); } /* indirect call */
    }

loc_001CE850: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE87A; /* je: equal / zero */

loc_001CE859: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CE86E; /* je: equal / zero */

loc_001CE85E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001CE86Au); RECOMP_ABI_CALL(0x00030EAAu, sub_00030EAA); /* call 0x00030EAA */

loc_001CE86A: ;
    eax = MEM32(esp + 0x10);

loc_001CE86E: ;
    PUSH32(esp, 1);
    PUSH32(esp, 2);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001CE87Au); RECOMP_ABI_CALL(0x00030EAAu, sub_00030EAA); /* call 0x00030EAA */

loc_001CE87A: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE842; /* jl: less (signed <) */

loc_001CE880: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE840; /* jl: less (signed <) */

loc_001CE886: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE8C0
 * Original: 0x001CE8C0 - 0x001CE93A (122 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE8C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CE8C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CE8CAu); RECOMP_ABI_CALL(0x00030045u, sub_00030045); /* call 0x00030045 */

loc_001CE8CA: ;
    ecx = MEM32(0x8F9CCC);
    edi = eax;
    PUSH32(esp, 0x001CE8D7u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_001CE8D7: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001CE8DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE8DBu); } /* indirect call */
    }

loc_001CE8DE: ;
    ebx = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CE8E2: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001CE8E4: ;
    eax = MEM32(ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CE8F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE8EFu); } /* indirect call */
    }

loc_001CE8F2: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CE91C; /* je: equal / zero */

loc_001CE8FB: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CE91C; /* je: equal / zero */

loc_001CE900: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x001CE90Cu); RECOMP_ABI_CALL(0x00030EAAu, sub_00030EAA); /* call 0x00030EAA */

loc_001CE90C: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, 0);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x001CE91Cu); RECOMP_ABI_CALL(0x00030EAAu, sub_00030EAA); /* call 0x00030EAA */

loc_001CE91C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE8E4; /* jl: less (signed <) */

loc_001CE922: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CE8E2; /* jl: less (signed <) */

loc_001CE928: ;
    eax = MEM32(0x8F44F4);
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    ecx = ecx & 0xFFFFFFBFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CE960
 * Original: 0x001CE960 - 0x001CEA0B (171 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CE960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CE960: ;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 8);
    eax = ZX16(MEM16(ecx + 0x44));
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fa == 0)) goto loc_001CE9C1; /* je: equal / zero */

loc_001CE970: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CEA07; /* jne: not equal / not zero */

loc_001CE977: ;
    PUSH32(esp, 0x001CE97Cu); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_001CE97C: ;
    ecx = MEM32(0x8F9CCC);
    edi = eax;
    PUSH32(esp, 0x001CE989u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_001CE989: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001CE990u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE98Du); } /* indirect call */
    }

loc_001CE990: ;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    edx = esp + 0xC;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001CE9A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE9A3u); } /* indirect call */
    }

loc_001CE9A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEA07; /* je: equal / zero */

loc_001CE9AA: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001CE9BDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE9BAu); } /* indirect call */
    }

loc_001CE9BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_001CE9C1: ;
    PUSH32(esp, 0x001CE9C6u); RECOMP_ABI_CALL(0x00030978u, sub_00030978); /* call 0x00030978 */

loc_001CE9C6: ;
    ecx = MEM32(0x8F9CCC);
    edi = eax;
    PUSH32(esp, 0x001CE9D3u); RECOMP_ABI_CALL(0x0003010Du, sub_0003010D); /* call 0x0003010D */

loc_001CE9D3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x001CE9DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE9D7u); } /* indirect call */
    }

loc_001CE9DA: ;
    ecx = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    edx = esp + 0xC;
    esi = eax;
    eax = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x001CE9F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CE9EDu); } /* indirect call */
    }

loc_001CE9F0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEA07; /* je: equal / zero */

loc_001CE9F4: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 8);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x001CEA07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CEA04u); } /* indirect call */
    }

loc_001CEA07: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CEA40
 * Original: 0x001CEA40 - 0x001CEA46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEA40(void)
{

loc_001CEA40: ;
    eax = MEM32(0x8F451C);
    esp += 4; return; /* ret */

}

/**
 * sub_001CEA50
 * Original: 0x001CEA50 - 0x001CEA5B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEA50: ;
    ecx = MEM32(ecx + 0x630);
    g_seh_ebp = ebp; sub_0059E46E(); return; /* tail jmp 0x0059E46E */

}

/**
 * sub_001CEA60
 * Original: 0x001CEA60 - 0x001CEAB6 (86 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEA60: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x630);
    PUSH32(esp, 0x001CEA6Eu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_001CEA6E: ;
    PUSH32(esp, 0x600);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CEA7Bu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001CEA7B: ;
    ecx = MEM32(esi + 0x630);
    SET_LO8(eax, 1);
    MEM32(esi + 0x600) = 0;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x604) = 0;
    MEM32(esi + 0x608) = 0;
    MEM8(esi + 0x60C) = LO8(eax);
    MEM8(esi + 0x60D) = LO8(eax);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_001CEAD0
 * Original: 0x001CEAD0 - 0x001CEB71 (161 bytes, 51 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEAD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x630);
    PUSH32(esp, edi);
    edi = eax + ebp;
    PUSH32(esp, 0x001CEAECu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_001CEAEC: ;
    ecx = MEM32(esi + 0x604);
    MEM32(esi + 0x608) = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_001CEB00: ;
    eax = MEM32(esi + 0x608);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x600)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x600) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEB47; /* je: equal / zero */

loc_001CEB0E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x80 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001CEB47; /* jg: greater (signed >) */

loc_001CEB16: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0x8000007Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001CEB23; /* jns: not sign (positive) */

loc_001CEB1E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax | 0xFFFFFF80u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CEB23: ;
    edx = eax + eax * 2;
    MEM32(esi + 0x608) = eax;
    PUSH32(esp, 0xC);
    eax = esi + edx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x001CEB38u); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_001CEB38: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CEB00; /* jl: less (signed <) */

loc_001CEB47: ;
    ecx = MEM32(esi + 0x604);
    _fa = (uint32_t)(MEM32(esi + 0x608)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x608), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEB5D; /* je: equal / zero */

loc_001CEB55: ;
    eax = MEM32(esp + 0x14);
    MEM8(eax + 1) = MEM8(eax + 1) | 0x20;
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_001CEB5D: ;
    ecx = MEM32(esi + 0x630);
    PUSH32(esp, 0x001CEB68u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_001CEB68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CEBA0
 * Original: 0x001CEBA0 - 0x001CEBD7 (55 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEBA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CEBA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x630);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x001CEBB1u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_001CEBB1: ;
    eax = MEM32(esi + 0x608);
    _fa = (uint32_t)(MEM32(esi + 0x604)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x604), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEBC7; /* je: equal / zero */

loc_001CEBBF: ;
    MEM32(esi + 0x604) = eax;
    SET_LO8(ebx, 1);

loc_001CEBC7: ;
    ecx = MEM32(esi + 0x630);
    PUSH32(esp, 0x001CEBD2u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_001CEBD2: ;
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001CEBF0
 * Original: 0x001CEBF0 - 0x001CEC4F (95 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CEBF0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0x630);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x001CEC02u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_001CEC02: ;
    esi = MEM32(edi + 0x600);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = esi & 0x8000007Fu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001CEC16; /* jns: not sign (positive) */

loc_001CEC11: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi | 0xFFFFFF80u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CEC16: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x604)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x604) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEC3C; /* je: equal / zero */

loc_001CEC1E: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, 0xC);
    ecx = esi + esi * 2;
    PUSH32(esp, eax);
    edx = edi + ecx * 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CEC31u); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_001CEC31: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x600) = esi;
    SET_LO8(ebx, 1);

loc_001CEC3C: ;
    ecx = MEM32(edi + 0x630);
    PUSH32(esp, 0x001CEC47u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_001CEC47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEC70
 * Original: 0x001CEC70 - 0x001CEC76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEC70(void)
{

loc_001CEC70: ;
    eax = MEM32(0x8F4520);
    esp += 4; return; /* ret */

}

/**
 * sub_001CEC80
 * Original: 0x001CEC80 - 0x001CEC8B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEC80: ;
    ecx = MEM32(ecx + 0x5470);
    g_seh_ebp = ebp; sub_0059E46E(); return; /* tail jmp 0x0059E46E */

}

/**
 * sub_001CEC90
 * Original: 0x001CEC90 - 0x001CECE5 (85 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEC90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEC90: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x5470);
    PUSH32(esp, 0x001CEC9Fu); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_001CEC9F: ;
    PUSH32(esp, 0x5400);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CECADu); RECOMP_ABI_CALL(0x0059E9C2u, sub_0059E9C2); /* call 0x0059E9C2 */

loc_001CECAD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x544C) = LO8(ebx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x5410;
    edi = edi;

loc_001CECC0: ;
    MEM8(esi + eax + 0x5400) = LO8(ebx);
    MEM32(ecx) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CECC0; /* jl: less (signed <) */

loc_001CECD2: ;
    ecx = MEM32(esi + 0x5470);
    MEM32(esi + 0x5448) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}

/**
 * sub_001CED00
 * Original: 0x001CED00 - 0x001CEDDD (221 bytes, 92 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CED00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CED00: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = ebp | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x5448);
    if (CMP_LE(_fas, _fbs)) goto loc_001CED40; /* jle: less or equal (signed <=) */

loc_001CED1A: ;
    /* nop */

loc_001CED20: ;
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx + esi * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CED3B; /* je: equal / zero */

loc_001CED2C: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) ebp = edx; /* cmove */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + edx * 4 + 0x5410)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + edx * 4 + 0x5410) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEDAC; /* je: equal / zero */

loc_001CED3B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CED20; /* jl: less (signed <) */

loc_001CED40: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi & 0x8000007Fu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = 1;
    if ((_fas >= 0)) goto loc_001CED56; /* jns: not sign (positive) */

loc_001CED51: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi | 0xFFFFFF80u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CED56: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CEDA8; /* jle: less or equal (signed <=) */

loc_001CED5C: ;
    /* nop */

loc_001CED60: ;
    edx = MEM32(esp + 0x1C);
    edx = MEM32(edx + ebx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEDA3; /* je: equal / zero */

loc_001CED6C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEDA3; /* je: equal / zero */

loc_001CED70: ;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + edx * 2;
    edx = ebp;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx + edx * 2;
    esi = ecx + eax * 4;
    SET_LO8(eax, MEM8(ecx + edx * 4));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(MEM8(esi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), MEM8(esi) (8-bit) */
    edx = ecx + edx * 4;
    if (CMP_NE(_fa, _fb)) goto loc_001CEDB6; /* jne: not equal / not zero */

loc_001CED8F: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEDC3; /* jne: not equal / not zero */

loc_001CED97: ;
    edx = MEM32(edx + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEDD0; /* jne: not equal / not zero */

loc_001CED9F: ;
    eax = MEM32(esp + 0x18);

loc_001CEDA3: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CED60; /* jl: less (signed <) */

loc_001CEDA8: ;
    ebx = MEM32(esp + 0x10);

loc_001CEDAC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001CEDB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 2;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001CEDC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 3;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_001CEDD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 4;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CEE20
 * Original: 0x001CEE20 - 0x001CEEF6 (214 bytes, 73 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEE20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEE20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x544C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_001CEE89; /* jne: not equal / not zero */

loc_001CEE34: ;
    SET_LO8(eax, MEM8(esi + ebp + 0x5400));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEE89; /* jne: not equal / not zero */

loc_001CEE3F: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 1), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001CEEED; /* je: equal / zero */

loc_001CEE4D: ;
    ebx = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM8(esi + ebp + 0x5400) = 1;
    SET_LO8(edx, 1);
    if (CMP_LE(_fas, _fbs)) goto loc_001CEE82; /* jle: less or equal (signed <=) */

loc_001CEE61: ;
    edi = MEM32(esp + 0x20);

loc_001CEE65: ;
    eax = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEE79; /* je: equal / zero */

loc_001CEE6D: ;
    _fa = (uint32_t)(MEM8(eax + esi + 0x5400)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi + 0x5400), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEE79; /* jne: not equal / not zero */

loc_001CEE77: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_001CEE79: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CEE65; /* jl: less (signed <) */

loc_001CEE7E: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEE89; /* je: equal / zero */

loc_001CEE82: ;
    MEM8(esi + 0x544C) = 1;

loc_001CEE89: ;
    ecx = MEM32(esi + 0x5470);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    PUSH32(esp, 0x001CEE96u); RECOMP_ABI_CALL(0x0059E46Fu, sub_0059E46F); /* call 0x0059E46F */

loc_001CEE96: ;
    edi = MEM32(esi + ebp * 4 + 0x5410);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = edi & 0x8000007Fu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001CEEAB; /* jns: not sign (positive) */

loc_001CEEA6: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = edi | 0xFFFFFF80u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CEEAB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x5448)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x5448) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEED9; /* je: equal / zero */

loc_001CEEB3: ;
    ecx = MEM32(esp + 0x18);
    eax = ebp;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0xC);
    edx = eax + eax * 2;
    PUSH32(esp, ecx);
    eax = esi + edx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CEECDu); RECOMP_ABI_CALL(0x0059EAA4u, sub_0059EAA4); /* call 0x0059EAA4 */

loc_001CEECD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + ebp * 4 + 0x5410) = edi;
    SET_LO8(ebx, 1);

loc_001CEED9: ;
    ecx = MEM32(esi + 0x5470);
    PUSH32(esp, 0x001CEEE4u); RECOMP_ABI_CALL(0x0059E47Au, sub_0059E47A); /* call 0x0059E47A */

loc_001CEEE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

loc_001CEEED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001CEF30
 * Original: 0x001CEF30 - 0x001CEF92 (98 bytes, 37 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEF30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001CEF30: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = 0x80;
    if (CMP_LE(_fas, _fbs)) goto loc_001CEF8E; /* jle: less or equal (signed <=) */

loc_001CEF40: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_001CEF50;

    /* nop */

loc_001CEF50: ;
    esi = MEM32(ebp + ebx * 4);
    edx = MEM32(ecx + 0x5448);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + esi * 4 + 0x5410)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + esi * 4 + 0x5410) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CEF7D; /* je: equal / zero */

loc_001CEF65: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edx & 0x8000007Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fas >= 0)) goto loc_001CEF74; /* jns: not sign (positive) */

loc_001CEF6F: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx | 0xFFFFFF80u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_001CEF74: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + esi * 4 + 0x5410)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + esi * 4 + 0x5410) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CEF65; /* jne: not equal / not zero */

loc_001CEF7D: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) eax = edi; /* cmovle */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CEF50; /* jl: less (signed <) */

loc_001CEF8B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_001CEF8E: ;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_001CEFB0
 * Original: 0x001CEFB0 - 0x001CEFB9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEFB0(void)
{

loc_001CEFB0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEFC0
 * Original: 0x001CEFC0 - 0x001CEFCA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEFC0(void)
{

loc_001CEFC0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEFD0
 * Original: 0x001CEFD0 - 0x001CEFD9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEFD0(void)
{

loc_001CEFD0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEFE0
 * Original: 0x001CEFE0 - 0x001CEFEA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEFE0(void)
{

loc_001CEFE0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CEFF0
 * Original: 0x001CEFF0 - 0x001CEFF9 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CEFF0(void)
{

loc_001CEFF0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF000
 * Original: 0x001CF000 - 0x001CF00A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF000(void)
{

loc_001CF000: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF010
 * Original: 0x001CF010 - 0x001CF030 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF010: ;
    eax = MEM32(0x8F44F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF02F; /* je: equal / zero */

loc_001CF019: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF025u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001CF025: ;
    MEM32(0x8F44F8) = 0;

loc_001CF02F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF040
 * Original: 0x001CF040 - 0x001CF048 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF040(void)
{

loc_001CF040: ;
    PUSH32(esp, 0x001CF045u); RECOMP_ABI_CALL(0x00031738u, sub_00031738); /* call 0x00031738 */

loc_001CF045: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF050
 * Original: 0x001CF050 - 0x001CF070 (32 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF050: ;
    eax = MEM32(0x8F44F8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF06F; /* je: equal / zero */

loc_001CF059: ;
    ecx = MEM32(0x8FC63C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x001CF065u); RECOMP_ABI_CALL(0x000113CFu, sub_000113CF); /* call 0x000113CF */

loc_001CF065: ;
    MEM32(0x8F44F8) = 0;

loc_001CF06F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF080
 * Original: 0x001CF080 - 0x001CF09F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF080(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF080: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F0C30;
    if (TEST_Z(_fa, _fb)) goto loc_001CF099; /* je: equal / zero */

loc_001CF090: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CF096u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CF096: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CF099: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF0B0
 * Original: 0x001CF0B0 - 0x001CF0CF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF0B0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F0C44;
    if (TEST_Z(_fa, _fb)) goto loc_001CF0C9; /* je: equal / zero */

loc_001CF0C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CF0C6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CF0C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CF0C9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF0E0
 * Original: 0x001CF0E0 - 0x001CF0FF (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF0E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF0E0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F0C50;
    if (TEST_Z(_fa, _fb)) goto loc_001CF0F9; /* je: equal / zero */

loc_001CF0F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CF0F6u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CF0F6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CF0F9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF110
 * Original: 0x001CF110 - 0x001CF135 (37 bytes, 15 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF110(void)
{

loc_001CF110: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001CF132u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_001CF132: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_001CF140
 * Original: 0x001CF140 - 0x001CF14D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF140: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_001CF150
 * Original: 0x001CF150 - 0x001CF18F (63 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF150: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x60) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x60 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CF18A; /* jl: less (signed <) */

loc_001CF15A: ;
    esi = MEM32(ecx);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_001CF16D; /* jg: greater (signed >) */

loc_001CF168: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CF16D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CF18A; /* jle: less or equal (signed <=) */

loc_001CF175: ;
    edx = MEM32(ecx + 4);
    eax = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = edx;

loc_001CF18A: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF1A0
 * Original: 0x001CF1A0 - 0x001CF1E0 (64 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF1A0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CF1DB; /* jl: less (signed <) */

loc_001CF1AA: ;
    esi = MEM32(ecx);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_001CF1BE; /* jl: less (signed <) */

loc_001CF1B9: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_001CF1BE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x80 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_001CF1DB; /* jle: less or equal (signed <=) */

loc_001CF1C6: ;
    edx = MEM32(ecx + 4);
    eax = esi;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ecx + 4) = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    MEM32(ecx + 8) = edx;

loc_001CF1DB: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001CF1F0
 * Original: 0x001CF1F0 - 0x001CF20F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF1F0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x7F0C5C;
    if (TEST_Z(_fa, _fb)) goto loc_001CF209; /* je: equal / zero */

loc_001CF200: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x001CF206u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_001CF206: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001CF209: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_001CF220
 * Original: 0x001CF220 - 0x001CF2FC (220 bytes, 68 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001CF220(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001CF220: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x184));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_001CF277; /* jne: not equal / not zero */

loc_001CF231: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_001CF2E7; /* jne: not equal / not zero */

loc_001CF23A: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF2E7; /* jne: not equal / not zero */

loc_001CF244: ;
    ecx = MEM32(esi + 0x3C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x001CF24Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF249u); } /* indirect call */
    }

loc_001CF24C: ;
    MEM32(esi + 0x18) = 2;
    PUSH32(esp, 0x001CF258u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_001CF258: ;
    MEM8(eax + 0x40) = 1;
    SET_LO8(eax, MEM8(esi + 0x2A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x48) = 0;
    eax = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_001CF2EC; /* je: equal / zero */

loc_001CF26F: ;
    MEM8(esi + 0x2A) = 0;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001CF277: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_001CF2E7; /* jne: not equal / not zero */

loc_001CF27A: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF2E7; /* jne: not equal / not zero */

loc_001CF280: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x001CF288u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x001CF285u); } /* indirect call */
    }

loc_001CF288: ;
    MEM32(esi + 0x18) = 2;
    PUSH32(esp, 0x001CF294u); RECOMP_ABI_CALL(0x0002017Cu, sub_0002017C); /* call 0x0002017C */

loc_001CF294: ;
    MEM8(eax + 0x40) = 1;
    SET_LO8(eax, MEM8(esi + 0x2A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi + 0x48) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_001CF2AA; /* je: equal / zero */

loc_001CF2A6: ;
    MEM8(esi + 0x2A) = 0;

loc_001CF2AA: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_001CF2F0; /* jge: greater or equal (signed >=) */

loc_001CF2B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001CF2F5; /* je: equal / zero */

loc_001CF2B6: ;
    ecx = MEM32(esi + 0x18C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    edx = MEM32(ecx + 0x20);
    ecx = edx + eax + 0xC;

loc_001CF2C6: ;
    eax = MEM32(esp + 0x14);
    esi = MEM32(esi + 0x198);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x001CF2E7u); RECOMP_ABI_CALL(0x0001C67Bu, sub_0001C67B); /* call 0x0001C67B */

loc_001CF2E7: ;
    eax = 1;

loc_001CF2EC: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_001CF2F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001CF2B6; /* jne: not equal / not zero */

loc_001CF2F5: ;
    ecx = 0x8C42F0;
    goto loc_001CF2C6;

}
