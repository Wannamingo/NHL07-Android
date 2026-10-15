/**
 * nhl_07_recomp - Recompiled code chunk 176
 * Functions: 250 (0x00390EF0 - 0x0039AB30)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00390EF0
 * Original: 0x00390EF0 - 0x00390F45 (85 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00390EF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00390EF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x340);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00390F3E; /* jge: greater or equal (signed >=) */

loc_00390EFF: ;
    PUSH32(esp, 0x200);
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00390F0Eu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00390F0E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00390F28; /* je: equal / zero */

loc_00390F15: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x00390F26u); RECOMP_ABI_CALL(0x0002F442u, sub_0002F442); /* call 0x0002F442 */

loc_00390F26: ;
    goto loc_00390F2A;

loc_00390F28: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00390F2A: ;
    MEM32(esi + edi * 4 + 0x334) = eax;
    MEM32(esi + 0x340) = MEM32(esi + 0x340) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x340)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00390F3E: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00390F60
 * Original: 0x00390F60 - 0x003910EF (399 bytes, 120 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00390F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00390F60: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    ebp = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00391060; /* jle: less or equal (signed <=) */

loc_00390F7F: ;
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);

loc_00390F84: ;
    eax = MEM32(esi);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x11C);
    MEM32(esp + 0x18) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00390F9Cu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00390F9C: ;
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00390FDD; /* je: equal / zero */

loc_00390FA5: ;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = ebx;
    PUSH32(esp, 0xFF);
    MEM32(edi) = 0x833098;
    ecx = edi + 0xC;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    MEM32(edi + 0x10C) = ebx;
    MEM32(edi + 0x114) = ebx;
    MEM32(edi + 0x110) = ebx;
    PUSH32(esp, 0x00390FD2u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00390FD2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x118) = ebx;
    goto loc_00390FDF;

loc_00390FDD: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00390FDF: ;
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0039101F; /* jbe: below or equal (unsigned <=) */

loc_00390FEC: ;
    MEM32(esp + 0x10) = eax;

loc_00390FF0: ;
    SET_LO8(edx, MEM8(esi));
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esp + 0x20) = LO8(eax);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, edi);
    MEM8(esp + 0x1C) = LO8(edx);
    edx = MEM32(esp + 0x1C);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x00391012u); RECOMP_ABI_CALL(0x0002951Au, sub_0002951A); /* call 0x0002951A */

loc_00391012: ;
    eax = ZX8(MEM8(esp + 0x20));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = MEM32(esp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00390FF0; /* jne: not equal / not zero */

loc_0039101F: ;
    ecx = MEM32(ebp + 0x10C);
    MEM32(edi + 8) = ecx;
    MEM32(edi + 4) = ebx;
    MEM32(ebp + 0x10C) = edi;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039103D; /* je: equal / zero */

loc_00391038: ;
    MEM32(eax + 4) = edi;
    goto loc_00391043;

loc_0039103D: ;
    MEM32(ebp + 0x108) = edi;

loc_00391043: ;
    ecx = MEM32(ebp + 0x104);
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0x104) = ecx;
    MEM32(esp + 0x14) = eax;
    if ((_fa != 0)) goto loc_00390F84; /* jne: not equal / not zero */

loc_0039105F: ;
    POP32(esp, edi);

loc_00391060: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x11C);
    PUSH32(esp, 0x0039106Fu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_0039106F: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003910B4; /* je: equal / zero */

loc_00391078: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0xFF);
    MEM32(esi) = 0x833098;
    edx = esi + 0xC;
    PUSH32(esp, 0x8330FC);
    PUSH32(esp, edx);
    MEM32(esi + 0x10C) = ebx;
    MEM32(esi + 0x114) = ebx;
    MEM32(esi + 0x110) = ebx;
    PUSH32(esp, 0x003910A9u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003910A9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x118) = ebx;
    goto loc_003910B6;

loc_003910B4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003910B6: ;
    eax = MEM32(ebp + 0x10C);
    MEM32(esi + 8) = eax;
    MEM32(esi + 4) = ebx;
    MEM32(ebp + 0x10C) = esi;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003910D4; /* je: equal / zero */

loc_003910CF: ;
    MEM32(eax + 4) = esi;
    goto loc_003910DA;

loc_003910D4: ;
    MEM32(ebp + 0x108) = esi;

loc_003910DA: ;
    MEM32(ebp + 0x104) = MEM32(ebp + 0x104) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(ebp + 0x110) = ebx;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00391160
 * Original: 0x00391160 - 0x0039119E (62 bytes, 19 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391160: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    ecx = esp + 8;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0039117Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0039117D: ;
    eax = MEM32(esp + 0x114);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00391194u); RECOMP_ABI_CALL(0x000185B2u, sub_000185B2); /* call 0x000185B2 */

loc_00391194: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003911B0
 * Original: 0x003911B0 - 0x00391384 (468 bytes, 162 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003911B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003911B0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x2C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x003911D1u); RECOMP_ABI_CALL(0x0059821Du, sub_0059821D); /* call 0x0059821D */

loc_003911D1: ;
    ebp = 4;
    PUSH32(esp, edi);
    ebx = eax;
    esi = edi + 0x10;
    MEM32(esp + 0x3C) = ebp;
    PUSH32(esp, 0x003911E5u); RECOMP_ABI_CALL(0x005981E1u, sub_005981E1); /* call 0x005981E1 */

loc_003911E5: ;
    ecx = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x003911F5u); RECOMP_ABI_CALL(0x00598179u, sub_00598179); /* call 0x00598179 */

loc_003911F5: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0039121C; /* je: equal / zero */

loc_003911FB: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00391228; /* jne: not equal / not zero */

loc_00391200: ;
    ebp = (uint32_t)(int32_t)SMEM8(edi + 3);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x30;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 4 (32-bit) */
    edx = ebp;
    MEM32(esp + 0x2C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_0039122C; /* jle: less or equal (signed <=) */

loc_00391212: ;
    MEM32(esp + 0x2C) = 4;
    goto loc_00391228;

loc_0039121C: ;
    ebp = 3;
    esi = edi + 6;
    MEM32(esp + 0x2C) = ebp;

loc_00391228: ;
    edx = MEM32(esp + 0x2C);

loc_0039122C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039137A; /* jae: above or equal (unsigned >=) */

loc_00391236: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = eax;
    goto loc_00391247;

loc_00391243: ;
    edx = MEM32(esp + 0x2C);

loc_00391247: ;
    eax = edx + ebp;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = eax + esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x20) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00391287; /* jle: less or equal (signed <=) */

loc_0039125D: ;
    /* nop */

loc_00391260: ;
    ebx = MEM32(esp + 0x20);
    eax = ZX8(MEM8(ecx + esi));
    { uint32_t _c = (uint32_t)(8) & 31u; if (_c && _c < 32u) { edi = (edi << _c) | (ebx >> (32 - _c)); _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = edx | edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    MEM32(esp + 0x20) = eax;
    edi = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00391260; /* jl: less (signed <) */

loc_0039127F: ;
    ebx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x2C);

loc_00391287: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391292; /* jne: not equal / not zero */

loc_0039128C: ;
    edi = ZX8(MEM8(esi + ebp));
    goto loc_003912E5;

loc_00391292: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003912A3; /* jne: not equal / not zero */

loc_00391297: ;
    ecx = ZX8(MEM8(esi + ebp + 1));
    SET_HI8(ecx, MEM8(esi + ebp));
    edi = ecx;
    goto loc_003912E5;

loc_003912A3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003912BE; /* jne: not equal / not zero */

loc_003912A8: ;
    edx = ZX8(MEM8(esi + ebp + 1));
    SET_HI8(edx, MEM8(esi + ebp));
    eax = ZX8(MEM8(esi + ebp + 2));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edx;
    goto loc_003912E5;

loc_003912BE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003912E3; /* jne: not equal / not zero */

loc_003912C3: ;
    ecx = ZX8(MEM8(esi + ebp + 1));
    SET_HI8(ecx, MEM8(esi + ebp));
    edx = ZX8(MEM8(esi + ebp + 2));
    eax = ZX8(MEM8(esi + ebp + 3));
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(8) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = ecx;
    goto loc_003912E5;

loc_003912E3: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003912E5: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x14);
    PUSH32(esp, 0x003912EEu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003912EE: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391346; /* je: equal / zero */

loc_003912F7: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) | 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebx;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    ecx = eax + 1;
    edi = edi;

loc_00391310: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391310; /* jne: not equal / not zero */

loc_00391317: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00391322u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00391322: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = eax;
    ecx = ebx;
    /* nop */

loc_00391330: ;
    SET_LO8(edx, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391330; /* jne: not equal / not zero */

loc_0039133A: ;
    ecx = MEM32(esp + 0x20);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x10) = edi;
    goto loc_00391348;

loc_00391346: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00391348: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00391352u); RECOMP_ABI_CALL(0x00025B09u, sub_00025B09); /* call 0x00025B09 */

loc_00391352: ;
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0039135E; /* je: equal / zero */

loc_00391359: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0039135E: ;
    eax = ebx;
    edx = eax + 1;

loc_00391363: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391363; /* jne: not equal / not zero */

loc_0039136A: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax + ebx + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00391243; /* jb: below (unsigned <) */

loc_0039137A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00391400
 * Original: 0x00391400 - 0x0039144A (74 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391400(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391400: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x8330A4;
    PUSH32(esp, 0x00391411u); RECOMP_ABI_CALL(0x00024F4Cu, sub_00024F4C); /* call 0x00024F4C */

loc_00391411: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039142B; /* je: equal / zero */

loc_00391419: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00391421u); RECOMP_ABI_CALL(0x00598CBFu, sub_00598CBF); /* call 0x00598CBF */

loc_00391421: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = 0xFFFFFFFFu;

loc_0039142B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    MEM32(esi) = 0x829E64;
    if (TEST_Z(_fa, _fb)) goto loc_00391444; /* je: equal / zero */

loc_00391438: ;
    ecx = MEM32(0x902558);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x00391444u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00391441u); } /* indirect call */
    }

loc_00391444: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00391460
 * Original: 0x00391460 - 0x0039157F (287 bytes, 104 insns)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391460(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00391460: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x114);
    PUSH32(esp, esi);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) ebp = MEM32(0x902558); /* cmove */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x114);
    edx = esp + 0x10;
    ebx = ecx;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00391490;

    /* nop */

loc_00391490: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391490; /* jne: not equal / not zero */

loc_0039149A: ;
    eax = esp + 0x10;
    PUSH32(esp, 0x2F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003914A6u); RECOMP_ABI_CALL(0x005CC6A0u, sub_005CC6A0); /* call 0x005CC6A0 */

loc_003914A6: ;
    esi = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x2E);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003914B1u); RECOMP_ABI_CALL(0x005CC3B0u, sub_005CC3B0); /* call 0x005CC3B0 */

loc_003914B1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(eax) = 0x68622E;
    PUSH32(esp, 0x003914C2u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003914C2: ;
    ecx = eax;
    PUSH32(esp, 0x003914C9u); RECOMP_ABI_CALL(0x00025983u, sub_00025983); /* call 0x00025983 */

loc_003914C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391501; /* je: equal / zero */

loc_003914CD: ;
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, 0x64);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003914E2u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003914E2: ;
    ecx = eax;
    PUSH32(esp, 0x003914E9u); RECOMP_ABI_CALL(0x0002DBE2u, sub_0002DBE2); /* call 0x0002DBE2 */

loc_003914E9: ;
    PUSH32(esp, 1);
    edx = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    esi = eax;
    PUSH32(esp, 0x003914F8u); RECOMP_ABI_CALL(0x0002C0DFu, sub_0002C0DF); /* call 0x0002C0DF */

loc_003914F8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391572; /* je: equal / zero */

loc_003914FF: ;
    goto loc_0039152C;

loc_00391501: ;
    PUSH32(esp, 1);
    eax = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0039150Eu); RECOMP_ABI_CALL(0x0002C0DFu, sub_0002C0DF); /* call 0x0002C0DF */

loc_0039150E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391572; /* je: equal / zero */

loc_00391515: ;
    ecx = MEM32(esp + 0x118);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00391527u); RECOMP_ABI_CALL(0x00598B33u, sub_00598B33); /* call 0x00598B33 */

loc_00391527: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_0039152C: ;
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x00391534u); RECOMP_ABI_CALL(0x000314F4u, sub_000314F4); /* call 0x000314F4 */

loc_00391534: ;
    PUSH32(esp, 0x00391539u); RECOMP_ABI_CALL(0x000188FAu, sub_000188FA); /* call 0x000188FA */

loc_00391539: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00391541u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0039153Eu); } /* indirect call */
    }

loc_00391541: ;
    PUSH32(esp, 0x64);
    eax = esp + 0x14;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0039154Fu); RECOMP_ABI_CALL(0x00598C36u, sub_00598C36); /* call 0x00598C36 */

loc_0039154F: ;
    MEM32(ebx + 4) = eax;
    eax = MEM32(esp + 0x12C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391572; /* je: equal / zero */

loc_00391560: ;
    ecx = MEM32(esp + 0x124);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0039156Fu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0039156Du); } /* indirect call */
    }

loc_0039156F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00391572: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003915D0
 * Original: 0x003915D0 - 0x00391619 (73 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003915D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003915D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp) = eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039160C; /* je: equal / zero */

loc_003915E2: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    edx = esp + 8;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003915F6u); RECOMP_ABI_CALL(0x00021658u, sub_00021658); /* call 0x00021658 */

loc_003915F6: ;
    SET_LO8(ecx, MEM8(esp + 0xC));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039160C; /* je: equal / zero */

loc_003915FE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0039160C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00391630
 * Original: 0x00391630 - 0x0039167A (74 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391630: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp) = eax;
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391671; /* je: equal / zero */

loc_00391646: ;
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0039165Au); RECOMP_ABI_CALL(0x00021658u, sub_00021658); /* call 0x00021658 */

loc_0039165A: ;
    SET_LO8(ecx, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391671; /* je: equal / zero */

loc_00391662: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00391671; /* je: equal / zero */

loc_00391667: ;
    eax = MEM32(eax + 4);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00391671: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00391690
 * Original: 0x00391690 - 0x00391755 (197 bytes, 83 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00391690: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ebx + 8;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), esi (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_003916CD; /* je: equal / zero */

loc_003916AC: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esp + 0xF;
    PUSH32(esp, eax);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003916C0u); RECOMP_ABI_CALL(0x00021658u, sub_00021658); /* call 0x00021658 */

loc_003916C0: ;
    SET_LO8(ecx, MEM8(esp + 0xB));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003916CD; /* je: equal / zero */

loc_003916C8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003916CF;

loc_003916CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003916CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039173F; /* je: equal / zero */

loc_003916D3: ;
    esi = MEM32(eax + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    PUSH32(esp, 0x003916E3u); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003916E3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = MEM32(esp + 0x40);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_00391713; /* jne: not equal / not zero */

loc_003916EE: ;
    ecx = MEM32(esp + 0x30);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00391711u); RECOMP_ABI_CALL(0x0002D01Bu, sub_0002D01B); /* call 0x0002D01B */

loc_00391711: ;
    goto loc_0039173D;

loc_00391713: ;
    edx = MEM32(esp + 0x30);
    ecx = MEM32(esp + 0x34);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x4C);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    edx = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00391737u); RECOMP_ABI_CALL(0x0002D01Bu, sub_0002D01B); /* call 0x0002D01B */

loc_00391737: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = esi;

loc_0039173D: ;
    POP32(esp, edi);
    POP32(esp, ebp);

loc_0039173F: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391749; /* je: equal / zero */

loc_00391747: ;
    MEM32(eax) = esi;

loc_00391749: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00391790
 * Original: 0x00391790 - 0x00391843 (179 bytes, 77 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00391790: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = ebx + 8;
    MEM32(esp + 8) = eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039183A; /* je: equal / zero */

loc_003917AA: ;
    edx = esp + 0xC;
    PUSH32(esp, edx);
    eax = esp + 0xB;
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003917BEu); RECOMP_ABI_CALL(0x00021658u, sub_00021658); /* call 0x00021658 */

loc_003917BE: ;
    SET_LO8(ecx, MEM8(esp + 7));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039183A; /* je: equal / zero */

loc_003917C6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_0039183A; /* je: equal / zero */

loc_003917CB: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    PUSH32(esp, 0x003917DCu); RECOMP_ABI_CALL(0x0002221Fu, sub_0002221F); /* call 0x0002221F */

loc_003917DC: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    ecx = MEM32(esp + 0x38);
    PUSH32(esp, ecx);
    edx = esp + 0x30;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x2C);
    ecx = esp + 0x30;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    if (CMP_NE(_fa, _fb)) goto loc_00391816; /* jne: not equal / not zero */

loc_003917F6: ;
    ecx = MEM32(esp + 0x34);
    edx = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0039180Au); RECOMP_ABI_CALL(0x0002D01Bu, sub_0002D01B); /* call 0x0002D01B */

loc_0039180A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_00391816: ;
    ecx = MEM32(esp + 0x48);
    edx = MEM32(esp + 0x34);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    ecx = MEM32(eax);
    PUSH32(esp, 0x0039182Eu); RECOMP_ABI_CALL(0x0002D01Bu, sub_0002D01B); /* call 0x0002D01B */

loc_0039182E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

loc_0039183A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00391870
 * Original: 0x00391870 - 0x003918A1 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391870: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    MEM32(eax + -8) = MEM32(eax + -8) + 1;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi);
    edx = MEM32(ecx + -4);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x19) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00391892; /* jne: not equal / not zero */

loc_0039188B: ;
    ecx = esi;
    PUSH32(esp, 0x00391892u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391892: ;
    eax = MEM32(esi);
    MEM32(eax + -4) = MEM32(eax + -4) | 0x2000000;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003918B0
 * Original: 0x003918B0 - 0x00391908 (88 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003918B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003918B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391901; /* je: equal / zero */

loc_003918BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003918DD; /* je: equal / zero */

loc_003918C2: ;
    MEM32(eax + -8) = MEM32(eax + -8) - 1;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    ecx = MEM32(eax + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003918DD; /* jne: not equal / not zero */

loc_003918CE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003918D4u); RECOMP_ABI_CALL(0x0002B171u, sub_0002B171); /* call 0x0002B171 */

loc_003918D4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_003918DD: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    MEM32(eax + -8) = MEM32(eax + -8) + 1;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    ecx = MEM32(eax + -4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x19) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003918F8; /* jne: not equal / not zero */

loc_003918F1: ;
    ecx = esi;
    PUSH32(esp, 0x003918F8u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_003918F8: ;
    eax = MEM32(esi);
    MEM32(eax + -4) = MEM32(eax + -4) | 0x2000000;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00391901: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00391920
 * Original: 0x00391920 - 0x003919A1 (129 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00391920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391920: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + -12);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00391999; /* jbe: below or equal (unsigned <=) */

loc_00391933: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + -12);
    ecx = esi;
    PUSH32(esp, 0x00391940u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391940: ;
    eax = ebx + edi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00391979; /* jle: less or equal (signed <=) */

loc_00391948: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391959; /* jne: not equal / not zero */

loc_0039194E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00391954u); RECOMP_ABI_CALL(0x0002454Cu, sub_0002454C); /* call 0x0002454C */

loc_00391954: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00391977;

loc_00391959: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x0039196Du); RECOMP_ABI_CALL(0x00030DD8u, sub_00030DD8); /* call 0x00030DD8 */

loc_0039196D: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00391977: ;
    MEM32(esi) = eax;

loc_00391979: ;
    edx = MEM32(ebp);
    eax = MEM32(esi);
    ecx = edi + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0039198Bu); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_0039198B: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -12) = ecx;
    POP32(esp, ebx);

loc_00391999: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003919D0
 * Original: 0x003919D0 - 0x00391A73 (163 bytes, 71 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003919D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003919D0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    eax = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00391A6C; /* je: equal / zero */

loc_003919E2: ;
    _fa = (uint32_t)(MEM8(ebp)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003919F0; /* je: equal / zero */

loc_003919E8: ;
    SET_LO8(ecx, MEM8(eax + 1));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003919E8; /* jne: not equal / not zero */

loc_003919F0: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = eax;
    if ((_fa == 0)) goto loc_00391A64; /* je: equal / zero */

loc_003919F7: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + -12);
    ecx = esi;
    PUSH32(esp, 0x00391A04u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391A04: ;
    eax = edi + ebx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00391A3F; /* jle: less or equal (signed <=) */

loc_00391A0C: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391A1F; /* jne: not equal / not zero */

loc_00391A12: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00391A18u); RECOMP_ABI_CALL(0x0002454Cu, sub_0002454C); /* call 0x0002454C */

loc_00391A18: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    goto loc_00391A3F;

loc_00391A1F: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00391A33u); RECOMP_ABI_CALL(0x00030DD8u, sub_00030DD8); /* call 0x00030DD8 */

loc_00391A33: ;
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;

loc_00391A3F: ;
    ecx = MEM32(esi);
    eax = edi + 1;
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00391A4Eu); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_00391A4E: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(eax + -12) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00391A64: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_00391A6C: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00391AA0
 * Original: 0x00391AA0 - 0x00391B0A (106 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391AA0: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00391B03; /* je: equal / zero */

loc_00391AAC: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + -12);
    PUSH32(esp, 0x00391AB7u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391AB7: ;
    eax = edi + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00391AF1; /* jle: less or equal (signed <=) */

loc_00391ABE: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391AD1; /* jne: not equal / not zero */

loc_00391AC4: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00391ACAu); RECOMP_ABI_CALL(0x0002454Cu, sub_0002454C); /* call 0x0002454C */

loc_00391ACA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    goto loc_00391AF1;

loc_00391AD1: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00391AE5u); RECOMP_ABI_CALL(0x00030DD8u, sub_00030DD8); /* call 0x00030DD8 */

loc_00391AE5: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;

loc_00391AF1: ;
    eax = MEM32(esi);
    MEM8(edi + eax) = LO8(ebx);
    ecx = MEM32(esi);
    MEM8(ecx + edi + 1) = 0;
    eax = MEM32(esi);
    MEM32(eax + -12) = MEM32(eax + -12) + 1;
    _fa = (uint32_t)(MEM32(eax + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_00391B03: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00391B30
 * Original: 0x00391B30 - 0x00391B42 (18 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391B30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391B30: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00391B38u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391B38: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00391B50
 * Original: 0x00391B50 - 0x00391BF6 (166 bytes, 73 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00391B50: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    esi = MEM32(eax + -12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00391BF0; /* jae: above or equal (unsigned >=) */

loc_00391B66: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00391BA6; /* jae: above or equal (unsigned >=) */

loc_00391B6F: ;
    ecx = ebx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00391BA6; /* jae: above or equal (unsigned >=) */

loc_00391B76: ;
    ecx = edi;
    PUSH32(esp, 0x00391B7Du); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391B7D: ;
    edx = MEM32(edi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx + ebx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    ecx = eax + ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00391B92u); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_00391B92: ;
    edi = MEM32(edi);
    eax = MEM32(edi + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebp);
    MEM32(edi + -12) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00391BA6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391BDD; /* jne: not equal / not zero */

loc_00391BAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391BC5; /* je: equal / zero */

loc_00391BAE: ;
    MEM32(eax + -8) = MEM32(eax + -8) - 1;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(edi);
    ecx = MEM32(eax + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391BC5; /* jne: not equal / not zero */

loc_00391BBA: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00391BC0u); RECOMP_ABI_CALL(0x0002B171u, sub_0002B171); /* call 0x0002B171 */

loc_00391BC0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ebx;

loc_00391BC5: ;
    edx = MEM32(0x902564);
    MEM32(edi) = edx;
    edi = edx;
    eax = MEM32(edi + -8);
    POP32(esp, ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + -8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00391BDD: ;
    ecx = edi;
    PUSH32(esp, 0x00391BE4u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391BE4: ;
    eax = MEM32(edi);
    MEM8(ebx + eax) = 0;
    ecx = MEM32(edi);
    MEM32(ecx + -12) = ebx;
    POP32(esp, ebp);

loc_00391BF0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00391C20
 * Original: 0x00391C20 - 0x00391C70 (80 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391C20: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x00391C2Fu); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391C2F: ;
    eax = MEM32(edi);
    MEM32(eax + -4) = MEM32(eax + -4) & 0xFDFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edi);
    eax = MEM32(ecx + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00391C65; /* jae: above or equal (unsigned >=) */

loc_00391C41: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    eax = ecx + 1;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00391C50u); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_00391C50: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + -12) = ecx;
    eax = MEM32(edi);
    POP32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00391C65: ;
    esi = eax;
    eax = MEM32(edi);
    POP32(esp, edi);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00391C90
 * Original: 0x00391C90 - 0x00391CDA (74 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391C90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00391C98u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391C98: ;
    eax = MEM32(esp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00391CD6; /* jle: less or equal (signed <=) */

loc_00391CA1: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391CB6; /* jne: not equal / not zero */

loc_00391CA7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00391CADu); RECOMP_ABI_CALL(0x0002454Cu, sub_0002454C); /* call 0x0002454C */

loc_00391CAD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00391CB6: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x00391CCAu); RECOMP_ABI_CALL(0x00030DD8u, sub_00030DD8); /* call 0x00030DD8 */

loc_00391CCA: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;

loc_00391CD6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00391CF0
 * Original: 0x00391CF0 - 0x00391D05 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391CF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391CF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00391CF8u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391CF8: ;
    eax = MEM32(esi);
    MEM32(eax + -4) = MEM32(eax + -4) & 0xFDFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00391D10
 * Original: 0x00391D10 - 0x00391D2A (26 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391D10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391D10: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00391D18u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391D18: ;
    eax = MEM32(esi);
    MEM32(eax + -4) = MEM32(eax + -4) & 0xFDFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esi);
    eax = MEM32(esi + -12);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00391D30
 * Original: 0x00391D30 - 0x00391DBA (138 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391D30: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ecx = edi;
    PUSH32(esp, 0x00391D3Eu); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391D3E: ;
    eax = MEM32(esp + 0x14);
    edx = eax + 1;

loc_00391D45: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391D45; /* jne: not equal / not zero */

loc_00391D4C: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax * 4;

loc_00391D55: ;
    ecx = MEM32(edi);
    ebx = MEM32(ecx + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00391D96; /* jbe: below or equal (unsigned <=) */

loc_00391D5E: ;
    eax = ebx + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00391D96; /* jle: less or equal (signed <=) */

loc_00391D65: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391D76; /* jne: not equal / not zero */

loc_00391D69: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00391D6Fu); RECOMP_ABI_CALL(0x0002454Cu, sub_0002454C); /* call 0x0002454C */

loc_00391D6F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = eax;
    goto loc_00391D96;

loc_00391D76: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, 0x00391D8Au); RECOMP_ABI_CALL(0x00030DD8u, sub_00030DD8); /* call 0x00030DD8 */

loc_00391D8A: ;
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi) = ecx;

loc_00391D96: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(edi);
    edx = esp + 0x18;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00391DABu); RECOMP_ABI_CALL(0x005CCF46u, sub_005CCF46); /* call 0x005CCF46 */

loc_00391DAB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00391DB6; /* jge: greater or equal (signed >=) */

loc_00391DB2: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + esi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00391D55;

loc_00391DB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00391DE0
 * Original: 0x00391DE0 - 0x00391EBD (221 bytes, 92 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391DE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00391DE0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    ebp = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00391EB6; /* je: equal / zero */

loc_00391DF2: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00391DFF; /* je: equal / zero */

loc_00391DF7: ;
    SET_LO8(ecx, MEM8(ebp + 1));
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391DF7; /* jne: not equal / not zero */

loc_00391DFF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - eax;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00391EB6; /* jbe: below or equal (unsigned <=) */

loc_00391E09: ;
    ecx = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ecx + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00391EB4; /* ja: above (unsigned >) */

loc_00391E1C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391E63; /* jne: not equal / not zero */

loc_00391E20: ;
    esi = ebp + 1;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00391E29u); RECOMP_ABI_CALL(0x0002454Cu, sub_0002454C); /* call 0x0002454C */

loc_00391E29: ;
    ecx = esi;
    esi = MEM32(esp + 0x1C);
    ebp = eax;
    eax = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
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
    ecx = eax;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x00391E51u); RECOMP_ABI_CALL(0x00025F37u, sub_00025F37); /* call 0x00025F37 */

loc_00391E51: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00391E57u); RECOMP_ABI_CALL(0x0002B171u, sub_0002B171); /* call 0x0002B171 */

loc_00391E57: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00391E63: ;
    ecx = ebx;
    PUSH32(esp, 0x00391E6Au); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391E6A: ;
    PUSH32(esp, 0);
    edx = edi + ebp + 1;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00391E77u); RECOMP_ABI_CALL(0x000121DAu, sub_000121DA); /* call 0x000121DA */

loc_00391E77: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00391E8Bu); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_00391E8B: ;
    edi = MEM32(ebx);
    edx = MEM32(esp + 0x2C);
    esi = MEM32(esp + 0x30);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    edx = ecx;
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
    ecx = edx;
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
    eax = MEM32(ebx);
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -12) = ecx;

loc_00391EB4: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00391EB6: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00391F00
 * Original: 0x00391F00 - 0x00391F69 (105 bytes, 49 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00391F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391F00: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00391F62; /* jbe: below or equal (unsigned <=) */

loc_00391F0C: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + -12);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00391F59; /* ja: above (unsigned >) */

loc_00391F1B: ;
    PUSH32(esp, 0x00391F20u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391F20: ;
    PUSH32(esp, 0);
    ecx = edi + ebp + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00391F2Du); RECOMP_ABI_CALL(0x000121DAu, sub_000121DA); /* call 0x000121DA */

loc_00391F2D: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edx + ebx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00391F3Fu); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_00391F3F: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -12) = ecx;
    SET_LO8(eax, MEM8(esp + 0x1C));

loc_00391F50: ;
    ecx = MEM32(esi);
    MEM8(ebx + ecx) = LO8(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00391F50; /* jne: not equal / not zero */

loc_00391F59: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_00391F62: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00391F90
 * Original: 0x00391F90 - 0x00392004 (116 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00391F90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00391F90: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_00391FFD; /* jbe: below or equal (unsigned <=) */

loc_00391F9C: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + -12);
    PUSH32(esp, 0x00391FA7u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00391FA7: ;
    eax = edi + ebx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00391FE2; /* jle: less or equal (signed <=) */

loc_00391FAF: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00391FC2; /* jne: not equal / not zero */

loc_00391FB5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00391FBBu); RECOMP_ABI_CALL(0x0002454Cu, sub_0002454C); /* call 0x0002454C */

loc_00391FBB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    goto loc_00391FE2;

loc_00391FC2: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00391FD6u); RECOMP_ABI_CALL(0x00030DD8u, sub_00030DD8); /* call 0x00030DD8 */

loc_00391FD6: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;

loc_00391FE2: ;
    SET_LO8(ecx, MEM8(esp + 0x14));
    eax = ebx;

loc_00391FE8: ;
    edx = MEM32(esi);
    MEM8(edi + edx) = LO8(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00391FE8; /* jne: not equal / not zero */

loc_00391FF1: ;
    eax = MEM32(esi);
    MEM8(edi + eax) = 0;
    ecx = MEM32(esi);
    MEM32(ecx + -12) = edi;
    POP32(esp, edi);

loc_00391FFD: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00392030
 * Original: 0x00392030 - 0x00392062 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392030: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00392038u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00392038: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392060; /* je: equal / zero */

loc_0039203F: ;
    /* nop */

loc_00392040: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00392058; /* jge: greater or equal (signed >=) */

loc_00392046: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00392058; /* jle: less or equal (signed <=) */

loc_0039204A: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00392053u); RECOMP_ABI_CALL(0x005CCFA4u, sub_005CCFA4); /* call 0x005CCFA4 */

loc_00392053: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = LO8(eax);

loc_00392058: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392040; /* jne: not equal / not zero */

loc_00392060: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00392070
 * Original: 0x00392070 - 0x003920A2 (50 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392070(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392070: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00392078u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00392078: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003920A0; /* je: equal / zero */

loc_0039207F: ;
    /* nop */

loc_00392080: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x7F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x7F (8-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00392098; /* jge: greater or equal (signed >=) */

loc_00392086: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00392098; /* jle: less or equal (signed <=) */

loc_0039208A: ;
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00392093u); RECOMP_ABI_CALL(0x005CC667u, sub_005CC667); /* call 0x005CC667 */

loc_00392093: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = LO8(eax);

loc_00392098: ;
    SET_LO8(eax, MEM8(esi + 1));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392080; /* jne: not equal / not zero */

loc_003920A0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003920B0
 * Original: 0x003920B0 - 0x003920DF (47 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003920B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003920B0: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    MEM32(eax + -8) = MEM32(eax + -8) + 1;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi);
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + -4), 0x2000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003920D0; /* jne: not equal / not zero */

loc_003920C9: ;
    ecx = esi;
    PUSH32(esp, 0x003920D0u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_003920D0: ;
    eax = MEM32(esi);
    MEM32(eax + -4) = MEM32(eax + -4) | 0x2000000;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003920F0
 * Original: 0x003920F0 - 0x00392105 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003920F0(void)
{

loc_003920F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003920F8u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_003920F8: ;
    eax = MEM32(esi);
    ecx = MEM32(esp + 8);
    eax = eax + ecx * 2;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00392110
 * Original: 0x00392110 - 0x00392165 (85 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392110: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039215E; /* je: equal / zero */

loc_0039211E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039213D; /* je: equal / zero */

loc_00392122: ;
    MEM32(eax + -8) = MEM32(eax + -8) - 1;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    ecx = MEM32(eax + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039213D; /* jne: not equal / not zero */

loc_0039212E: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00392134u); RECOMP_ABI_CALL(0x0001B0BEu, sub_0001B0BE); /* call 0x0001B0BE */

loc_00392134: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 0;

loc_0039213D: ;
    eax = MEM32(edi);
    MEM32(esi) = eax;
    MEM32(eax + -8) = MEM32(eax + -8) + 1;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    ecx = MEM32(eax + -4);
    edi = 0x2000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00392159; /* jne: not equal / not zero */

loc_00392152: ;
    ecx = esi;
    PUSH32(esp, 0x00392159u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_00392159: ;
    eax = MEM32(esi);
    MEM32(eax + -4) = MEM32(eax + -4) | edi;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0039215E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00392180
 * Original: 0x00392180 - 0x00392203 (131 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00392180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392180: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + -12);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_003921FB; /* jle: less or equal (signed <=) */

loc_00392193: ;
    ecx = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx + -12);
    ecx = esi;
    PUSH32(esp, 0x003921A0u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_003921A0: ;
    eax = ebx + edi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003921D9; /* jle: less or equal (signed <=) */

loc_003921A8: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003921B9; /* jne: not equal / not zero */

loc_003921AE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003921B4u); RECOMP_ABI_CALL(0x000370B6u, sub_000370B6); /* call 0x000370B6 */

loc_003921B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003921D7;

loc_003921B9: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = esp + 0x1C;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, 0x003921CDu); RECOMP_ABI_CALL(0x00011A46u, sub_00011A46); /* call 0x00011A46 */

loc_003921CD: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003921D7: ;
    MEM32(esi) = eax;

loc_003921D9: ;
    edx = MEM32(ebp);
    eax = MEM32(esi);
    ecx = edi + edi + 2;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax + ebx * 2;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003921EDu); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_003921ED: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -12) = ecx;
    POP32(esp, ebx);

loc_003921FB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00392230
 * Original: 0x00392230 - 0x003922C4 (148 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00392230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392230: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp), 0 (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    eax = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0039224B; /* je: equal / zero */

loc_00392242: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392242; /* jne: not equal / not zero */

loc_0039224B: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003922BC; /* jle: less or equal (signed <=) */

loc_00392255: ;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + -12);
    ecx = esi;
    PUSH32(esp, 0x00392262u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_00392262: ;
    eax = ebx + edi + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0039229D; /* jle: less or equal (signed <=) */

loc_0039226A: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039227D; /* jne: not equal / not zero */

loc_00392270: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00392276u); RECOMP_ABI_CALL(0x000370B6u, sub_000370B6); /* call 0x000370B6 */

loc_00392276: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    goto loc_0039229D;

loc_0039227D: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00392291u); RECOMP_ABI_CALL(0x00011A46u, sub_00011A46); /* call 0x00011A46 */

loc_00392291: ;
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;

loc_0039229D: ;
    ecx = MEM32(esi);
    eax = edi + edi + 2;
    PUSH32(esp, eax);
    edx = ecx + ebx * 2;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003922AEu); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_003922AE: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -12) = ecx;
    POP32(esp, ebx);

loc_003922BC: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003922F0
 * Original: 0x003922F0 - 0x0039235F (111 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003922F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003922F0: ;
    PUSH32(esp, ebx);
    SET_LO16(ebx, MEM16(esp + 8));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0 (16-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00392358; /* je: equal / zero */

loc_003922FE: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + -12);
    PUSH32(esp, 0x00392309u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_00392309: ;
    eax = edi + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00392343; /* jle: less or equal (signed <=) */

loc_00392310: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392323; /* jne: not equal / not zero */

loc_00392316: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0039231Cu); RECOMP_ABI_CALL(0x000370B6u, sub_000370B6); /* call 0x000370B6 */

loc_0039231C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    goto loc_00392343;

loc_00392323: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00392337u); RECOMP_ABI_CALL(0x00011A46u, sub_00011A46); /* call 0x00011A46 */

loc_00392337: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;

loc_00392343: ;
    eax = MEM32(esi);
    MEM16(eax + edi * 2) = LO16(ebx);
    ecx = MEM32(esi);
    MEM16(ecx + edi * 2 + 2) = 0;
    eax = MEM32(esi);
    MEM32(eax + -12) = MEM32(eax + -12) + 1;
    _fa = (uint32_t)(MEM32(eax + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);

loc_00392358: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00392380
 * Original: 0x00392380 - 0x00392433 (179 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00392380: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + -12);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) ebp = edi; /* cmovl */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0039242C; /* jge: greater or equal (signed >=) */

loc_003923A0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003923E1; /* jge: greater or equal (signed >=) */

loc_003923A4: ;
    ecx = ebx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003923E1; /* jge: greater or equal (signed >=) */

loc_003923AB: ;
    ecx = esi;
    PUSH32(esp, 0x003923B2u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_003923B2: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi + edi + 2;
    PUSH32(esp, ecx);
    ecx = ebx + ebp;
    edx = eax + ecx * 2;
    PUSH32(esp, edx);
    eax = eax + ebx * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003923CDu); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_003923CD: ;
    esi = MEM32(esi);
    eax = MEM32(esi + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(esi + -12) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003923E1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392418; /* jne: not equal / not zero */

loc_003923E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392400; /* je: equal / zero */

loc_003923E9: ;
    MEM32(eax + -8) = MEM32(eax + -8) - 1;
    _fa = (uint32_t)(MEM32(eax + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    ecx = MEM32(eax + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392400; /* jne: not equal / not zero */

loc_003923F5: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003923FBu); RECOMP_ABI_CALL(0x0001B0BEu, sub_0001B0BE); /* call 0x0001B0BE */

loc_003923FB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebx;

loc_00392400: ;
    ecx = MEM32(0x902570);
    MEM32(esi) = ecx;
    esi = ecx;
    eax = MEM32(esi + -8);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + -8) = eax;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00392418: ;
    ecx = esi;
    PUSH32(esp, 0x0039241Fu); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_0039241F: ;
    edx = MEM32(esi);
    MEM16(edx + ebx * 2) = 0;
    eax = MEM32(esi);
    MEM32(eax + -12) = ebx;

loc_0039242C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00392460
 * Original: 0x00392460 - 0x003924B7 (87 bytes, 37 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392460: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(edi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, 0x00392471u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_00392471: ;
    eax = MEM32(edi);
    MEM32(eax + -4) = MEM32(eax + -4) & 0xFDFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(edi);
    eax = MEM32(ecx + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003924AB; /* jge: greater or equal (signed >=) */

loc_00392483: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ecx + esi * 2;
    PUSH32(esp, eax);
    eax = ecx + 2;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00392495u); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_00392495: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + -12) = ecx;
    ecx = MEM32(edi);
    POP32(esp, edi);
    eax = ecx + esi * 2;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003924AB: ;
    ecx = MEM32(edi);
    esi = eax;
    POP32(esp, edi);
    eax = ecx + esi * 2;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003924D0
 * Original: 0x003924D0 - 0x0039251A (74 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003924D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003924D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003924D8u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_003924D8: ;
    eax = MEM32(esp + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00392516; /* jle: less or equal (signed <=) */

loc_003924E1: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003924F6; /* jne: not equal / not zero */

loc_003924E7: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003924EDu); RECOMP_ABI_CALL(0x000370B6u, sub_000370B6); /* call 0x000370B6 */

loc_003924ED: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003924F6: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    eax = esp + 0x10;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x0039250Au); RECOMP_ABI_CALL(0x00011A46u, sub_00011A46); /* call 0x00011A46 */

loc_0039250A: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;

loc_00392516: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00392530
 * Original: 0x00392530 - 0x00392545 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392530: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00392538u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_00392538: ;
    eax = MEM32(esi);
    MEM32(eax + -4) = MEM32(eax + -4) & 0xFDFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00392550
 * Original: 0x00392550 - 0x0039256B (27 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392550(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392550: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00392558u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_00392558: ;
    eax = MEM32(esi);
    MEM32(eax + -4) = MEM32(eax + -4) & 0xFDFFFFFFu;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esi);
    eax = MEM32(esi + -12);
    eax = esi + eax * 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00392580
 * Original: 0x00392580 - 0x00392672 (242 bytes, 96 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392580(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00392580: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0 (16-bit) */
    PUSH32(esp, ebp);
    ebp = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0039259B; /* je: equal / zero */

loc_00392591: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ebp)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392591; /* jne: not equal / not zero */

loc_0039259B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - ecx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = (uint32_t)(((int32_t)(int32_t)(ebp)) >> ((1) & 31u));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0039266A; /* jle: less or equal (signed <=) */

loc_003925A7: ;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(eax + -12);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00392668; /* jg: greater (signed >) */

loc_003925BA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039260A; /* jne: not equal / not zero */

loc_003925BE: ;
    eax = ebp + 1;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003925C7u); RECOMP_ABI_CALL(0x000370B6u, sub_000370B6); /* call 0x000370B6 */

loc_003925C7: ;
    esi = MEM32(esp + 0x20);
    ecx = ebp + ebp + 2;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = eax;
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
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x1C);
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
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003925F3u); RECOMP_ABI_CALL(0x0002E5C9u, sub_0002E5C9); /* call 0x0002E5C9 */

loc_003925F3: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003925FDu); RECOMP_ABI_CALL(0x0001B0BEu, sub_0001B0BE); /* call 0x0001B0BE */

loc_003925FD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_0039260A: ;
    ecx = ebx;
    PUSH32(esp, 0x00392611u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_00392611: ;
    PUSH32(esp, 0);
    edx = edi + ebp + 1;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0039261Eu); RECOMP_ABI_CALL(0x0002CBCAu, sub_0002CBCA); /* call 0x0002CBCA */

loc_0039261E: ;
    eax = MEM32(ebx);
    ecx = esi + esi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = ecx;
    edx = edi + edi + 2;
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi + ebp;
    edx = eax + ecx * 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0039263Du); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_0039263D: ;
    edi = MEM32(ebx);
    eax = MEM32(esp + 0x30);
    esi = MEM32(esp + 0x34);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + ebp;
    eax = ecx;
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
    eax = MEM32(ebx);
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -12) = ecx;

loc_00392668: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_0039266A: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003926B0
 * Original: 0x003926B0 - 0x0039272E (126 bytes, 53 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003926B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003926B0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00392727; /* jle: less or equal (signed <=) */

loc_003926BC: ;
    eax = MEM32(esi);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(eax + -12);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0039271E; /* jg: greater (signed >) */

loc_003926CB: ;
    PUSH32(esp, 0x003926D0u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_003926D0: ;
    PUSH32(esp, 0);
    ecx = edi + ebx + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003926DDu); RECOMP_ABI_CALL(0x0002CBCAu, sub_0002CBCA); /* call 0x0002CBCA */

loc_003926DD: ;
    eax = MEM32(esi);
    ecx = ebp + ebp;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi + edi + 2;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + ebx;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = eax + ebp * 2;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003926FCu); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_003926FC: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -12) = ecx;
    eax = MEM32(esp + 0x18);
    SET_LO16(ecx, MEM16(esp + 0x1C));

loc_00392712: ;
    edx = MEM32(esi);
    MEM16(eax + edx) = LO16(ecx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00392712; /* jne: not equal / not zero */

loc_0039271E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_00392727: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00392750
 * Original: 0x00392750 - 0x003927CF (127 bytes, 49 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392750(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392750: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_003927C8; /* jle: less or equal (signed <=) */

loc_0039275C: ;
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + -12);
    PUSH32(esp, 0x00392767u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_00392767: ;
    eax = edi + ebx + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003927A2; /* jle: less or equal (signed <=) */

loc_0039276F: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392782; /* jne: not equal / not zero */

loc_00392775: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0039277Bu); RECOMP_ABI_CALL(0x000370B6u, sub_000370B6); /* call 0x000370B6 */

loc_0039277B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    goto loc_003927A2;

loc_00392782: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00392796u); RECOMP_ABI_CALL(0x00011A46u, sub_00011A46); /* call 0x00011A46 */

loc_00392796: ;
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;

loc_003927A2: ;
    SET_LO16(ecx, MEM16(esp + 0x14));
    eax = ebx;
    /* nop */

loc_003927B0: ;
    edx = MEM32(esi);
    MEM16(edx + edi * 2) = LO16(ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003927B0; /* jne: not equal / not zero */

loc_003927BA: ;
    eax = MEM32(esi);
    MEM16(eax + edi * 2) = 0;
    ecx = MEM32(esi);
    MEM32(ecx + -12) = edi;
    POP32(esp, edi);

loc_003927C8: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003927F0
 * Original: 0x003927F0 - 0x00392828 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003927F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003927F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003927F8u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_003927F8: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392826; /* je: equal / zero */

loc_00392800: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7F (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039281D; /* jae: above or equal (unsigned >=) */

loc_00392809: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0039281D; /* jbe: below or equal (unsigned <=) */

loc_0039280E: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00392817u); RECOMP_ABI_CALL(0x005CCFA4u, sub_005CCFA4); /* call 0x005CCFA4 */

loc_00392817: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi) = LO16(eax);

loc_0039281D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392800; /* jne: not equal / not zero */

loc_00392826: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00392840
 * Original: 0x00392840 - 0x00392878 (56 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00392848u); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_00392848: ;
    esi = MEM32(esi);
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392876; /* je: equal / zero */

loc_00392850: ;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7F (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0039286D; /* jae: above or equal (unsigned >=) */

loc_00392859: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0039286D; /* jbe: below or equal (unsigned <=) */

loc_0039285E: ;
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00392867u); RECOMP_ABI_CALL(0x005CC667u, sub_005CC667); /* call 0x005CC667 */

loc_00392867: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi) = LO16(eax);

loc_0039286D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392850; /* jne: not equal / not zero */

loc_00392876: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00392890
 * Original: 0x00392890 - 0x003928FE (110 bytes, 31 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392890(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392890: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    PUSH32(esp, 0xFF);
    MEM32(esi) = 0x83309C;
    eax = esi + 4;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    MEM32(esi + 0x104) = 0;
    MEM32(esi + 0x10C) = 0;
    MEM32(esi + 0x108) = 0;
    PUSH32(esp, 0x003928CBu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003928CB: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x500);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003928D8u); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_003928D8: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003928E5u); RECOMP_ABI_CALL(0x00032F07u, sub_00032F07); /* call 0x00032F07 */

loc_003928E5: ;
    ecx = MEM32(0x8FC1D0);
    ecx = MEM32(ecx + 0xE8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003928F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003928F4u); } /* indirect call */
    }

loc_003928F7: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00392920
 * Original: 0x00392920 - 0x00392965 (69 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392920: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = 0x83309C;
    PUSH32(esp, 0xFF);
    MEM32(esi + 0x104) = eax;
    MEM32(esi + 0x10C) = eax;
    MEM32(esi + 0x108) = eax;
    eax = esi + 4;
    PUSH32(esp, 0x833114);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00392950u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00392950: ;
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0039295Fu); RECOMP_ABI_CALL(0x00032F07u, sub_00032F07); /* call 0x00032F07 */

loc_0039295F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00392980
 * Original: 0x00392980 - 0x00392A44 (196 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00392980: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0xFF);
    MEM32(esi) = 0x83309C;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 4;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    MEM32(esi + 0x104) = ebp;
    MEM32(esi + 0x10C) = ebp;
    MEM32(esi + 0x108) = ebp;
    PUSH32(esp, 0x003929B3u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_003929B3: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003929E9; /* je: equal / zero */

loc_003929BE: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x500);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003929CAu); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_003929CA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003929D7u); RECOMP_ABI_CALL(0x00032F07u, sub_00032F07); /* call 0x00032F07 */

loc_003929D7: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003929DDu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_003929DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003929E9: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003929F3u); RECOMP_ABI_CALL(0x00598C36u, sub_00598C36); /* call 0x00598C36 */

loc_003929F3: ;
    edi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392A3B; /* je: equal / zero */

loc_003929FC: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00392A04u); RECOMP_ABI_CALL(0x00598CE8u, sub_00598CE8); /* call 0x00598CE8 */

loc_00392A04: ;
    ebx = eax;
    PUSH32(esp, 0x100);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00392A11u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00392A11: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, ebx);
    ebp = eax;
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00392A1Fu); RECOMP_ABI_CALL(0x00598C5Du, sub_00598C5D); /* call 0x00598C5D */

loc_00392A1F: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x00392A2Au); RECOMP_ABI_CALL(0x00032F07u, sub_00032F07); /* call 0x00032F07 */

loc_00392A2A: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00392A30u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00392A30: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00392A38u); RECOMP_ABI_CALL(0x00598CBFu, sub_00598CBF); /* call 0x00598CBF */

loc_00392A38: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00392A3B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00392A80
 * Original: 0x00392A80 - 0x00392B15 (149 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00392A80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x80 (16-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00392A9D; /* jae: above or equal (unsigned >=) */

loc_00392A8C: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00392A96u); RECOMP_ABI_CALL(0x0001BCB7u, sub_0001BCB7); /* call 0x0001BCB7 */

loc_00392A96: ;
    eax = 1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00392A9D: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0x800 (16-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    if (CMP_AE(_fa, _fb)) goto loc_00392AD2; /* jae: above or equal (unsigned >=) */

loc_00392AA9: ;
    eax = ebx;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax | 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00392AB9u); RECOMP_ABI_CALL(0x0001BCB7u, sub_0001BCB7); /* call 0x0001BCB7 */

loc_00392AB9: ;
    ebx = ebx & 0xFFFFFF3Fu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0xFFFFFF80u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00392ACAu); RECOMP_ABI_CALL(0x0001BCB7u, sub_0001BCB7); /* call 0x0001BCB7 */

loc_00392ACA: ;
    POP32(esp, esi);
    eax = 2;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00392AD2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, LO16(ebx));
    { uint32_t _sv=(uint32_t)(LO16(ecx)), _sc=(uint32_t)(0xC) & 31u;
      if (_sc) {
        SET_LO16(ecx, _sv >> _sc);
        _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
      } }
    ecx = ecx | 0xFFFFFFE0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00392AE6u); RECOMP_ABI_CALL(0x0001BCB7u, sub_0001BCB7); /* call 0x0001BCB7 */

loc_00392AE6: ;
    edx = ebx;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx & 0xFFFFFF3Fu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0xFFFFFF80u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00392AFCu); RECOMP_ABI_CALL(0x0001BCB7u, sub_0001BCB7); /* call 0x0001BCB7 */

loc_00392AFC: ;
    ebx = ebx & 0xFFFFFF3Fu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx | 0xFFFFFF80u;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x00392B0Du); RECOMP_ABI_CALL(0x0001BCB7u, sub_0001BCB7); /* call 0x0001BCB7 */

loc_00392B0D: ;
    POP32(esp, esi);
    eax = 3;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00392B40
 * Original: 0x00392B40 - 0x00392B81 (65 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00392B40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0);
    edi = ecx;
    PUSH32(esp, 0x00392B4Fu); RECOMP_ABI_CALL(0x00018C92u, sub_00018C92); /* call 0x00018C92 */

loc_00392B4F: ;
    ebp = MEM32(esp + 0x14);
    eax = MEM32(ebp);
    ebx = MEM32(eax + -12);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00392B78; /* jle: less or equal (signed <=) */

loc_00392B5F: ;
    /* nop */

loc_00392B60: ;
    ecx = MEM32(ebp);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + esi * 2));
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00392B70u); RECOMP_ABI_CALL(0x00017F40u, sub_00017F40); /* call 0x00017F40 */

loc_00392B70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00392B60; /* jl: less (signed <) */

loc_00392B78: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00392BA0
 * Original: 0x00392BA0 - 0x00392C8A (234 bytes, 89 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392BA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00392BA0: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x902564);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00392BBF; /* jne: not equal / not zero */

loc_00392BB0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00392BB7u); RECOMP_ABI_CALL(0x0002454Cu, sub_0002454C); /* call 0x0002454C */

loc_00392BB7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x902564) = eax;

loc_00392BBF: ;
    edi = MEM32(eax + -8);
    ebp = MEM32(esp + 0x20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + -8) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi);
    eax = MEM32(eax + -12);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    ecx = esp + 0x10;
    if (CMP_A(_fa, _fb)) ebp = eax; /* cmova */
    PUSH32(esp, 0x00392BE7u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00392BE7: ;
    eax = ebp + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00392C23; /* jle: less or equal (signed <=) */

loc_00392BEE: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392C03; /* jne: not equal / not zero */

loc_00392BF6: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00392BFCu); RECOMP_ABI_CALL(0x0002454Cu, sub_0002454C); /* call 0x0002454C */

loc_00392BFC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    goto loc_00392C27;

loc_00392C03: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00392C17u); RECOMP_ABI_CALL(0x00030DD8u, sub_00030DD8); /* call 0x00030DD8 */

loc_00392C17: ;
    ebx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00392C27;

loc_00392C23: ;
    ebx = MEM32(esp + 0x10);

loc_00392C27: ;
    esi = MEM32(esi);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = ebx;
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
    ecx = edx;
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
    esi = MEM32(esp + 0x18);
    MEM8(ebx + ebp) = 0;
    MEM32(ebx + -12) = ebp;
    MEM32(esi) = ebx;
    MEM32(ebx + -8) = MEM32(ebx + -8) + 1;
    _fa = (uint32_t)(MEM32(ebx + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    ecx = MEM32(eax + -4);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x19) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00392C61; /* jne: not equal / not zero */

loc_00392C5A: ;
    ecx = esi;
    PUSH32(esp, 0x00392C61u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00392C61: ;
    eax = MEM32(esi);
    MEM32(eax + -4) = MEM32(eax + -4) | 0x2000000;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebx + -8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + -8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00392C80; /* jne: not equal / not zero */

loc_00392C77: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00392C7Du); RECOMP_ABI_CALL(0x0002B171u, sub_0002B171); /* call 0x0002B171 */

loc_00392C7D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00392C80: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00392CD0
 * Original: 0x00392CD0 - 0x00392CF7 (39 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392CD0(void)
{

loc_00392CD0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00392CE3u); RECOMP_ABI_CALL(0x00018C92u, sub_00018C92); /* call 0x00018C92 */

loc_00392CE3: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00392CF0u); RECOMP_ABI_CALL(0x00025F37u, sub_00025F37); /* call 0x00025F37 */

loc_00392CF0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00392D00
 * Original: 0x00392D00 - 0x00392D2C (44 bytes, 19 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392D00(void)
{

loc_00392D00: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00392D13u); RECOMP_ABI_CALL(0x00018C92u, sub_00018C92); /* call 0x00018C92 */

loc_00392D13: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00392D25u); RECOMP_ABI_CALL(0x00019B29u, sub_00019B29); /* call 0x00019B29 */

loc_00392D25: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00392D40
 * Original: 0x00392D40 - 0x00392E09 (201 bytes, 85 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00392D40: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + -12);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00392E02; /* jbe: below or equal (unsigned <=) */

loc_00392D55: ;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + -12);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00392E00; /* ja: above (unsigned >) */

loc_00392D68: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392DAD; /* jne: not equal / not zero */

loc_00392D6C: ;
    esi = ebp + 1;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00392D75u); RECOMP_ABI_CALL(0x0002454Cu, sub_0002454C); /* call 0x0002454C */

loc_00392D75: ;
    ecx = esi;
    esi = MEM32(ebx);
    edx = ecx;
    ebp = eax;
    eax = MEM32(esp + 0x18);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
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
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebp);
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
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00392D9Bu); RECOMP_ABI_CALL(0x00025F37u, sub_00025F37); /* call 0x00025F37 */

loc_00392D9B: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00392DA1u); RECOMP_ABI_CALL(0x0002B171u, sub_0002B171); /* call 0x0002B171 */

loc_00392DA1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00392DAD: ;
    ecx = ebx;
    PUSH32(esp, 0x00392DB4u); RECOMP_ABI_CALL(0x0001FE4Du, sub_0001FE4D); /* call 0x0001FE4D */

loc_00392DB4: ;
    PUSH32(esp, 0);
    ecx = esi + ebp + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00392DC1u); RECOMP_ABI_CALL(0x000121DAu, sub_000121DA); /* call 0x000121DA */

loc_00392DC1: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = eax + edi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00392DD5u); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_00392DD5: ;
    edi = MEM32(ebx);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    esi = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp;
    edx = ecx;
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
    ecx = edx;
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
    eax = MEM32(ebx);
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -12) = ecx;

loc_00392E00: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00392E02: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00392E40
 * Original: 0x00392E40 - 0x00392F3B (251 bytes, 91 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392E40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00392E40: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x902570);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00392E64; /* jne: not equal / not zero */

loc_00392E55: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00392E5Cu); RECOMP_ABI_CALL(0x000370B6u, sub_000370B6); /* call 0x000370B6 */

loc_00392E5C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x902570) = eax;

loc_00392E64: ;
    PUSH32(esp, edi);
    edi = eax + -8;
    MEM32(esp + 0x10) = eax;
    MEM32(edi) = MEM32(edi) + 1;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00392E7Au); RECOMP_ABI_CALL(0x00019291u, sub_00019291); /* call 0x00019291 */

loc_00392E7A: ;
    ecx = MEM32(edi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi) = ecx;
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00392E93; /* jne: not equal / not zero */

loc_00392E86: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00392E90u); RECOMP_ABI_CALL(0x0001B0BEu, sub_0001B0BE); /* call 0x0001B0BE */

loc_00392E90: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00392E93: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392F34; /* je: equal / zero */

loc_00392E9F: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00392F34; /* je: equal / zero */

loc_00392EA8: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fas) - (uint8_t)(_fbs)) >> 7) != 0)) goto loc_00392EC1; /* js: sign (negative) */

loc_00392EAE: ;
    SET_LO16(edx, SX8(LO8(eax)));
    ecx = ebp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00392EBAu); RECOMP_ABI_CALL(0x0002F1DBu, sub_0002F1DB); /* call 0x0002F1DB */

loc_00392EBA: ;
    ebx = 1;
    goto loc_00392F27;

loc_00392EC1: ;
    SET_LO8(ecx, LO8(eax));
    SET_LO8(ecx, LO8(ecx) & 0xE0);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xC0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392EEE; /* jne: not equal / not zero */

loc_00392ECB: ;
    SET_LO8(eax, LO8(eax) & 0x1F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(edx, SX8(LO8(eax)));
    SET_LO8(eax, MEM8(esi + 1));
    SET_LO8(eax, LO8(eax) & 0x3F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(ecx, SX8(LO8(eax)));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    ecx = ebp;
    PUSH32(esp, 0x00392EE7u); RECOMP_ABI_CALL(0x0002F1DBu, sub_0002F1DB); /* call 0x0002F1DB */

loc_00392EE7: ;
    ebx = 2;
    goto loc_00392F27;

loc_00392EEE: ;
    SET_LO8(edx, LO8(eax));
    SET_LO8(edx, LO8(edx) & 0xF0);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xE0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xE0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392F27; /* jne: not equal / not zero */

loc_00392EF8: ;
    SET_LO8(ecx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(edx, SX8(LO8(ecx)));
    SET_LO8(ecx, MEM8(esi + 2));
    SET_LO16(eax, SX8(LO8(eax)));
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    SET_LO16(eax, SX8(LO8(ecx)));
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx = ebp;
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, edx);
    PUSH32(esp, 0x00392F22u); RECOMP_ABI_CALL(0x0002F1DBu, sub_0002F1DB); /* call 0x0002F1DB */

loc_00392F22: ;
    ebx = 3;

loc_00392F27: ;
    SET_LO8(eax, MEM8(esi + ebx));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392EA8; /* jne: not equal / not zero */

loc_00392F34: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00392F80
 * Original: 0x00392F80 - 0x00393073 (243 bytes, 93 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00392F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00392F80: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x902570);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00392F9F; /* jne: not equal / not zero */

loc_00392F90: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00392F97u); RECOMP_ABI_CALL(0x000370B6u, sub_000370B6); /* call 0x000370B6 */

loc_00392F97: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x902570) = eax;

loc_00392F9F: ;
    edi = MEM32(eax + -8);
    ebp = MEM32(esp + 0x20);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + -8) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi);
    eax = MEM32(eax + -12);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00392FC1; /* jg: greater (signed >) */

loc_00392FBD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00392FC3; /* jge: greater or equal (signed >=) */

loc_00392FC1: ;
    ebp = eax;

loc_00392FC3: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x00392FCCu); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_00392FCC: ;
    eax = ebp + 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00393008; /* jle: less or equal (signed <=) */

loc_00392FD3: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00392FE8; /* jne: not equal / not zero */

loc_00392FDB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00392FE1u); RECOMP_ABI_CALL(0x000370B6u, sub_000370B6); /* call 0x000370B6 */

loc_00392FE1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    goto loc_0039300C;

loc_00392FE8: ;
    _fb = (uint32_t)(0xFFFFFFECu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFECu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    MEM32(esp + 0x20) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00392FFCu); RECOMP_ABI_CALL(0x00011A46u, sub_00011A46); /* call 0x00011A46 */

loc_00392FFC: ;
    ebx = MEM32(esp + 0x28);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0039300C;

loc_00393008: ;
    ebx = MEM32(esp + 0x10);

loc_0039300C: ;
    edx = MEM32(esi);
    esi = edx + edi * 2;
    eax = ebp + ebp;
    ecx = eax;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = ebx;
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
    ecx = edx;
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
    esi = MEM32(esp + 0x18);
    MEM16(eax + ebx) = 0;
    MEM32(ebx + -12) = ebp;
    MEM32(esi) = ebx;
    MEM32(ebx + -8) = MEM32(ebx + -8) + 1;
    _fa = (uint32_t)(MEM32(ebx + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi);
    ecx = MEM32(eax + -4);
    edi = 0x2000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, ecx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0039304E; /* jne: not equal / not zero */

loc_00393047: ;
    ecx = esi;
    PUSH32(esp, 0x0039304Eu); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_0039304E: ;
    eax = MEM32(esi);
    MEM32(eax + -4) = MEM32(eax + -4) | edi;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebx + -8);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + -8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00393069; /* jne: not equal / not zero */

loc_00393060: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00393066u); RECOMP_ABI_CALL(0x0001B0BEu, sub_0001B0BE); /* call 0x0001B0BE */

loc_00393066: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00393069: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003930B0
 * Original: 0x003930B0 - 0x003930D7 (39 bytes, 17 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003930B0(void)
{

loc_003930B0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003930C3u); RECOMP_ABI_CALL(0x00015E43u, sub_00015E43); /* call 0x00015E43 */

loc_003930C3: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003930D0u); RECOMP_ABI_CALL(0x0002E5C9u, sub_0002E5C9); /* call 0x0002E5C9 */

loc_003930D0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003930E0
 * Original: 0x003930E0 - 0x0039310C (44 bytes, 19 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003930E0(void)
{

loc_003930E0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x003930F3u); RECOMP_ABI_CALL(0x00015E43u, sub_00015E43); /* call 0x00015E43 */

loc_003930F3: ;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00393105u); RECOMP_ABI_CALL(0x0001A6DCu, sub_0001A6DC); /* call 0x0001A6DC */

loc_00393105: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00393120
 * Original: 0x00393120 - 0x003931FE (222 bytes, 88 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00393120: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(eax);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + -12);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003931F7; /* jle: less or equal (signed <=) */

loc_00393135: ;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + -12);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003931F5; /* jg: greater (signed >) */

loc_00393148: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00393195; /* jne: not equal / not zero */

loc_0039314C: ;
    ecx = ebp + 1;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00393155u); RECOMP_ABI_CALL(0x000370B6u, sub_000370B6); /* call 0x000370B6 */

loc_00393155: ;
    esi = MEM32(ebx);
    ecx = ebp + ebp + 2;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    edi = eax;
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
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0x18);
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
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0039317Fu); RECOMP_ABI_CALL(0x0002E5C9u, sub_0002E5C9); /* call 0x0002E5C9 */

loc_0039317F: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00393189u); RECOMP_ABI_CALL(0x0001B0BEu, sub_0001B0BE); /* call 0x0001B0BE */

loc_00393189: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00393195: ;
    ecx = ebx;
    PUSH32(esp, 0x0039319Cu); RECOMP_ABI_CALL(0x0002573Fu, sub_0002573F); /* call 0x0002573F */

loc_0039319C: ;
    PUSH32(esp, 0);
    edx = esi + ebp + 1;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003931A9u); RECOMP_ABI_CALL(0x0002CBCAu, sub_0002CBCA); /* call 0x0002CBCA */

loc_003931A9: ;
    eax = MEM32(ebx);
    ecx = edi + edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ecx;
    edx = esi + esi + 2;
    PUSH32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = edi + ebp;
    edx = eax + ecx * 2;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003931C8u); RECOMP_ABI_CALL(0x005CC970u, sub_005CC970); /* call 0x005CC970 */

loc_003931C8: ;
    edi = MEM32(ebx);
    edx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x30);
    esi = MEM32(eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebp + ebp;
    edx = ecx;
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
    ecx = edx;
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
    eax = MEM32(ebx);
    ecx = MEM32(eax + -12);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + -12) = ecx;

loc_003931F5: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003931F7: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00393240
 * Original: 0x00393240 - 0x003933DC (412 bytes, 110 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00393240: ;
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x11C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7F6E84);
    PUSH32(esp, 0x00393253u); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_00393253: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, 0x833124);
    PUSH32(esp, 0x7F6E84);
    ecx = esp + 0x14;
    esi = eax;
    PUSH32(esp, 0x0039326Du); RECOMP_ABI_CALL(0x0001EECBu, sub_0001EECB); /* call 0x0001EECB */

loc_0039326D: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00393275u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_00393275: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    ecx = esp + 0xC;
    MEM32(esp + 0x11C) = 0;
    MEM32(esp + 0x120) = 0;
    PUSH32(esp, 0x00393299u); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_00393299: ;
    eax = MEM32(esp + 0x11C);
    ecx = MEM32(eax);
    MEM32(esp + 0x11C) = ecx;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    edx = esi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x108);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003932BDu); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_003932BD: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(0x902574) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003933CB; /* jle: less or equal (signed <=) */

loc_003932CD: ;
    MEM32(esp + 4) = esi;
    PUSH32(esp, edi);

loc_003932D2: ;
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    PUSH32(esp, 0x003932DDu); RECOMP_ABI_CALL(0x0001682Au, sub_0001682A); /* call 0x0001682A */

loc_003932DD: ;
    edi = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003932E1: ;
    eax = MEM32(esi * 4 + 0x8C6278);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003932EFu); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_003932EF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003932FC; /* je: equal / zero */

loc_003932F6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x10 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003932E1; /* jl: less (signed <) */

loc_003932FC: ;
    ecx = MEM32(esp + 0x120);
    edx = MEM32(ecx + 8);
    ecx = MEM32(0x902574);
    eax = esi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x108);
    MEM32(eax + ecx) = edx;
    edx = MEM32(0x902574);
    ecx = eax + edx;
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003933C0; /* ja: above (unsigned >) */

loc_0039332C: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x3933DC); /* switch: 5 entries, 5 targets */
    if (_jt == 0x00393333u) goto loc_00393333;
    if (_jt == 0x00393347u) goto loc_00393347;
    if (_jt == 0x00393378u) goto loc_00393378;
    if (_jt == 0x00393392u) goto loc_00393392;
    if (_jt == 0x003933AAu) goto loc_003933AA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00393333: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x100);
    PUSH32(esp, ecx);
    ecx = esp + 0x14;
    PUSH32(esp, 0x00393345u); RECOMP_ABI_CALL(0x00020D1Bu, sub_00020D1B); /* call 0x00020D1B */

loc_00393345: ;
    goto loc_003933C0;

loc_00393347: ;
    edx = MEM32(esp + 0x120);
    eax = MEM32(edx);
    MEM32(esp + 0x120) = eax;
    _fa = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 8), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039336B; /* jne: not equal / not zero */

loc_0039335D: ;
    eax = MEM32(edx + 0x10);
    edx = MEM32(edx + 0x14);
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    goto loc_003933C0;

loc_0039336B: ;
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x10);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edx;
    goto loc_003933C0;

loc_00393378: ;
    eax = MEM32(esp + 0x120);
    edx = MEM32(eax);
    MEM32(esp + 0x120) = edx;
    SET_LO16(eax, MEM16(eax + 0x10));
    MEM16(ecx + 8) = LO16(eax);
    goto loc_003933C0;

loc_00393392: ;
    eax = MEM32(esp + 0x120);
    edx = MEM32(eax);
    MEM32(esp + 0x120) = edx;
    SET_LO8(eax, MEM8(eax + 0x10));
    MEM8(ecx + 8) = LO8(eax);
    goto loc_003933C0;

loc_003933AA: ;
    eax = MEM32(esp + 0x120);
    edx = MEM32(eax);
    MEM32(esp + 0x120) = edx;
    eax = MEM32(eax + 0x10);
    MEM32(ecx + 8) = eax;

loc_003933C0: ;
    MEM32(esp + 8) = MEM32(esp + 8) - 1;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003932D2; /* jne: not equal / not zero */

loc_003933CA: ;
    POP32(esp, edi);

loc_003933CB: ;
    ecx = esp + 8;
    PUSH32(esp, 0x003933D4u); RECOMP_ABI_CALL(0x000172A7u, sub_000172A7); /* call 0x000172A7 */

loc_003933D4: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x11C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x11C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00393480
 * Original: 0x00393480 - 0x00393485 (5 bytes, 2 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393480(void)
{

loc_00393480: ;
    eax = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00393490
 * Original: 0x00393490 - 0x003934BD (45 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00393490(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00393490: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003934BA; /* jp: parity */

loc_003934A5: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003934BA; /* jp: parity */

loc_003934B4: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_003934BA: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003934D0
 * Original: 0x003934D0 - 0x0039350C (60 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003934D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_003934D0: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00393509; /* jp: parity */

loc_003934E5: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 4); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00393509; /* jp: parity */

loc_003934F4: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00393509; /* jp: parity */

loc_00393503: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00393509: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00393520
 * Original: 0x00393520 - 0x00393528 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00393520: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0056C4C9(); return; /* tail jmp 0x0056C4C9 */

}

/**
 * sub_00393530
 * Original: 0x00393530 - 0x00393534 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393530(void)
{

loc_00393530: ;
    eax = ecx + 0x14;
    esp += 4; return; /* ret */

}

/**
 * sub_00393540
 * Original: 0x00393540 - 0x00393544 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393540(void)
{

loc_00393540: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00393550
 * Original: 0x00393550 - 0x0039359C (76 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00393550: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xA (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00393598; /* ja: above (unsigned >) */

loc_00393555: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x39359C); /* switch: 11 entries, 11 targets */
    if (_jt == 0x0039355Cu) goto loc_0039355C;
    if (_jt == 0x00393562u) goto loc_00393562;
    if (_jt == 0x00393568u) goto loc_00393568;
    if (_jt == 0x0039356Eu) goto loc_0039356E;
    if (_jt == 0x00393574u) goto loc_00393574;
    if (_jt == 0x0039357Au) goto loc_0039357A;
    if (_jt == 0x00393580u) goto loc_00393580;
    if (_jt == 0x00393586u) goto loc_00393586;
    if (_jt == 0x0039358Cu) goto loc_0039358C;
    if (_jt == 0x00393592u) goto loc_00393592;
    if (_jt == 0x00393598u) goto loc_00393598;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0039355C: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_00393562: ;
    eax = 2;
    esp += 4; return; /* ret */

loc_00393568: ;
    eax = 4;
    esp += 4; return; /* ret */

loc_0039356E: ;
    eax = 3;
    esp += 4; return; /* ret */

loc_00393574: ;
    eax = 5;
    esp += 4; return; /* ret */

loc_0039357A: ;
    eax = 6;
    esp += 4; return; /* ret */

loc_00393580: ;
    eax = 7;
    esp += 4; return; /* ret */

loc_00393586: ;
    eax = 8;
    esp += 4; return; /* ret */

loc_0039358C: ;
    eax = 9;
    esp += 4; return; /* ret */

loc_00393592: ;
    eax = 0xA;
    esp += 4; return; /* ret */

loc_00393598: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

}

/**
 * sub_00393600
 * Original: 0x00393600 - 0x0039361B (27 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393600(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393600: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x4C8) = eax;
    MEM32(ecx + 0x4D0) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393630
 * Original: 0x00393630 - 0x00393649 (25 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393630: ;
    eax = MEM32(ecx + 0x4CC);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393650
 * Original: 0x00393650 - 0x00393666 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393650: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x4CC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393670
 * Original: 0x00393670 - 0x00393675 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00393670: ;
    g_seh_ebp = ebp; sub_0056D785(); return; /* tail jmp 0x0056D785 */

}

/**
 * sub_00393680
 * Original: 0x00393680 - 0x003936AA (42 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393680(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393680: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + 0x9E8) = eax;
    MEM32(ecx + 0x9EC) = eax;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ecx + 0x9F4) = eax;
    MEM32(ecx + 0x9F8) = eax;
    eax = MEM32(esp + 4);
    MEM32(eax) = 1;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003936C0
 * Original: 0x003936C0 - 0x003936D9 (25 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003936C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003936C0: ;
    eax = MEM32(ecx + 0x9F0);
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    SET_LO8(eax, LO8(ecx));
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003936E0
 * Original: 0x003936E0 - 0x003936F6 (22 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003936E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003936E0: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x9F0);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393700
 * Original: 0x00393700 - 0x00393718 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393700(void)
{

loc_00393700: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    eax = ecx;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    edx = MEM32(edx + 8);
    MEM32(edx + ecx * 4) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393720
 * Original: 0x00393720 - 0x00393724 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393720(void)
{

loc_00393720: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00393730
 * Original: 0x00393730 - 0x0039373C (12 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393730(void)
{

loc_00393730: ;
    eax = MEM32(ecx);
    ecx = MEM32(esp + 4);
    eax = eax + ecx * 4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393740
 * Original: 0x00393740 - 0x0039374C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393740(void)
{

loc_00393740: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00393750
 * Original: 0x00393750 - 0x0039375C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393750(void)
{

loc_00393750: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00393760
 * Original: 0x00393760 - 0x00393778 (24 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393760(void)
{

loc_00393760: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    esi = MEM32(esi);
    eax = ecx;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    edx = MEM32(edx + 8);
    MEM32(edx + ecx * 4) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393780
 * Original: 0x00393780 - 0x0039378C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393780(void)
{

loc_00393780: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 8);
    eax = edx + eax * 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00393790
 * Original: 0x00393790 - 0x0039379D (13 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393790(void)
{

loc_00393790: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 8);
    SET_LO16(eax, MEM16(edx + eax * 2));
    esp += 4; return; /* ret */

}

/**
 * sub_003937A0
 * Original: 0x003937A0 - 0x003937BA (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003937A0(void)
{

loc_003937A0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(esi, MEM16(esi));
    eax = ecx;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    edx = MEM32(edx + 8);
    MEM16(edx + ecx * 2) = LO16(esi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003937C0
 * Original: 0x003937C0 - 0x003937EE (46 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003937C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003937C0: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(ecx + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393800
 * Original: 0x00393800 - 0x0039380E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393800: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00393820
 * Original: 0x00393820 - 0x0039384E (46 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393820: ;
    eax = ecx;
    edx = MEM32(eax);
    ecx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx + 8);
    edx = MEM32(esp + 8);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(edx);
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(ecx + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393860
 * Original: 0x00393860 - 0x0039388E (46 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393860: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    ecx = eax;
    MEM32(ecx) = esi;
    esi = MEM32(edx + 4);
    MEM32(ecx + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(ecx + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003938A0
 * Original: 0x003938A0 - 0x003938B2 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003938A0(void)
{

loc_003938A0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003938C0
 * Original: 0x003938C0 - 0x003938CB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003938C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003938C0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_003938D0
 * Original: 0x003938D0 - 0x003938E3 (19 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003938D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003938D0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003938E0; /* je: equal / zero */

loc_003938D8: ;
    ecx = MEM32(esp + 8);
    edx = MEM32(ecx);
    MEM32(eax) = edx;

loc_003938E0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003938F0
 * Original: 0x003938F0 - 0x003938F3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003938F0(void)
{

loc_003938F0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393900
 * Original: 0x00393900 - 0x00393912 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393900(void)
{

loc_00393900: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00393920
 * Original: 0x00393920 - 0x00393932 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393920(void)
{

loc_00393920: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00393940
 * Original: 0x00393940 - 0x00393952 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393940(void)
{

loc_00393940: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00393960
 * Original: 0x00393960 - 0x0039398B (43 bytes, 17 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393960(void)
{

loc_00393960: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 8);
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    ecx = eax;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    edx = eax;
    MEM32(edx) = esi;
    esi = MEM32(ecx + 4);
    MEM32(edx + 4) = esi;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003939A0
 * Original: 0x003939A0 - 0x003939B2 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003939A0(void)
{

loc_003939A0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003939C0
 * Original: 0x003939C0 - 0x003939DD (29 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003939C0(void)
{

loc_003939C0: ;
    eax = MEM32(ecx);
    edx = MEM32(ecx + 4);
    ecx = MEM32(eax + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + edx * 8);
    MEM32(eax) = esi;
    edx = MEM32(ecx + edx * 8 + 4);
    MEM32(eax + 4) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003939F0
 * Original: 0x003939F0 - 0x00393A02 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003939F0(void)
{

loc_003939F0: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00393A10
 * Original: 0x00393A10 - 0x00393A22 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393A10(void)
{

loc_00393A10: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00393A30
 * Original: 0x00393A30 - 0x00393A42 (18 bytes, 6 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393A30(void)
{

loc_00393A30: ;
    edx = MEM32(esp + 8);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00393A50
 * Original: 0x00393A50 - 0x00393A54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393A50(void)
{

loc_00393A50: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00393A60
 * Original: 0x00393A60 - 0x00393A64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393A60(void)
{

loc_00393A60: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00393A70
 * Original: 0x00393A70 - 0x00393A74 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393A70(void)
{

loc_00393A70: ;
    SET_LO8(eax, MEM8(ecx + 0x28));
    esp += 4; return; /* ret */

}

/**
 * sub_00393A80
 * Original: 0x00393A80 - 0x00393A8B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393A80: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00393A90
 * Original: 0x00393A90 - 0x00393A94 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393A90(void)
{

loc_00393A90: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00393AA0
 * Original: 0x00393AA0 - 0x00393AAB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393AA0: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00393AB0
 * Original: 0x00393AB0 - 0x00393AB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393AB0(void)
{

loc_00393AB0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00393AC0
 * Original: 0x00393AC0 - 0x00393AC4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393AC0(void)
{

loc_00393AC0: ;
    SET_LO8(eax, MEM8(ecx + 0x28));
    esp += 4; return; /* ret */

}

/**
 * sub_00393AD0
 * Original: 0x00393AD0 - 0x00393ADB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393AD0: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00393AE0
 * Original: 0x00393AE0 - 0x00393AE4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393AE0(void)
{

loc_00393AE0: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00393AF0
 * Original: 0x00393AF0 - 0x00393AFB (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393AF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393AF0: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00393B00
 * Original: 0x00393B00 - 0x00393B04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B00(void)
{

loc_00393B00: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00393B10
 * Original: 0x00393B10 - 0x00393B1B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393B10: ;
    edx = MEM32(ecx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00393B20
 * Original: 0x00393B20 - 0x00393B24 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B20(void)
{

loc_00393B20: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00393B30
 * Original: 0x00393B30 - 0x00393B34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B30(void)
{

loc_00393B30: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00393B40
 * Original: 0x00393B40 - 0x00393B44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B40(void)
{

loc_00393B40: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_00393B50
 * Original: 0x00393B50 - 0x00393B54 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B50(void)
{

loc_00393B50: ;
    eax = MEM32(ecx + 0x18);
    esp += 4; return; /* ret */

}

/**
 * sub_00393B60
 * Original: 0x00393B60 - 0x00393B64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B60(void)
{

loc_00393B60: ;
    eax = MEM32(ecx + 0x1C);
    esp += 4; return; /* ret */

}

/**
 * sub_00393B70
 * Original: 0x00393B70 - 0x00393BC4 (84 bytes, 36 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393B70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393B70: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    ebx = MEM32(ebx + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    eax = edx + edx * 2;
    edi = edi + eax * 4;
    eax = MEM32(ecx + 4);
    eax = eax + eax * 2;
    eax = ebx + eax * 4;
    ebx = MEM32(edi);
    MEM32(eax) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(eax + 4) = ebx;
    edi = MEM32(edi + 8);
    MEM32(eax + 8) = edi;
    SET_LO8(eax, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393BBE; /* je: equal / zero */

loc_00393BA9: ;
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00393BBBu); RECOMP_ABI_CALL(0x0056D507u, sub_0056D507); /* call 0x0056D507 */

loc_00393BBB: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00393BBE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00393BE0
 * Original: 0x00393BE0 - 0x00393C28 (72 bytes, 32 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00393BE0: ;
    edx = MEM32(ecx);
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 8);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    ebp = MEM32(esi + edx * 8);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 4);
    MEM32(ebx + edi * 8) = ebp;
    esi = MEM32(esi + edx * 8 + 4);
    MEM32(ebx + edi * 8 + 4) = esi;
    SET_LO8(ebx, MEM8(eax + 0x28));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00393C25; /* je: equal / zero */

loc_00393C10: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00393C22u); RECOMP_ABI_CALL(0x0056D507u, sub_0056D507); /* call 0x0056D507 */

loc_00393C22: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00393C25: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00393C40
 * Original: 0x00393C40 - 0x00393C4C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393C40(void)
{

loc_00393C40: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    edx = MEM32(ecx + 8);
    eax = MEM32(edx + eax * 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00393C50
 * Original: 0x00393C50 - 0x00393C70 (32 bytes, 10 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393C50(void)
{

loc_00393C50: ;
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
 * sub_00393C80
 * Original: 0x00393C80 - 0x00393CAE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393C80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393C80: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax = MEM32(ecx);
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x2C);
    eax = MEM32(eax + 8);
    esi = MEM32(esi + 4);
    ecx = eax + ecx * 4;
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx * 4 + 0x8DCFB8); PUSH32(esp, 0x00393CA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00393C9Du); } /* indirect call */
    }

loc_00393CA4: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00393CC0
 * Original: 0x00393CC0 - 0x00393D06 (70 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393CC0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00393CDE; /* je: equal / zero */

loc_00393CCC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393CDE; /* je: equal / zero */

loc_00393CD1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393CDE; /* je: equal / zero */

loc_00393CD6: ;
    esi = ecx + 0x18;
    eax = ecx + 0x1C;
    goto loc_00393CE4;

loc_00393CDE: ;
    esi = ecx + 0x10;
    eax = ecx + 0x14;

loc_00393CE4: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x3C) = ecx;
    MEM32(edx + 0x38) = 0;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393CF9; /* je: equal / zero */

loc_00393CF6: ;
    MEM32(ecx + 0x38) = edx;

loc_00393CF9: ;
    MEM32(eax) = edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00393D02; /* jne: not equal / not zero */

loc_00393D00: ;
    MEM32(esi) = edx;

loc_00393D02: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393D20
 * Original: 0x00393D20 - 0x00393D66 (70 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393D20: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00393D3E; /* je: equal / zero */

loc_00393D2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393D3E; /* je: equal / zero */

loc_00393D31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393D3E; /* je: equal / zero */

loc_00393D36: ;
    esi = ecx + 0x18;
    eax = ecx + 0x1C;
    goto loc_00393D44;

loc_00393D3E: ;
    esi = ecx + 0x10;
    eax = ecx + 0x14;

loc_00393D44: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x3C) = ecx;
    MEM32(edx + 0x38) = 0;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393D59; /* je: equal / zero */

loc_00393D56: ;
    MEM32(ecx + 0x38) = edx;

loc_00393D59: ;
    MEM32(eax) = edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00393D62; /* jne: not equal / not zero */

loc_00393D60: ;
    MEM32(esi) = edx;

loc_00393D62: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393D80
 * Original: 0x00393D80 - 0x00393DC6 (70 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393D80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393D80: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00393D9E; /* je: equal / zero */

loc_00393D8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393D9E; /* je: equal / zero */

loc_00393D91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393D9E; /* je: equal / zero */

loc_00393D96: ;
    esi = ecx + 0x18;
    eax = ecx + 0x1C;
    goto loc_00393DA4;

loc_00393D9E: ;
    esi = ecx + 0x10;
    eax = ecx + 0x14;

loc_00393DA4: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x3C) = ecx;
    MEM32(edx + 0x38) = 0;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393DB9; /* je: equal / zero */

loc_00393DB6: ;
    MEM32(ecx + 0x38) = edx;

loc_00393DB9: ;
    MEM32(eax) = edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00393DC2; /* jne: not equal / not zero */

loc_00393DC0: ;
    MEM32(esi) = edx;

loc_00393DC2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393DE0
 * Original: 0x00393DE0 - 0x00393E26 (70 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393DE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393DE0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00393DFE; /* je: equal / zero */

loc_00393DEC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393DFE; /* je: equal / zero */

loc_00393DF1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393DFE; /* je: equal / zero */

loc_00393DF6: ;
    esi = ecx + 0x18;
    eax = ecx + 0x1C;
    goto loc_00393E04;

loc_00393DFE: ;
    esi = ecx + 0x10;
    eax = ecx + 0x14;

loc_00393E04: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x3C) = ecx;
    MEM32(edx + 0x38) = 0;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393E19; /* je: equal / zero */

loc_00393E16: ;
    MEM32(ecx + 0x38) = edx;

loc_00393E19: ;
    MEM32(eax) = edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00393E22; /* jne: not equal / not zero */

loc_00393E20: ;
    MEM32(esi) = edx;

loc_00393E22: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393E40
 * Original: 0x00393E40 - 0x00393E44 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393E40(void)
{

loc_00393E40: ;
    SET_LO8(eax, MEM8(ecx + 0x28));
    esp += 4; return; /* ret */

}

/**
 * sub_00393E50
 * Original: 0x00393E50 - 0x00393E96 (70 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393E50: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00393E6E; /* je: equal / zero */

loc_00393E5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393E6E; /* je: equal / zero */

loc_00393E61: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393E6E; /* je: equal / zero */

loc_00393E66: ;
    esi = ecx + 0x18;
    eax = ecx + 0x1C;
    goto loc_00393E74;

loc_00393E6E: ;
    esi = ecx + 0x10;
    eax = ecx + 0x14;

loc_00393E74: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x3C) = ecx;
    MEM32(edx + 0x38) = 0;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393E89; /* je: equal / zero */

loc_00393E86: ;
    MEM32(ecx + 0x38) = edx;

loc_00393E89: ;
    MEM32(eax) = edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00393E92; /* jne: not equal / not zero */

loc_00393E90: ;
    MEM32(esi) = edx;

loc_00393E92: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393EB0
 * Original: 0x00393EB0 - 0x00393EB4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393EB0(void)
{

loc_00393EB0: ;
    SET_LO8(eax, MEM8(ecx + 0x28));
    esp += 4; return; /* ret */

}

/**
 * sub_00393EC0
 * Original: 0x00393EC0 - 0x00393F06 (70 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393EC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393EC0: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00393EDE; /* je: equal / zero */

loc_00393ECC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393EDE; /* je: equal / zero */

loc_00393ED1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393EDE; /* je: equal / zero */

loc_00393ED6: ;
    esi = ecx + 0x18;
    eax = ecx + 0x1C;
    goto loc_00393EE4;

loc_00393EDE: ;
    esi = ecx + 0x10;
    eax = ecx + 0x14;

loc_00393EE4: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x3C) = ecx;
    MEM32(edx + 0x38) = 0;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393EF9; /* je: equal / zero */

loc_00393EF6: ;
    MEM32(ecx + 0x38) = edx;

loc_00393EF9: ;
    MEM32(eax) = edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00393F02; /* jne: not equal / not zero */

loc_00393F00: ;
    MEM32(esi) = edx;

loc_00393F02: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393F20
 * Original: 0x00393F20 - 0x00393F66 (70 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00393F20: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00393F3E; /* je: equal / zero */

loc_00393F2C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393F3E; /* je: equal / zero */

loc_00393F31: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393F3E; /* je: equal / zero */

loc_00393F36: ;
    esi = ecx + 0x18;
    eax = ecx + 0x1C;
    goto loc_00393F44;

loc_00393F3E: ;
    esi = ecx + 0x10;
    eax = ecx + 0x14;

loc_00393F44: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x3C) = ecx;
    MEM32(edx + 0x38) = 0;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393F59; /* je: equal / zero */

loc_00393F56: ;
    MEM32(ecx + 0x38) = edx;

loc_00393F59: ;
    MEM32(eax) = edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00393F62; /* jne: not equal / not zero */

loc_00393F60: ;
    MEM32(esi) = edx;

loc_00393F62: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00393F80
 * Original: 0x00393F80 - 0x00393FDB (91 bytes, 40 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00393F80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00393F80: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 0x2C);
    edx = MEM32(edi + 8);
    esi = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 4);
    eax = edx + ebx * 4;
    edx = MEM32(esi);
    PUSH32(esp, eax);
    eax = MEM32(edx + 8);
    ecx = eax + ecx * 4;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(ebp * 4 + 0x8DCFB8); PUSH32(esp, 0x00393FB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00393FACu); } /* indirect call */
    }

loc_00393FB3: ;
    SET_LO8(eax, MEM8(edi + 0x28));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00393FD4; /* je: equal / zero */

loc_00393FBD: ;
    edx = MEM32(esp + 0x20);
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00393FD1u); RECOMP_ABI_CALL(0x0056D507u, sub_0056D507); /* call 0x0056D507 */

loc_00393FD1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00393FD4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00394000
 * Original: 0x00394000 - 0x00394046 (70 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394000(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00394000: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0039401E; /* je: equal / zero */

loc_0039400C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039401E; /* je: equal / zero */

loc_00394011: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039401E; /* je: equal / zero */

loc_00394016: ;
    esi = ecx + 0x18;
    eax = ecx + 0x1C;
    goto loc_00394024;

loc_0039401E: ;
    esi = ecx + 0x10;
    eax = ecx + 0x14;

loc_00394024: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x3C) = ecx;
    MEM32(edx + 0x38) = 0;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394039; /* je: equal / zero */

loc_00394036: ;
    MEM32(ecx + 0x38) = edx;

loc_00394039: ;
    MEM32(eax) = edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394042; /* jne: not equal / not zero */

loc_00394040: ;
    MEM32(esi) = edx;

loc_00394042: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00394060
 * Original: 0x00394060 - 0x003940A6 (70 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00394060(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00394060: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0039407E; /* je: equal / zero */

loc_0039406C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039407E; /* je: equal / zero */

loc_00394071: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039407E; /* je: equal / zero */

loc_00394076: ;
    esi = ecx + 0x18;
    eax = ecx + 0x1C;
    goto loc_00394084;

loc_0039407E: ;
    esi = ecx + 0x10;
    eax = ecx + 0x14;

loc_00394084: ;
    ecx = MEM32(eax);
    MEM32(edx + 0x3C) = ecx;
    MEM32(edx + 0x38) = 0;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394099; /* je: equal / zero */

loc_00394096: ;
    MEM32(ecx + 0x38) = edx;

loc_00394099: ;
    MEM32(eax) = edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003940A2; /* jne: not equal / not zero */

loc_003940A0: ;
    MEM32(esi) = edx;

loc_003940A2: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003940C0
 * Original: 0x003940C0 - 0x003944AC (1004 bytes, 319 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003940C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003940C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00394487; /* je: equal / zero */

loc_003940D3: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394487; /* jne: not equal / not zero */

loc_003940DC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = esi;
    MEM8(esp + 0x12) = 0;
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x17) = 0;
    MEM8(esp + 0x16) = 0;
    MEM8(esp + 0x15) = 0;
    MEM8(esp + 0x18) = 0;
    MEM8(esp + 0x19) = 0;
    MEM8(esp + 0x1A) = 0;
    MEM8(esp + 0x1B) = 0;
    PUSH32(esp, 0x00394117u); RECOMP_ABI_CALL(0x0056BC9Eu, sub_0056BC9E); /* call 0x0056BC9E */

loc_00394117: ;
    ebx = eax;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003942DE; /* jbe: below or equal (unsigned <=) */

loc_00394123: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0039412Bu); RECOMP_ABI_CALL(0x0056BCA2u, sub_0056BCA2); /* call 0x0056BCA2 */

loc_0039412B: ;
    esi = eax;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394156; /* jne: not equal / not zero */

loc_00394135: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00394141u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_00394141: ;
    ecx = eax;
    PUSH32(esp, 0x00394148u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394148: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394156; /* je: equal / zero */

loc_0039414C: ;
    MEM8(esp + 0x12) = 1;
    goto loc_003942D1;

loc_00394156: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039417F; /* jne: not equal / not zero */

loc_0039415E: ;
    eax = MEM32(edi + 0x7C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0039416Au); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_0039416A: ;
    ecx = eax;
    PUSH32(esp, 0x00394171u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394171: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039417F; /* je: equal / zero */

loc_00394175: ;
    MEM8(esp + 0x13) = 1;
    goto loc_003942D1;

loc_0039417F: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003941AB; /* jne: not equal / not zero */

loc_00394187: ;
    eax = MEM32(edi + 0xBC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00394196u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_00394196: ;
    ecx = eax;
    PUSH32(esp, 0x0039419Du); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039419D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003941AB; /* je: equal / zero */

loc_003941A1: ;
    MEM8(esp + 0x14) = 1;
    goto loc_003942D1;

loc_003941AB: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003941D7; /* jne: not equal / not zero */

loc_003941B3: ;
    eax = MEM32(edi + 0xFC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x003941C2u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_003941C2: ;
    ecx = eax;
    PUSH32(esp, 0x003941C9u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003941C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003941D7; /* je: equal / zero */

loc_003941CD: ;
    MEM8(esp + 0x17) = 1;
    goto loc_003942D1;

loc_003941D7: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394203; /* jne: not equal / not zero */

loc_003941DF: ;
    eax = MEM32(edi + 0x13C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x003941EEu); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_003941EE: ;
    ecx = eax;
    PUSH32(esp, 0x003941F5u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003941F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394203; /* je: equal / zero */

loc_003941F9: ;
    MEM8(esp + 0x16) = 1;
    goto loc_003942D1;

loc_00394203: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039422F; /* jne: not equal / not zero */

loc_0039420B: ;
    eax = MEM32(edi + 0x17C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0039421Au); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_0039421A: ;
    ecx = eax;
    PUSH32(esp, 0x00394221u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394221: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039422F; /* je: equal / zero */

loc_00394225: ;
    MEM8(esp + 0x15) = 1;
    goto loc_003942D1;

loc_0039422F: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394258; /* jne: not equal / not zero */

loc_00394237: ;
    eax = MEM32(edi + 0x1BC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00394246u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_00394246: ;
    ecx = eax;
    PUSH32(esp, 0x0039424Du); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039424D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394258; /* je: equal / zero */

loc_00394251: ;
    MEM8(esp + 0x18) = 1;
    goto loc_003942D1;

loc_00394258: ;
    SET_LO8(eax, MEM8(esp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394281; /* jne: not equal / not zero */

loc_00394260: ;
    eax = MEM32(edi + 0x1FC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0039426Fu); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_0039426F: ;
    ecx = eax;
    PUSH32(esp, 0x00394276u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394276: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394281; /* je: equal / zero */

loc_0039427A: ;
    MEM8(esp + 0x19) = 1;
    goto loc_003942D1;

loc_00394281: ;
    SET_LO8(eax, MEM8(esp + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003942AA; /* jne: not equal / not zero */

loc_00394289: ;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00394298u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_00394298: ;
    ecx = eax;
    PUSH32(esp, 0x0039429Fu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039429F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003942AA; /* je: equal / zero */

loc_003942A3: ;
    MEM8(esp + 0x1A) = 1;
    goto loc_003942D1;

loc_003942AA: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003942D1; /* jne: not equal / not zero */

loc_003942B2: ;
    eax = MEM32(edi + 0x27C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x003942C1u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_003942C1: ;
    ecx = eax;
    PUSH32(esp, 0x003942C8u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003942C8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003942D1; /* je: equal / zero */

loc_003942CC: ;
    MEM8(esp + 0x1B) = 1;

loc_003942D1: ;
    esi = MEM32(esp + 0x28);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00394123; /* jb: below (unsigned <) */

loc_003942DE: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = esi;
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x1B) = LO8(ebx);
    MEM8(esp + 0x1A) = LO8(ebx);
    MEM8(esp + 0x19) = LO8(ebx);
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    MEM8(esp + 0x17) = LO8(ebx);
    PUSH32(esp, 0x00394303u); RECOMP_ABI_CALL(0x0056BCF2u, sub_0056BCF2); /* call 0x0056BCF2 */

loc_00394303: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_00394441; /* jbe: below or equal (unsigned <=) */

loc_00394311: ;
    goto loc_00394317;

loc_00394313: ;
    esi = MEM32(esp + 0x28);

loc_00394317: ;
    PUSH32(esp, ebp);
    ecx = esi;
    PUSH32(esp, 0x0039431Fu); RECOMP_ABI_CALL(0x0056BCF6u, sub_0056BCF6); /* call 0x0056BCF6 */

loc_0039431F: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0039433F; /* jne: not equal / not zero */

loc_00394325: ;
    eax = MEM32(edi + 0x2CC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394334u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394334: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039433F; /* je: equal / zero */

loc_00394338: ;
    SET_LO8(ebx, 1);
    goto loc_00394434;

loc_0039433F: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394364; /* jne: not equal / not zero */

loc_00394347: ;
    eax = MEM32(edi + 0x30C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394356u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394356: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394364; /* je: equal / zero */

loc_0039435A: ;
    MEM8(esp + 0x15) = 1;
    goto loc_00394434;

loc_00394364: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394389; /* jne: not equal / not zero */

loc_0039436C: ;
    eax = MEM32(edi + 0x34C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x0039437Bu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039437B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394389; /* je: equal / zero */

loc_0039437F: ;
    MEM8(esp + 0x1B) = 1;
    goto loc_00394434;

loc_00394389: ;
    SET_LO8(eax, MEM8(esp + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003943AE; /* jne: not equal / not zero */

loc_00394391: ;
    eax = MEM32(edi + 0x38C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x003943A0u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003943A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003943AE; /* je: equal / zero */

loc_003943A4: ;
    MEM8(esp + 0x1A) = 1;
    goto loc_00394434;

loc_003943AE: ;
    SET_LO8(eax, MEM8(esp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003943D0; /* jne: not equal / not zero */

loc_003943B6: ;
    eax = MEM32(edi + 0x3CC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x003943C5u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003943C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003943D0; /* je: equal / zero */

loc_003943C9: ;
    MEM8(esp + 0x19) = 1;
    goto loc_00394434;

loc_003943D0: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003943F2; /* jne: not equal / not zero */

loc_003943D8: ;
    eax = MEM32(edi + 0x40C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x003943E7u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003943E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003943F2; /* je: equal / zero */

loc_003943EB: ;
    MEM8(esp + 0x18) = 1;
    goto loc_00394434;

loc_003943F2: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394414; /* jne: not equal / not zero */

loc_003943FA: ;
    eax = MEM32(edi + 0x44C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394409u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394409: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394414; /* je: equal / zero */

loc_0039440D: ;
    MEM8(esp + 0x16) = 1;
    goto loc_00394434;

loc_00394414: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394434; /* jne: not equal / not zero */

loc_0039441C: ;
    eax = MEM32(edi + 0x48C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x0039442Bu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039442B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394434; /* je: equal / zero */

loc_0039442F: ;
    MEM8(esp + 0x17) = 1;

loc_00394434: ;
    eax = MEM32(esp + 0x1C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00394313; /* jb: below (unsigned <) */

loc_00394441: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394475; /* je: equal / zero */

loc_00394449: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394475; /* je: equal / zero */

loc_00394451: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394475; /* je: equal / zero */

loc_00394459: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394475; /* je: equal / zero */

loc_0039445D: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394475; /* je: equal / zero */

loc_00394465: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394475; /* je: equal / zero */

loc_0039446D: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394497; /* jne: not equal / not zero */

loc_00394475: ;
    eax = MEM32(esp + 0x24);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00394487: ;
    eax = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00394497: ;
    eax = MEM32(esp + 0x24);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = 1;
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003945B0
 * Original: 0x003945B0 - 0x00394E44 (2196 bytes, 657 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003945B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003945B0: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x38);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x2C) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00394E2D; /* je: equal / zero */

loc_003945CE: ;
    _fa = (uint32_t)(MEM32(ebp)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394E2D; /* jne: not equal / not zero */

loc_003945D8: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = ebp;
    MEM8(esp + 0x2C) = LO8(ebx);
    MEM8(esp + 0x28) = LO8(ebx);
    MEM8(esp + 0x21) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(ebx);
    MEM8(esp + 0x19) = LO8(ebx);
    MEM8(esp + 0x1B) = LO8(ebx);
    MEM8(esp + 0x1D) = LO8(ebx);
    MEM8(esp + 0x26) = LO8(ebx);
    MEM8(esp + 0x1E) = LO8(ebx);
    MEM8(esp + 0x17) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(ebx);
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x13) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    MEM8(esp + 0x18) = LO8(ebx);
    MEM8(esp + 0x25) = LO8(ebx);
    MEM8(esp + 0x27) = LO8(ebx);
    MEM8(esp + 0x20) = LO8(ebx);
    MEM8(esp + 0x22) = LO8(ebx);
    MEM8(esp + 0x24) = LO8(ebx);
    MEM8(esp + 0x1F) = LO8(ebx);
    PUSH32(esp, 0x00394636u); RECOMP_ABI_CALL(0x0056BC9Eu, sub_0056BC9E); /* call 0x0056BC9E */

loc_00394636: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x34) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_003949EE; /* jbe: below or equal (unsigned <=) */

loc_00394646: ;
    eax = MEM32(esp + 0x34);
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x00394652u); RECOMP_ABI_CALL(0x0056BCA2u, sub_0056BCA2); /* call 0x0056BCA2 */

loc_00394652: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00394676; /* jne: not equal / not zero */

loc_00394658: ;
    eax = MEM32(edi + 0x3C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00394664u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_00394664: ;
    ecx = eax;
    PUSH32(esp, 0x0039466Bu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039466B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394676; /* je: equal / zero */

loc_0039466F: ;
    SET_LO8(ebx, 1);
    goto loc_003949D5;

loc_00394676: ;
    SET_LO8(eax, MEM8(esp + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039469F; /* jne: not equal / not zero */

loc_0039467E: ;
    eax = MEM32(edi + 0x7C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0039468Au); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_0039468A: ;
    ecx = eax;
    PUSH32(esp, 0x00394691u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394691: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039469F; /* je: equal / zero */

loc_00394695: ;
    MEM8(esp + 0x28) = 1;
    goto loc_003949D5;

loc_0039469F: ;
    SET_LO8(eax, MEM8(esp + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003946CB; /* jne: not equal / not zero */

loc_003946A7: ;
    eax = MEM32(edi + 0xBC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x003946B6u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_003946B6: ;
    ecx = eax;
    PUSH32(esp, 0x003946BDu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003946BD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003946CB; /* je: equal / zero */

loc_003946C1: ;
    MEM8(esp + 0x21) = 1;
    goto loc_003949D5;

loc_003946CB: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003946F7; /* jne: not equal / not zero */

loc_003946D3: ;
    eax = MEM32(edi + 0xFC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x003946E2u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_003946E2: ;
    ecx = eax;
    PUSH32(esp, 0x003946E9u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003946E9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003946F7; /* je: equal / zero */

loc_003946ED: ;
    MEM8(esp + 0x14) = 1;
    goto loc_003949D5;

loc_003946F7: ;
    SET_LO8(eax, MEM8(esp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394723; /* jne: not equal / not zero */

loc_003946FF: ;
    eax = MEM32(edi + 0x13C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0039470Eu); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_0039470E: ;
    ecx = eax;
    PUSH32(esp, 0x00394715u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394715: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394723; /* je: equal / zero */

loc_00394719: ;
    MEM8(esp + 0x19) = 1;
    goto loc_003949D5;

loc_00394723: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039474F; /* jne: not equal / not zero */

loc_0039472B: ;
    eax = MEM32(edi + 0x17C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0039473Au); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_0039473A: ;
    ecx = eax;
    PUSH32(esp, 0x00394741u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394741: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039474F; /* je: equal / zero */

loc_00394745: ;
    MEM8(esp + 0x1B) = 1;
    goto loc_003949D5;

loc_0039474F: ;
    SET_LO8(eax, MEM8(esp + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039477B; /* jne: not equal / not zero */

loc_00394757: ;
    eax = MEM32(edi + 0x1BC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00394766u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_00394766: ;
    ecx = eax;
    PUSH32(esp, 0x0039476Du); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039476D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039477B; /* je: equal / zero */

loc_00394771: ;
    MEM8(esp + 0x1D) = 1;
    goto loc_003949D5;

loc_0039477B: ;
    SET_LO8(eax, MEM8(esp + 0x26));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003947A7; /* jne: not equal / not zero */

loc_00394783: ;
    eax = MEM32(edi + 0x1FC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00394792u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_00394792: ;
    ecx = eax;
    PUSH32(esp, 0x00394799u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394799: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003947A7; /* je: equal / zero */

loc_0039479D: ;
    MEM8(esp + 0x26) = 1;
    goto loc_003949D5;

loc_003947A7: ;
    SET_LO8(eax, MEM8(esp + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003947D3; /* jne: not equal / not zero */

loc_003947AF: ;
    eax = MEM32(edi + 0x23C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x003947BEu); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_003947BE: ;
    ecx = eax;
    PUSH32(esp, 0x003947C5u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003947C5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003947D3; /* je: equal / zero */

loc_003947C9: ;
    MEM8(esp + 0x1E) = 1;
    goto loc_003949D5;

loc_003947D3: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003947FF; /* jne: not equal / not zero */

loc_003947DB: ;
    eax = MEM32(edi + 0x27C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x003947EAu); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_003947EA: ;
    ecx = eax;
    PUSH32(esp, 0x003947F1u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003947F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003947FF; /* je: equal / zero */

loc_003947F5: ;
    MEM8(esp + 0x17) = 1;
    goto loc_003949D5;

loc_003947FF: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039482B; /* jne: not equal / not zero */

loc_00394807: ;
    eax = MEM32(edi + 0x2BC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00394816u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_00394816: ;
    ecx = eax;
    PUSH32(esp, 0x0039481Du); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039481D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039482B; /* je: equal / zero */

loc_00394821: ;
    MEM8(esp + 0x12) = 1;
    goto loc_003949D5;

loc_0039482B: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394857; /* jne: not equal / not zero */

loc_00394833: ;
    eax = MEM32(edi + 0x2FC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00394842u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_00394842: ;
    ecx = eax;
    PUSH32(esp, 0x00394849u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394849: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394857; /* je: equal / zero */

loc_0039484D: ;
    MEM8(esp + 0x15) = 1;
    goto loc_003949D5;

loc_00394857: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394883; /* jne: not equal / not zero */

loc_0039485F: ;
    eax = MEM32(edi + 0x33C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0039486Eu); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_0039486E: ;
    ecx = eax;
    PUSH32(esp, 0x00394875u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394875: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394883; /* je: equal / zero */

loc_00394879: ;
    MEM8(esp + 0x13) = 1;
    goto loc_003949D5;

loc_00394883: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003948AF; /* jne: not equal / not zero */

loc_0039488B: ;
    eax = MEM32(edi + 0x37C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0039489Au); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_0039489A: ;
    ecx = eax;
    PUSH32(esp, 0x003948A1u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003948A1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003948AF; /* je: equal / zero */

loc_003948A5: ;
    MEM8(esp + 0x16) = 1;
    goto loc_003949D5;

loc_003948AF: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003948DB; /* jne: not equal / not zero */

loc_003948B7: ;
    eax = MEM32(edi + 0x3BC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x003948C6u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_003948C6: ;
    ecx = eax;
    PUSH32(esp, 0x003948CDu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003948CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003948DB; /* je: equal / zero */

loc_003948D1: ;
    MEM8(esp + 0x18) = 1;
    goto loc_003949D5;

loc_003948DB: ;
    SET_LO8(eax, MEM8(esp + 0x25));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394907; /* jne: not equal / not zero */

loc_003948E3: ;
    eax = MEM32(edi + 0x3FC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x003948F2u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_003948F2: ;
    ecx = eax;
    PUSH32(esp, 0x003948F9u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003948F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394907; /* je: equal / zero */

loc_003948FD: ;
    MEM8(esp + 0x25) = 1;
    goto loc_003949D5;

loc_00394907: ;
    SET_LO8(eax, MEM8(esp + 0x27));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394933; /* jne: not equal / not zero */

loc_0039490F: ;
    eax = MEM32(edi + 0x47C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0039491Eu); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_0039491E: ;
    ecx = eax;
    PUSH32(esp, 0x00394925u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394925: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394933; /* je: equal / zero */

loc_00394929: ;
    MEM8(esp + 0x27) = 1;
    goto loc_003949D5;

loc_00394933: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039495C; /* jne: not equal / not zero */

loc_0039493B: ;
    eax = MEM32(edi + 0x43C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0039494Au); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_0039494A: ;
    ecx = eax;
    PUSH32(esp, 0x00394951u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394951: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039495C; /* je: equal / zero */

loc_00394955: ;
    MEM8(esp + 0x20) = 1;
    goto loc_003949D5;

loc_0039495C: ;
    SET_LO8(eax, MEM8(esp + 0x22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394985; /* jne: not equal / not zero */

loc_00394964: ;
    eax = MEM32(edi + 0x4BC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x00394973u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_00394973: ;
    ecx = eax;
    PUSH32(esp, 0x0039497Au); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039497A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394985; /* je: equal / zero */

loc_0039497E: ;
    MEM8(esp + 0x22) = 1;
    goto loc_003949D5;

loc_00394985: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003949AE; /* jne: not equal / not zero */

loc_0039498D: ;
    eax = MEM32(edi + 0x4FC);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x0039499Cu); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_0039499C: ;
    ecx = eax;
    PUSH32(esp, 0x003949A3u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003949A3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003949AE; /* je: equal / zero */

loc_003949A7: ;
    MEM8(esp + 0x24) = 1;
    goto loc_003949D5;

loc_003949AE: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003949D5; /* jne: not equal / not zero */

loc_003949B6: ;
    eax = MEM32(edi + 0x53C);
    PUSH32(esp, eax);
    ecx = esi + 0xC;
    PUSH32(esp, 0x003949C5u); RECOMP_ABI_CALL(0x0056C4C9u, sub_0056C4C9); /* call 0x0056C4C9 */

loc_003949C5: ;
    ecx = eax;
    PUSH32(esp, 0x003949CCu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003949CC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003949D5; /* je: equal / zero */

loc_003949D0: ;
    MEM8(esp + 0x1F) = 1;

loc_003949D5: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x34) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00394646; /* jb: below (unsigned <) */

loc_003949EA: ;
    MEM8(esp + 0x2C) = LO8(ebx);

loc_003949EE: ;
    ecx = MEM32(esp + 0x44);
    MEM8(esp + 0x23) = 0;
    MEM8(esp + 0x18) = 0;
    MEM8(esp + 0x29) = 0;
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x1C) = 0;
    MEM8(esp + 0x1A) = 0;
    MEM8(esp + 0x2B) = 0;
    MEM8(esp + 0x2F) = 0;
    MEM8(esp + 0x2E) = 0;
    MEM8(esp + 0x2D) = 0;
    MEM8(esp + 0x15) = 0;
    MEM8(esp + 0x12) = 0;
    MEM8(esp + 0x17) = 0;
    MEM8(esp + 0x19) = 0;
    MEM8(esp + 0x16) = 0;
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x2A) = 0;
    PUSH32(esp, 0x00394A4Cu); RECOMP_ABI_CALL(0x0056BCF2u, sub_0056BCF2); /* call 0x0056BCF2 */

loc_00394A4C: ;
    ebp = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00394CDC; /* jbe: below or equal (unsigned <=) */

loc_00394A58: ;
    goto loc_00394A60;

    /* nop */

loc_00394A60: ;
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00394A6Au); RECOMP_ABI_CALL(0x0056BCF6u, sub_0056BCF6); /* call 0x0056BCF6 */

loc_00394A6A: ;
    esi = eax;
    SET_LO8(eax, MEM8(esp + 0x23));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394A91; /* jne: not equal / not zero */

loc_00394A74: ;
    eax = MEM32(edi + 0x5BC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394A83u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394A83: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394A91; /* je: equal / zero */

loc_00394A87: ;
    MEM8(esp + 0x23) = 1;
    goto loc_00394CD3;

loc_00394A91: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394AB6; /* jne: not equal / not zero */

loc_00394A99: ;
    eax = MEM32(edi + 0x5FC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394AA8u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394AA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394AB6; /* je: equal / zero */

loc_00394AAC: ;
    MEM8(esp + 0x18) = 1;
    goto loc_00394CD3;

loc_00394AB6: ;
    SET_LO8(eax, MEM8(esp + 0x29));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394ADB; /* jne: not equal / not zero */

loc_00394ABE: ;
    eax = MEM32(edi + 0x63C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394ACDu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394ACD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394ADB; /* je: equal / zero */

loc_00394AD1: ;
    MEM8(esp + 0x29) = 1;
    goto loc_00394CD3;

loc_00394ADB: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394B00; /* jne: not equal / not zero */

loc_00394AE3: ;
    eax = MEM32(edi + 0x67C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394AF2u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394AF2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394B00; /* je: equal / zero */

loc_00394AF6: ;
    MEM8(esp + 0x14) = 1;
    goto loc_00394CD3;

loc_00394B00: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394B25; /* jne: not equal / not zero */

loc_00394B08: ;
    eax = MEM32(edi + 0x6BC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394B17u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394B17: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394B25; /* je: equal / zero */

loc_00394B1B: ;
    MEM8(esp + 0x1C) = 1;
    goto loc_00394CD3;

loc_00394B25: ;
    SET_LO8(eax, MEM8(esp + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394B4A; /* jne: not equal / not zero */

loc_00394B2D: ;
    eax = MEM32(edi + 0x6FC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394B3Cu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394B3C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394B4A; /* je: equal / zero */

loc_00394B40: ;
    MEM8(esp + 0x1A) = 1;
    goto loc_00394CD3;

loc_00394B4A: ;
    SET_LO8(eax, MEM8(esp + 0x2B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394B6F; /* jne: not equal / not zero */

loc_00394B52: ;
    eax = MEM32(edi + 0x73C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394B61u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394B61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394B6F; /* je: equal / zero */

loc_00394B65: ;
    MEM8(esp + 0x2B) = 1;
    goto loc_00394CD3;

loc_00394B6F: ;
    SET_LO8(eax, MEM8(esp + 0x2E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394B94; /* jne: not equal / not zero */

loc_00394B77: ;
    eax = MEM32(edi + 0x7BC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394B86u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394B86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394B94; /* je: equal / zero */

loc_00394B8A: ;
    MEM8(esp + 0x2E) = 1;
    goto loc_00394CD3;

loc_00394B94: ;
    SET_LO8(eax, MEM8(esp + 0x2D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394BB9; /* jne: not equal / not zero */

loc_00394B9C: ;
    eax = MEM32(edi + 0x7FC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394BABu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394BAB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394BB9; /* je: equal / zero */

loc_00394BAF: ;
    MEM8(esp + 0x2D) = 1;
    goto loc_00394CD3;

loc_00394BB9: ;
    SET_LO8(eax, MEM8(esp + 0x2F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394BDE; /* jne: not equal / not zero */

loc_00394BC1: ;
    eax = MEM32(edi + 0x77C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394BD0u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394BD0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394BDE; /* je: equal / zero */

loc_00394BD4: ;
    MEM8(esp + 0x2F) = 1;
    goto loc_00394CD3;

loc_00394BDE: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394C03; /* jne: not equal / not zero */

loc_00394BE6: ;
    eax = MEM32(edi + 0x83C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394BF5u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394BF5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394C03; /* je: equal / zero */

loc_00394BF9: ;
    MEM8(esp + 0x15) = 1;
    goto loc_00394CD3;

loc_00394C03: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394C28; /* jne: not equal / not zero */

loc_00394C0B: ;
    eax = MEM32(edi + 0x87C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394C1Au); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394C1A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394C28; /* je: equal / zero */

loc_00394C1E: ;
    MEM8(esp + 0x12) = 1;
    goto loc_00394CD3;

loc_00394C28: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394C4D; /* jne: not equal / not zero */

loc_00394C30: ;
    eax = MEM32(edi + 0x8BC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394C3Fu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394C3F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394C4D; /* je: equal / zero */

loc_00394C43: ;
    MEM8(esp + 0x17) = 1;
    goto loc_00394CD3;

loc_00394C4D: ;
    SET_LO8(eax, MEM8(esp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394C6F; /* jne: not equal / not zero */

loc_00394C55: ;
    eax = MEM32(edi + 0x8FC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394C64u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394C64: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394C6F; /* je: equal / zero */

loc_00394C68: ;
    MEM8(esp + 0x19) = 1;
    goto loc_00394CD3;

loc_00394C6F: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394C91; /* jne: not equal / not zero */

loc_00394C77: ;
    eax = MEM32(edi + 0x93C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394C86u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394C86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394C91; /* je: equal / zero */

loc_00394C8A: ;
    MEM8(esp + 0x16) = 1;
    goto loc_00394CD3;

loc_00394C91: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394CB3; /* jne: not equal / not zero */

loc_00394C99: ;
    eax = MEM32(edi + 0x97C);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394CA8u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394CA8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394CB3; /* je: equal / zero */

loc_00394CAC: ;
    MEM8(esp + 0x13) = 1;
    goto loc_00394CD3;

loc_00394CB3: ;
    SET_LO8(eax, MEM8(esp + 0x2A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394CD3; /* jne: not equal / not zero */

loc_00394CBB: ;
    eax = MEM32(edi + 0x9BC);
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    PUSH32(esp, 0x00394CCAu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00394CCA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394CD3; /* je: equal / zero */

loc_00394CCE: ;
    MEM8(esp + 0x2A) = 1;

loc_00394CD3: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00394A60; /* jb: below (unsigned <) */

loc_00394CDC: ;
    SET_LO8(eax, MEM8(esp + 0x2C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394CE9: ;
    SET_LO8(eax, MEM8(esp + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394CF5: ;
    SET_LO8(eax, MEM8(esp + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D01: ;
    SET_LO8(eax, MEM8(esp + 0x21));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D0D: ;
    SET_LO8(eax, MEM8(esp + 0x23));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D19: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D25: ;
    SET_LO8(eax, MEM8(esp + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D31: ;
    SET_LO8(eax, MEM8(esp + 0x20));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D3D: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D49: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D55: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D61: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D6D: ;
    SET_LO8(eax, MEM8(esp + 0xF));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D79: ;
    SET_LO8(eax, MEM8(esp + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D85: ;
    SET_LO8(eax, MEM8(esp + 0xE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D91: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394D9D: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394DA5: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394DE0; /* je: equal / zero */

loc_00394DAD: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394E1C; /* jne: not equal / not zero */

loc_00394DB5: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394E1C; /* jne: not equal / not zero */

loc_00394DBD: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394DC5: ;
    SET_LO8(eax, MEM8(esp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394DCD: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x3C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00394DE0: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E00; /* je: equal / zero */

loc_00394DE8: ;
    SET_LO8(ecx, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394DF0: ;
    SET_LO8(ecx, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394DF8: ;
    SET_LO8(ecx, MEM8(esp + 0x22));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394E00: ;
    SET_LO8(ecx, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E31; /* je: equal / zero */

loc_00394E08: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394E0C: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00394E1C; /* je: equal / zero */

loc_00394E14: ;
    SET_LO8(eax, MEM8(esp + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00394E31; /* jne: not equal / not zero */

loc_00394E1C: ;
    eax = MEM32(esp + 0x3C);
    POP32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00394E2D: ;
    MEM32(esp + 0x2C) = esi;

loc_00394E31: ;
    ecx = MEM32(esp + 0x2C);
    eax = MEM32(esp + 0x3C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax) = ecx;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00395070
 * Original: 0x00395070 - 0x00395080 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395070(void)
{

loc_00395070: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00395090
 * Original: 0x00395090 - 0x003950A0 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395090(void)
{

loc_00395090: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003950B0
 * Original: 0x003950B0 - 0x003950C0 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003950B0(void)
{

loc_003950B0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003950D0
 * Original: 0x003950D0 - 0x003950E0 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003950D0(void)
{

loc_003950D0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003950F0
 * Original: 0x003950F0 - 0x00395100 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003950F0(void)
{

loc_003950F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00395110
 * Original: 0x00395110 - 0x00395120 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395110(void)
{

loc_00395110: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00395130
 * Original: 0x00395130 - 0x00395140 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395130(void)
{

loc_00395130: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00395150
 * Original: 0x00395150 - 0x0039515D (13 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395150: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00395160
 * Original: 0x00395160 - 0x00395193 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395160(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395160: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039517D; /* je: equal / zero */

loc_00395169: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0039517D; /* jle: less or equal (signed <=) */

loc_00395170: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0039517Au); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0039517A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0039517D: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003951A0
 * Original: 0x003951A0 - 0x0039520A (106 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003951A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003951A0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003951C2; /* jne: not equal / not zero */

loc_003951B0: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003951BCu); RECOMP_ABI_CALL(0x0001B05Fu, sub_0001B05F); /* call 0x0001B05F */

loc_003951BC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003951C2: ;
    edx = MEM32(edx + 8);
    ecx = MEM32(eax + 4);
    ecx = ecx + ecx * 2;
    edx = edx + ecx * 4;
    ecx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edi = MEM32(edi + 8);
    ecx = ecx + ecx * 2;
    ecx = edi + ecx * 4;
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(ecx + 8) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00395200u); RECOMP_ABI_CALL(0x0056D44Bu, sub_0056D44B); /* call 0x0056D44B */

loc_00395200: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00395230
 * Original: 0x00395230 - 0x00395326 (246 bytes, 89 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_00395230: ;
    edx = MEM32(ecx);
    SET_LO8(eax, MEM8(edx + 0x28));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x18));
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003952DC; /* jne: not equal / not zero */

loc_00395245: ;
    esi = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esi + 0x28));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003952DC; /* jne: not equal / not zero */

loc_00395254: ;
    eax = MEM32(eax + 4);
    esi = MEM32(esi + 8);
    edx = MEM32(edx + 8);
    eax = eax + eax * 2;
    eax = esi + eax * 4;
    esi = MEM32(eax);
    MEM32(esp + 0x10) = esi;
    esi = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 0x18) = eax;
    eax = MEM32(ecx + 4);
    ecx = eax + eax * 2;
    eax = edx + ecx * 4;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    eax = MEM32(eax + 8);
    MEM32(esp + 4) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* ucomiss */
    MEM32(esp + 0xC) = eax;
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 8) = edx;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003952D3; /* jp: parity */

loc_003952A5: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003952D3; /* jp: parity */

loc_003952B6: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003952D3; /* jp: parity */

loc_003952C7: ;
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003952D3: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003952DC: ;
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003952EA; /* jne: not equal / not zero */

loc_003952E4: ;
    esi = ecx;
    edi = eax;
    goto loc_003952EE;

loc_003952EA: ;
    esi = eax;
    edi = ecx;

loc_003952EE: ;
    ecx = MEM32(esi);
    edx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003952F9u); RECOMP_ABI_CALL(0x0056D42Cu, sub_0056D42C); /* call 0x0056D42C */

loc_003952F9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0039531C; /* je: equal / zero */

loc_00395300: ;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edi + 4);
    SET_LO16(eax, MEM16(edx + ecx * 2));
    _fb = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO16(eax)) < (uint32_t)(MEM16(esi + 4)));
    SET_LO16(eax, LO16(eax) - MEM16(esi + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    POP32(esp, edi);
    _cf = (int)((LO16(eax)) != 0);
    SET_LO16(eax, (uint32_t)(-(int32_t)LO16(eax)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0039531C: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00395370
 * Original: 0x00395370 - 0x003953D0 (96 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395370(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00395370: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395392; /* jne: not equal / not zero */

loc_00395380: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0039538Cu); RECOMP_ABI_CALL(0x0002544Cu, sub_0002544C); /* call 0x0002544C */

loc_0039538C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00395392: ;
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + edx * 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edi = MEM32(edi + 8);
    MEM32(edi + ebx * 8) = ebp;
    edx = MEM32(ecx + edx * 8 + 4);
    MEM32(edi + ebx * 8 + 4) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003953C4u); RECOMP_ABI_CALL(0x0056D44Bu, sub_0056D44B); /* call 0x0056D44B */

loc_003953C4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003953F0
 * Original: 0x003953F0 - 0x003954B7 (199 bytes, 77 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003953F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_003953F0: ;
    eax = MEM32(ecx);
    SET_LO8(edx, MEM8(eax + 0x28));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    if (CMP_NE(_fa, _fb)) goto loc_00395470; /* jne: not equal / not zero */

loc_00395402: ;
    edx = MEM32(edi);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x28));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00395470; /* jne: not equal / not zero */

loc_0039540D: ;
    edx = MEM32(edx + 8);
    esi = MEM32(edi + 4);
    edi = MEM32(edx + esi * 8);
    edx = MEM32(edx + esi * 8 + 4);
    ecx = MEM32(ecx + 4);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(edx + ecx * 8);
    ecx = MEM32(edx + ecx * 8 + 4);
    MEM32(esp + 8) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEM32(esp + 0x10) = edi;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x10); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0xC) = ecx;
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00395466; /* jp: parity */

loc_00395448: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00395466; /* jp: parity */

loc_00395459: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00395466: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00395470: ;
    edx = MEM32(eax + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0039547B; /* jne: not equal / not zero */

loc_00395477: ;
    esi = ecx;
    goto loc_0039547F;

loc_0039547B: ;
    esi = edi;
    edi = ecx;

loc_0039547F: ;
    edx = MEM32(esi);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0039548Au); RECOMP_ABI_CALL(0x0056D42Cu, sub_0056D42C); /* call 0x0056D42C */

loc_0039548A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003954AD; /* je: equal / zero */

loc_00395491: ;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edi + 4);
    SET_LO16(eax, MEM16(edx + ecx * 2));
    _fb = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO16(eax)) < (uint32_t)(MEM16(esi + 4)));
    SET_LO16(eax, LO16(eax) - MEM16(esi + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    POP32(esp, edi);
    _cf = (int)((LO16(eax)) != 0);
    SET_LO16(eax, (uint32_t)(-(int32_t)LO16(eax)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003954AD: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0039544E
 * Original: 0x0039544E - 0x003954B7 (105 bytes, 45 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039544E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_0039544E: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x14); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_00395466; /* jp: parity */

loc_00395459: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00395466: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

    esi = ecx;
    goto loc_0039547F;

loc_0039547B: ;
    esi = edi;
    edi = ecx;

loc_0039547F: ;
    edx = MEM32(esi);
    eax = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0039548Au); RECOMP_ABI_CALL(0x0056D42Cu, sub_0056D42C); /* call 0x0056D42C */

loc_0039548A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003954AD; /* je: equal / zero */

loc_00395491: ;
    edx = MEM32(eax + 0x14);
    ecx = MEM32(edi + 4);
    SET_LO16(eax, MEM16(edx + ecx * 2));
    _fb = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO16(eax)) < (uint32_t)(MEM16(esi + 4)));
    SET_LO16(eax, LO16(eax) - MEM16(esi + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    POP32(esp, edi);
    _cf = (int)((LO16(eax)) != 0);
    SET_LO16(eax, (uint32_t)(-(int32_t)LO16(eax)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003954AD: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003954F0
 * Original: 0x003954F0 - 0x00395500 (16 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003954F0(void)
{

loc_003954F0: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00395510
 * Original: 0x00395510 - 0x0039559B (139 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395510: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395536; /* jne: not equal / not zero */

loc_0039551A: ;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, 0x10);
    MEM32(esi + 8) = 4;
    PUSH32(esp, 0x0039552Du); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_0039552D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00395536: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 8);
    ecx = ecx + edx + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00395597; /* jl: less (signed <) */

loc_00395545: ;
    PUSH32(esp, edi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00395554u); RECOMP_ABI_CALL(0x0057484Du, sub_0057484D); /* call 0x0057484D */

loc_00395554: ;
    ecx = MEM32(esi + 4);
    edi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0039557A; /* jle: less or equal (signed <=) */

loc_00395562: ;
    ecx = edi;

loc_00395564: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039556F; /* je: equal / zero */

loc_00395568: ;
    edx = MEM32(esi);
    edx = MEM32(edx + eax * 4);
    MEM32(ecx) = edx;

loc_0039556F: ;
    edx = MEM32(esi + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00395564; /* jl: less (signed <) */

loc_0039557A: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00395589u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_00395589: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(1) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    MEM32(esi) = edi;
    MEM32(esi + 8) = edx;
    POP32(esp, edi);

loc_00395597: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003955C0
 * Original: 0x003955C0 - 0x00395636 (118 bytes, 46 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003955C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003955C0: ;
    eax = ecx;
    ecx = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM8(eax + 0x28) = LO8(edx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00395612; /* je: equal / zero */

loc_00395600: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395612; /* je: equal / zero */

loc_00395605: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395612; /* je: equal / zero */

loc_0039560A: ;
    edi = ecx + 0x18;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00395618;

loc_00395612: ;
    edi = ecx + 0x10;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00395618: ;
    esi = MEM32(ecx);
    MEM32(eax + 0x3C) = esi;
    MEM32(eax + 0x38) = edx;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395629; /* je: equal / zero */

loc_00395626: ;
    MEM32(esi + 0x38) = eax;

loc_00395629: ;
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395631; /* jne: not equal / not zero */

loc_0039562F: ;
    MEM32(edi) = eax;

loc_00395631: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00395660
 * Original: 0x00395660 - 0x003956D6 (118 bytes, 46 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395660: ;
    eax = ecx;
    ecx = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM8(eax + 0x28) = LO8(edx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003956B2; /* je: equal / zero */

loc_003956A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003956B2; /* je: equal / zero */

loc_003956A5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003956B2; /* je: equal / zero */

loc_003956AA: ;
    edi = ecx + 0x18;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003956B8;

loc_003956B2: ;
    edi = ecx + 0x10;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003956B8: ;
    esi = MEM32(ecx);
    MEM32(eax + 0x3C) = esi;
    MEM32(eax + 0x38) = edx;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003956C9; /* je: equal / zero */

loc_003956C6: ;
    MEM32(esi + 0x38) = eax;

loc_003956C9: ;
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003956D1; /* jne: not equal / not zero */

loc_003956CF: ;
    MEM32(edi) = eax;

loc_003956D1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00395700
 * Original: 0x00395700 - 0x00395776 (118 bytes, 46 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395700: ;
    eax = ecx;
    ecx = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM8(eax + 0x28) = LO8(edx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00395752; /* je: equal / zero */

loc_00395740: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395752; /* je: equal / zero */

loc_00395745: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395752; /* je: equal / zero */

loc_0039574A: ;
    edi = ecx + 0x18;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00395758;

loc_00395752: ;
    edi = ecx + 0x10;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00395758: ;
    esi = MEM32(ecx);
    MEM32(eax + 0x3C) = esi;
    MEM32(eax + 0x38) = edx;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395769; /* je: equal / zero */

loc_00395766: ;
    MEM32(esi + 0x38) = eax;

loc_00395769: ;
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395771; /* jne: not equal / not zero */

loc_0039576F: ;
    MEM32(edi) = eax;

loc_00395771: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003957A0
 * Original: 0x003957A0 - 0x00395816 (118 bytes, 46 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003957A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003957A0: ;
    eax = ecx;
    ecx = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM8(eax + 0x28) = LO8(edx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003957F2; /* je: equal / zero */

loc_003957E0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003957F2; /* je: equal / zero */

loc_003957E5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003957F2; /* je: equal / zero */

loc_003957EA: ;
    edi = ecx + 0x18;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003957F8;

loc_003957F2: ;
    edi = ecx + 0x10;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003957F8: ;
    esi = MEM32(ecx);
    MEM32(eax + 0x3C) = esi;
    MEM32(eax + 0x38) = edx;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395809; /* je: equal / zero */

loc_00395806: ;
    MEM32(esi + 0x38) = eax;

loc_00395809: ;
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395811; /* jne: not equal / not zero */

loc_0039580F: ;
    MEM32(edi) = eax;

loc_00395811: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00395840
 * Original: 0x00395840 - 0x003958B6 (118 bytes, 46 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395840: ;
    eax = ecx;
    ecx = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM8(eax + 0x28) = LO8(edx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00395892; /* je: equal / zero */

loc_00395880: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395892; /* je: equal / zero */

loc_00395885: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395892; /* je: equal / zero */

loc_0039588A: ;
    edi = ecx + 0x18;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00395898;

loc_00395892: ;
    edi = ecx + 0x10;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00395898: ;
    esi = MEM32(ecx);
    MEM32(eax + 0x3C) = esi;
    MEM32(eax + 0x38) = edx;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003958A9; /* je: equal / zero */

loc_003958A6: ;
    MEM32(esi + 0x38) = eax;

loc_003958A9: ;
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003958B1; /* jne: not equal / not zero */

loc_003958AF: ;
    MEM32(edi) = eax;

loc_003958B1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003958E0
 * Original: 0x003958E0 - 0x00395956 (118 bytes, 46 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003958E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003958E0: ;
    eax = ecx;
    ecx = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM8(eax + 0x28) = LO8(edx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00395932; /* je: equal / zero */

loc_00395920: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395932; /* je: equal / zero */

loc_00395925: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395932; /* je: equal / zero */

loc_0039592A: ;
    edi = ecx + 0x18;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00395938;

loc_00395932: ;
    edi = ecx + 0x10;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00395938: ;
    esi = MEM32(ecx);
    MEM32(eax + 0x3C) = esi;
    MEM32(eax + 0x38) = edx;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395949; /* je: equal / zero */

loc_00395946: ;
    MEM32(esi + 0x38) = eax;

loc_00395949: ;
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395951; /* jne: not equal / not zero */

loc_0039594F: ;
    MEM32(edi) = eax;

loc_00395951: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00395980
 * Original: 0x00395980 - 0x003959F6 (118 bytes, 46 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395980: ;
    eax = ecx;
    ecx = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM8(eax + 0x28) = LO8(edx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003959D2; /* je: equal / zero */

loc_003959C0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003959D2; /* je: equal / zero */

loc_003959C5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003959D2; /* je: equal / zero */

loc_003959CA: ;
    edi = ecx + 0x18;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003959D8;

loc_003959D2: ;
    edi = ecx + 0x10;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003959D8: ;
    esi = MEM32(ecx);
    MEM32(eax + 0x3C) = esi;
    MEM32(eax + 0x38) = edx;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003959E9; /* je: equal / zero */

loc_003959E6: ;
    MEM32(esi + 0x38) = eax;

loc_003959E9: ;
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003959F1; /* jne: not equal / not zero */

loc_003959EF: ;
    MEM32(edi) = eax;

loc_003959F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00395A20
 * Original: 0x00395A20 - 0x00395A64 (68 bytes, 26 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395A20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395A20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    edx = MEM32(eax + 0x30);
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    _fa = (uint32_t)(MEM32(edx * 4 + 0x8DCFB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx * 4 + 0x8DCFB8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395A45; /* je: equal / zero */

loc_00395A36: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00395A42u); RECOMP_ABI_CALL(0x0056D3F4u, sub_0056D3F4); /* call 0x0056D3F4 */

loc_00395A42: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00395A45: ;
    ecx = MEM32(esi);
    edi = MEM32(ecx + 0x30);
    esi = MEM32(esi + 4);
    eax = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0x34);
    MEM32(eax + 8) = edi;
    POP32(esp, edi);
    MEM32(eax + 4) = esi;
    MEM32(eax) = ecx;
    MEM32(eax + 0xC) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00395A80
 * Original: 0x00395A80 - 0x00395AA3 (35 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395A80(void)
{

loc_00395A80: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edx);
    edx = MEM32(eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00395A9Du); RECOMP_ABI_CALL(0x00013F8Au, sub_00013F8A); /* call 0x00013F8A */

loc_00395A9D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00395AB0
 * Original: 0x00395AB0 - 0x00395B26 (118 bytes, 46 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395AB0: ;
    eax = ecx;
    ecx = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM8(eax + 0x28) = LO8(edx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00395B02; /* je: equal / zero */

loc_00395AF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395B02; /* je: equal / zero */

loc_00395AF5: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395B02; /* je: equal / zero */

loc_00395AFA: ;
    edi = ecx + 0x18;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00395B08;

loc_00395B02: ;
    edi = ecx + 0x10;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00395B08: ;
    esi = MEM32(ecx);
    MEM32(eax + 0x3C) = esi;
    MEM32(eax + 0x38) = edx;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395B19; /* je: equal / zero */

loc_00395B16: ;
    MEM32(esi + 0x38) = eax;

loc_00395B19: ;
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395B21; /* jne: not equal / not zero */

loc_00395B1F: ;
    MEM32(edi) = eax;

loc_00395B21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00395B50
 * Original: 0x00395B50 - 0x00395BC6 (118 bytes, 46 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00395B50: ;
    eax = ecx;
    ecx = MEM32(esp + 0xC);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 0x10) = ecx;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    MEM32(eax + 0x14) = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, edi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = esi;
    MEM32(eax + 0x18) = edx;
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x24) = edx;
    MEM8(eax + 0x28) = LO8(edx);
    MEM32(eax + 0x2C) = ecx;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00395BA2; /* je: equal / zero */

loc_00395B90: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395BA2; /* je: equal / zero */

loc_00395B95: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395BA2; /* je: equal / zero */

loc_00395B9A: ;
    edi = ecx + 0x18;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00395BA8;

loc_00395BA2: ;
    edi = ecx + 0x10;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00395BA8: ;
    esi = MEM32(ecx);
    MEM32(eax + 0x3C) = esi;
    MEM32(eax + 0x38) = edx;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395BB9; /* je: equal / zero */

loc_00395BB6: ;
    MEM32(esi + 0x38) = eax;

loc_00395BB9: ;
    MEM32(ecx) = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395BC1; /* jne: not equal / not zero */

loc_00395BBF: ;
    MEM32(edi) = eax;

loc_00395BC1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00395BF0
 * Original: 0x00395BF0 - 0x00395C8E (158 bytes, 66 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00395BF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi);
    SET_LO8(ecx, MEM8(eax + 0x28));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00395C5C; /* jne: not equal / not zero */

loc_00395C02: ;
    ecx = MEM32(esi);
    SET_LO8(edx, MEM8(ecx + 0x28));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00395C5C; /* jne: not equal / not zero */

loc_00395C0B: ;
    eax = MEM32(eax + 8);
    edx = MEM32(edi + 4);
    edx = MEM32(eax + edx * 4);
    eax = MEM32(esi + 8);
    MEM32(esp + 8) = edx;
    edx = MEM32(ecx + 0x2C);
    edx = MEM32(edx + 4);
    ecx = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    edx = ecx + edx * 4;
    PUSH32(esp, edx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8DCFB8); PUSH32(esp, 0x00395C38u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00395C31u); } /* indirect call */
    }

loc_00395C38: ;
    edx = MEM32(esp + 0x1C);
    MEM32(esp + 0x1C) = edx;
    ecx = esp + 0x1C;
    esi = MEM32(ecx);
    edx = esp + 0x14;
    eax = MEM32(edx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(esi));
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00395C5C: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00395C65u); RECOMP_ABI_CALL(0x0056D42Cu, sub_0056D42C); /* call 0x0056D42C */

loc_00395C65: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00395C86; /* je: equal / zero */

loc_00395C6C: ;
    eax = MEM32(eax + 0x14);
    edx = MEM32(edi + 4);
    SET_LO16(eax, MEM16(eax + edx * 2));
    _fb = (uint32_t)(MEM16(esi + 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO16(eax)) < (uint32_t)(MEM16(esi + 4)));
    SET_LO16(eax, LO16(eax) - MEM16(esi + 4));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    POP32(esp, edi);
    _cf = (int)((LO16(eax)) != 0);
    SET_LO16(eax, (uint32_t)(-(int32_t)LO16(eax)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    POP32(esp, esi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00395C86: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00395CC0
 * Original: 0x00395CC0 - 0x00395D1C (92 bytes, 41 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395CC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00395CC0: ;
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(ebx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
    esi = edx;
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(ecx + 4);
    ebx = MEM32(edi);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        esi = _sv << _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ebx;
    ebx = MEM32(edi + 4);
    MEM32(esi + 4) = ebx;
    ebx = MEM32(edi + 8);
    MEM32(esi + 8) = ebx;
    edi = MEM32(edi + 0xC);
    MEM32(esi + 0xC) = edi;
    SET_LO8(ebx, MEM8(eax + 0x28));
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00395D19; /* je: equal / zero */

loc_00395D04: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00395D16u); RECOMP_ABI_CALL(0x0056D507u, sub_0056D507); /* call 0x0056D507 */

loc_00395D16: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00395D19: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00395D40
 * Original: 0x00395D40 - 0x0039633A (1530 bytes, 474 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00395D40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00395D40: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00395D4Du); RECOMP_ABI_CALL(0x0056D74Eu, sub_0056D74E); /* call 0x0056D74E */

loc_00395D4D: ;
    MEM32(esi) = 0x8331CC;
    ecx = esi + 0x28;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = 2;
    MEM32(ecx + 0x10) = 0x8331BC;
    MEM32(ecx + 0x14) = 0x82A144;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395D9D; /* je: equal / zero */

loc_00395D9A: ;
    MEM32(edx + 0x38) = ecx;

loc_00395D9D: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395DA8; /* jne: not equal / not zero */

loc_00395DA5: ;
    MEM32(esi + 0x10) = ecx;

loc_00395DA8: ;
    ecx = esi + 0x68;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = 0x8331B4;
    MEM32(ecx + 0x14) = 0x829C64;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395DEC; /* je: equal / zero */

loc_00395DE9: ;
    MEM32(edx + 0x38) = ecx;

loc_00395DEC: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395DF7; /* jne: not equal / not zero */

loc_00395DF4: ;
    MEM32(esi + 0x10) = ecx;

loc_00395DF7: ;
    ecx = esi + 0xA8;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = 1;
    ebp = 0x7CFB50;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x82A168;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395E46; /* je: equal / zero */

loc_00395E43: ;
    MEM32(edx + 0x38) = ecx;

loc_00395E46: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395E51; /* jne: not equal / not zero */

loc_00395E4E: ;
    MEM32(esi + 0x10) = ecx;

loc_00395E51: ;
    ecx = esi + 0xE8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = 0x8331B4;
    MEM32(ecx + 0x14) = 0x829C5C;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395E98; /* je: equal / zero */

loc_00395E95: ;
    MEM32(edx + 0x38) = ecx;

loc_00395E98: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395EA3; /* jne: not equal / not zero */

loc_00395EA0: ;
    MEM32(esi + 0x10) = ecx;

loc_00395EA3: ;
    ecx = esi + 0x128;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x8331A4;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395EE6; /* je: equal / zero */

loc_00395EE3: ;
    MEM32(edx + 0x38) = ecx;

loc_00395EE6: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395EF1; /* jne: not equal / not zero */

loc_00395EEE: ;
    MEM32(esi + 0x10) = ecx;

loc_00395EF1: ;
    ecx = esi + 0x168;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = 0x83319C;
    MEM32(ecx + 0x14) = 0x82AE08;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395F38; /* je: equal / zero */

loc_00395F35: ;
    MEM32(edx + 0x38) = ecx;

loc_00395F38: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395F43; /* jne: not equal / not zero */

loc_00395F40: ;
    MEM32(esi + 0x10) = ecx;

loc_00395F43: ;
    ecx = esi + 0x1A8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x82ADFC;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395F86; /* je: equal / zero */

loc_00395F83: ;
    MEM32(edx + 0x38) = ecx;

loc_00395F86: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395F91; /* jne: not equal / not zero */

loc_00395F8E: ;
    MEM32(esi + 0x10) = ecx;

loc_00395F91: ;
    ecx = esi + 0x1E8;
    edx = 0x82A09C;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00395FD5; /* je: equal / zero */

loc_00395FD2: ;
    MEM32(edx + 0x38) = ecx;

loc_00395FD5: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00395FE0; /* jne: not equal / not zero */

loc_00395FDD: ;
    MEM32(esi + 0x10) = ecx;

loc_00395FE0: ;
    ecx = esi + 0x228;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x82A158;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396023; /* je: equal / zero */

loc_00396020: ;
    MEM32(edx + 0x38) = ecx;

loc_00396023: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039602E; /* jne: not equal / not zero */

loc_0039602B: ;
    MEM32(esi + 0x10) = ecx;

loc_0039602E: ;
    ecx = esi + 0x268;
    ebp = 0x833194;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = 2;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x833184;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039607A; /* je: equal / zero */

loc_00396077: ;
    MEM32(edx + 0x38) = ecx;

loc_0039607A: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396085; /* jne: not equal / not zero */

loc_00396082: ;
    MEM32(esi + 0x10) = ecx;

loc_00396085: ;
    ecx = esi + 0x2B8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = 5;
    MEM32(ecx + 0x10) = 0x83316C;
    MEM32(ecx + 0x14) = 0x833154;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003960D0; /* je: equal / zero */

loc_003960CD: ;
    MEM32(edx + 0x38) = ecx;

loc_003960D0: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003960DB; /* jne: not equal / not zero */

loc_003960D8: ;
    MEM32(esi + 0x18) = ecx;

loc_003960DB: ;
    ecx = esi + 0x2F8;
    edi = 3;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = 0x8331B4;
    MEM32(ecx + 0x14) = 0x829C64;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396127; /* je: equal / zero */

loc_00396124: ;
    MEM32(edx + 0x38) = ecx;

loc_00396127: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396132; /* jne: not equal / not zero */

loc_0039612F: ;
    MEM32(esi + 0x18) = ecx;

loc_00396132: ;
    ecx = esi + 0x338;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = 0x8331B4;
    MEM32(ecx + 0x14) = 0x829C5C;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396179; /* je: equal / zero */

loc_00396176: ;
    MEM32(edx + 0x38) = ecx;

loc_00396179: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396184; /* jne: not equal / not zero */

loc_00396181: ;
    MEM32(esi + 0x18) = ecx;

loc_00396184: ;
    ecx = esi + 0x378;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = 0x83319C;
    MEM32(ecx + 0x14) = 0x82AE08;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003961CB; /* je: equal / zero */

loc_003961C8: ;
    MEM32(edx + 0x38) = ecx;

loc_003961CB: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003961D6; /* jne: not equal / not zero */

loc_003961D3: ;
    MEM32(esi + 0x18) = ecx;

loc_003961D6: ;
    ecx = esi + 0x3B8;
    edx = 0x82A09C;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039621A; /* je: equal / zero */

loc_00396217: ;
    MEM32(edx + 0x38) = ecx;

loc_0039621A: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396225; /* jne: not equal / not zero */

loc_00396222: ;
    MEM32(esi + 0x18) = ecx;

loc_00396225: ;
    ecx = esi + 0x3F8;
    edi = 5;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x833184;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039626D; /* je: equal / zero */

loc_0039626A: ;
    MEM32(edx + 0x38) = ecx;

loc_0039626D: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396278; /* jne: not equal / not zero */

loc_00396275: ;
    MEM32(esi + 0x18) = ecx;

loc_00396278: ;
    ecx = esi + 0x438;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = 4;
    MEM32(ecx + 0x10) = 0x83314C;
    MEM32(ecx + 0x14) = 0x83313C;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003962C3; /* je: equal / zero */

loc_003962C0: ;
    MEM32(edx + 0x38) = ecx;

loc_003962C3: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003962CE; /* jne: not equal / not zero */

loc_003962CB: ;
    MEM32(esi + 0x18) = ecx;

loc_003962CE: ;
    ecx = esi + 0x478;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x10) = 0x7CFB50;
    MEM32(ecx + 0x14) = 0x82A150;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    POP32(esp, edi);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00396317; /* je: equal / zero */

loc_00396314: ;
    MEM32(edx + 0x38) = ecx;

loc_00396317: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396322; /* jne: not equal / not zero */

loc_0039631F: ;
    MEM32(esi + 0x18) = ecx;

loc_00396322: ;
    MEM32(esi + 0x4C8) = eax;
    MEM32(esi + 0x4CC) = eax;
    MEM32(esi + 0x4D0) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003964C0
 * Original: 0x003964C0 - 0x003964CC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003964C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003964C0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003964CB; /* je: equal / zero */

loc_003964C4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003964CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003964C8u); } /* indirect call */
    }

loc_003964CB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003964D0
 * Original: 0x003964D0 - 0x003964D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003964D0(void)
{

loc_003964D0: ;
    eax = 0x8331F8;
    esp += 4; return; /* ret */

}

/**
 * sub_003964E0
 * Original: 0x003964E0 - 0x003964E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003964E0(void)
{

loc_003964E0: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_003964F0
 * Original: 0x003964F0 - 0x00396517 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003964F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003964F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003964F8u); RECOMP_ABI_CALL(0x0056D785u, sub_0056D785); /* call 0x0056D785 */

loc_003964F8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00396511; /* je: equal / zero */

loc_003964FF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396511; /* je: equal / zero */

loc_00396503: ;
    PUSH32(esp, 0x4D4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0039650Eu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0039650E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00396511: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00396520
 * Original: 0x00396520 - 0x00396544 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00396520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00396520: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x4D4);
    PUSH32(esp, 0x00396530u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_00396530: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396541; /* je: equal / zero */

loc_00396537: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00396540u); RECOMP_ABI_CALL(0x00017EC3u, sub_00017EC3); /* call 0x00017EC3 */

loc_00396540: ;
    esp += 4; return; /* ret */

loc_00396541: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00396550
 * Original: 0x00396550 - 0x003965C5 (117 bytes, 40 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00396550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00396550: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x4D0);
    eax = edx;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + 0x4D0) = edx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x10);
    esi = MEM32(eax);
    edi = esi + 1;
    MEM32(eax) = edi;
    ebx = MEM32(ecx + 0x440);
    edi = edx + -1;
    MEM16(ebx + esi * 2) = LO16(edi);
    esi = MEM32(eax);
    if ((_fa != 0)) goto loc_0039659F; /* jne: not equal / not zero */

loc_0039658A: ;
    edi = esi + 1;
    MEM32(eax) = edi;
    ecx = MEM32(ecx + 0x440);
    POP32(esp, edi);
    MEM16(ecx + esi * 2) = LO16(edx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0039659F: ;
    ebx = esi + 1;
    MEM32(eax) = ebx;
    ebx = MEM32(ecx + 0x440);
    MEM16(ebx + esi * 2) = LO16(edi);
    esi = MEM32(eax);
    edi = esi + 1;
    MEM32(eax) = edi;
    eax = MEM32(ecx + 0x440);
    POP32(esp, edi);
    MEM16(eax + esi * 2) = LO16(edx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003965F0
 * Original: 0x003965F0 - 0x003972A2 (3250 bytes, 1011 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003965F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003965F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x003965FEu); RECOMP_ABI_CALL(0x0056D74Eu, sub_0056D74E); /* call 0x0056D74E */

loc_003965FE: ;
    MEM32(esi) = 0x833360;
    ecx = esi + 0x28;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 2;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = 0x8331BC;
    MEM32(ecx + 0x14) = 0x82A144;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039664F; /* je: equal / zero */

loc_0039664C: ;
    MEM32(edx + 0x38) = ecx;

loc_0039664F: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039665A; /* jne: not equal / not zero */

loc_00396657: ;
    MEM32(esi + 0x10) = ecx;

loc_0039665A: ;
    ecx = esi + 0x68;
    PUSH32(esp, ebp);
    ebp = 0x8331B4;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x829C64;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003966A0; /* je: equal / zero */

loc_0039669D: ;
    MEM32(edx + 0x38) = ecx;

loc_003966A0: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003966AB; /* jne: not equal / not zero */

loc_003966A8: ;
    MEM32(esi + 0x10) = ecx;

loc_003966AB: ;
    ecx = esi + 0xA8;
    PUSH32(esp, edi);
    edi = 1;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = 0x7CFB50;
    MEM32(ecx + 0x14) = 0x82A168;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003966F8; /* je: equal / zero */

loc_003966F5: ;
    MEM32(edx + 0x38) = ecx;

loc_003966F8: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396703; /* jne: not equal / not zero */

loc_00396700: ;
    MEM32(esi + 0x10) = ecx;

loc_00396703: ;
    ecx = esi + 0xE8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x829C5C;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396746; /* je: equal / zero */

loc_00396743: ;
    MEM32(edx + 0x38) = ecx;

loc_00396746: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396751; /* jne: not equal / not zero */

loc_0039674E: ;
    MEM32(esi + 0x10) = ecx;

loc_00396751: ;
    ecx = esi + 0x128;
    ebp = 0x7CFB50;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x8331A4;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396799; /* je: equal / zero */

loc_00396796: ;
    MEM32(edx + 0x38) = ecx;

loc_00396799: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003967A4; /* jne: not equal / not zero */

loc_003967A1: ;
    MEM32(esi + 0x10) = ecx;

loc_003967A4: ;
    ecx = esi + 0x168;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = 0x83319C;
    MEM32(ecx + 0x14) = 0x82AE08;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003967EB; /* je: equal / zero */

loc_003967E8: ;
    MEM32(edx + 0x38) = ecx;

loc_003967EB: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003967F6; /* jne: not equal / not zero */

loc_003967F3: ;
    MEM32(esi + 0x10) = ecx;

loc_003967F6: ;
    ecx = esi + 0x1A8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x82ADFC;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396839; /* je: equal / zero */

loc_00396836: ;
    MEM32(edx + 0x38) = ecx;

loc_00396839: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396844; /* jne: not equal / not zero */

loc_00396841: ;
    MEM32(esi + 0x10) = ecx;

loc_00396844: ;
    ecx = esi + 0x1E8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x833350;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396887; /* je: equal / zero */

loc_00396884: ;
    MEM32(edx + 0x38) = ecx;

loc_00396887: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396892; /* jne: not equal / not zero */

loc_0039688F: ;
    MEM32(esi + 0x10) = ecx;

loc_00396892: ;
    ecx = esi + 0x228;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x833340;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003968D5; /* je: equal / zero */

loc_003968D2: ;
    MEM32(edx + 0x38) = ecx;

loc_003968D5: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003968E0; /* jne: not equal / not zero */

loc_003968DD: ;
    MEM32(esi + 0x10) = ecx;

loc_003968E0: ;
    ecx = esi + 0x268;
    edx = 0x82A09C;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396924; /* je: equal / zero */

loc_00396921: ;
    MEM32(edx + 0x38) = ecx;

loc_00396924: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039692F; /* jne: not equal / not zero */

loc_0039692C: ;
    MEM32(esi + 0x10) = ecx;

loc_0039692F: ;
    ecx = esi + 0x2A8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x82A158;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396972; /* je: equal / zero */

loc_0039696F: ;
    MEM32(edx + 0x38) = ecx;

loc_00396972: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039697D; /* jne: not equal / not zero */

loc_0039697A: ;
    MEM32(esi + 0x10) = ecx;

loc_0039697D: ;
    ecx = esi + 0x2E8;
    ebp = 0x83319C;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x833334;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003969C5; /* je: equal / zero */

loc_003969C2: ;
    MEM32(edx + 0x38) = ecx;

loc_003969C5: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003969D0; /* jne: not equal / not zero */

loc_003969CD: ;
    MEM32(esi + 0x10) = ecx;

loc_003969D0: ;
    ecx = esi + 0x328;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x833328;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396A13; /* je: equal / zero */

loc_00396A10: ;
    MEM32(edx + 0x38) = ecx;

loc_00396A13: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396A1E; /* jne: not equal / not zero */

loc_00396A1B: ;
    MEM32(esi + 0x10) = ecx;

loc_00396A1E: ;
    ecx = esi + 0x368;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = 0x833194;
    MEM32(ecx + 0x14) = 0x833314;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396A65; /* je: equal / zero */

loc_00396A62: ;
    MEM32(edx + 0x38) = ecx;

loc_00396A65: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396A70; /* jne: not equal / not zero */

loc_00396A6D: ;
    MEM32(esi + 0x10) = ecx;

loc_00396A70: ;
    ecx = esi + 0x3A8;
    ebp = 0x833184;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = 0x833194;
    MEM32(ecx + 0x14) = ebp;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396AB8; /* je: equal / zero */

loc_00396AB5: ;
    MEM32(edx + 0x38) = ecx;

loc_00396AB8: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396AC3; /* jne: not equal / not zero */

loc_00396AC0: ;
    MEM32(esi + 0x10) = ecx;

loc_00396AC3: ;
    ecx = esi + 0x3E8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = 0x7CFB50;
    MEM32(ecx + 0x14) = 0x833300;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396B0A; /* je: equal / zero */

loc_00396B07: ;
    MEM32(edx + 0x38) = ecx;

loc_00396B0A: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396B15; /* jne: not equal / not zero */

loc_00396B12: ;
    MEM32(esi + 0x10) = ecx;

loc_00396B15: ;
    ecx = esi + 0x428;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = 0x7CFB50;
    MEM32(ecx + 0x14) = 0x8332EC;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396B5C; /* je: equal / zero */

loc_00396B59: ;
    MEM32(edx + 0x38) = ecx;

loc_00396B5C: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396B67; /* jne: not equal / not zero */

loc_00396B64: ;
    MEM32(esi + 0x10) = ecx;

loc_00396B67: ;
    ecx = esi + 0x468;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = 0x7CFB50;
    MEM32(ecx + 0x14) = 0x8332DC;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396BAE; /* je: equal / zero */

loc_00396BAB: ;
    MEM32(edx + 0x38) = ecx;

loc_00396BAE: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396BB9; /* jne: not equal / not zero */

loc_00396BB6: ;
    MEM32(esi + 0x10) = ecx;

loc_00396BB9: ;
    ecx = esi + 0x4A8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = 0x7CFB50;
    MEM32(ecx + 0x14) = 0x8332C4;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396C00; /* je: equal / zero */

loc_00396BFD: ;
    MEM32(edx + 0x38) = ecx;

loc_00396C00: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396C0B; /* jne: not equal / not zero */

loc_00396C08: ;
    MEM32(esi + 0x10) = ecx;

loc_00396C0B: ;
    ecx = esi + 0x4E8;
    edi = 0x833194;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = edi;
    MEM32(ecx + 0x14) = 0x8332B0;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396C53; /* je: equal / zero */

loc_00396C50: ;
    MEM32(edx + 0x38) = ecx;

loc_00396C53: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396C5E; /* jne: not equal / not zero */

loc_00396C5B: ;
    MEM32(esi + 0x10) = ecx;

loc_00396C5E: ;
    ecx = esi + 0x528;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = 0x8332A8;
    MEM32(ecx + 0x14) = 0x833294;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396CA5; /* je: equal / zero */

loc_00396CA2: ;
    MEM32(edx + 0x38) = ecx;

loc_00396CA5: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396CB0; /* jne: not equal / not zero */

loc_00396CAD: ;
    MEM32(esi + 0x10) = ecx;

loc_00396CB0: ;
    ecx = esi + 0x568;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = edi;
    MEM32(ecx + 0x14) = 0x833288;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x14);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396CF3; /* je: equal / zero */

loc_00396CF0: ;
    MEM32(edx + 0x38) = ecx;

loc_00396CF3: ;
    MEM32(esi + 0x14) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396CFE; /* jne: not equal / not zero */

loc_00396CFB: ;
    MEM32(esi + 0x10) = ecx;

loc_00396CFE: ;
    ecx = esi + 0x5A8;
    ebx = 5;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = 0x83316C;
    MEM32(ecx + 0x14) = 0x833154;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396D4A; /* je: equal / zero */

loc_00396D47: ;
    MEM32(edx + 0x38) = ecx;

loc_00396D4A: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396D55; /* jne: not equal / not zero */

loc_00396D52: ;
    MEM32(esi + 0x18) = ecx;

loc_00396D55: ;
    ecx = esi + 0x5E8;
    edi = 3;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = 0x8331B4;
    MEM32(ecx + 0x14) = 0x829C64;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396DA1; /* je: equal / zero */

loc_00396D9E: ;
    MEM32(edx + 0x38) = ecx;

loc_00396DA1: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396DAC; /* jne: not equal / not zero */

loc_00396DA9: ;
    MEM32(esi + 0x18) = ecx;

loc_00396DAC: ;
    ecx = esi + 0x628;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = 0x8331B4;
    MEM32(ecx + 0x14) = 0x829C5C;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396DF3; /* je: equal / zero */

loc_00396DF0: ;
    MEM32(edx + 0x38) = ecx;

loc_00396DF3: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396DFE; /* jne: not equal / not zero */

loc_00396DFB: ;
    MEM32(esi + 0x18) = ecx;

loc_00396DFE: ;
    ecx = esi + 0x668;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = 0x83319C;
    MEM32(ecx + 0x14) = 0x82AE08;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396E45; /* je: equal / zero */

loc_00396E42: ;
    MEM32(edx + 0x38) = ecx;

loc_00396E45: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396E50; /* jne: not equal / not zero */

loc_00396E4D: ;
    MEM32(esi + 0x18) = ecx;

loc_00396E50: ;
    ecx = esi + 0x6A8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = 0x83319C;
    MEM32(ecx + 0x14) = 0x833284;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396E97; /* je: equal / zero */

loc_00396E94: ;
    MEM32(edx + 0x38) = ecx;

loc_00396E97: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396EA2; /* jne: not equal / not zero */

loc_00396E9F: ;
    MEM32(esi + 0x18) = ecx;

loc_00396EA2: ;
    ecx = esi + 0x6E8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = 0x83319C;
    MEM32(ecx + 0x14) = 0x833280;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396EE9; /* je: equal / zero */

loc_00396EE6: ;
    MEM32(edx + 0x38) = ecx;

loc_00396EE9: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396EF4; /* jne: not equal / not zero */

loc_00396EF1: ;
    MEM32(esi + 0x18) = ecx;

loc_00396EF4: ;
    ecx = esi + 0x728;
    edx = 0x82A09C;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = edi;
    MEM32(ecx + 0x10) = edx;
    MEM32(ecx + 0x14) = edx;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396F38; /* je: equal / zero */

loc_00396F35: ;
    MEM32(edx + 0x38) = ecx;

loc_00396F38: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396F43; /* jne: not equal / not zero */

loc_00396F40: ;
    MEM32(esi + 0x18) = ecx;

loc_00396F43: ;
    ecx = esi + 0x768;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = 0x833194;
    MEM32(ecx + 0x14) = 0x833270;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396F8A; /* je: equal / zero */

loc_00396F87: ;
    MEM32(edx + 0x38) = ecx;

loc_00396F8A: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396F95; /* jne: not equal / not zero */

loc_00396F92: ;
    MEM32(esi + 0x18) = ecx;

loc_00396F95: ;
    ecx = esi + 0x7A8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = 0x833194;
    MEM32(ecx + 0x14) = 0x833314;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00396FDC; /* je: equal / zero */

loc_00396FD9: ;
    MEM32(edx + 0x38) = ecx;

loc_00396FDC: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00396FE7; /* jne: not equal / not zero */

loc_00396FE4: ;
    MEM32(esi + 0x18) = ecx;

loc_00396FE7: ;
    ecx = esi + 0x7E8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = 0x833194;
    MEM32(ecx + 0x14) = ebp;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039702A; /* je: equal / zero */

loc_00397027: ;
    MEM32(edx + 0x38) = ecx;

loc_0039702A: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397035; /* jne: not equal / not zero */

loc_00397032: ;
    MEM32(esi + 0x18) = ecx;

loc_00397035: ;
    ecx = esi + 0x828;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = 0x833264;
    MEM32(ecx + 0x14) = 0x833250;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039707C; /* je: equal / zero */

loc_00397079: ;
    MEM32(edx + 0x38) = ecx;

loc_0039707C: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397087; /* jne: not equal / not zero */

loc_00397084: ;
    MEM32(esi + 0x18) = ecx;

loc_00397087: ;
    ecx = esi + 0x868;
    MEM32(ecx + 0xC) = edi;
    edi = 0x83314C;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x10) = edi;
    MEM32(ecx + 0x14) = 0x833240;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003970CF; /* je: equal / zero */

loc_003970CC: ;
    MEM32(edx + 0x38) = ecx;

loc_003970CF: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003970DA; /* jne: not equal / not zero */

loc_003970D7: ;
    MEM32(esi + 0x18) = ecx;

loc_003970DA: ;
    ecx = esi + 0x8A8;
    ebp = 0x7CFB50;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx + 0x14) = 0x833224;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397122; /* je: equal / zero */

loc_0039711F: ;
    MEM32(edx + 0x38) = ecx;

loc_00397122: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039712D; /* jne: not equal / not zero */

loc_0039712A: ;
    MEM32(esi + 0x18) = ecx;

loc_0039712D: ;
    ecx = esi + 0x8E8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = 0x833194;
    MEM32(ecx + 0x14) = 0x833208;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397174; /* je: equal / zero */

loc_00397171: ;
    MEM32(edx + 0x38) = ecx;

loc_00397174: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039717F; /* jne: not equal / not zero */

loc_0039717C: ;
    MEM32(esi + 0x18) = ecx;

loc_0039717F: ;
    ecx = esi + 0x928;
    MEM32(ecx + 0x10) = edi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = 4;
    MEM32(ecx + 0x14) = 0x83313C;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003971C7; /* je: equal / zero */

loc_003971C4: ;
    MEM32(edx + 0x38) = ecx;

loc_003971C7: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003971D2; /* jne: not equal / not zero */

loc_003971CF: ;
    MEM32(esi + 0x18) = ecx;

loc_003971D2: ;
    ecx = esi + 0x968;
    MEM32(ecx + 0x10) = ebp;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x14) = 0x82A150;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_00397216; /* je: equal / zero */

loc_00397213: ;
    MEM32(edx + 0x38) = ecx;

loc_00397216: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397221; /* jne: not equal / not zero */

loc_0039721E: ;
    MEM32(esi + 0x18) = ecx;

loc_00397221: ;
    ecx = esi + 0x9A8;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = ebx;
    MEM32(ecx + 0x10) = 0x833194;
    MEM32(ecx + 0x14) = 0x833288;
    MEM32(ecx + 0x18) = eax;
    MEM32(ecx + 0x20) = eax;
    MEM32(ecx + 0x24) = eax;
    MEM8(ecx + 0x28) = LO8(eax);
    MEM32(ecx + 0x2C) = esi;
    MEM32(ecx + 0x30) = eax;
    MEM32(ecx + 0x34) = eax;
    edx = MEM32(esi + 0x1C);
    MEM32(ecx + 0x3C) = edx;
    MEM32(ecx + 0x38) = eax;
    edx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397268; /* je: equal / zero */

loc_00397265: ;
    MEM32(edx + 0x38) = ecx;

loc_00397268: ;
    MEM32(esi + 0x1C) = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397273; /* jne: not equal / not zero */

loc_00397270: ;
    MEM32(esi + 0x18) = ecx;

loc_00397273: ;
    ecx = ecx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0x9E8) = eax;
    MEM32(esi + 0x9EC) = eax;
    MEM32(esi + 0x9F0) = eax;
    MEM16(esi + 0x19FC) = LO16(eax);
    MEM32(esi + 0x9F4) = ecx;
    MEM32(esi + 0x9F8) = ecx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003975D0
 * Original: 0x003975D0 - 0x003975DC (12 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003975D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003975D0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003975DB; /* je: equal / zero */

loc_003975D4: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003975DBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003975D8u); } /* indirect call */
    }

loc_003975DB: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003975E0
 * Original: 0x003975E0 - 0x003975E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003975E0(void)
{

loc_003975E0: ;
    eax = 0x83338C;
    esp += 4; return; /* ret */

}

/**
 * sub_003975F0
 * Original: 0x003975F0 - 0x003975F6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003975F0(void)
{

loc_003975F0: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_00397600
 * Original: 0x00397600 - 0x00397627 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397600(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00397600: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00397608u); RECOMP_ABI_CALL(0x0056D785u, sub_0056D785); /* call 0x0056D785 */

loc_00397608: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00397621; /* je: equal / zero */

loc_0039760F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397621; /* je: equal / zero */

loc_00397613: ;
    PUSH32(esp, 0x1A00);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0039761Eu); RECOMP_ABI_CALL(0x00574573u, sub_00574573); /* call 0x00574573 */

loc_0039761E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00397621: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00397630
 * Original: 0x00397630 - 0x00397654 (36 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00397630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00397630: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x1A00);
    PUSH32(esp, 0x00397640u); RECOMP_ABI_CALL(0x0057446Du, sub_0057446D); /* call 0x0057446D */

loc_00397640: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397651; /* je: equal / zero */

loc_00397647: ;
    PUSH32(esp, 0);
    ecx = eax;
    PUSH32(esp, 0x00397650u); RECOMP_ABI_CALL(0x00033D67u, sub_00033D67); /* call 0x00033D67 */

loc_00397650: ;
    esp += 4; return; /* ret */

loc_00397651: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00397660
 * Original: 0x00397660 - 0x003976CD (109 bytes, 35 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00397660: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x9EC);
    edx = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x10) = edx;
    MEM32(ecx + 0x9EC) = eax;
    if ((_fa != 0)) goto loc_0039769E; /* jne: not equal / not zero */

loc_0039767F: ;
    edx = MEM32(esp + 0xC);
    eax = MEM32(edx);
    esi = eax + 1;
    MEM32(edx) = esi;
    ecx = MEM32(ecx + 0x930);
    SET_LO16(edx, MEM16(esp + 0x14));
    POP32(esp, edi);
    MEM16(ecx + eax * 2) = LO16(edx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_0039769E: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(eax);
    esi = edx + 1;
    MEM32(eax) = esi;
    edi = MEM32(ecx + 0x930);
    esi = MEM32(esp + 0x14);
    MEM16(edi + edx * 2) = LO16(esi);
    edx = MEM32(eax);
    edi = edx + 1;
    MEM32(eax) = edi;
    eax = MEM32(ecx + 0x930);
    POP32(esp, edi);
    MEM16(eax + edx * 2) = LO16(esi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003976F0
 * Original: 0x003976F0 - 0x00397723 (51 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003976F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003976F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039770D; /* je: equal / zero */

loc_003976F9: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0039770D; /* jle: less or equal (signed <=) */

loc_00397700: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0039770Au); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_0039770A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0039770D: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00397730
 * Original: 0x00397730 - 0x00397756 (38 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00397730: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    esi = ecx;
    PUSH32(esp, 0x0039773Au); RECOMP_ABI_CALL(0x00014F07u, sub_00014F07); /* call 0x00014F07 */

loc_0039773A: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi);
    ecx = ecx + eax * 4;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00397753; /* je: equal / zero */

loc_0039774B: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    MEM32(ecx) = eax;

loc_00397753: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00397760
 * Original: 0x00397760 - 0x003977CE (110 bytes, 47 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00397760: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397782; /* jne: not equal / not zero */

loc_00397770: ;
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0039777Cu); RECOMP_ABI_CALL(0x00012054u, sub_00012054); /* call 0x00012054 */

loc_0039777C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00397782: ;
    edx = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 8);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esi + 4);
    { uint32_t _sv=(uint32_t)(edi), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edi = _sv << _sc;
        _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(edx);
    MEM32(ecx) = edi;
    edi = MEM32(edx + 4);
    MEM32(ecx + 4) = edi;
    edi = MEM32(edx + 8);
    MEM32(ecx + 8) = edi;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    ecx = MEM32(eax + 4);
    edx = MEM32(eax);
    eax = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003977C4u); RECOMP_ABI_CALL(0x0056D44Bu, sub_0056D44B); /* call 0x0056D44B */

loc_003977C4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003977F0
 * Original: 0x003977F0 - 0x00397A58 (616 bytes, 202 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003977F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003977F0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x15) = 0;
    MEM8(esp + 0x16) = 0;
    MEM8(esp + 0x17) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_003978D4; /* jbe: below or equal (unsigned <=) */

loc_0039781E: ;
    esi = MEM32(esp + 0x2C);
    ebx = eax;

loc_00397824: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397848; /* jne: not equal / not zero */

loc_0039782C: ;
    eax = MEM32(edi + 0xFC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0039783Au); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039783A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397848; /* je: equal / zero */

loc_0039783E: ;
    MEM8(esp + 0x13) = 1;
    goto loc_003978CA;

loc_00397848: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397869; /* jne: not equal / not zero */

loc_00397850: ;
    eax = MEM32(edi + 0x13C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0039785Eu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039785E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397869; /* je: equal / zero */

loc_00397862: ;
    MEM8(esp + 0x14) = 1;
    goto loc_003978CA;

loc_00397869: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039788A; /* jne: not equal / not zero */

loc_00397871: ;
    eax = MEM32(edi + 0x17C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0039787Fu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039787F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039788A; /* je: equal / zero */

loc_00397883: ;
    MEM8(esp + 0x15) = 1;
    goto loc_003978CA;

loc_0039788A: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003978AB; /* jne: not equal / not zero */

loc_00397892: ;
    eax = MEM32(edi + 0x1BC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003978A0u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003978A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003978AB; /* je: equal / zero */

loc_003978A4: ;
    MEM8(esp + 0x16) = 1;
    goto loc_003978CA;

loc_003978AB: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003978CA; /* jne: not equal / not zero */

loc_003978B3: ;
    eax = MEM32(edi + 0x27C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003978C1u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003978C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003978CA; /* je: equal / zero */

loc_003978C5: ;
    MEM8(esp + 0x17) = 1;

loc_003978CA: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00397824; /* jne: not equal / not zero */

loc_003978D4: ;
    eax = MEM32(esp + 0x38);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_003979E9; /* jbe: below or equal (unsigned <=) */

loc_003978F0: ;
    esi = MEM32(esp + 0x34);

loc_003978F4: ;
    eax = MEM32(edi + 0x2CC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00397902u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00397902: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003979B8; /* jne: not equal / not zero */

loc_0039790A: ;
    eax = MEM32(edi + 0x30C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00397918u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00397918: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003979B8; /* jne: not equal / not zero */

loc_00397920: ;
    eax = MEM32(edi + 0x3CC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0039792Eu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039792E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003979B8; /* jne: not equal / not zero */

loc_00397936: ;
    eax = MEM32(edi + 0x44C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00397944u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00397944: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003979B8; /* jne: not equal / not zero */

loc_00397948: ;
    eax = MEM32(edi + 0x48C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00397956u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00397956: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003979B8; /* jne: not equal / not zero */

loc_0039795A: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039797C; /* je: equal / zero */

loc_00397962: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039797C; /* je: equal / zero */

loc_0039796A: ;
    eax = MEM32(edi + 0x34C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00397978u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00397978: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003979B8; /* jne: not equal / not zero */

loc_0039797C: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039799E; /* je: equal / zero */

loc_00397984: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039799E; /* je: equal / zero */

loc_0039798C: ;
    eax = MEM32(edi + 0x38C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0039799Au); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039799A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003979B8; /* jne: not equal / not zero */

loc_0039799E: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003979D9; /* je: equal / zero */

loc_003979A6: ;
    eax = MEM32(edi + 0x40C);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003979B4u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003979B4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003979D9; /* je: equal / zero */

loc_003979B8: ;
    PUSH32(esp, 1);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x003979C3u); RECOMP_ABI_CALL(0x00014F07u, sub_00014F07); /* call 0x00014F07 */

loc_003979C3: ;
    ebp = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    eax = eax + ebp * 4;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_003979D9; /* je: equal / zero */

loc_003979D7: ;
    MEM32(eax) = ebx;

loc_003979D9: ;
    eax = MEM32(esp + 0x38);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003978F4; /* jb: below (unsigned <) */

loc_003979E9: ;
    esi = MEM32(esp + 0x40);
    PUSH32(esp, 1);
    ecx = ebp * 4;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, ecx);
    MEM32(esi) = ebp;
    PUSH32(esp, 0x00397A03u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_00397A03: ;
    ecx = MEM32(esp + 0x48);
    MEM32(ecx) = eax;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00397A27; /* jbe: below or equal (unsigned <=) */

loc_00397A14: ;
    edi = MEM32(esp + 0x18);
    edx = MEM32(ecx);
    edi = MEM32(edi + eax * 4);
    MEM32(edx + eax * 4) = edi;
    edx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00397A14; /* jb: below (unsigned <) */

loc_00397A27: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_00397A48; /* je: equal / zero */

loc_00397A33: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00397A48; /* jle: less or equal (signed <=) */

loc_00397A3B: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00397A45u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_00397A45: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00397A48: ;
    eax = MEM32(esp + 0x18);
    MEM32(eax) = 1;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00397B00
 * Original: 0x00397B00 - 0x00397E3B (827 bytes, 229 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00397B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00397B00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x60;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397B14u); RECOMP_ABI_CALL(0x0056C65Au, sub_0056C65A); /* call 0x0056C65A */

loc_00397B14: ;
    _fa = (uint32_t)(MEM32(esi + 0x4C8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4C8), eax (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00397B2A; /* jne: not equal / not zero */

loc_00397B20: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00397B2A: ;
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397B34u); RECOMP_ABI_CALL(0x00393550u, sub_00393550); /* call 0x00393550 */

loc_00397B34: ;
    ecx = MEM32(esi + 0x2C0);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0xF0);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x2B8) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00397B67; /* je: equal / zero */

loc_00397B52: ;
    _fa = (uint32_t)(MEM32(esi + 0x130)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x130), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397B67; /* je: equal / zero */

loc_00397B5A: ;
    _fa = (uint32_t)(MEM32(esi + 0x340)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x340), edi (32-bit) */
    MEM8(esp + 0x15) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00397B6C; /* jne: not equal / not zero */

loc_00397B67: ;
    MEM8(esp + 0x15) = 0;

loc_00397B6C: ;
    _fa = (uint32_t)(MEM32(esi + 0x170)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x170), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397B89; /* je: equal / zero */

loc_00397B74: ;
    _fa = (uint32_t)(MEM32(esi + 0x1B0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1B0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397B89; /* je: equal / zero */

loc_00397B7C: ;
    _fa = (uint32_t)(MEM32(esi + 0x380)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x380), edi (32-bit) */
    MEM8(esp + 0x16) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00397B8E; /* jne: not equal / not zero */

loc_00397B89: ;
    MEM8(esp + 0x16) = 0;

loc_00397B8E: ;
    _fa = (uint32_t)(MEM32(esi + 0x1F0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x1F0), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397BAB; /* je: equal / zero */

loc_00397B96: ;
    _fa = (uint32_t)(MEM32(esi + 0x230)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x230), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397BAB; /* je: equal / zero */

loc_00397B9E: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C0)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C0), edi (32-bit) */
    MEM8(esp + 0x17) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00397BB0; /* jne: not equal / not zero */

loc_00397BAB: ;
    MEM8(esp + 0x17) = 0;

loc_00397BB0: ;
    edx = MEM32(esi + 0x30);
    eax = MEM32(edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x43C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397BC2u); RECOMP_ABI_CALL(0x0056D592u, sub_0056D592); /* call 0x0056D592 */

loc_00397BC2: ;
    ebx = MEM32(esi + 0x4C8);
    MEM32(esi + 0x4CC) = eax;
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(esp + 0x1C) = edi;
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = edi;
    MEM32(esp + 0x18) = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_00397D97; /* jge: greater or equal (signed >=) */

loc_00397BF3: ;
    ecx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(MEM32(ecx + ebx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + ebx * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397C26; /* jne: not equal / not zero */

loc_00397BFF: ;
    edx = MEM32(esi + 0x4CC);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00397D8E; /* jge: greater or equal (signed >=) */

loc_00397C10: ;
    PUSH32(esp, ebp);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397C1Du); RECOMP_ABI_CALL(0x00011BCCu, sub_00011BCC); /* call 0x00011BCC */

loc_00397C1D: ;
    edi = MEM32(esp + 0x18);
    goto loc_00397D64;

loc_00397C26: ;
    edx = MEM32(esi + 0xB0);
    eax = MEM32(edx + ebx * 4);
    ecx = esi + 0x68;
    MEM32(esp + 0x30) = ecx;
    ecx = esi + 0x2F8;
    edx = esp + 0x30;
    MEM32(esp + 0x38) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x3C;
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x40) = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397C56u); RECOMP_ABI_CALL(0x0002BEEBu, sub_0002BEEB); /* call 0x0002BEEB */

loc_00397C56: ;
    ecx = MEM32(esp + 0x1C);
    SET_LO8(eax, MEM8(esp + 0x15));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esp + 0x1C) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00397C9E; /* je: equal / zero */

loc_00397C67: ;
    ecx = MEM32(esi + 0x130);
    edx = MEM32(ecx + ebx * 4);
    eax = esi + 0xE8;
    ecx = esp + 0x40;
    MEM32(esp + 0x40) = eax;
    eax = esi + 0x338;
    PUSH32(esp, ecx);
    ecx = esp + 0x4C;
    MEM32(esp + 0x48) = edx;
    MEM32(esp + 0x4C) = eax;
    MEM32(esp + 0x50) = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397C9Au); RECOMP_ABI_CALL(0x0002BEEBu, sub_0002BEEB); /* call 0x0002BEEB */

loc_00397C9A: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00397C9E: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397CDD; /* je: equal / zero */

loc_00397CA6: ;
    eax = MEM32(esi + 0x1B0);
    ecx = MEM32(eax + ebx * 4);
    edx = esi + 0x168;
    MEM32(esp + 0x50) = edx;
    eax = esp + 0x50;
    MEM32(esp + 0x54) = ecx;
    edx = esi + 0x378;
    PUSH32(esp, eax);
    ecx = esp + 0x5C;
    MEM32(esp + 0x5C) = edx;
    MEM32(esp + 0x60) = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397CD9u); RECOMP_ABI_CALL(0x0001E8EAu, sub_0001E8EA); /* call 0x0001E8EA */

loc_00397CD9: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00397CDD: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397D50; /* je: equal / zero */

loc_00397CE5: ;
    ecx = MEM32(esi + 0x230);
    edx = MEM32(ecx + ebx * 4);
    eax = MEM32(esi + 0x218);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x8DCFB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56D176) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x8DCFB8), 0x56D176 (32-bit) */
    edi = esi + 0x1E8;
    MEM32(esp + 0x6C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00397D1E; /* je: equal / zero */

loc_00397D0B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x56D18D);
    PUSH32(esp, 0x56D176);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397D1Bu); RECOMP_ABI_CALL(0x0056D3F4u, sub_0056D3F4); /* call 0x0056D3F4 */

loc_00397D1B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00397D1E: ;
    ecx = MEM32(edi + 0x34);
    eax = MEM32(edi + 0x30);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x74);
    PUSH32(esp, eax);
    edx = esi + 0x3B8;
    PUSH32(esp, edi);
    ecx = esp + 0x70;
    MEM32(esp + 0x70) = edx;
    MEM32(esp + 0x74) = ebp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397D43u); RECOMP_ABI_CALL(0x00013F8Au, sub_00013F8A); /* call 0x00013F8A */

loc_00397D43: ;
    eax = MEM32(esp + 0x28);
    edi = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = eax;

loc_00397D50: ;
    edx = MEM32(esi + 0x440);
    eax = ebp;
    ecx = edi;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x18) = edi;
    MEM16(edx + ecx * 2) = LO16(eax);

loc_00397D64: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4CC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x4CC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00397D7B; /* jge: greater or equal (signed >=) */

loc_00397D6C: ;
    eax = MEM32(esp + 0x2C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00397BF3; /* jl: less (signed <) */

loc_00397D79: ;
    goto loc_00397D97;

loc_00397D7B: ;
    ecx = MEM32(esi + 0x30);
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397D8E; /* jne: not equal / not zero */

loc_00397D83: ;
    edx = ebx + -2;
    MEM32(esi + 0x4C8) = edx;
    goto loc_00397D97;

loc_00397D8E: ;
    eax = ebx + 1;
    MEM32(esi + 0x4C8) = eax;

loc_00397D97: ;
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397D9Fu); RECOMP_ABI_CALL(0x0056C650u, sub_0056C650); /* call 0x0056C650 */

loc_00397D9F: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    MEM32(esi + 0x2F8) = ecx;
    ecx = MEM32(esp + 0x28);
    MEM32(esi + 0x378) = eax;
    MEM32(esi + 0x3B8) = ecx;
    MEM32(esi + 0x338) = edx;
    MEM32(esi + 0x438) = edi;
    edx = MEM32(esi + 0x480);
    MEM32(edx) = edi;
    ecx = MEM32(esi + 0x270);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esi + 0x478) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00397E23; /* je: equal / zero */

loc_00397DEB: ;
    _fa = (uint32_t)(MEM32(esi + 0x400)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x400), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397E23; /* je: equal / zero */

loc_00397DF3: ;
    ecx = esi + 0x268;
    edx = esp + 0x60;
    MEM32(esp + 0x60) = ecx;
    edi = esi + 0x3F8;
    PUSH32(esp, edx);
    ecx = esp + 0x5C;
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x5C) = edi;
    MEM32(esp + 0x60) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00397E1Du); RECOMP_ABI_CALL(0x0003249Eu, sub_0003249E); /* call 0x0003249E */

loc_00397E1D: ;
    MEM32(edi) = 1;

loc_00397E23: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397E31; /* jne: not equal / not zero */

loc_00397E2B: ;
    MEM32(esi + 0x4C8) = eax;

loc_00397E31: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00397F10
 * Original: 0x00397F10 - 0x0039841E (1294 bytes, 398 insns)
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00397F10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00397F10: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x14) = 0;
    MEM8(esp + 0x1C) = 0;
    MEM8(esp + 0x1D) = 0;
    MEM8(esp + 0x1E) = 0;
    MEM8(esp + 0x1F) = 0;
    MEM8(esp + 0x15) = 0;
    MEM8(esp + 0x16) = 0;
    MEM8(esp + 0x17) = 0;
    MEM8(esp + 0x18) = 0;
    MEM8(esp + 0x19) = 0;
    MEM8(esp + 0x1A) = 0;
    MEM8(esp + 0x1B) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_00398140; /* jbe: below or equal (unsigned <=) */

loc_00397F66: ;
    edi = MEM32(esp + 0x34);
    ebp = eax;
    /* nop */

loc_00397F70: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397F94; /* jne: not equal / not zero */

loc_00397F78: ;
    eax = MEM32(esi + 0xFC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00397F86u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00397F86: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397F94; /* je: equal / zero */

loc_00397F8A: ;
    MEM8(esp + 0x13) = 1;
    goto loc_00398136;

loc_00397F94: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397FB8; /* jne: not equal / not zero */

loc_00397F9C: ;
    eax = MEM32(esi + 0x13C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00397FAAu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00397FAA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397FB8; /* je: equal / zero */

loc_00397FAE: ;
    MEM8(esp + 0x14) = 1;
    goto loc_00398136;

loc_00397FB8: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00397FDC; /* jne: not equal / not zero */

loc_00397FC0: ;
    eax = MEM32(esi + 0x17C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00397FCEu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00397FCE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00397FDC; /* je: equal / zero */

loc_00397FD2: ;
    MEM8(esp + 0x1C) = 1;
    goto loc_00398136;

loc_00397FDC: ;
    SET_LO8(eax, MEM8(esp + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398000; /* jne: not equal / not zero */

loc_00397FE4: ;
    eax = MEM32(esi + 0x1BC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00397FF2u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00397FF2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398000; /* je: equal / zero */

loc_00397FF6: ;
    MEM8(esp + 0x1D) = 1;
    goto loc_00398136;

loc_00398000: ;
    SET_LO8(eax, MEM8(esp + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398024; /* jne: not equal / not zero */

loc_00398008: ;
    eax = MEM32(esi + 0x1FC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00398016u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00398016: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398024; /* je: equal / zero */

loc_0039801A: ;
    MEM8(esp + 0x1E) = 1;
    goto loc_00398136;

loc_00398024: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398048; /* jne: not equal / not zero */

loc_0039802C: ;
    eax = MEM32(esi + 0x23C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0039803Au); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039803A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398048; /* je: equal / zero */

loc_0039803E: ;
    MEM8(esp + 0x1F) = 1;
    goto loc_00398136;

loc_00398048: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039806C; /* jne: not equal / not zero */

loc_00398050: ;
    eax = MEM32(esi + 0x27C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0039805Eu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039805E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039806C; /* je: equal / zero */

loc_00398062: ;
    MEM8(esp + 0x15) = 1;
    goto loc_00398136;

loc_0039806C: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398090; /* jne: not equal / not zero */

loc_00398074: ;
    eax = MEM32(esi + 0x2BC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00398082u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00398082: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398090; /* je: equal / zero */

loc_00398086: ;
    MEM8(esp + 0x16) = 1;
    goto loc_00398136;

loc_00398090: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003980B4; /* jne: not equal / not zero */

loc_00398098: ;
    eax = MEM32(esi + 0x2FC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003980A6u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003980A6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003980B4; /* je: equal / zero */

loc_003980AA: ;
    MEM8(esp + 0x17) = 1;
    goto loc_00398136;

loc_003980B4: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003980D5; /* jne: not equal / not zero */

loc_003980BC: ;
    eax = MEM32(esi + 0x33C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003980CAu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003980CA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003980D5; /* je: equal / zero */

loc_003980CE: ;
    MEM8(esp + 0x18) = 1;
    goto loc_00398136;

loc_003980D5: ;
    SET_LO8(eax, MEM8(esp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003980F6; /* jne: not equal / not zero */

loc_003980DD: ;
    eax = MEM32(esi + 0x37C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003980EBu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003980EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003980F6; /* je: equal / zero */

loc_003980EF: ;
    MEM8(esp + 0x19) = 1;
    goto loc_00398136;

loc_003980F6: ;
    SET_LO8(eax, MEM8(esp + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398117; /* jne: not equal / not zero */

loc_003980FE: ;
    eax = MEM32(esi + 0x3BC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0039810Cu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039810C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398117; /* je: equal / zero */

loc_00398110: ;
    MEM8(esp + 0x1A) = 1;
    goto loc_00398136;

loc_00398117: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398136; /* jne: not equal / not zero */

loc_0039811F: ;
    eax = MEM32(esi + 0x57C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0039812Du); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039812D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398136; /* je: equal / zero */

loc_00398131: ;
    MEM8(esp + 0x1B) = 1;

loc_00398136: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00397F70; /* jne: not equal / not zero */

loc_00398140: ;
    ecx = MEM32(esp + 0x40);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x20) = edi;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x38) = ebp;
    if (CMP_BE(_fa, _fb)) goto loc_003983B7; /* jbe: below or equal (unsigned <=) */

loc_00398164: ;
    ebx = MEM32(esp + 0x3C);
    goto loc_00398170;

    /* nop */

loc_00398170: ;
    eax = MEM32(esi + 0x5BC);
    edi = ebx + ebp * 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00398181u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00398181: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_00398189: ;
    eax = MEM32(esi + 0x5FC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00398197u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00398197: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_0039819F: ;
    eax = MEM32(esi + 0x87C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003981ADu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003981AD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_003981B5: ;
    eax = MEM32(esi + 0x8BC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003981C3u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003981C3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_003981CB: ;
    eax = MEM32(esi + 0x8FC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003981D9u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003981D9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_003981E1: ;
    eax = MEM32(esi + 0x93C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003981EFu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003981EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_003981F7: ;
    eax = MEM32(esi + 0x97C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00398205u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00398205: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_0039820D: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398233; /* je: equal / zero */

loc_00398215: ;
    SET_LO8(eax, MEM8(esp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398233; /* je: equal / zero */

loc_0039821D: ;
    eax = MEM32(esi + 0x63C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0039822Bu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039822B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_00398233: ;
    SET_LO8(eax, MEM8(esp + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398259; /* je: equal / zero */

loc_0039823B: ;
    SET_LO8(eax, MEM8(esp + 0x16));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398259; /* je: equal / zero */

loc_00398243: ;
    eax = MEM32(esi + 0x73C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00398251u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00398251: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_00398259: ;
    SET_LO8(eax, MEM8(esp + 0x17));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398277; /* je: equal / zero */

loc_00398261: ;
    eax = MEM32(esi + 0x77C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0039826Fu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039826F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_00398277: ;
    SET_LO8(eax, MEM8(esp + 0x18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398295; /* je: equal / zero */

loc_0039827F: ;
    eax = MEM32(esi + 0x77C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0039828Du); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039828D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_00398295: ;
    SET_LO8(eax, MEM8(esp + 0x19));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003982B3; /* je: equal / zero */

loc_0039829D: ;
    eax = MEM32(esi + 0x7BC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003982ABu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003982AB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_003982B3: ;
    SET_LO8(eax, MEM8(esp + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003982D1; /* je: equal / zero */

loc_003982BB: ;
    eax = MEM32(esi + 0x7FC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003982C9u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003982C9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_003982D1: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003982EF; /* je: equal / zero */

loc_003982D9: ;
    eax = MEM32(esi + 0x9BC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003982E7u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_003982E7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398379; /* jne: not equal / not zero */

loc_003982EF: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039839A; /* je: equal / zero */

loc_003982FB: ;
    SET_LO8(eax, MEM8(esp + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398325; /* je: equal / zero */

loc_00398303: ;
    eax = MEM32(esi + 0x67C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00398311u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00398311: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398325; /* je: equal / zero */

loc_00398315: ;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00398323u); RECOMP_ABI_CALL(0x00036742u, sub_00036742); /* call 0x00036742 */

loc_00398323: ;
    goto loc_0039839A;

loc_00398325: ;
    SET_LO8(eax, MEM8(esp + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039834F; /* je: equal / zero */

loc_0039832D: ;
    eax = MEM32(esi + 0x6BC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0039833Bu); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0039833B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039834F; /* je: equal / zero */

loc_0039833F: ;
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x0039834Du); RECOMP_ABI_CALL(0x00036742u, sub_00036742); /* call 0x00036742 */

loc_0039834D: ;
    goto loc_0039839A;

loc_0039834F: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039839A; /* je: equal / zero */

loc_00398357: ;
    eax = MEM32(esi + 0x6FC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00398365u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_00398365: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039839A; /* je: equal / zero */

loc_00398369: ;
    edx = esp + 0x38;
    PUSH32(esp, edx);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00398377u); RECOMP_ABI_CALL(0x00036742u, sub_00036742); /* call 0x00036742 */

loc_00398377: ;
    goto loc_0039839A;

loc_00398379: ;
    PUSH32(esp, 1);
    ecx = esp + 0x24;
    PUSH32(esp, 0x00398384u); RECOMP_ABI_CALL(0x00014F07u, sub_00014F07); /* call 0x00014F07 */

loc_00398384: ;
    ecx = MEM32(esp + 0x24);
    eax = MEM32(esp + 0x20);
    eax = eax + ecx * 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0039839A; /* je: equal / zero */

loc_00398398: ;
    MEM32(eax) = ebp;

loc_0039839A: ;
    eax = MEM32(esp + 0x40);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x38) = ebp;
    if (CMP_B(_fa, _fb)) goto loc_00398170; /* jb: below (unsigned <) */

loc_003983AB: ;
    edi = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    ebx = MEM32(esp + 0x28);

loc_003983B7: ;
    esi = MEM32(esp + 0x48);
    PUSH32(esp, 1);
    ecx = eax * 4;
    PUSH32(esp, 0x7B891F);
    PUSH32(esp, ecx);
    MEM32(esi) = eax;
    PUSH32(esp, 0x003983D1u); RECOMP_ABI_CALL(0x00574504u, sub_00574504); /* call 0x00574504 */

loc_003983D1: ;
    ecx = MEM32(esp + 0x50);
    MEM32(ecx) = eax;
    edx = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003983F1; /* jbe: below or equal (unsigned <=) */

loc_003983E2: ;
    edx = MEM32(ecx);
    ebp = MEM32(edi + eax * 4);
    MEM32(edx + eax * 4) = ebp;
    edx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003983E2; /* jb: below (unsigned <) */

loc_003983F1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039840A; /* je: equal / zero */

loc_003983F5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0039840A; /* jle: less or equal (signed <=) */

loc_003983F9: ;
    eax = ebx * 4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00398407u); RECOMP_ABI_CALL(0x00574865u, sub_00574865); /* call 0x00574865 */

loc_00398407: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0039840A: ;
    eax = MEM32(esp + 0x30);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 32; return; /* ret 28 */

}

/**
 * sub_00398570
 * Original: 0x00398570 - 0x0039956D (4093 bytes, 1136 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00398570(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00398570: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x104) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x104;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398586u); RECOMP_ABI_CALL(0x0056C65Au, sub_0056C65A); /* call 0x0056C65A */

loc_00398586: ;
    edi = eax;
    _fa = (uint32_t)(MEM32(esi + 0x9E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x9E8), edi (32-bit) */
    MEM32(esp + 0x44) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0039859D; /* jne: not equal / not zero */

loc_00398594: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0039859D: ;
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003985A7u); RECOMP_ABI_CALL(0x00393550u, sub_00393550); /* call 0x00393550 */

loc_003985A7: ;
    ecx = MEM32(esi + 0x5B0);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x9E8);
    ebx = MEM32(esi + 0x9F4);
    MEM32(esi + 0x5A8) = 1;
    edx = MEM32(esi + 0x4B0);
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(esi + 0x470);
    edx = edx | 0xFFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + eax * 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003986BE; /* je: equal / zero */

loc_003985E0: ;
    ecx = MEM32(esi + 0x4E8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00398603; /* jle: less or equal (signed <=) */

loc_003985EC: ;
    ecx = esi + 0x9FC;

loc_003985F2: ;
    MEM16(ecx) = LO16(edx);
    ebx = MEM32(esi + 0x4E8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003985F2; /* jl: less (signed <) */

loc_00398603: ;
    ecx = MEM32(esi + 0x4B0);
    eax = MEM32(esi + 0x9E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    ecx = MEM32(ecx + eax * 4);
    ebx = MEM32(esi + 0x470);
    ecx = MEM32(ebx + ecx * 4);
    MEM32(esi + 0x9F4) = ecx;
    MEM16(esi + 0x19FC) = 0;
    if (CMP_GE(_fas, _fbs)) goto loc_003986BE; /* jge: greater or equal (signed >=) */

loc_00398632: ;
    ecx = MEM32(esi + 0x4B0);
    _fa = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003986B1; /* je: equal / zero */

loc_0039863D: ;
    ecx = MEM32(ecx + eax * 4);
    edi = MEM32(esi + 0x470);
    ebx = MEM32(esi + 0x9F4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + ecx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + ecx * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003986BE; /* jne: not equal / not zero */

loc_00398651: ;
    ecx = MEM32(esi + 0x430);
    ecx = MEM32(ecx + eax * 4);
    edi = MEM32(esi + 0x3F0);
    ecx = MEM32(edi + ecx * 4);
    _fa = (uint32_t)(MEM16(esi + ecx * 2 + 0x9FC)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + ecx * 2 + 0x9FC), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003986B1; /* jne: not equal / not zero */

loc_0039866D: ;
    ecx = MEM32(esi + 0x430);
    ecx = MEM32(ecx + eax * 4);
    ecx = MEM32(edi + ecx * 4);
    SET_LO16(edi, MEM16(esi + 0x19FC));
    MEM16(esi + ecx * 2 + 0x9FC) = LO16(edi);
    ecx = MEM32(esi + 0x430);
    ecx = MEM32(ecx + eax * 4);
    edi = MEM32(esi + 0x3F0);
    ebx = (uint32_t)(int32_t)SMEM16(esi + 0x19FC);
    SET_LO16(ecx, MEM16(edi + ecx * 4));
    MEM16(esi + ebx * 2 + 0x11FC) = LO16(ecx);
    MEM16(esi + 0x19FC) = MEM16(esi + 0x19FC) + 1;
    _fa = (uint32_t)(MEM16(esi + 0x19FC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */

loc_003986B1: ;
    ecx = MEM32(esp + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00398632; /* jl: less (signed <) */

loc_003986BE: ;
    _fa = (uint32_t)(MEM16(esi + 0x19FC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x19FC), 0 (16-bit) */
    MEM32(esp + 0x20) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00398797; /* jle: less or equal (signed <=) */

loc_003986D4: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x11FC;
    /* nop */

loc_003986E0: ;
    ecx = MEM32(esi + 0x530);
    eax = (uint32_t)(int32_t)SMEM16(edi);
    edx = eax;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edx);
    MEM32(esp + 0x70) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(esp + 0x74) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(esp + 0x78) = ecx;
    edx = MEM32(edx + 0xC);
    MEM32(esp + 0x7C) = edx;
    edx = MEM32(esi + 0x4F0);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    MEM32(esp + 0x60) = ecx;
    edx = MEM32(eax + 4);
    MEM32(esp + 0x64) = edx;
    ecx = MEM32(eax + 8);
    MEM32(esp + 0x68) = ecx;
    edx = MEM32(eax + 0xC);
    eax = esp + 0x70;
    PUSH32(esp, eax);
    ecx = esp + 0x64;
    MEM32(esp + 0x70) = edx;
    PUSH32(esp, ecx);
    edx = esp + 0x108;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398748u); RECOMP_ABI_CALL(0x0056D66Cu, sub_0056D66C); /* call 0x0056D66C */

loc_00398748: ;
    edx = MEM32(eax + 4);
    ecx = MEM32(eax);
    MEM32(esp + 0x60) = edx;
    edx = MEM32(eax + 8);
    eax = MEM32(eax + 0xC);
    MEM32(esp + 0x68) = eax;
    eax = MEM32(esi + 0x8F0);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x60);
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x68);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(esp + 0x2C);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x19FC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003986E0; /* jl: less (signed <) */

loc_00398797: ;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x19FC);
    eax = MEM32(esi + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x8E8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003987C7; /* je: equal / zero */

loc_003987AE: ;
    eax = MEM32(esi + 0x130);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003987C7; /* je: equal / zero */

loc_003987B8: ;
    eax = MEM32(esi + 0x630);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1C) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_003987CC; /* jne: not equal / not zero */

loc_003987C7: ;
    MEM8(esp + 0x1C) = 0;

loc_003987CC: ;
    eax = MEM32(esi + 0x170);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003987EF; /* je: equal / zero */

loc_003987D6: ;
    ecx = MEM32(esi + 0x1B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003987EF; /* je: equal / zero */

loc_003987E0: ;
    ecx = MEM32(esi + 0x670);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esp + 0x1E) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_003987F4; /* jne: not equal / not zero */

loc_003987EF: ;
    MEM8(esp + 0x1E) = 0;

loc_003987F4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398811; /* je: equal / zero */

loc_003987F8: ;
    ecx = MEM32(esi + 0x1F0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398811; /* je: equal / zero */

loc_00398802: ;
    ecx = MEM32(esi + 0x6B0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esp + 0x1F) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00398816; /* jne: not equal / not zero */

loc_00398811: ;
    MEM8(esp + 0x1F) = 0;

loc_00398816: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398833; /* je: equal / zero */

loc_0039881A: ;
    eax = MEM32(esi + 0x230);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398833; /* je: equal / zero */

loc_00398824: ;
    eax = MEM32(esi + 0x6F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1A) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00398838; /* jne: not equal / not zero */

loc_00398833: ;
    MEM8(esp + 0x1A) = 0;

loc_00398838: ;
    eax = MEM32(esi + 0x270);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039885B; /* je: equal / zero */

loc_00398842: ;
    eax = MEM32(esi + 0x2B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039885B; /* je: equal / zero */

loc_0039884C: ;
    eax = MEM32(esi + 0x730);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x1D) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00398860; /* jne: not equal / not zero */

loc_0039885B: ;
    MEM8(esp + 0x1D) = 0;

loc_00398860: ;
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax);
    ecx = MEM32(esi + 0x92C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398872u); RECOMP_ABI_CALL(0x0056D592u, sub_0056D592); /* call 0x0056D592 */

loc_00398872: ;
    ecx = MEM32(esp + 0x4C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x9F0) = eax;
    eax = MEM32(esi + 0x9E8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x4C) = ebx;
    MEM32(esp + 0x3C) = ebx;
    MEM32(esp + 0x38) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x40) = ebx;
    MEM32(esp + 0x48) = ebx;
    MEM32(esp + 0x30) = ebx;
    MEM32(esp + 0x34) = ebx;
    MEM8(esp + 0x1B) = LO8(ebx);
    MEM32(esp + 0x28) = ebx;
    MEM32(esp + 0x14) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_003991F2; /* jge: greater or equal (signed >=) */

loc_003988C2: ;
    edx = MEM32(esi + 0x4B0);
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003988EC; /* je: equal / zero */

loc_003988CE: ;
    ecx = edx;
    eax = MEM32(ecx + eax * 4);
    edx = MEM32(esi + 0x470);
    ecx = MEM32(esi + 0x9F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + eax * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003991C1; /* jne: not equal / not zero */

loc_003988E8: ;
    eax = MEM32(esp + 0x14);

loc_003988EC: ;
    edx = MEM32(esi + 0xB0);
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398983; /* jne: not equal / not zero */

loc_003988FC: ;
    edx = MEM32(esp + 0x44);
    ecx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003991F2; /* jge: greater or equal (signed >=) */

loc_0039890B: ;
    edx = MEM32(esi + 0x9F0);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 6;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003991C7; /* jge: greater or equal (signed >=) */

loc_0039891C: ;
    eax = MEM32(esi + 0x4B0);
    ecx = MEM32(eax + ecx * 4);
    edx = MEM32(esi + 0x470);
    eax = MEM32(esi + 0x9F4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + ecx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + ecx * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398976; /* jne: not equal / not zero */

loc_00398936: ;
    eax = MEM32(esp + 0x28);
    edx = MEM32(esi + 0x9EC);
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x9EC) = eax;
    MEM8(esp + 0x1B) = 1;
    MEM32(esp + 0x28) = ecx;
    eax = ebx;
    if ((_fa == 0)) goto loc_00398967; /* je: equal / zero */

loc_0039895A: ;
    ecx = MEM32(esi + 0x930);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(ecx + eax * 2) = LO16(edi);
    eax = ebx;

loc_00398967: ;
    edx = MEM32(esi + 0x930);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = ebx;
    MEM16(edx + eax * 2) = LO16(edi);

loc_00398976: ;
    MEM32(esp + 0x28) = 0;
    goto loc_003991A2;

loc_00398983: ;
    eax = MEM32(esp + 0x3C);
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x13) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_003989E9; /* jle: less or equal (signed <=) */

loc_00398995: ;
    ecx = MEM32(esp + 0x14);
    eax = esi + 0x5E8;
    MEM32(esp + 0xB8) = eax;
    eax = esi + 0x68;
    MEM32(esp + 0xD0) = eax;
    eax = MEM32(esi + 0xB0);
    edx = MEM32(eax + ecx * 4);
    eax = esp + 0xB8;
    PUSH32(esp, eax);
    ecx = esp + 0xD4;
    MEM32(esp + 0xC0) = ebx;
    MEM32(esp + 0xD8) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003989DBu); RECOMP_ABI_CALL(0x000202DAu, sub_000202DA); /* call 0x000202DA */

loc_003989DB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 0x3C);
    if (CMP_NE(_fa, _fb)) edi = ebx; /* cmovne */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00398995; /* jl: less (signed <) */

loc_003989E9: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398A7A; /* je: equal / zero */

loc_003989F5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398A7A; /* je: equal / zero */

loc_003989FE: ;
    eax = MEM32(esp + 0x38);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x12) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00398A77; /* jle: less or equal (signed <=) */

loc_00398A0D: ;
    /* nop */

loc_00398A10: ;
    ecx = MEM32(esi + 0x130);
    edx = MEM32(esp + 0x14);
    eax = esi + 0x628;
    MEM32(esp + 0xE0) = eax;
    eax = esi + 0xE8;
    MEM32(esp + 0xF0) = eax;
    eax = MEM32(ecx + edx * 4);
    ecx = esp + 0xE0;
    PUSH32(esp, ecx);
    ecx = esp + 0xF4;
    MEM32(esp + 0xE8) = ebx;
    MEM32(esp + 0xF8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398A59u); RECOMP_ABI_CALL(0x000202DAu, sub_000202DA); /* call 0x000202DA */

loc_00398A59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398A66; /* je: equal / zero */

loc_00398A5D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398A66; /* jne: not equal / not zero */

loc_00398A61: ;
    MEM8(esp + 0x12) = 1;

loc_00398A66: ;
    eax = MEM32(esp + 0x38);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00398A10; /* jl: less (signed <) */

loc_00398A6F: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398A7A; /* jne: not equal / not zero */

loc_00398A77: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00398A7A: ;
    SET_LO8(eax, MEM8(esp + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398B0A; /* je: equal / zero */

loc_00398A86: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398B0A; /* je: equal / zero */

loc_00398A8F: ;
    eax = MEM32(esp + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x12) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00398B07; /* jle: less or equal (signed <=) */

loc_00398A9E: ;
    edi = edi;

loc_00398AA0: ;
    edx = MEM32(esi + 0x1B0);
    eax = esi + 0x668;
    MEM32(esp + 0xC8) = eax;
    eax = esi + 0x168;
    MEM32(esp + 0x98) = eax;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(edx + eax * 4);
    edx = esp + 0xC8;
    MEM32(esp + 0x9C) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x9C;
    MEM32(esp + 0xD0) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398AE9u); RECOMP_ABI_CALL(0x00015C5Eu, sub_00015C5E); /* call 0x00015C5E */

loc_00398AE9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398AF6; /* je: equal / zero */

loc_00398AED: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398AF6; /* jne: not equal / not zero */

loc_00398AF1: ;
    MEM8(esp + 0x12) = 1;

loc_00398AF6: ;
    eax = MEM32(esp + 0x24);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00398AA0; /* jl: less (signed <) */

loc_00398AFF: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398B0A; /* jne: not equal / not zero */

loc_00398B07: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00398B0A: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398B9A; /* je: equal / zero */

loc_00398B16: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398B9A; /* je: equal / zero */

loc_00398B1F: ;
    eax = MEM32(esp + 0x24);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x12) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00398B97; /* jle: less or equal (signed <=) */

loc_00398B2E: ;
    edi = edi;

loc_00398B30: ;
    ecx = MEM32(esp + 0x14);
    eax = esi + 0x6A8;
    MEM32(esp + 0xE8) = eax;
    eax = esi + 0x168;
    MEM32(esp + 0xA8) = eax;
    eax = MEM32(esi + 0x1F0);
    edx = MEM32(eax + ecx * 4);
    eax = esp + 0xE8;
    PUSH32(esp, eax);
    ecx = esp + 0xAC;
    MEM32(esp + 0xF0) = ebx;
    MEM32(esp + 0xB0) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398B79u); RECOMP_ABI_CALL(0x00015C5Eu, sub_00015C5E); /* call 0x00015C5E */

loc_00398B79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398B86; /* je: equal / zero */

loc_00398B7D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398B86; /* jne: not equal / not zero */

loc_00398B81: ;
    MEM8(esp + 0x12) = 1;

loc_00398B86: ;
    eax = MEM32(esp + 0x24);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00398B30; /* jl: less (signed <) */

loc_00398B8F: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398B9A; /* jne: not equal / not zero */

loc_00398B97: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00398B9A: ;
    SET_LO8(eax, MEM8(esp + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398C2A; /* je: equal / zero */

loc_00398BA6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398C2A; /* je: equal / zero */

loc_00398BAF: ;
    eax = MEM32(esp + 0x40);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x12) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00398C27; /* jle: less or equal (signed <=) */

loc_00398BBE: ;
    edi = edi;

loc_00398BC0: ;
    ecx = MEM32(esi + 0x230);
    edx = MEM32(esp + 0x14);
    eax = esi + 0x6E8;
    MEM32(esp + 0xD8) = eax;
    eax = esi + 0x168;
    MEM32(esp + 0x80) = eax;
    eax = MEM32(ecx + edx * 4);
    ecx = esp + 0xD8;
    PUSH32(esp, ecx);
    ecx = esp + 0x84;
    MEM32(esp + 0xE0) = ebx;
    MEM32(esp + 0x88) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398C09u); RECOMP_ABI_CALL(0x00015C5Eu, sub_00015C5E); /* call 0x00015C5E */

loc_00398C09: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398C16; /* je: equal / zero */

loc_00398C0D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398C16; /* jne: not equal / not zero */

loc_00398C11: ;
    MEM8(esp + 0x12) = 1;

loc_00398C16: ;
    eax = MEM32(esp + 0x40);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00398BC0; /* jl: less (signed <) */

loc_00398C1F: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398C2A; /* jne: not equal / not zero */

loc_00398C27: ;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00398C2A: ;
    SET_LO8(eax, MEM8(esp + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398D06; /* je: equal / zero */

loc_00398C36: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398D60; /* je: equal / zero */

loc_00398C3F: ;
    eax = MEM32(esp + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(esp + 0x12) = 0;
    MEM32(esp + 0x2C) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00398D60; /* jle: less or equal (signed <=) */

loc_00398C58: ;
    edx = esi + 0x728;
    ebx = esi + 0x268;
    MEM32(esp + 0xF8) = edx;
    goto loc_00398C70;

    /* nop */

loc_00398C70: ;
    eax = MEM32(esi + 0x2B0);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(ebx + 0x30);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x8DCFB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56D176) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x8DCFB8), 0x56D176 (32-bit) */
    MEM32(esp + 0x74) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00398CA4; /* je: equal / zero */

loc_00398C91: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x56D18D);
    PUSH32(esp, 0x56D176);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398CA1u); RECOMP_ABI_CALL(0x0056D3F4u, sub_0056D3F4); /* call 0x0056D3F4 */

loc_00398CA1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00398CA4: ;
    ecx = MEM32(esp + 0x74);
    edx = MEM32(ebx + 0x30);
    eax = MEM32(ebx + 0x34);
    MEM32(esp + 0x54) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(esp + 0x58) = edx;
    edx = esp + 0x50;
    MEM32(esp + 0xFC) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0xFC;
    MEM32(esp + 0x54) = ebx;
    MEM32(esp + 0x60) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398CDAu); RECOMP_ABI_CALL(0x0002732Du, sub_0002732D); /* call 0x0002732D */

loc_00398CDA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398CE9; /* je: equal / zero */

loc_00398CDE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esp + 0x2C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398CE9; /* jne: not equal / not zero */

loc_00398CE4: ;
    MEM8(esp + 0x12) = 1;

loc_00398CE9: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x48);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x2C) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00398C70; /* jl: less (signed <) */

loc_00398CFE: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398D60; /* je: equal / zero */

loc_00398D06: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398D60; /* je: equal / zero */

loc_00398D0B: ;
    ecx = MEM32(esp + 0x34);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(esp + 0x12) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00398D60; /* jle: less or equal (signed <=) */

loc_00398D1A: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x430);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(esi + 0x3F0);
    ecx = MEM32(edx + ecx * 4);
    SET_LO16(ecx, MEM16(esi + ecx * 2 + 0x9FC));
    edx = MEM32(esi + 0x870);
    edi = edi;

loc_00398D40: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(edx + eax * 2)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), MEM16(edx + eax * 2) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398D4F; /* jne: not equal / not zero */

loc_00398D46: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398D4F; /* jne: not equal / not zero */

loc_00398D4A: ;
    MEM8(esp + 0x12) = 1;

loc_00398D4F: ;
    ebx = MEM32(esp + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00398D40; /* jl: less (signed <) */

loc_00398D58: ;
    SET_LO8(eax, MEM8(esp + 0x12));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00398D70; /* jne: not equal / not zero */

loc_00398D60: ;
    eax = MEM32(esp + 0x4C);
    edi = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x4C) = eax;
    MEM8(esp + 0x13) = 1;

loc_00398D70: ;
    edx = MEM32(esp + 0x28);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x74);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(esi + 0xB0);
    eax = MEM32(edx + eax * 4);
    ebx = edi + edi * 2;
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x8C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00398DE7; /* jne: not equal / not zero */

loc_00398D9A: ;
    edx = MEM32(esi + 0x70);
    ecx = eax + eax * 2;
    eax = edx + ecx * 4;
    ecx = MEM32(esi + 0x5F0);
    edx = MEM32(eax);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    SET_LO8(ecx, MEM8(esi + 0x90));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi + 0x68;
    if (CMP_EQ(_fa, _fb)) goto loc_00398E24; /* je: equal / zero */

loc_00398DC8: ;
    ecx = MEM32(esp + 0x8C);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esi + 0x5E8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398DE2u); RECOMP_ABI_CALL(0x0056D507u, sub_0056D507); /* call 0x0056D507 */

loc_00398DE2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00398E24;

loc_00398DE7: ;
    edx = eax + eax * 2;
    eax = MEM32(esi + 0x70);
    ecx = eax + edx * 4;
    edx = MEM32(esi + 0x5F0);
    eax = MEM32(ecx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x8C);
    PUSH32(esp, edx);
    eax = esi + 0x68;
    PUSH32(esp, eax);
    eax = esi + 0x5E8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398E21u); RECOMP_ABI_CALL(0x0056D44Bu, sub_0056D44B); /* call 0x0056D44B */

loc_00398E21: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00398E24: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398E30; /* je: equal / zero */

loc_00398E2C: ;
    MEM32(esp + 0x3C) = MEM32(esp + 0x3C) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00398E30: ;
    SET_LO8(eax, MEM8(esp + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398EDE; /* je: equal / zero */

loc_00398E3C: ;
    edx = MEM32(esp + 0x14);
    ecx = MEM32(esi + 0x130);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(esi + 0xF4);
    eax = esi + 0xE8;
    MEM32(esp + 0x94) = ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(eax + 8);
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 4;
    edx = MEM32(esi + 0x630);
    if (CMP_NE(_fa, _fb)) goto loc_00398EA7; /* jne: not equal / not zero */

loc_00398E6F: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ecx);
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    SET_LO8(ecx, MEM8(eax + 0x28));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398ED2; /* je: equal / zero */

loc_00398E88: ;
    edx = MEM32(esp + 0x94);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi + 0x628;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398EA2u); RECOMP_ABI_CALL(0x0056D507u, sub_0056D507); /* call 0x0056D507 */

loc_00398EA2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00398ED2;

loc_00398EA7: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = MEM32(ecx);
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    edx = MEM32(esp + 0x94);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esi + 0x628;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398ECFu); RECOMP_ABI_CALL(0x0056D44Bu, sub_0056D44B); /* call 0x0056D44B */

loc_00398ECF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00398ED2: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398EDE; /* je: equal / zero */

loc_00398EDA: ;
    MEM32(esp + 0x38) = MEM32(esp + 0x38) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00398EDE: ;
    SET_LO8(eax, MEM8(esp + 0x1E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398F69; /* je: equal / zero */

loc_00398EEA: ;
    ecx = MEM32(esi + 0x1B0);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(esi + 0x174);
    ebx = MEM32(esi + 0x670);
    eax = esi + 0x168;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(eax + 8);
    MEM32(esp + 0xA4) = ecx;
    ecx = MEM32(edx + ecx * 8);
    MEM32(ebx + edi * 8) = ecx;
    ecx = MEM32(esp + 0xA4);
    edx = MEM32(edx + ecx * 8 + 4);
    MEM32(ebx + edi * 8 + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00398F4B; /* jne: not equal / not zero */

loc_00398F2C: ;
    SET_LO8(edx, MEM8(eax + 0x28));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398F5D; /* je: equal / zero */

loc_00398F33: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esi + 0x668;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398F46u); RECOMP_ABI_CALL(0x0056D507u, sub_0056D507); /* call 0x0056D507 */

loc_00398F46: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00398F5D;

loc_00398F4B: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esi + 0x668;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398F5Au); RECOMP_ABI_CALL(0x0056D44Bu, sub_0056D44B); /* call 0x0056D44B */

loc_00398F5A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00398F5D: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398F69; /* je: equal / zero */

loc_00398F65: ;
    MEM32(esp + 0x24) = MEM32(esp + 0x24) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00398F69: ;
    SET_LO8(eax, MEM8(esp + 0x1F));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398FF4; /* je: equal / zero */

loc_00398F75: ;
    ecx = MEM32(esi + 0x1F0);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(esi + 0x174);
    ebx = MEM32(esi + 0x6B0);
    eax = esi + 0x168;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(eax + 8);
    MEM32(esp + 0xB4) = ecx;
    ecx = MEM32(edx + ecx * 8);
    MEM32(ebx + edi * 8) = ecx;
    ecx = MEM32(esp + 0xB4);
    edx = MEM32(edx + ecx * 8 + 4);
    MEM32(ebx + edi * 8 + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00398FD6; /* jne: not equal / not zero */

loc_00398FB7: ;
    SET_LO8(edx, MEM8(eax + 0x28));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398FE8; /* je: equal / zero */

loc_00398FBE: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esi + 0x6A8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398FD1u); RECOMP_ABI_CALL(0x0056D507u, sub_0056D507); /* call 0x0056D507 */

loc_00398FD1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00398FE8;

loc_00398FD6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esi + 0x6A8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00398FE5u); RECOMP_ABI_CALL(0x0056D44Bu, sub_0056D44B); /* call 0x0056D44B */

loc_00398FE5: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00398FE8: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00398FF4; /* je: equal / zero */

loc_00398FF0: ;
    MEM32(esp + 0x20) = MEM32(esp + 0x20) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00398FF4: ;
    SET_LO8(eax, MEM8(esp + 0x1A));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039907F; /* je: equal / zero */

loc_00399000: ;
    ecx = MEM32(esi + 0x230);
    edx = MEM32(esp + 0x14);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(esi + 0x174);
    ebx = MEM32(esi + 0x6F0);
    eax = esi + 0x168;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edx = MEM32(eax + 8);
    MEM32(esp + 0xC4) = ecx;
    ecx = MEM32(edx + ecx * 8);
    MEM32(ebx + edi * 8) = ecx;
    ecx = MEM32(esp + 0xC4);
    edx = MEM32(edx + ecx * 8 + 4);
    MEM32(ebx + edi * 8 + 4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00399061; /* jne: not equal / not zero */

loc_00399042: ;
    SET_LO8(edx, MEM8(eax + 0x28));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399073; /* je: equal / zero */

loc_00399049: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esi + 0x6E8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039905Cu); RECOMP_ABI_CALL(0x0056D507u, sub_0056D507); /* call 0x0056D507 */

loc_0039905C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00399073;

loc_00399061: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = esi + 0x6E8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399070u); RECOMP_ABI_CALL(0x0056D44Bu, sub_0056D44B); /* call 0x0056D44B */

loc_00399070: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00399073: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039907F; /* je: equal / zero */

loc_0039907B: ;
    MEM32(esp + 0x40) = MEM32(esp + 0x40) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0039907F: ;
    SET_LO8(eax, MEM8(esp + 0x1D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039913B; /* je: equal / zero */

loc_0039908B: ;
    eax = MEM32(esi + 0x2B0);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(esi + 0x298);
    _fa = (uint32_t)(MEM32(eax * 4 + 0x8DCFB8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56D176) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax * 4 + 0x8DCFB8), 0x56D176 (32-bit) */
    ebx = esi + 0x268;
    MEM32(esp + 0x64) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003990C8; /* je: equal / zero */

loc_003990B5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x56D18D);
    PUSH32(esp, 0x56D176);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003990C5u); RECOMP_ABI_CALL(0x0056D3F4u, sub_0056D3F4); /* call 0x0056D3F4 */

loc_003990C5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003990C8: ;
    ecx = MEM32(ebx + 0x34);
    edx = MEM32(ebx + 0x2C);
    eax = MEM32(ebx + 0x30);
    MEM32(esp + 0x10C) = ecx;
    ecx = MEM32(edx + 4);
    edx = MEM32(ebx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x68);
    edx = edx + ecx * 4;
    ecx = MEM32(esi + 0x730);
    PUSH32(esp, edx);
    edx = ecx + edi * 4;
    PUSH32(esp, edx);
    MEM32(esp + 0x114) = eax;
    { uint32_t _icall_target = MEM32(eax * 4 + 0x8DCFB8); PUSH32(esp, 0x003990FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003990F8u); } /* indirect call */
    }

loc_003990FF: ;
    SET_LO8(eax, MEM8(ebx + 0x28));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039912F; /* je: equal / zero */

loc_00399109: ;
    eax = MEM32(esp + 0x10C);
    ecx = MEM32(esp + 0x108);
    edx = MEM32(esp + 0x64);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    eax = esi + 0x728;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039912Cu); RECOMP_ABI_CALL(0x0056D507u, sub_0056D507); /* call 0x0056D507 */

loc_0039912C: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0039912F: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039913B; /* je: equal / zero */

loc_00399137: ;
    MEM32(esp + 0x48) = MEM32(esp + 0x48) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0039913B: ;
    eax = MEM32(esi + 0x430);
    ecx = MEM32(esp + 0x14);
    eax = MEM32(eax + ecx * 4);
    edx = MEM32(esi + 0x3F0);
    eax = MEM32(edx + eax * 4);
    SET_LO16(edx, MEM16(esi + eax * 2 + 0x9FC));
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esi + 0x870);
    MEM16(ecx + edi * 2) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_0039916F; /* je: equal / zero */

loc_0039916B: ;
    MEM32(esp + 0x34) = MEM32(esp + 0x34) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0039916F: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    eax = MEM32(esp + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_0039918D; /* je: equal / zero */

loc_0039917B: ;
    edx = MEM32(esi + 0x930);
    ecx = eax;
    MEM8(esp + 0x1B) = 0;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(edx + ecx * 2) = LO16(edi);

loc_0039918D: ;
    ecx = eax;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esp + 0x30) = eax;
    eax = MEM32(esi + 0x930);
    ebx = MEM32(esp + 0x30);
    MEM16(eax + ecx * 2) = LO16(edi);

loc_003991A2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x9F0)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x9F0) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003991D0; /* jge: greater or equal (signed >=) */

loc_003991AA: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x44);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003988C2; /* jl: less (signed <) */

loc_003991BF: ;
    goto loc_003991F2;

loc_003991C1: ;
    ecx = MEM32(esp + 0x14);
    goto loc_003991EC;

loc_003991C7: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x9E8) = eax;
    goto loc_003991F2;

loc_003991D0: ;
    edx = MEM32(esi + 0x30);
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003991E7; /* jne: not equal / not zero */

loc_003991D8: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x9E8) = eax;
    goto loc_003991F2;

loc_003991E7: ;
    ecx = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003991EC: ;
    MEM32(esi + 0x9E8) = ecx;

loc_003991F2: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003991FAu); RECOMP_ABI_CALL(0x0056C650u, sub_0056C650); /* call 0x0056C650 */

loc_003991FA: ;
    edx = MEM32(esp + 0x3C);
    eax = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x24);
    MEM32(esi + 0x5E8) = edx;
    edx = MEM32(esp + 0x20);
    MEM32(esi + 0x628) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(esi + 0x6A8) = edx;
    edx = MEM32(esp + 0x34);
    MEM32(esi + 0x6E8) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x19FC);
    MEM32(esi + 0x668) = ecx;
    ecx = MEM32(esp + 0x48);
    MEM32(esi + 0x868) = edx;
    MEM32(esi + 0x728) = ecx;
    ecx = MEM32(esi + 0x8B0);
    MEM32(ecx) = eax;
    eax = MEM32(esi + 0x840);
    edx = MEM32(esi + 0x844);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x868);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x8A8) = 1;
    MEM32(esi + 0x928) = ebx;
    MEM32(esp + 0x4C) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_003992C1; /* jle: less or equal (signed <=) */

loc_0039927F: ;
    /* nop */

loc_00399280: ;
    ecx = MEM32(esi + 0x870);
    SET_LO16(edx, MEM16(ecx + edi * 2));
    eax = MEM32(esp + 0x4C);
    ecx = MEM32(eax + 0x2C);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(esp + 0x20);
    MEM16(esp + 0x28) = LO16(edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003992A3u); RECOMP_ABI_CALL(0x00571C91u, sub_00571C91); /* call 0x00571C91 */

loc_003992A3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 0x28));
    _fb = (uint32_t)(MEM32(esp + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esi + 0x870);
    MEM16(edx + edi * 2) = LO16(eax);
    eax = MEM32(esi + 0x868);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00399280; /* jl: less (signed <) */

loc_003992C1: ;
    eax = MEM32(esi + 0x970);
    MEM32(eax) = ebx;
    eax = MEM32(esi + 0x770);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x968) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0039936E; /* je: equal / zero */

loc_003992E1: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = eax;
    MEMF(ecx) = xmm0.f[0]; /* movss */
    edx = MEM32(esi + 0x770);
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x770);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x770);
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0x2F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x768) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00399345; /* je: equal / zero */

loc_00399327: ;
    edx = eax;
    ecx = MEM32(edx);
    eax = MEM32(esi + 0x770);
    MEM32(eax) = ecx;
    edx = MEM32(esi + 0x2F0);
    eax = MEM32(esi + 0x770);
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;

loc_00399345: ;
    eax = MEM32(esi + 0x330);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039936E; /* je: equal / zero */

loc_0039934F: ;
    edx = eax;
    ecx = MEM32(edx);
    eax = MEM32(esi + 0x770);
    MEM32(eax + 8) = ecx;
    edx = MEM32(esi + 0x330);
    eax = MEM32(esi + 0x770);
    ecx = MEM32(edx + 4);
    MEM32(eax + 0xC) = ecx;

loc_0039936E: ;
    eax = MEM32(esi + 0x370);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399407; /* je: equal / zero */

loc_0039937C: ;
    eax = MEM32(esi + 0x7B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399407; /* je: equal / zero */

loc_0039938A: ;
    ecx = MEM32(esi + 0x374);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + 0x368;
    edi = esi + 0x7A8;
    if (CMP_NE(_fa, _fb)) goto loc_003993D7; /* jne: not equal / not zero */

loc_003993A0: ;
    edx = MEM32(eax + 8);
    ebx = MEM32(edx);
    ecx = MEM32(edi + 8);
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(ecx + 8) = ebx;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    SET_LO8(ecx, MEM8(eax + 0x28));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399401; /* je: equal / zero */

loc_003993C3: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003993D2u); RECOMP_ABI_CALL(0x0056D507u, sub_0056D507); /* call 0x0056D507 */

loc_003993D2: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00399401;

loc_003993D7: ;
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx);
    edx = MEM32(edi + 8);
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(ecx + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(edx + 8) = ebx;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003993FEu); RECOMP_ABI_CALL(0x0056D44Bu, sub_0056D44B); /* call 0x0056D44B */

loc_003993FE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00399401: ;
    MEM32(edi) = 1;

loc_00399407: ;
    eax = MEM32(esi + 0x3B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003994A0; /* je: equal / zero */

loc_00399415: ;
    eax = MEM32(esi + 0x7F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003994A0; /* je: equal / zero */

loc_00399423: ;
    ecx = MEM32(esi + 0x3B4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = esi + 0x3A8;
    edi = esi + 0x7E8;
    if (CMP_NE(_fa, _fb)) goto loc_00399470; /* jne: not equal / not zero */

loc_00399439: ;
    edx = MEM32(eax + 8);
    ebx = MEM32(edx);
    ecx = MEM32(edi + 8);
    MEM32(ecx) = ebx;
    ebx = MEM32(edx + 4);
    MEM32(ecx + 4) = ebx;
    ebx = MEM32(edx + 8);
    MEM32(ecx + 8) = ebx;
    edx = MEM32(edx + 0xC);
    MEM32(ecx + 0xC) = edx;
    SET_LO8(ecx, MEM8(eax + 0x28));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039949A; /* je: equal / zero */

loc_0039945C: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039946Bu); RECOMP_ABI_CALL(0x0056D507u, sub_0056D507); /* call 0x0056D507 */

loc_0039946B: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0039949A;

loc_00399470: ;
    ecx = MEM32(eax + 8);
    ebx = MEM32(ecx);
    edx = MEM32(edi + 8);
    MEM32(edx) = ebx;
    ebx = MEM32(ecx + 4);
    MEM32(edx + 4) = ebx;
    ebx = MEM32(ecx + 8);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(edx + 8) = ebx;
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(edx + 0xC) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399497u); RECOMP_ABI_CALL(0x0056D44Bu, sub_0056D44B); /* call 0x0056D44B */

loc_00399497: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0039949A: ;
    MEM32(edi) = 1;

loc_003994A0: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003994B0; /* jne: not equal / not zero */

loc_003994AA: ;
    MEM32(esi + 0x9E8) = eax;

loc_003994B0: ;
    eax = MEM32(esi + 0x570);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399564; /* je: equal / zero */

loc_003994BE: ;
    eax = MEM32(esi + 0x9B0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399564; /* je: equal / zero */

loc_003994CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    edi = esi + 0x568;
    PUSH32(esp, edi);
    PUSH32(esp, 0x8333A0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003994E0u); RECOMP_ABI_CALL(0x00032890u, sub_00032890); /* call 0x00032890 */

loc_003994E0: ;
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x9A8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x9A8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399534; /* jne: not equal / not zero */

loc_003994F0: ;
    edx = MEM32(edi + 8);
    ecx = MEM32(edx);
    eax = MEM32(esi + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(edx + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edx + 8);
    MEM32(eax + 8) = ecx;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    SET_LO8(eax, MEM8(edi + 0x28));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039955E; /* je: equal / zero */

loc_00399513: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00399522u); RECOMP_ABI_CALL(0x0056D507u, sub_0056D507); /* call 0x0056D507 */

loc_00399522: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = 1;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00399534: ;
    eax = MEM32(edi + 8);
    edx = MEM32(eax);
    ecx = MEM32(esi + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(eax + 8);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    MEM32(ecx + 8) = edx;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    MEM32(ecx + 0xC) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0039955Bu); RECOMP_ABI_CALL(0x0056D44Bu, sub_0056D44B); /* call 0x0056D44B */

loc_0039955B: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0039955E: ;
    MEM32(esi) = 1;

loc_00399564: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00399970
 * Original: 0x00399970 - 0x00399AE4 (372 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399970(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00399970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    ebx = 1;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10C) = 0xFFFFFFFFu;
    MEM32(esi) = 4;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = edi;
    SET_LO8(eax, MEM8(0x8FC1CD));
    PUSH32(esp, 0x0039999Eu); RECOMP_ABI_CALL(0x004490D5u, sub_004490D5); /* call 0x004490D5 */

loc_0039999E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003999AC; /* jne: not equal / not zero */

loc_003999A3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003999A9u); RECOMP_ABI_CALL(0x0002F933u, sub_0002F933); /* call 0x0002F933 */

loc_003999A9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003999AC: ;
    PUSH32(esp, 0x003999B1u); RECOMP_ABI_CALL(0x00448763u, sub_00448763); /* call 0x00448763 */

loc_003999B1: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 3;
    if ((_fa == 0)) goto loc_003999D6; /* je: equal / zero */

loc_003999BF: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003999CD; /* je: equal / zero */

loc_003999C2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003999DC; /* jne: not equal / not zero */

loc_003999C5: ;
    MEM8(esi + 0x111) = LO8(edx);
    goto loc_003999DC;

loc_003999CD: ;
    MEM8(esi + 0x111) = 0;
    goto loc_003999DC;

loc_003999D6: ;
    MEM8(esi + 0x111) = LO8(ebx);

loc_003999DC: ;
    SET_LO8(eax, 0x50);
    MEM8(esi + 0x114) = LO8(eax);
    MEM8(esi + 0x115) = LO8(eax);
    MEM8(esi + 0x117) = LO8(eax);
    MEM8(esi + 0x11B) = LO8(eax);
    eax = 0xFF;
    SET_LO8(ecx, 0x64);
    MEM32(esi + 0x124) = edi;
    MEM32(esi + 0x158) = edi;
    MEM32(esi + 0x194) = edi;
    POP32(esp, edi);
    MEM8(esi + 0x113) = LO8(ebx);
    MEM8(esi + 0x116) = LO8(ebx);
    MEM8(esi + 0x120) = LO8(ebx);
    MEM32(esi + 0x128) = ebx;
    MEM32(esi + 0x12C) = ebx;
    MEM32(esi + 0x14C) = ebx;
    MEM32(esi + 0x150) = ebx;
    MEM32(esi + 0x154) = ebx;
    MEM32(esi + 0x188) = ebx;
    MEM32(esi + 0x18C) = ebx;
    MEM32(esi + 0x160) = ebx;
    MEM32(esi + 0x164) = ebx;
    MEM32(esi + 0x168) = ebx;
    MEM32(esi + 0x16C) = ebx;
    MEM32(esi + 0x15C) = ebx;
    MEM32(esi + 0x170) = eax;
    MEM32(esi + 0x174) = eax;
    MEM32(esi + 0x178) = eax;
    MEM32(esi + 0x17C) = eax;
    MEM32(esi + 0x180) = eax;
    MEM32(esi + 0x184) = ebx;
    MEM32(esi + 0x190) = ebx;
    MEM32(esi + 0x1B0) = ebx;
    MEM8(esi + 0x112) = 2;
    MEM8(esi + 0x118) = 0x3C;
    MEM8(esi + 0x119) = LO8(ecx);
    MEM8(esi + 0x11A) = LO8(ecx);
    MEM8(esi + 0x11C) = LO8(ecx);
    MEM8(esi + 0x11D) = 0;
    MEM8(esi + 0x11E) = 0;
    MEM8(esi + 0x11F) = 0;
    MEM32(esi + 0x130) = edx;
    MEM32(esi + 0x198) = 4;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00399B50
 * Original: 0x00399B50 - 0x00399B56 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399B50(void)
{

loc_00399B50: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_00399B60
 * Original: 0x00399B60 - 0x00399BFA (154 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399B60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00399B60: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    MEM8(0x904B90) = LO8(ebx);
    PUSH32(esp, 0x00399B6Eu); RECOMP_ABI_CALL(0x00448763u, sub_00448763); /* call 0x00448763 */

loc_00399B6E: ;
    eax = eax & 0xFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00399B90; /* je: equal / zero */

loc_00399B79: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00399B88; /* je: equal / zero */

loc_00399B7C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00399B96; /* jne: not equal / not zero */

loc_00399B7F: ;
    MEM8(0x904B91) = 3;
    goto loc_00399B96;

loc_00399B88: ;
    MEM8(0x904B91) = LO8(ecx);
    goto loc_00399B96;

loc_00399B90: ;
    MEM8(0x904B91) = LO8(ebx);

loc_00399B96: ;
    SET_LO8(eax, 0x50);
    SET_LO8(edx, 0x64);
    MEM8(0x904B93) = LO8(ebx);
    MEM8(0x904B96) = LO8(ebx);
    MEM8(0x904BA0) = LO8(ebx);
    MEM8(0x904B92) = 2;
    MEM8(0x904B94) = LO8(eax);
    MEM8(0x904B95) = LO8(eax);
    MEM8(0x904B97) = LO8(eax);
    MEM8(0x904B98) = 0x3C;
    MEM8(0x904B99) = LO8(edx);
    MEM8(0x904B9A) = LO8(edx);
    MEM8(0x904B9B) = LO8(eax);
    MEM8(0x904B9C) = LO8(edx);
    MEM8(0x904B9D) = LO8(ecx);
    MEM8(0x904B9E) = LO8(ecx);
    MEM8(0x904B9F) = LO8(ecx);
    MEM8(0x904BA1) = LO8(ecx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00399C20
 * Original: 0x00399C20 - 0x00399C28 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399C20(void)
{

loc_00399C20: ;
    PUSH32(esp, 0x00399C25u); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_00399C25: ;
    SET_LO8(eax, 1);
    esp += 4; return; /* ret */

}

/**
 * sub_00399C30
 * Original: 0x00399C30 - 0x00399C37 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399C30(void)
{

loc_00399C30: ;
    MEM32(ecx) = 0x87D31C;
    esp += 4; return; /* ret */

}

/**
 * sub_00399C40
 * Original: 0x00399C40 - 0x00399C4E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399C40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00399C40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00399C60
 * Original: 0x00399C60 - 0x00399C67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399C60(void)
{

loc_00399C60: ;
    MEM32(ecx) = 0x87D31C;
    esp += 4; return; /* ret */

}

/**
 * sub_00399C70
 * Original: 0x00399C70 - 0x00399C79 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399C70(void)
{

loc_00399C70: ;
    eax = ecx;
    MEM32(eax) = 0x87D31C;
    esp += 4; return; /* ret */

}

/**
 * sub_00399C80
 * Original: 0x00399C80 - 0x00399C89 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399C80(void)
{

loc_00399C80: ;
    eax = ecx;
    MEM32(eax) = 0x833408;
    esp += 4; return; /* ret */

}

/**
 * sub_00399C90
 * Original: 0x00399C90 - 0x00399C93 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00399C90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00399C90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00399CA0
 * Original: 0x00399CA0 - 0x00399CA3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00399CA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00399CA0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00399CB0
 * Original: 0x00399CB0 - 0x00399CB9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399CB0(void)
{

loc_00399CB0: ;
    eax = ecx;
    MEM32(eax) = 0x833430;
    esp += 4; return; /* ret */

}

/**
 * sub_00399CC0
 * Original: 0x00399CC0 - 0x00399CC3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00399CC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00399CC0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00399CD0
 * Original: 0x00399CD0 - 0x00399CD3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00399CD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00399CD0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00399CE0
 * Original: 0x00399CE0 - 0x00399CE1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399CE0(void)
{

loc_00399CE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00399CF0
 * Original: 0x00399CF0 - 0x00399CF4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399CF0(void)
{

loc_00399CF0: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00399D00
 * Original: 0x00399D00 - 0x00399D04 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399D00(void)
{

loc_00399D00: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_00399D10
 * Original: 0x00399D10 - 0x00399D17 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399D10(void)
{

loc_00399D10: ;
    eax = MEM32(ecx + 0x88);
    esp += 4; return; /* ret */

}

/**
 * sub_00399D20
 * Original: 0x00399D20 - 0x00399D3D (29 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399D20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00399D20: ;
    eax = MEM32(esp + 4);
    edx = ecx + 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00399D30: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399D30; /* jne: not equal / not zero */

loc_00399D3A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00399D50
 * Original: 0x00399D50 - 0x00399D5D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399D50(void)
{

loc_00399D50: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x88) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00399D60
 * Original: 0x00399D60 - 0x00399D67 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399D60(void)
{

loc_00399D60: ;
    eax = MEM32(ecx + 0x8C);
    esp += 4; return; /* ret */

}

/**
 * sub_00399D70
 * Original: 0x00399D70 - 0x00399D85 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399D70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00399D70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(0x904F68);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00399D81u); RECOMP_ABI_CALL(0x0059EDE2u, sub_0059EDE2); /* call 0x0059EDE2 */

loc_00399D81: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00399D90
 * Original: 0x00399D90 - 0x00399E61 (209 bytes, 56 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00399D90: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399DFC; /* jne: not equal / not zero */

loc_00399DA0: ;
    _fa = (uint32_t)(MEM8(esp + 0x24)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0x24), LO8(ecx) (8-bit) */
    MEM32(esi + 0x14C) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00399E38; /* je: equal / zero */

loc_00399DB4: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, 0x00399DC1u); RECOMP_ABI_CALL(0x00033C18u, sub_00033C18); /* call 0x00033C18 */

loc_00399DC1: ;
    ecx = MEM32(esi + 0x124);
    eax = MEM32(esi + 0x120);
    edx = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x128);
    MEM32(esp + 0x24) = ecx;
    ecx = esi + 4;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00399DE7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00399DE4u); } /* indirect call */
    }

loc_00399DE7: ;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    PUSH32(esp, 0x00399DF1u); RECOMP_ABI_CALL(0x00037E58u, sub_00037E58); /* call 0x00037E58 */

loc_00399DF1: ;
    ecx = esp + 4;
    PUSH32(esp, 0x00399DFAu); RECOMP_ABI_CALL(0x0002E2A4u, sub_0002E2A4); /* call 0x0002E2A4 */

loc_00399DFA: ;
    goto loc_00399E38;

loc_00399DFC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xE (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399E32; /* jne: not equal / not zero */

loc_00399E01: ;
    edx = MEM32(esp + 0x28);
    PUSH32(esp, 0x904FF8);
    PUSH32(esp, ecx);
    MEM32(0x904FF8) = 2;
    MEM32(0x904FFC) = ecx;
    MEM32(0x905000) = 0x55;
    MEM32(0x905004) = edx;
    PUSH32(esp, 0x00399E30u); RECOMP_ABI_CALL(0x00448EE8u, sub_00448EE8); /* call 0x00448EE8 */

loc_00399E30: ;
    goto loc_00399E38;

loc_00399E32: ;
    MEM32(esi + 0x14C) = ecx;

loc_00399E38: ;
    PUSH32(esp, 0x00399E3Du); RECOMP_ABI_CALL(0x0001EACAu, sub_0001EACA); /* call 0x0001EACA */

loc_00399E3D: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA2);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00399E4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00399E48u); } /* indirect call */
    }

loc_00399E4B: ;
    PUSH32(esp, 0x833448);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00399E57u); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_00399E57: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00399EA0
 * Original: 0x00399EA0 - 0x00399F32 (146 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399EA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00399EA0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00399EA9u); RECOMP_ABI_CALL(0x0059E3BCu, sub_0059E3BC); /* call 0x0059E3BC */

loc_00399EA9: ;
    PUSH32(esp, 0x00399EAEu); RECOMP_ABI_CALL(0x0059E3BCu, sub_0059E3BC); /* call 0x0059E3BC */

loc_00399EAE: ;
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3E8);
    PUSH32(esp, 0x00399EBBu); RECOMP_ABI_CALL(0x0059E42Fu, sub_0059E42F); /* call 0x0059E42F */

loc_00399EBB: ;
    ecx = eax;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00399ECBu); RECOMP_ABI_CALL(0x005C18A7u, sub_005C18A7); /* call 0x005C18A7 */

loc_00399ECB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399F2F; /* je: equal / zero */

loc_00399ECF: ;
    /* nop */

loc_00399ED0: ;
    SET_LO8(eax, MEM8(esi + 0x12D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399F2F; /* jne: not equal / not zero */

loc_00399EDA: ;
    SET_LO8(eax, MEM8(esi + 0x11D));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00399EEE; /* je: equal / zero */

loc_00399EE4: ;
    SET_LO8(eax, MEM8(esi + 0x11E));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399F21; /* jne: not equal / not zero */

loc_00399EEE: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x00399EF5u); RECOMP_ABI_CALL(0x0059E4E7u, sub_0059E4E7); /* call 0x0059E4E7 */

loc_00399EF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00399EFDu); RECOMP_ABI_CALL(0x0059E3BCu, sub_0059E3BC); /* call 0x0059E3BC */

loc_00399EFD: ;
    edi = eax;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3E8);
    PUSH32(esp, 0x00399F0Au); RECOMP_ABI_CALL(0x0059E42Fu, sub_0059E42F); /* call 0x0059E42F */

loc_00399F0A: ;
    ecx = eax;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00399F1Au); RECOMP_ABI_CALL(0x005C18A7u, sub_005C18A7); /* call 0x005C18A7 */

loc_00399F1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00399ED0; /* jne: not equal / not zero */

loc_00399F1E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00399F21: ;
    MEM8(esi + 0x11D) = 0;
    MEM8(esi + 0x11E) = 0;

loc_00399F2F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00399F60
 * Original: 0x00399F60 - 0x0039A08E (302 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00399F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00399F60: ;
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x83366C);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x334);
    ecx = esi + 0x1C;
    MEM32(esp + 0x70) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x6C) = eax;
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, 0xF);
    MEM32(esp + 0x7C) = edx;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x18) = eax;
    edx = esp + 0x20;
    PUSH32(esp, 0x8B0138);
    MEM32(esi + 0x128) = 0;
    ecx = 0x20;
    edi = 0x904EE8;
    PUSH32(esp, edx);
    MEM32(esp + 0x38) = 0x833474;
    MEM32(esp + 0x78) = 1;
    MEM32(esp + 0x24) = eax;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 0x00399FE0u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00399FE0: ;
    eax = MEM32(esi + 0x128);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(7) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, 0xF);
    _fb = (uint32_t)(0x8C63E0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8C63E0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00399FFBu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00399FFB: ;
    edx = esp + 0x34;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x7E0380);
    PUSH32(esp, 0x904EE8);
    PUSH32(esp, 0x0039A014u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0039A014: ;
    edi = esi + 0x195;
    eax = 0x8B0138;
    ecx = edi;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0039A026: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039A026; /* jne: not equal / not zero */

loc_0039A030: ;
    MEM32(esp + 8) = 0x904EE8;
    PUSH32(esp, 0x0039A03Du); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0039A03D: ;
    PUSH32(esp, 0xFFFFFFFFu);
    ecx = esp + 0x80;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0039A04Du); RECOMP_ABI_CALL(0x00037354u, sub_00037354); /* call 0x00037354 */

loc_0039A04D: ;
    PUSH32(esp, 0x0039A052u); RECOMP_ABI_CALL(0x000323A9u, sub_000323A9); /* call 0x000323A9 */

loc_0039A052: ;
    PUSH32(esp, 0x80);
    edx = esp + 0x8C;
    PUSH32(esp, 0x904DE8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0039A069u); RECOMP_ABI_CALL(0x00022C29u, sub_00022C29); /* call 0x00022C29 */

loc_0039A069: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x904DE8);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x0039A085u); RECOMP_ABI_CALL(0x005C16E4u, sub_005C16E4); /* call 0x005C16E4 */

loc_0039A085: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A0E0
 * Original: 0x0039A0E0 - 0x0039A130 (80 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A0E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A0E0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, 0x0039A0F3u); RECOMP_ABI_CALL(0x00033C18u, sub_00033C18); /* call 0x00033C18 */

loc_0039A0F3: ;
    eax = MEM32(esi + 4);
    edx = esp + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    ecx = esi + 4;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = 0;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0039A110u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0039A10Du); } /* indirect call */
    }

loc_0039A110: ;
    PUSH32(esp, eax);
    ecx = esp + 0x14;
    PUSH32(esp, 0x0039A11Au); RECOMP_ABI_CALL(0x00014444u, sub_00014444); /* call 0x00014444 */

loc_0039A11A: ;
    esi = MEM32(esp + 4);
    ecx = esp + 8;
    PUSH32(esp, 0x0039A127u); RECOMP_ABI_CALL(0x0002E2A4u, sub_0002E2A4); /* call 0x0002E2A4 */

loc_0039A127: ;
    eax = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0039A150
 * Original: 0x0039A150 - 0x0039A373 (547 bytes, 118 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039A150: ;
    eax = MEM32(ecx + 0x14);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0039A1F7; /* ja: above (unsigned >) */

loc_0039A162: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x39A374); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0039A169u) goto loc_0039A169;
    if (_jt == 0x0039A17Au) goto loc_0039A17A;
    if (_jt == 0x0039A18Eu) goto loc_0039A18E;
    if (_jt == 0x0039A1AEu) goto loc_0039A1AE;
    if (_jt == 0x0039A1CEu) goto loc_0039A1CE;
    if (_jt == 0x0039A1E3u) goto loc_0039A1E3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0039A169: ;
    ecx = MEM32(0x833544);
    eax = MEM32(0x833540);
    MEM32(esp + 4) = ecx;
    goto loc_0039A1F4;

loc_0039A17A: ;
    edx = MEM32(0x833534);
    eax = MEM32(0x833538);
    MEM32(esp) = edx;
    MEM32(esp + 4) = eax;
    goto loc_0039A1F7;

loc_0039A18E: ;
    ecx = MEM32(0x83352C);
    SET_LO16(edx, MEM16(0x833530));
    SET_LO8(eax, MEM8(0x833532));
    MEM32(esp) = ecx;
    MEM16(esp + 4) = LO16(edx);
    MEM8(esp + 6) = LO8(eax);
    goto loc_0039A1F7;

loc_0039A1AE: ;
    ecx = MEM32(0x833524);
    SET_LO16(edx, MEM16(0x833528));
    SET_LO8(eax, MEM8(0x83352A));
    MEM32(esp) = ecx;
    MEM16(esp + 4) = LO16(edx);
    MEM8(esp + 6) = LO8(eax);
    goto loc_0039A1F7;

loc_0039A1CE: ;
    ecx = MEM32(0x833518);
    edx = MEM32(0x83351C);
    MEM32(esp) = ecx;
    MEM32(esp + 4) = edx;
    goto loc_0039A1F7;

loc_0039A1E3: ;
    SET_LO16(ecx, MEM16(0x833514));
    eax = MEM32(0x833510);
    MEM16(esp + 4) = LO16(ecx);

loc_0039A1F4: ;
    MEM32(esp) = eax;

loc_0039A1F7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = esp + 8;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, 0x833500);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0039A20Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0039A20D: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x8334F0);
    PUSH32(esp, 0x0039A219u); RECOMP_ABI_CALL(0x0001908Eu, sub_0001908E); /* call 0x0001908E */

loc_0039A219: ;
    PUSH32(esp, 0);
    ecx = esp + 0x34;
    PUSH32(esp, 0x500);
    PUSH32(esp, ecx);
    edi = eax;
    PUSH32(esp, 0x0039A22Cu); RECOMP_ABI_CALL(0x0002B3D3u, sub_0002B3D3); /* call 0x0002B3D3 */

loc_0039A22C: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    esi = eax;
    PUSH32(esp, 0x0039A236u); RECOMP_ABI_CALL(0x00034E74u, sub_00034E74); /* call 0x00034E74 */

loc_0039A236: ;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0039A23Eu); RECOMP_ABI_CALL(0x0059EE6Eu, sub_0059EE6E); /* call 0x0059EE6E */

loc_0039A23E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0039A248u); RECOMP_ABI_CALL(0x0059ED93u, sub_0059ED93); /* call 0x0059ED93 */

loc_0039A248: ;
    edx = MEM32(0x8334E4);
    ecx = MEM32(0x8334E8);
    MEM32(0x8C64E0) = edx;
    edx = MEM32(0x8334D8);
    MEM32(0x8C64E4) = ecx;
    ecx = MEM32(0x8334DC);
    MEM32(0x8C6560) = edx;
    edx = MEM32(0x8334CC);
    MEM32(0x8C6564) = ecx;
    ecx = MEM32(0x8334D0);
    MEM32(0x8C6660) = edx;
    edx = MEM32(0x8334C0);
    MEM32(0x8C6664) = ecx;
    ecx = MEM32(0x8334C4);
    MEM32(0x8C66E0) = edx;
    edx = MEM32(0x8334B4);
    MEM32(0x8C66E4) = ecx;
    ecx = MEM32(0x8334B8);
    MEM32(0x8C6760) = edx;
    edx = MEM32(0x8334A8);
    MEM32(0x8C6764) = ecx;
    ecx = MEM32(0x8334AC);
    MEM32(0x8C67E0) = edx;
    edx = MEM32(0x83349C);
    MEM32(0x8C67E4) = ecx;
    ecx = MEM32(0x8334A0);
    MEM32(0x8C6860) = edx;
    edx = MEM32(0x833490);
    MEM32(0x8C6864) = ecx;
    ecx = MEM32(0x833494);
    eax = 0x534F52;
    MEM32(0x8C68E0) = edx;
    edx = MEM32(0x833484);
    MEM32(0x8C68E4) = ecx;
    ecx = MEM32(0x833488);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x8C6960) = edx;
    edx = MEM32(0x833478);
    MEM32(0x8C6964) = ecx;
    ecx = MEM32(0x83347C);
    MEM32(0x8C63E0) = eax;
    MEM32(0x8C6A60) = eax;
    MEM32(0x8C6AE0) = eax;
    MEM32(0x8C6B60) = eax;
    POP32(esp, edi);
    eax = esi;
    MEM32(0x8C6460) = 0x414C50;
    MEM32(0x8C65E0) = 0x554F54;
    MEM32(0x8C69E0) = edx;
    MEM32(0x8C69E4) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(0x114) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x114;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A560
 * Original: 0x0039A560 - 0x0039A588 (40 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A560: ;
    edx = MEM32(esp + 4);
    SET_LO8(eax, MEM8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_0039A582; /* je: equal / zero */

loc_0039A56E: ;
    edi = edi;

loc_0039A570: ;
    SET_LO16(eax, SX8(LO8(eax)));
    MEM16(ecx) = LO16(eax);
    SET_LO8(eax, MEM8(edx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039A570; /* jne: not equal / not zero */

loc_0039A582: ;
    MEM16(ecx) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0039A5A0
 * Original: 0x0039A5A0 - 0x0039A5CA (42 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A5A0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039A5C2; /* je: equal / zero */

loc_0039A5AA: ;
    ecx = MEM32(esp + 8);
    edi = edi;

loc_0039A5B0: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(ecx) = LO8(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039A5B0; /* jne: not equal / not zero */

loc_0039A5BE: ;
    MEM8(ecx) = 0;
    esp += 4; return; /* ret */

loc_0039A5C2: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0039A5E0
 * Original: 0x0039A5E0 - 0x0039A5F2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A5E0(void)
{

loc_0039A5E0: ;
    MEM8(ecx + 0x194) = 1;
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0039A5F1u); RECOMP_ABI_CALL(0x005C1883u, sub_005C1883); /* call 0x005C1883 */

loc_0039A5F1: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0039A600
 * Original: 0x0039A600 - 0x0039A612 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A600(void)
{

loc_0039A600: ;
    MEM8(ecx + 0x194) = 0;
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0039A611u); RECOMP_ABI_CALL(0x005C1883u, sub_005C1883); /* call 0x005C1883 */

loc_0039A611: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0039A620
 * Original: 0x0039A620 - 0x0039A661 (65 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A620: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x833570);
    PUSH32(esp, 0x20);
    esi = ecx;
    PUSH32(esp, 0x0039A62Fu); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0039A62F: ;
    PUSH32(esp, 0x833568);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0039A63Bu); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0039A63B: ;
    eax = MEM32(0x8C6C18);
    PUSH32(esp, eax);
    PUSH32(esp, 0x83354C);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0039A64Du); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0039A64D: ;
    ecx = MEM32(0x8C6C18);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x14);
    PUSH32(esp, 0x0039A65Fu); RECOMP_ABI_CALL(0x005C186Au, sub_005C186A); /* call 0x005C186A */

loc_0039A65F: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0039A680
 * Original: 0x0039A680 - 0x0039A688 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039A680: ;
    ecx = MEM32(ecx + 0x14);
    g_seh_ebp = ebp; sub_005C186A(); return; /* tail jmp 0x005C186A */

}

/**
 * sub_0039A690
 * Original: 0x0039A690 - 0x0039A69F (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A690(void)
{

loc_0039A690: ;
    eax = MEM32(0x8C6C18);
    ecx = MEM32(ecx + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0039A69Eu); RECOMP_ABI_CALL(0x005C186Au, sub_005C186A); /* call 0x005C186A */

loc_0039A69E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0039A6B0
 * Original: 0x0039A6B0 - 0x0039A6D1 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A6B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A6B0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0039A6BBu); RECOMP_ABI_CALL(0x000270A3u, sub_000270A3); /* call 0x000270A3 */

loc_0039A6BB: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x8335BC);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x0039A6CAu); RECOMP_ABI_CALL(0x0059F096u, sub_0059F096); /* call 0x0059F096 */

loc_0039A6CA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0039A6E0
 * Original: 0x0039A6E0 - 0x0039A6E3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A6E0(void)
{

loc_0039A6E0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0039A6F0
 * Original: 0x0039A6F0 - 0x0039A6F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A6F0(void)
{

loc_0039A6F0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0039A700
 * Original: 0x0039A700 - 0x0039A709 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A700(void)
{

loc_0039A700: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0039A710
 * Original: 0x0039A710 - 0x0039A71A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A710(void)
{

loc_0039A710: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0039A720
 * Original: 0x0039A720 - 0x0039A724 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A720(void)
{

loc_0039A720: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_0039A730
 * Original: 0x0039A730 - 0x0039A733 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A730(void)
{

loc_0039A730: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0039A740
 * Original: 0x0039A740 - 0x0039A75F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A740: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87D31C;
    if (TEST_Z(_fa, _fb)) goto loc_0039A759; /* je: equal / zero */

loc_0039A750: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0039A756u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0039A756: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0039A759: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0039A770
 * Original: 0x0039A770 - 0x0039A780 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A770(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A770: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_0039A790
 * Original: 0x0039A790 - 0x0039A799 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A790(void)
{

loc_0039A790: ;
    eax = ecx;
    MEM32(eax) = 0x8335F8;
    esp += 4; return; /* ret */

}

/**
 * sub_0039A7A0
 * Original: 0x0039A7A0 - 0x0039A7D6 (54 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A7A0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0039A7BF; /* je: equal / zero */

loc_0039A7AD: ;
    /* nop */

loc_0039A7B0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039A7B8; /* jne: not equal / not zero */

loc_0039A7B5: ;
    ecx = MEM32(eax + 4);

loc_0039A7B8: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039A7B0; /* jne: not equal / not zero */

loc_0039A7BF: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0039A7D0u); RECOMP_ABI_CALL(0x0059D322u, sub_0059D322); /* call 0x0059D322 */

loc_0039A7D0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0039A7F0
 * Original: 0x0039A7F0 - 0x0039A7FE (14 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A7F0(void)
{

loc_0039A7F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0039A7FAu); RECOMP_ABI_CALL(0x0059D40Fu, sub_0059D40F); /* call 0x0059D40F */

loc_0039A7FA: ;
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0039A810
 * Original: 0x0039A810 - 0x0039A813 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0039A810(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A810: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A820
 * Original: 0x0039A820 - 0x0039A823 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0039A820(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A820: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A830
 * Original: 0x0039A830 - 0x0039A84F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A830(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A830: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x87D31C;
    if (TEST_Z(_fa, _fb)) goto loc_0039A849; /* je: equal / zero */

loc_0039A840: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0039A846u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0039A846: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0039A849: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0039A860
 * Original: 0x0039A860 - 0x0039A891 (49 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A860: ;
    eax = ecx;
    PUSH32(esp, esi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x833610;
    MEM32(eax + 4) = 1;
    MEM32(eax + 0xC) = 0x1000;
    MEM32(eax + 0x10) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax + 0x14;
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM8(eax + 0x24) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0039A8A0
 * Original: 0x0039A8A0 - 0x0039A8A8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A8A0: ;
    eax = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 4) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0039A8B0
 * Original: 0x0039A8B0 - 0x0039A8C5 (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0039A8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A8B0: ;
    eax = MEM32(ecx + 4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 4) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0039A8C4; /* jg: greater (signed >) */

loc_0039A8BB: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x20); PUSH32(esp, 0x0039A8C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0039A8BFu); } /* indirect call */
    }

loc_0039A8C2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0039A8C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0039A8D0
 * Original: 0x0039A8D0 - 0x0039A8DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A8D0(void)
{

loc_0039A8D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0xC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0039A8E0
 * Original: 0x0039A8E0 - 0x0039A902 (34 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A8E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A8E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = esi + 0x14;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0039A8EEu); RECOMP_ABI_CALL(0x0059E648u, sub_0059E648); /* call 0x0059E648 */

loc_0039A8EE: ;
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0039A8F7u); RECOMP_ABI_CALL(0x0059D40Fu, sub_0059D40F); /* call 0x0059D40F */

loc_0039A8F7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x24) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0039A910
 * Original: 0x0039A910 - 0x0039A91E (14 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A910(void)
{

loc_0039A910: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0039A91Au); RECOMP_ABI_CALL(0x0059E4E7u, sub_0059E4E7); /* call 0x0059E4E7 */

loc_0039A91A: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0039A930
 * Original: 0x0039A930 - 0x0039A947 (23 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A930: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x20) = eax;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0039A941u); RECOMP_ABI_CALL(0x0059E5AFu, sub_0059E5AF); /* call 0x0059E5AF */

loc_0039A941: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0039A950
 * Original: 0x0039A950 - 0x0039A990 (64 bytes, 22 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0039A950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A950: ;
    PUSH32(esp, 0x28);
    PUSH32(esp, 0x0039A957u); RECOMP_ABI_CALL(0x0001AF42u, sub_0001AF42); /* call 0x0001AF42 */

loc_0039A957: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039A98D; /* je: equal / zero */

loc_0039A960: ;
    PUSH32(esp, esi);
    MEM32(eax) = 0x833610;
    MEM32(eax + 4) = 1;
    MEM32(eax + 0xC) = 0x1000;
    MEM32(eax + 0x10) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax + 0x14;
    MEM32(esi) = edx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = edx;
    MEM32(eax + 0x20) = ecx;
    MEM8(eax + 0x24) = LO8(ecx);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0039A98D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0039A9A0
 * Original: 0x0039A9A0 - 0x0039A9E4 (68 bytes, 26 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039A9A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039A9A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x83363C);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0039A9BEu); RECOMP_ABI_CALL(0x0059D322u, sub_0059D322); /* call 0x0059D322 */

loc_0039A9BE: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    edx = esi + 0x14;
    PUSH32(esp, 0x1399F);
    PUSH32(esp, edx);
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x0039A9D9u); RECOMP_ABI_CALL(0x0059E682u, sub_0059E682); /* call 0x0059E682 */

loc_0039A9D9: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x24) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0039AA00
 * Original: 0x0039AA00 - 0x0039AA2C (44 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039AA00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039AA00: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0039AA21; /* jne: not equal / not zero */

loc_0039AA0C: ;
    /* nop */

loc_0039AA10: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0x0039AA17u); RECOMP_ABI_CALL(0x0059E4E7u, sub_0059E4E7); /* call 0x0059E4E7 */

loc_0039AA17: ;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0039AA10; /* je: equal / zero */

loc_0039AA21: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 8); PUSH32(esp, 0x0039AA25u); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0039AA22u); } /* indirect call */
    }

loc_0039AA25: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0039AA40
 * Original: 0x0039AA40 - 0x0039AA79 (57 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039AA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039AA40: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x24));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM32(esi) = 0x833610;
    if (CMP_EQ(_fa, _fb)) goto loc_0039AA63; /* je: equal / zero */

loc_0039AA50: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0039AA57u); RECOMP_ABI_CALL(0x00025B7Cu, sub_00025B7C); /* call 0x00025B7C */

loc_0039AA57: ;
    eax = esi + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0039AA60u); RECOMP_ABI_CALL(0x0059E4CFu, sub_0059E4CF); /* call 0x0059E4CF */

loc_0039AA60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0039AA63: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0039AA73; /* je: equal / zero */

loc_0039AA6A: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0039AA70u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0039AA70: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0039AA73: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0039AA90
 * Original: 0x0039AA90 - 0x0039AAD6 (70 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039AA90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039AA90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83364C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = esi + 4;
    ecx = edi;
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0xC) = eax;
    MEM32(ecx + 0x10) = eax;
    MEM32(ecx + 0x14) = eax;
    MEM32(ecx + 0x18) = eax;
    PUSH32(esp, 0x20);
    MEM32(ecx + 0x1C) = eax;
    PUSH32(esp, edi);
    MEM32(esi + 0x24) = 1;
    PUSH32(esp, 0x0039AAC7u); RECOMP_ABI_CALL(0x0059EBE8u, sub_0059EBE8); /* call 0x0059EBE8 */

loc_0039AAC7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    PUSH32(esp, 0x0039AAD1u); RECOMP_ABI_CALL(0x0059E463u, sub_0059E463); /* call 0x0059E463 */

loc_0039AAD1: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0039AAF0
 * Original: 0x0039AAF0 - 0x0039AAF8 (8 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039AAF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039AAF0: ;
    eax = MEM32(ecx + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x24) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_0039AB00
 * Original: 0x0039AB00 - 0x0039AB15 (21 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0039AB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0039AB00: ;
    eax = MEM32(ecx + 0x24);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x24) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_0039AB14; /* jg: greater (signed >) */

loc_0039AB0B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x0039AB12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0039AB0Fu); } /* indirect call */
    }

loc_0039AB12: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0039AB14: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0039AB20
 * Original: 0x0039AB20 - 0x0039AB28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039AB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039AB20: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0059E46F(); return; /* tail jmp 0x0059E46F */

}

/**
 * sub_0039AB30
 * Original: 0x0039AB30 - 0x0039AB38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0039AB30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0039AB30: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0059E47A(); return; /* tail jmp 0x0059E47A */

}
