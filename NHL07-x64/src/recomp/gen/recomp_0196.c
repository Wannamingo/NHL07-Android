/**
 * nhl_07_recomp - Recompiled code chunk 196
 * Functions: 250 (0x00426F10 - 0x0042F670)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sub_00426F10
 * Original: 0x00426F10 - 0x00426F49 (57 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00426F10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00426F10: ;
    eax = (uint32_t)(int32_t)SMEM8(esp + 4);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, 0x839144);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00426F2Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00426F2F: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00426F42u); RECOMP_ABI_CALL(0x00023598u, sub_00023598); /* call 0x00023598 */

loc_00426F42: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00426F60
 * Original: 0x00426F60 - 0x00427063 (259 bytes, 95 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00426F60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00426F60: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x48);
    edx = MEM32(esi + 0x30);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00426F78u); RECOMP_ABI_CALL(0x00023598u, sub_00023598); /* call 0x00023598 */

loc_00426F78: ;
    ebp = MEM32(esp + 0x58);
    ecx = MEM32(esi + 0x34);
    ebx = eax;
    eax = (uint32_t)(int32_t)SMEM8(ebp);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x18;
    PUSH32(esp, 0x839144);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00426F96u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00426F96: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00426FA9u); RECOMP_ABI_CALL(0x00023598u, sub_00023598); /* call 0x00023598 */

loc_00426FA9: ;
    ecx = ebx;
    esi = eax;
    PUSH32(esp, 0x00426FB2u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00426FB2: ;
    edi = MEM32(eax + 0x1C);
    ecx = esi;
    PUSH32(esp, 0x00426FBCu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00426FBC: ;
    ecx = eax;
    edx = MEM32(ecx + 0x1C);
    eax = edi;
    edi = MEM32(esp + 0x54);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edi + 4) = eax;
    eax = ebp;
    MEM32(edi + 0xC) = 0;
    ebp = eax + 1;
    /* nop */

loc_00426FE0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00426FE0; /* jne: not equal / not zero */

loc_00426FE7: ;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, 0x00426FF4u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00426FF4: ;
    ebp = MEM32(eax + 0x18);
    ecx = ebx;
    PUSH32(esp, 0x00426FFEu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00426FFE: ;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x58));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 0x18) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00427041; /* jg: greater (signed >) */

loc_00427008: ;
    ecx = esi;
    PUSH32(esp, 0x0042700Fu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0042700F: ;
    ebp = MEM32(eax + 0x18);
    ecx = ebx;
    PUSH32(esp, 0x00427019u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00427019: ;
    ebp = (uint32_t)((int32_t)ebp * (int32_t)MEM32(esp + 0x58));
    eax = MEM32(eax + 0x18);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = esi;
    MEM32(edi) = eax;
    PUSH32(esp, 0x00427031u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00427031: ;
    eax = MEM32(eax + 0x18);
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00427041: ;
    ecx = ebx;
    PUSH32(esp, 0x00427048u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00427048: ;
    eax = MEM32(eax + 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)MEM32(esp + 0x58)));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)MEM32(esp + 0x58))); }
    MEM32(edi) = 0;
    MEM32(edi + 8) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x40;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004270B0
 * Original: 0x004270B0 - 0x004270BD (13 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004270B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004270B0: ;
    _fa = (uint32_t)(MEM8(ecx + -27)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + -27), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004270BA; /* jne: not equal / not zero */

loc_004270B6: ;
    MEM8(ecx + -27) = 2;

loc_004270BA: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004270C0
 * Original: 0x004270C0 - 0x004270D5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004270C0(void)
{

loc_004270C0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004270D4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004270D2u); } /* indirect call */
    }

loc_004270D4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004270E0
 * Original: 0x004270E0 - 0x0042711B (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004270E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004270E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, 0x004270EBu); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_004270EB: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00427116; /* je: equal / zero */

loc_004270F1: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004270FDu); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_004270FD: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427116; /* jne: not equal / not zero */

loc_00427104: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0042710Du); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_0042710D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00427116u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00427113u); } /* indirect call */
    }

loc_00427116: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00427130
 * Original: 0x00427130 - 0x00427142 (18 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427130(void)
{

loc_00427130: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00427138u); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_00427138: ;
    MEM32(esi) = 0x83914C;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00427150
 * Original: 0x00427150 - 0x00427177 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00427150: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83914C;
    PUSH32(esp, 0x0042715Eu); RECOMP_ABI_CALL(0x00017301u, sub_00017301); /* call 0x00017301 */

loc_0042715E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00427171; /* je: equal / zero */

loc_00427165: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00427171u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042716Eu); } /* indirect call */
    }

loc_00427171: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00427180
 * Original: 0x00427180 - 0x004271CB (75 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00427180: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042718Du); RECOMP_ABI_CALL(0x0001E999u, sub_0001E999); /* call 0x0001E999 */

loc_0042718D: ;
    MEM32(esi + 0x2C) = 0x7AB15C;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x48) = eax;
    MEM32(esi + 0x4C) = eax;
    MEM8(esi + 0x28) = LO8(eax);
    MEM32(esi) = 0x839160;
    MEM32(esi + 0x2C) = 0x83915C;
    MEM32(esi + 0x50) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004271E0
 * Original: 0x004271E0 - 0x00427459 (633 bytes, 199 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004271E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004271E0: ;
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x170));
    esp = esp - 0x170;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebx = ecx;
    eax = MEM32(ebx + 0x48);
    edx = MEM32(ebx + 0x30);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004271FBu); RECOMP_ABI_CALL(0x00023598u, sub_00023598); /* call 0x00023598 */

loc_004271FB: ;
    edi = eax;
    eax = MEM32(ebx + 0x40);
    ecx = MEM32(eax);
    eax = MEM32(ecx + 0x14);
    edx = esp + 0x60;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00427210;

    /* nop */

loc_00427210: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00427210; /* jne: not equal / not zero */

loc_0042721A: ;
    eax = esp + 0x60;
    edx = eax + 1;

loc_00427221: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00427221; /* jne: not equal / not zero */

loc_00427228: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esp + 0xC0;
    PUSH32(esp, edx);
    ecx = edi;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x0042723Du); RECOMP_ABI_CALL(0x005A7A70u, sub_005A7A70); /* call 0x005A7A70 */

loc_0042723D: ;
    eax = esp + 0xC0;
    PUSH32(esp, 0x500);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(esp + 0xDC) = 0x7D;
    MEM32(esp + 0xF0) = ebp;
    PUSH32(esp, 0x00427263u); RECOMP_ABI_CALL(0x005A7D96u, sub_005A7D96); /* call 0x005A7D96 */

loc_00427263: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    MEM8(esp + 0x13) = 0;
    MEM8(esp + 0x12) = 0;
    MEM8(esp + 0x11) = 0;
    MEM8(esp + 0x10) = 0;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x1C) = esi;
    PUSH32(esp, 0x0042728Cu); RECOMP_ABI_CALL(0x005A5B1Au, sub_005A5B1A); /* call 0x005A5B1A */

loc_0042728C: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = ebp;
    MEM32(esp + 0x20) = ebp;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x28) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_004272B3; /* jle: less or equal (signed <=) */

loc_004272A2: ;
    edx = esp + 0x60;
    PUSH32(esp, edx);
    eax = esp + 0x20;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x004272B3u); RECOMP_ABI_CALL(0x00030D2Eu, sub_00030D2E); /* call 0x00030D2E */

loc_004272B3: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x2C) = ebp;
    if (CMP_LE(_fas, _fbs)) goto loc_0042737B; /* jle: less or equal (signed <=) */

loc_004272C1: ;
    ecx = (uint32_t)(int32_t)SMEM8(esp + ebp + 0x60);
    edx = MEM32(ebx + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x88;
    PUSH32(esp, 0x839144);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004272DDu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_004272DD: ;
    ecx = MEM32(ebx + 0x44);
    ecx = MEM32(ecx + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x80;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004272F3u); RECOMP_ABI_CALL(0x00023598u, sub_00023598); /* call 0x00023598 */

loc_004272F3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00427348; /* je: equal / zero */

loc_004272F9: ;
    ecx = esi;
    MEM8(esp + 0x13) = 0xFF;
    MEM8(esp + 0x12) = 0xFF;
    MEM8(esp + 0x11) = 0xFF;
    MEM8(esp + 0x10) = 0xFF;
    PUSH32(esp, 0x00427314u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00427314: ;
    ebp = MEM32(eax + 0x1C);
    ecx = esi;
    PUSH32(esp, 0x0042731Eu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0042731E: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(eax + 0x18);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00427344u); RECOMP_ABI_CALL(0x005A3325u, sub_005A3325); /* call 0x005A3325 */

loc_00427344: ;
    ebp = MEM32(esp + 0x2C);

loc_00427348: ;
    edx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(edx)) >> 32) & 1);
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(eax)) >> 32) & 1);
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x1C) = esi;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x2C) = ebp;
    if (CMP_L(_fas, _fbs)) goto loc_004272C1; /* jl: less (signed <) */

loc_00427375: ;
    esi = MEM32(esp + 0x18);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0042737B: ;
    ecx = esp + 0x30;
    PUSH32(esp, 0x00427384u); RECOMP_ABI_CALL(0x005A3A01u, sub_005A3A01); /* call 0x005A3A01 */

loc_00427384: ;
    ecx = edi;
    PUSH32(esp, 0x0042738Bu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0042738B: ;
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x30) = ecx;
    ecx = edi;
    PUSH32(esp, 0x0042739Eu); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_0042739E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004273C7; /* je: equal / zero */

loc_004273A2: ;
    ecx = edi;
    PUSH32(esp, 0x004273A9u); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_004273A9: ;
    edx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = edi;
    MEM32(esp + 0x34) = edx;
    PUSH32(esp, 0x004273BCu); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_004273BC: ;
    eax = MEM32(eax + 0x18);
    MEM32(esp + 0x38) = eax;
    MEM32(esp + 0x58) = ebp;

loc_004273C7: ;
    ecx = edi;
    PUSH32(esp, 0x004273CEu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004273CE: ;
    ecx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x15) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x3C) = ecx;
    ecx = edi;
    MEM32(esp + 0x40) = ebp;
    MEM32(esp + 0x48) = ebp;
    PUSH32(esp, 0x004273E9u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004273E9: ;
    edx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    edx = edx & 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(0x400000));
    edx = edx - 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    MEM32(esp + 0x4C) = edx;
    PUSH32(esp, 0x00427407u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00427407: ;
    eax = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xF0000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = esp + 0x30;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    PUSH32(esp, ecx);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esp + 0x58) = eax;
    PUSH32(esp, 0x00427425u); RECOMP_ABI_CALL(0x005A46E2u, sub_005A46E2); /* call 0x005A46E2 */

loc_00427425: ;
    edx = MEM32(ebx + 0x48);
    eax = MEM32(ebx + 0x30);
    ecx = MEM32(edx + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00427434u); RECOMP_ABI_CALL(0x00029042u, sub_00029042); /* call 0x00029042 */

loc_00427434: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00427445; /* je: equal / zero */

loc_00427438: ;
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00427445u); RECOMP_ABI_CALL(0x00564995u, sub_00564995); /* call 0x00564995 */

loc_00427445: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042744Bu); RECOMP_ABI_CALL(0x005A1E5Eu, sub_005A1E5E); /* call 0x005A1E5E */

loc_0042744B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x170) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x170)) >> 32) & 1);
    esp = esp + 0x170;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00427500
 * Original: 0x00427500 - 0x0042753B (59 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00427500: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, 0x0042750Bu); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_0042750B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00427536; /* je: equal / zero */

loc_00427511: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0042751Du); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_0042751D: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427536; /* jne: not equal / not zero */

loc_00427524: ;
    ecx = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0042752Du); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_0042752D: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00427536u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00427533u); } /* indirect call */
    }

loc_00427536: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00427550
 * Original: 0x00427550 - 0x004275A7 (87 bytes, 33 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427550(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00427550: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi);
    PUSH32(esp, 0x0042755Bu); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_0042755B: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427591; /* jne: not equal / not zero */

loc_00427561: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x829E44);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00427572u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00427570u); } /* indirect call */
    }

loc_00427572: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00427587; /* je: equal / zero */

loc_00427578: ;
    ecx = esi;
    PUSH32(esp, 0x0042757Fu); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_0042757F: ;
    MEM32(esi) = 0x83914C;
    goto loc_00427589;

loc_00427587: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00427589: ;
    ecx = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00427591u); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_00427591: ;
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x004275A2u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_004275A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004275C0
 * Original: 0x004275C0 - 0x0042765E (158 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004275C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004275C0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x839160;
    MEM32(esi + 0x2C) = 0x83915C;
    eax = MEM32(esi + 0x30);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_004275E7; /* je: equal / zero */

loc_004275DB: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004275E1u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_004275E1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = ebx;

loc_004275E7: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004275FA; /* je: equal / zero */

loc_004275EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004275F4u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_004275F4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x34) = ebx;

loc_004275FA: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042760D; /* je: equal / zero */

loc_00427601: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00427607u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00427607: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x38) = ebx;

loc_0042760D: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00427620; /* je: equal / zero */

loc_00427614: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042761Au); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0042761A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x3C) = ebx;

loc_00427620: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00427633; /* je: equal / zero */

loc_00427627: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042762Du); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0042762D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x4C) = ebx;

loc_00427633: ;
    edi = MEM32(esi + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00427654; /* je: equal / zero */

loc_0042763A: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00427642u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00427642: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00427651u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042764Eu); } /* indirect call */
    }

loc_00427651: ;
    MEM32(esi + 0x40) = ebx;

loc_00427654: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_00035612(); return; /* tail jmp 0x00035612 */

}

/**
 * sub_00427690
 * Original: 0x00427690 - 0x004277E5 (341 bytes, 119 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427690(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427690: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x2C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x839278);
    ebx = ecx;
    PUSH32(esp, 0x83926C);
    eax = ebx + 0x30;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004276B6u); RECOMP_ABI_CALL(0x00031B89u, sub_00031B89); /* call 0x00031B89 */

loc_004276B6: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427741; /* jne: not equal / not zero */

loc_004276C1: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x839234);
    PUSH32(esp, 0x83922C);
    ecx = ebx + 0x34;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004276DAu); RECOMP_ABI_CALL(0x00031B89u, sub_00031B89); /* call 0x00031B89 */

loc_004276DA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427741; /* jne: not equal / not zero */

loc_004276E1: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x8391F8);
    PUSH32(esp, 0x7DFD00);
    edx = ebx + 0x4C;
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004276FAu); RECOMP_ABI_CALL(0x00031B89u, sub_00031B89); /* call 0x00031B89 */

loc_004276FA: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427741; /* jne: not equal / not zero */

loc_00427701: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x8391C4);
    PUSH32(esp, 0x8391B8);
    eax = ebx + 0x3C;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042771Au); RECOMP_ABI_CALL(0x00031B89u, sub_00031B89); /* call 0x00031B89 */

loc_0042771A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427741; /* jne: not equal / not zero */

loc_00427721: ;
    PUSH32(esp, 0x100);
    PUSH32(esp, 0x839184);
    PUSH32(esp, 0x839174);
    ecx = ebx + 0x38;
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042773Au); RECOMP_ABI_CALL(0x00031B89u, sub_00031B89); /* call 0x00031B89 */

loc_0042773A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00427743; /* je: equal / zero */

loc_00427741: ;
    SET_LO8(eax, 1);

loc_00427743: ;
    esi = MEM32(ebp + 4);
    edi = 0x82AD40;
    ecx = 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_004277CF; /* jne: not equal / not zero */

loc_00427756: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x82AD2C);
    PUSH32(esp, 0x00427764u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00427764: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004277B5; /* jne: not equal / not zero */

loc_0042776B: ;
    MEM32(ebx + 0x50) = 1;

loc_00427772: ;
    esi = MEM32(ebp + 8);
    edi = 0x7DFD00;
    ecx = 5;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_004277AB; /* jne: not equal / not zero */

loc_00427785: ;
    edx = MEM32(ebx + 0x40);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004277AB; /* je: equal / zero */

loc_0042778C: ;
    ebx = MEM32(ebx + 0x4C);
    ecx = esp + 0x10;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00427795: ;
    SET_LO8(eax, MEM8(ebx));
    MEM8(ecx + ebx) = LO8(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427795; /* jne: not equal / not zero */

loc_0042779F: ;
    ecx = MEM32(edx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0x004277ABu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_004277AB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_004277B5: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x82AD38);
    PUSH32(esp, 0x004277C3u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_004277C3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427772; /* jne: not equal / not zero */

loc_004277CA: ;
    MEM32(ebx + 0x50) = eax;
    goto loc_00427772;

loc_004277CF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427772; /* jne: not equal / not zero */

loc_004277D3: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x004277DBu); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_004277DB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00427840
 * Original: 0x00427840 - 0x0042789A (90 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00427840: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042784Du); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_0042784D: ;
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042788F; /* je: equal / zero */

loc_00427854: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427864; /* jne: not equal / not zero */

loc_0042785B: ;
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00427864u); RECOMP_ABI_CALL(0x0002F028u, sub_0002F028); /* call 0x0002F028 */

loc_00427864: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x40);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00427883; /* je: equal / zero */

loc_0042786C: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00427874u); RECOMP_ABI_CALL(0x000356D0u, sub_000356D0); /* call 0x000356D0 */

loc_00427874: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00427883u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00427880u); } /* indirect call */
    }

loc_00427883: ;
    POP32(esp, edi);
    MEM32(esi + 0x40) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0042788F: ;
    MEM32(esi + 0x40) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004278B0
 * Original: 0x004278B0 - 0x00427903 (83 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004278B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004278B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 3 (8-bit) */
    SET_LO8(ecx, 2);
    eax = 4;
    if (CMP_NE(_fa, _fb)) goto loc_004278D9; /* jne: not equal / not zero */

loc_004278C0: ;
    edx = MEM32(esi + 0x44);
    edx = MEM32(edx + 0x28);
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004278D6; /* jne: not equal / not zero */

loc_004278CB: ;
    edx = MEM32(esi + 0x48);
    edx = MEM32(edx + 0x28);
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004278D9; /* je: equal / zero */

loc_004278D6: ;
    MEM8(esi + 0x11) = LO8(ecx);

loc_004278D9: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004278FF; /* jne: not equal / not zero */

loc_004278DE: ;
    ecx = MEM32(esi + 0x44);
    edx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004278FF; /* jne: not equal / not zero */

loc_004278E9: ;
    ecx = MEM32(esi + 0x48);
    edx = MEM32(ecx + 0x28);
    _fa = (uint32_t)(MEM32(edx + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x14), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004278FF; /* jne: not equal / not zero */

loc_004278F4: ;
    ecx = esi;
    PUSH32(esp, 0x004278FBu); RECOMP_ABI_CALL(0x000248A3u, sub_000248A3); /* call 0x000248A3 */

loc_004278FB: ;
    MEM8(esi + 0x11) = 3;

loc_004278FF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00427920
 * Original: 0x00427920 - 0x00427990 (112 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00427920: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    SET_LO8(ecx, 2);
    if (CMP_EQ(_fa, _fb)) goto loc_00427930; /* je: equal / zero */

loc_0042792C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042794F; /* jne: not equal / not zero */

loc_00427930: ;
    eax = MEM32(esi + 0x44);
    SET_LO8(eax, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042793E; /* je: equal / zero */

loc_0042793A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042794F; /* jne: not equal / not zero */

loc_0042793E: ;
    edx = MEM32(esi + 0x48);
    SET_LO8(eax, MEM8(edx + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042794C; /* je: equal / zero */

loc_00427948: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042794F; /* jne: not equal / not zero */

loc_0042794C: ;
    MEM8(esi + 0x11) = LO8(ecx);

loc_0042794F: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), LO8(ecx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042798C; /* jne: not equal / not zero */

loc_00427954: ;
    eax = MEM32(esi + 0x44);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042798C; /* jne: not equal / not zero */

loc_0042795D: ;
    ecx = MEM32(esi + 0x48);
    _fa = (uint32_t)(MEM8(ecx + 0x11)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x11), 3 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042798C; /* jne: not equal / not zero */

loc_00427966: ;
    ecx = esi;
    PUSH32(esp, 0x0042796Du); RECOMP_ABI_CALL(0x000248A3u, sub_000248A3); /* call 0x000248A3 */

loc_0042796D: ;
    _fa = (uint32_t)(MEM32(esi + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x50), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427988; /* jne: not equal / not zero */

loc_00427973: ;
    edx = esi + 0x34;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042797Cu); RECOMP_ABI_CALL(0x00012FCCu, sub_00012FCC); /* call 0x00012FCC */

loc_0042797C: ;
    eax = esi + 0x30;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00427985u); RECOMP_ABI_CALL(0x00012FCCu, sub_00012FCC); /* call 0x00012FCC */

loc_00427985: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00427988: ;
    MEM8(esi + 0x11) = 3;

loc_0042798C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004279B0
 * Original: 0x004279B0 - 0x004279BF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004279B0(void)
{

loc_004279B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004279BCu); RECOMP_ABI_CALL(0x0002040Bu, sub_0002040B); /* call 0x0002040B */

loc_004279BC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004279D0
 * Original: 0x004279D0 - 0x004279F5 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004279D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004279D0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004279D8u); RECOMP_ABI_CALL(0x00031850u, sub_00031850); /* call 0x00031850 */

loc_004279D8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004279EF; /* je: equal / zero */

loc_004279DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004279EF; /* je: equal / zero */

loc_004279E3: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x004279EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004279ECu); } /* indirect call */
    }

loc_004279EF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00427A00
 * Original: 0x00427A00 - 0x00427AD5 (213 bytes, 74 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427A00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00427A00: ;
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427ACB; /* jne: not equal / not zero */

loc_00427A14: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x12C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00427A22u); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_00427A22: ;
    eax = MEM32(esi + 0x4C);
    edx = esp + 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00427A30;

    /* nop */

loc_00427A30: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427A30; /* jne: not equal / not zero */

loc_00427A3A: ;
    eax = MEM32(esi + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00427A51; /* je: equal / zero */

loc_00427A41: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00427A47u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00427A47: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x4C) = 0;

loc_00427A51: ;
    eax = MEM32(edi + 8);
    PUSH32(esp, 0x82BBD0);
    PUSH32(esp, eax);
    ecx = esp + 0x30;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00427A69u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00427A69: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x7BB384);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00427A7Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00427A7Bu); } /* indirect call */
    }

loc_00427A7D: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00427AA4; /* je: equal / zero */

loc_00427A83: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = esp + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x20F4A9A1);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00427A9Fu); RECOMP_ABI_CALL(0x0002ADDEu, sub_0002ADDE); /* call 0x0002ADDE */

loc_00427A9F: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00427AA6;

loc_00427AA4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00427AA6: ;
    ecx = esp + 8;
    MEM32(esi + 0x40) = edi;
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, 0x00427AB5u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_00427AB5: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00427ACB; /* jne: not equal / not zero */

loc_00427ABD: ;
    ecx = MEM32(esi + 0x40);
    eax = esi + 0x2C;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00427ACBu); RECOMP_ABI_CALL(0x0002040Bu, sub_0002040B); /* call 0x0002040B */

loc_00427ACB: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x120) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x120;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00427B10
 * Original: 0x00427B10 - 0x00427B9A (138 bytes, 58 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427B10: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_00427B80; /* ja: above (unsigned >) */

loc_00427B22: ;
    eax = ZX8(MEM8(eax + 0x427BC0));
    { uint32_t _jt = MEM32(eax * 4 + 0x427B9C); /* switch: 9 entries, 9 targets */
    if (_jt == 0x00427B30u) goto loc_00427B30;
    if (_jt == 0x00427B3Du) goto loc_00427B3D;
    if (_jt == 0x00427B4Au) goto loc_00427B4A;
    if (_jt == 0x00427B57u) goto loc_00427B57;
    if (_jt == 0x00427B64u) goto loc_00427B64;
    if (_jt == 0x00427B71u) goto loc_00427B71;
    if (_jt == 0x00427B80u) goto loc_00427B80;
    if (_jt == 0x00427B88u) goto loc_00427B88;
    if (_jt == 0x00427B8Du) goto loc_00427B8D;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00427B30: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00427B38u); RECOMP_ABI_CALL(0x000300DBu, sub_000300DB); /* call 0x000300DB */

loc_00427B38: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00427B3D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00427B45u); RECOMP_ABI_CALL(0x0002D0D9u, sub_0002D0D9); /* call 0x0002D0D9 */

loc_00427B45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00427B4A: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00427B52u); RECOMP_ABI_CALL(0x0003613Eu, sub_0003613E); /* call 0x0003613E */

loc_00427B52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00427B57: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00427B5Fu); RECOMP_ABI_CALL(0x0002D51Bu, sub_0002D51B); /* call 0x0002D51B */

loc_00427B5F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00427B64: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00427B6Cu); RECOMP_ABI_CALL(0x00013490u, sub_00013490); /* call 0x00013490 */

loc_00427B6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00427B71: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00427B80; /* jne: not equal / not zero */

loc_00427B78: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x00427B80u); RECOMP_ABI_CALL(0x00021171u, sub_00021171); /* call 0x00021171 */

loc_00427B80: ;
    ecx = esi;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00427B88u); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_00427B88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00427B8D: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00427B95u); RECOMP_ABI_CALL(0x0001B7B7u, sub_0001B7B7); /* call 0x0001B7B7 */

loc_00427B95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00427B9A
 * Original: 0x00427B9A - 0x00427C00 (102 bytes, 70 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427B9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427B9A: ;
    edi = edi;
    MEM8(ebx + 0x42) = MEM8(ebx + 0x42) ^ HI8(ebx);
    _fa = (uint32_t)(MEM8(ebx + 0x42)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 0x3D00427B) = MEM8(eax + 0x3D00427B) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax + 0x3D00427B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) goto loc_00427BE9;

loc_00427BA7: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + 0x7B) = MEM8(edx + 0x7B) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx + 0x7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + edi * 2 + 0x42) = MEM8(ebx + edi * 2 + 0x42) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebx + edi * 2 + 0x42)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi + 0x7B) = MEM8(edi + 0x7B) + LO8(edx);
    _fa = (uint32_t)(MEM8(edi + 0x7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + 0x7B) = MEM8(ecx + 0x7B) + HI8(edx);
    _fa = (uint32_t)(MEM8(ecx + 0x7B)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + -2147466629) = MEM8(ebp + -2147466629) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -2147466629)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jnp: not parity */) { g_seh_ebp = ebp; sub_00427C01(); return; }

loc_00427BBF: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(5) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 5);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(ecx) = MEM8(ecx) | LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    MEM8(ecx) = MEM8(ecx) | LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ecx) = MEM8(ecx) | LO8(eax);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_00427BE9: ;
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00427C00
 * Original: 0x00427C00 - 0x00427C50 (80 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427C00: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    ecx = ecx + 0xFFFFFFF8u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00427C17; /* ja: above (unsigned >) */

loc_00427C0E: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x427C18); /* switch: 8 entries, 1 targets */
    if (_jt == 0x00427C15u) goto loc_00427C15;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00427C15: ;
    SET_LO8(eax, 1);

loc_00427C17: ;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0x1500427C)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(0x1500427C) = MEM8(0x1500427C) + LO8(edx);
    _fa = (uint32_t)(MEM8(0x1500427C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00427C69(); return; } /* jl: less (signed <) */

loc_00427C27: ;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0x1500427C)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(0x1500427C) = MEM8(0x1500427C) + LO8(edx);
    _fa = (uint32_t)(MEM8(0x1500427C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00427C71(); return; } /* jl: less (signed <) */

loc_00427C2F: ;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0x1500427C)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(0x1500427C) = MEM8(0x1500427C) + LO8(edx);
    _fa = (uint32_t)(MEM8(0x1500427C)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if ((_fas < 0)) { g_seh_ebp = ebp; sub_00427C79(); return; } /* jl: less (signed <) */

loc_00427C37: ;
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

}

/**
 * sub_00427C50
 * Original: 0x00427C50 - 0x00427C97 (71 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00427C50: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00427C5Eu); RECOMP_ABI_CALL(0x0001E999u, sub_0001E999); /* call 0x0001E999 */

loc_00427C5E: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi + 0x30;
    MEM32(esi) = 0x8392B0;
    MEM32(esi + 0x2C) = ebx;
    PUSH32(esp, 0x00427C73u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00427C73: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi + 0x34;
    PUSH32(esp, 0x00427C7Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00427C7D: ;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 0x40) = ebx;
    MEM32(esi + 0x44) = ebx;
    MEM8(esi + 0x28) = LO8(ebx);
    MEM8(esi + 0x48) = 1;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00427CB0
 * Original: 0x00427CB0 - 0x00427CD1 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427CB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427CB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x34;
    MEM32(esi) = 0x8392B0;
    PUSH32(esp, 0x00427CC1u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00427CC1: ;
    ecx = esi + 0x30;
    PUSH32(esp, 0x00427CC9u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00427CC9: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00035612(); return; /* tail jmp 0x00035612 */

}

/**
 * sub_00427CE0
 * Original: 0x00427CE0 - 0x00427E06 (294 bytes, 104 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427CE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427CE0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    SET_LO8(eax, 0xA);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    MEM8(esp + 0x10) = 0x20;
    MEM8(esp + 0x11) = 9;
    MEM8(esp + 0x12) = LO8(eax);
    MEM8(esp + 0x13) = 0x2C;
    MEM8(esp + 0x14) = 0xD;
    MEM8(esp + 0x15) = LO8(eax);
    MEM8(esp + 0x16) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00427D49; /* je: equal / zero */

loc_00427D19: ;
    /* nop */

loc_00427D20: ;
    eax = esp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00427D2Bu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00427D2B: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(edi));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00427D49; /* je: equal / zero */

loc_00427D36: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00427D42u); RECOMP_ABI_CALL(0x005CD790u, sub_005CD790); /* call 0x005CD790 */

loc_00427D42: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_00427D20; /* jne: not equal / not zero */

loc_00427D49: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    edi = ebx * 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x839324);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00427D66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00427D63u); } /* indirect call */
    }

loc_00427D66: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x40) = eax;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x8392F4);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00427D7Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00427D79u); } /* indirect call */
    }

loc_00427D7C: ;
    MEM32(esi + 0x44) = eax;
    edi = MEM32(ebp + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00427DFC; /* je: equal / zero */

loc_00427D86: ;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00427D91u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00427D91: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(edi));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00427DFC; /* je: equal / zero */

loc_00427D9C: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00427DA7u); RECOMP_ABI_CALL(0x005CD790u, sub_005CD790); /* call 0x005CD790 */

loc_00427DA7: ;
    ecx = MEM32(0x9094E8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    edx = ebx + 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8392C4);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00427DC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00427DC2u); } /* indirect call */
    }

loc_00427DC5: ;
    ecx = MEM32(esi + 0x3C);
    edx = MEM32(esi + 0x40);
    MEM32(edx + ecx * 4) = eax;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00427DDFu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_00427DDF: ;
    eax = MEM32(esi + 0x3C);
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx + eax * 4);
    MEM8(ebx + edx) = 0;
    ecx = MEM32(esi + 0x3C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x3C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00427D86; /* jne: not equal / not zero */

loc_00427DFC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00427E50
 * Original: 0x00427E50 - 0x00427F81 (305 bytes, 119 insns)
 * Category: game_io
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00427E50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0x83926C;
    esi = edx;
    ecx = 9;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00427E96; /* jne: not equal / not zero */

loc_00427E6F: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00427E7Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00427E7D: ;
    PUSH32(esp, eax);
    ecx = ebx + 0x30;
    PUSH32(esp, 0x00427E86u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_00427E86: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00427E8Fu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00427E8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00427E96: ;
    edi = 0x8391B8;
    esi = edx;
    ecx = 0xA;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00427ECF; /* jne: not equal / not zero */

loc_00427EA8: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00427EB6u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00427EB6: ;
    PUSH32(esp, eax);
    ecx = ebx + 0x34;
    PUSH32(esp, 0x00427EBFu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_00427EBF: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00427EC8u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00427EC8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00427ECF: ;
    edi = 0x82AD40;
    esi = edx;
    ecx = 9;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00427F24; /* jne: not equal / not zero */

loc_00427EE1: ;
    eax = MEM32(eax + 8);
    edi = 0x82AD2C;
    esi = eax;
    ecx = 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00427F04; /* jne: not equal / not zero */

loc_00427EF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x2C) = 2;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00427F04: ;
    esi = eax;
    edi = 0x82AD38;
    ecx = 7;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00427F7A; /* jne: not equal / not zero */

loc_00427F16: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x2C) = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00427F24: ;
    esi = edx;
    edi = 0x839358;
    ecx = 0x11;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00427F72; /* jne: not equal / not zero */

loc_00427F36: ;
    eax = MEM32(eax + 8);
    edi = 0x7DF5A0;
    esi = eax;
    ecx = 5;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00427F56; /* jne: not equal / not zero */

loc_00427F4B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0x48) = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00427F56: ;
    esi = eax;
    edi = 0x7DF588;
    ecx = 6;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00427F7A; /* jne: not equal / not zero */

loc_00427F68: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0x48) = LO8(eax);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00427F72: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x00427F7Au); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_00427F7A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00427FD0
 * Original: 0x00427FD0 - 0x00428067 (151 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00427FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00427FD0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_00428026; /* jbe: below or equal (unsigned <=) */

loc_00427FDC: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00428010; /* jbe: below or equal (unsigned <=) */

loc_00427FE2: ;
    ecx = MEM32(esi + 0x40);
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00427FF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00427FEDu); } /* indirect call */
    }

loc_00427FF0: ;
    ecx = MEM32(esi + 0x44);
    MEM32(ecx + edi * 4) = eax;
    eax = MEM32(esi + 0x40);
    ecx = MEM32(0x9094E8);
    eax = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00428008u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00428005u); } /* indirect call */
    }

loc_00428008: ;
    eax = MEM32(esi + 0x3C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00427FE2; /* jb: below (unsigned <) */

loc_00428010: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(esi + 0x40);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0042801Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042801Cu); } /* indirect call */
    }

loc_0042801F: ;
    MEM32(esi + 0x40) = 0;

loc_00428026: ;
    eax = MEM32(esi + 0x34);
    edx = MEM32(esi);
    edi = esi + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00428034u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00428031u); } /* indirect call */
    }

loc_00428034: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    MEM32(esi + 0x38) = eax;
    PUSH32(esp, 0x00428044u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00428044: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0042804Cu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0042804C: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00428055u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00428055: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00428061u); RECOMP_ABI_CALL(0x00029263u, sub_00029263); /* call 0x00029263 */

loc_00428061: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428090
 * Original: 0x00428090 - 0x00428095 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00428090: ;
    g_seh_ebp = ebp; sub_00017ABD(); return; /* tail jmp 0x00017ABD */

}

/**
 * sub_004280A0
 * Original: 0x004280A0 - 0x004280A5 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004280A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004280A0: ;
    g_seh_ebp = ebp; sub_00017ABD(); return; /* tail jmp 0x00017ABD */

}

/**
 * sub_004280B0
 * Original: 0x004280B0 - 0x004282AD (509 bytes, 170 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004280B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004280B0: ;
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xF4));
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004282A5; /* je: equal / zero */

loc_004280C4: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004280D1u); RECOMP_ABI_CALL(0x00023598u, sub_00023598); /* call 0x00023598 */

loc_004280D1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004282A4; /* je: equal / zero */

loc_004280DB: ;
    eax = MEM32(esi + 0x3C);
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004282A3; /* jbe: below or equal (unsigned <=) */

loc_004280E9: ;
    /* nop */

loc_004280F0: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + ebx * 4);
    PUSH32(esp, 0x004280FBu); RECOMP_ABI_CALL(0x000221C0u, sub_000221C0); /* call 0x000221C0 */

loc_004280FB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esi + 0x3C);
    if (CMP_NE(_fa, _fb)) goto loc_00428111; /* jne: not equal / not zero */

loc_00428102: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004280F0; /* jb: below (unsigned <) */

loc_00428107: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xF4)) >> 32) & 1);
    esp = esp + 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00428111: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0042813B; /* jbe: below or equal (unsigned <=) */

loc_00428117: ;
    goto loc_00428120;

    /* nop */

loc_00428120: ;
    ecx = MEM32(esi + 0x44);
    ecx = MEM32(ecx + ebx * 4);
    PUSH32(esp, 0x0042812Bu); RECOMP_ABI_CALL(0x00024CC2u, sub_00024CC2); /* call 0x00024CC2 */

loc_0042812B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004282A3; /* je: equal / zero */

loc_00428133: ;
    eax = MEM32(esi + 0x3C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00428120; /* jb: below (unsigned <) */

loc_0042813B: ;
    edx = esp + 0x40;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00428147u); RECOMP_ABI_CALL(0x005A7A70u, sub_005A7A70); /* call 0x005A7A70 */

loc_00428147: ;
    eax = esp + 0x40;
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    MEM32(esp + 0x5C) = 0x7D;
    PUSH32(esp, 0x0042815Eu); RECOMP_ABI_CALL(0x005A7D96u, sub_005A7D96); /* call 0x005A7D96 */

loc_0042815E: ;
    ebx = eax;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0042818A; /* je: equal / zero */

loc_0042816A: ;
    MEM8(esp + 0xF) = 0;
    MEM8(esp + 0xE) = 0;
    MEM8(esp + 0xD) = 0;
    MEM8(esp + 0xC) = 0;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0042818Au); RECOMP_ABI_CALL(0x005A5B1Au, sub_005A5B1A); /* call 0x005A5B1A */

loc_0042818A: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00428192u); RECOMP_ABI_CALL(0x005A2411u, sub_005A2411); /* call 0x005A2411 */

loc_00428192: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x3C);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004281B9; /* jbe: below or equal (unsigned <=) */

loc_0042819F: ;
    /* nop */

loc_004281A0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + ebp * 4);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004281B1u); RECOMP_ABI_CALL(0x0001B839u, sub_0001B839); /* call 0x0001B839 */

loc_004281B1: ;
    eax = MEM32(esi + 0x3C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004281A0; /* jb: below (unsigned <) */

loc_004281B9: ;
    PUSH32(esp, 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004281C1u); RECOMP_ABI_CALL(0x000330D3u, sub_000330D3); /* call 0x000330D3 */

loc_004281C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, 0x004281CDu); RECOMP_ABI_CALL(0x005A3A01u, sub_005A3A01); /* call 0x005A3A01 */

loc_004281CD: ;
    ecx = edi;
    PUSH32(esp, 0x004281D4u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004281D4: ;
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = ecx;
    ecx = edi;
    PUSH32(esp, 0x004281E7u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004281E7: ;
    edx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x15) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x2C) = ebp;
    PUSH32(esp, 0x00428204u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00428204: ;
    eax = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x400000));
    eax = eax - 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x00428220u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00428220: ;
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x34) = ecx;
    ecx = edi;
    PUSH32(esp, 0x00428239u); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_00428239: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0042826C; /* je: equal / zero */

loc_0042823D: ;
    ecx = edi;
    PUSH32(esp, 0x00428244u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00428244: ;
    eax = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00428261; /* ja: above (unsigned >) */

loc_00428253: ;
    edx = ZX8(MEM8(eax + 0x4282B4));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x4282B0)); return; /* indirect tail jmp */

loc_00428261: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0042826Au); RECOMP_ABI_CALL(0x005A835Au, sub_005A835A); /* call 0x005A835A */

loc_0042826A: ;
    goto loc_00428279;

loc_0042826C: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00428279u); RECOMP_ABI_CALL(0x005A46E2u, sub_005A46E2); /* call 0x005A46E2 */

loc_00428279: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x38);
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00428288u); RECOMP_ABI_CALL(0x00029042u, sub_00029042); /* call 0x00029042 */

loc_00428288: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0042829A; /* je: equal / zero */

loc_0042828D: ;
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0042829Au); RECOMP_ABI_CALL(0x00564995u, sub_00564995); /* call 0x00564995 */

loc_0042829A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004282A0u); RECOMP_ABI_CALL(0x005A1E5Eu, sub_005A1E5E); /* call 0x005A1E5E */

loc_004282A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004282A3: ;
    POP32(esp, ebx);

loc_004282A4: ;
    POP32(esp, edi);

loc_004282A5: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xF4)) >> 32) & 1);
    esp = esp + 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00428142
 * Original: 0x00428142 - 0x004282AD (363 bytes, 119 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428142(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00428142: ;
    PUSH32(esp, 0x00428147u); RECOMP_ABI_CALL(0x005A7A70u, sub_005A7A70); /* call 0x005A7A70 */

loc_00428147: ;
    eax = esp + 0x40;
    PUSH32(esp, 0x400);
    PUSH32(esp, eax);
    MEM32(esp + 0x5C) = 0x7D;
    PUSH32(esp, 0x0042815Eu); RECOMP_ABI_CALL(0x005A7D96u, sub_005A7D96); /* call 0x005A7D96 */

loc_0042815E: ;
    ebx = eax;
    SET_LO8(eax, MEM8(esi + 0x48));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0042818A; /* je: equal / zero */

loc_0042816A: ;
    MEM8(esp + 0xF) = 0;
    MEM8(esp + 0xE) = 0;
    MEM8(esp + 0xD) = 0;
    MEM8(esp + 0xC) = 0;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = ebx;
    PUSH32(esp, 0x0042818Au); RECOMP_ABI_CALL(0x005A5B1Au, sub_005A5B1A); /* call 0x005A5B1A */

loc_0042818A: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x00428192u); RECOMP_ABI_CALL(0x005A2411u, sub_005A2411); /* call 0x005A2411 */

loc_00428192: ;
    MEM32(esp + 0x10) = eax;
    eax = MEM32(esi + 0x3C);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_004281B9; /* jbe: below or equal (unsigned <=) */

loc_0042819F: ;
    /* nop */

loc_004281A0: ;
    edx = MEM32(esp + 0x10);
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + ebp * 4);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004281B1u); RECOMP_ABI_CALL(0x0001B839u, sub_0001B839); /* call 0x0001B839 */

loc_004281B1: ;
    eax = MEM32(esi + 0x3C);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_004281A0; /* jb: below (unsigned <) */

loc_004281B9: ;
    PUSH32(esp, 8);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004281C1u); RECOMP_ABI_CALL(0x000330D3u, sub_000330D3); /* call 0x000330D3 */

loc_004281C1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    PUSH32(esp, 0x004281CDu); RECOMP_ABI_CALL(0x005A3A01u, sub_005A3A01); /* call 0x005A3A01 */

loc_004281CD: ;
    ecx = edi;
    PUSH32(esp, 0x004281D4u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004281D4: ;
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0x14) = ecx;
    ecx = edi;
    PUSH32(esp, 0x004281E7u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004281E7: ;
    edx = MEM32(eax);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(0x15) & 31u;
      if (_sc) {
        _cf = (int)((_sv >> (_sc - 1u)) & 1u);
        edx = _sv >> _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _cf = 0; /* logical op clears CF */
    edx = edx & 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = edi;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = ebp;
    MEM32(esp + 0x2C) = ebp;
    PUSH32(esp, 0x00428204u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00428204: ;
    eax = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x400000));
    eax = eax - 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = edi;
    MEM32(esp + 0x30) = eax;
    PUSH32(esp, 0x00428220u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00428220: ;
    ecx = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xF0000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(esp + 0x34) = ecx;
    ecx = edi;
    PUSH32(esp, 0x00428239u); RECOMP_ABI_CALL(0x005A23FEu, sub_005A23FE); /* call 0x005A23FE */

loc_00428239: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0042826C; /* je: equal / zero */

loc_0042823D: ;
    ecx = edi;
    PUSH32(esp, 0x00428244u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00428244: ;
    eax = MEM32(eax);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFF8u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFF8u)) >> 32) & 1);
    eax = eax + 0xFFFFFFF8u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00428261; /* ja: above (unsigned >) */

loc_00428253: ;
    edx = ZX8(MEM8(eax + 0x4282B4));
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx * 4 + 0x4282B0)); return; /* indirect tail jmp */

loc_00428261: ;
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x0042826Au); RECOMP_ABI_CALL(0x005A835Au, sub_005A835A); /* call 0x005A835A */

loc_0042826A: ;
    goto loc_00428279;

loc_0042826C: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00428279u); RECOMP_ABI_CALL(0x005A46E2u, sub_005A46E2); /* call 0x005A46E2 */

loc_00428279: ;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(esi + 0x38);
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00428288u); RECOMP_ABI_CALL(0x00029042u, sub_00029042); /* call 0x00029042 */

loc_00428288: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0042829A; /* je: equal / zero */

loc_0042828D: ;
    PUSH32(esp, edi);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x0042829Au); RECOMP_ABI_CALL(0x00564995u, sub_00564995); /* call 0x00564995 */

loc_0042829A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x004282A0u); RECOMP_ABI_CALL(0x005A1E5Eu, sub_005A1E5E); /* call 0x005A1E5E */

loc_004282A0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xF4)) >> 32) & 1);
    esp = esp + 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00428390
 * Original: 0x00428390 - 0x00428398 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428390(void)
{

loc_00428390: ;
    PUSH32(esp, 0x00428395u); RECOMP_ABI_CALL(0x000303E7u, sub_000303E7); /* call 0x000303E7 */

loc_00428395: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004283A0
 * Original: 0x004283A0 - 0x00428416 (118 bytes, 54 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004283A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004283A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(ebx, 2);
    if (CMP_EQ(_fa, _fb)) goto loc_004283B6; /* je: equal / zero */

loc_004283B2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004283C8; /* jne: not equal / not zero */

loc_004283B6: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004283C1u); RECOMP_ABI_CALL(0x000229FEu, sub_000229FE); /* call 0x000229FE */

loc_004283C1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004283C8; /* je: equal / zero */

loc_004283C5: ;
    MEM8(esi + 0x11) = LO8(ebx);

loc_004283C8: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00428410; /* jne: not equal / not zero */

loc_004283CD: ;
    ecx = MEM32(esi + 0x38);
    SET_LO8(eax, MEM8(ecx + 0x11));
    SET_LO8(ebx, 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042840D; /* jne: not equal / not zero */

loc_004283D9: ;
    edx = MEM32(esi + 0x3C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_004283F9; /* jbe: below or equal (unsigned <=) */

loc_004283E2: ;
    ecx = MEM32(esi + 0x44);
    PUSH32(esp, ebp);

loc_004283E6: ;
    ebp = MEM32(ecx);
    _fa = (uint32_t)(MEM8(ebp + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x11), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004283F8; /* jne: not equal / not zero */

loc_004283ED: ;
    ebp = MEM32(esi + 0x3C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_004283E6; /* jb: below (unsigned <) */

loc_004283F8: ;
    POP32(esp, ebp);

loc_004283F9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042840D; /* jne: not equal / not zero */

loc_004283FD: ;
    ecx = esi;
    PUSH32(esp, 0x00428404u); RECOMP_ABI_CALL(0x000303E7u, sub_000303E7); /* call 0x000303E7 */

loc_00428404: ;
    POP32(esp, edi);
    MEM8(esi + 0x11) = LO8(ebx);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042840D: ;
    MEM32(edi + 8) = MEM32(edi + 8) + 1;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00428410: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428440
 * Original: 0x00428440 - 0x00428519 (217 bytes, 103 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428440(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    int _jf_0042844A = 0; /* per-edge flags of joins */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00428440: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    _jf_0042844A = (CMP_A(_fa, _fb)) ? 1 : 0; /* flags of this edge */

loc_0042844A: ;
    if (_jf_0042844A /* ja: above (unsigned >) */) goto loc_00428490;

loc_0042844C: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x42849C); /* switch: 17 entries, 8 targets */
    if (_jt == 0x00428453u) goto loc_00428453;
    if (_jt == 0x0042845Cu) goto loc_0042845C;
    if (_jt == 0x00428465u) goto loc_00428465;
    if (_jt == 0x00428476u) goto loc_00428476;
    if (_jt == 0x0042847Bu) goto loc_0042847B;
    if (_jt == 0x0042847Eu) goto loc_0042847E;
    if (_jt == 0x00428487u) goto loc_00428487;
    if (_jt == 0x00428490u) goto loc_00428490;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00428453: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00036D4B(); return; /* tail jmp 0x00036D4B */

loc_0042845C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00014CCD(); return; /* tail jmp 0x00014CCD */

loc_00428465: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042847B; /* jne: not equal / not zero */

loc_0042846B: ;
    MEM32(esp + 4) = ecx;
    ecx = eax;
    g_seh_ebp = ebp; sub_00021171(); return; /* tail jmp 0x00021171 */

loc_00428476: ;
    PUSH32(esp, 0x0042847Bu); RECOMP_ABI_CALL(0x000303E7u, sub_000303E7); /* call 0x000303E7 */

loc_0042847B: ;
    esp += 8; return; /* ret 4 */

loc_0042847E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00019DE5(); return; /* tail jmp 0x00019DE5 */

loc_00428487: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00035AEF(); return; /* tail jmp 0x00035AEF */

loc_00428490: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00017ABD(); return; /* tail jmp 0x00017ABD */

    /* nop */
    /* nop */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), LO8(eax) (8-bit) */
    POP32(esp, esp);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), LO8(eax) (8-bit) */
    /* nop */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), LO8(eax) (8-bit) */
    /* nop */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), LO8(eax) (8-bit) */
    /* nop */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), LO8(eax) (8-bit) */
    { uint32_t _tmp = MEM32(edx + eax * 2 + 0x42847E00);
    MEM32(edx + eax * 2 + 0x42847E00) = eax;
    eax = _tmp; }
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 0x7B004284) = MEM8(eax + 0x7B004284) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax + 0x7B004284)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), LO8(eax) (8-bit) */
    _jf_0042844A = (CMP_A(_fa & _fb, 0)) ? 1 : 0; /* flags of this edge */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0042844A; /* jnp: not parity */

loc_004284C6: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + -124) = MEM8(ebp + -124) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebp + -124)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi + -124) = MEM8(esi + -124) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi + -124)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + 0x7B004284) = MEM8(eax + 0x7B004284) + LO8(edx);
    _fa = (uint32_t)(MEM8(eax + 0x7B004284)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), LO8(eax) (8-bit) */
    /* nop */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), LO8(eax) (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) (void)0; /* goto loc_00428462 - dead code, label not in function */ /* jnp: not parity */

loc_004284DE: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
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
    eax = MEM32(ecx);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00428520
 * Original: 0x00428520 - 0x0042852B (11 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00428520: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00428528; /* jne: not equal / not zero */

loc_00428527: ;
    esp += 4; return; /* ret */

loc_00428528: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00428530
 * Original: 0x00428530 - 0x00428555 (37 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00428530: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00428545; /* jne: not equal / not zero */

loc_00428537: ;
    ecx = MEM32(ecx + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 4));
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

loc_00428545: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 4));
    eax = MEM32(eax + ecx * 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428560
 * Original: 0x00428560 - 0x00428587 (39 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00428560: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00428576; /* jne: not equal / not zero */

loc_00428567: ;
    ecx = MEM32(ecx + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 4));
    eax = MEM32(eax + ecx * 4 + 4);
    esp += 8; return; /* ret 4 */

loc_00428576: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esp + 4));
    eax = MEM32(eax + ecx * 4 + 4);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428590
 * Original: 0x00428590 - 0x004285DD (77 bytes, 28 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00428590: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00428599; /* je: equal / zero */

loc_00428597: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00428599: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    esi = (uint32_t)((int32_t)esi * (int32_t)edx);
    eax = MEM32(eax + esi * 4);
    esi = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_004285C8; /* jne: not equal / not zero */

loc_004285B5: ;
    ecx = MEM32(ecx + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = MEM32(eax + ecx * 4 + 4);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

loc_004285C8: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx + 0x18);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    edx = MEM32(eax + ecx * 4 + 4);
    eax = MEM32(esp + 0xC);
    MEM32(eax) = edx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004285F0
 * Original: 0x004285F0 - 0x004285FE (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004285F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004285F0: ;
    PUSH32(esp, 0x004285F5u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004285F5: ;
    eax = MEM32(eax);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(9) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00428610
 * Original: 0x00428610 - 0x0042861D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428610(void)
{

loc_00428610: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428620
 * Original: 0x00428620 - 0x0042862E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428620(void)
{

loc_00428620: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428640
 * Original: 0x00428640 - 0x00428643 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428640(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00428640: ;
    fp_push(MEMF(ecx)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00428650
 * Original: 0x00428650 - 0x00428654 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428650(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_00428650: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00428660
 * Original: 0x00428660 - 0x0042866D (13 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428660(void)
{

loc_00428660: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428670
 * Original: 0x00428670 - 0x0042867E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428670(void)
{

loc_00428670: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428690
 * Original: 0x00428690 - 0x0042869E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428690(void)
{

loc_00428690: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004286B0
 * Original: 0x004286B0 - 0x004286BE (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004286B0(void)
{

loc_004286B0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004286D0
 * Original: 0x004286D0 - 0x004286D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004286D0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_004286D0: ;
    fp_push(MEMF(ecx + 0xC)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_004286E0
 * Original: 0x004286E0 - 0x004286F0 (16 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004286E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004286E0: ;
    eax = MEM32(ecx + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004286EC; /* je: equal / zero */

loc_004286E9: ;
    MEM8(eax + 0x3C) = LO8(edx);

loc_004286EC: ;
    MEM8(ecx + 0x5C) = LO8(edx);
    esp += 4; return; /* ret */

}

/**
 * sub_00428700
 * Original: 0x00428700 - 0x00428716 (22 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428700(void)
{

loc_00428700: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x20;
    PUSH32(esp, 0x0042870Bu); RECOMP_ABI_CALL(0x00027E63u, sub_00027E63); /* call 0x00027E63 */

loc_0042870B: ;
    MEM8(esi) = 0;
    MEM8(esi + 0x60) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00428720
 * Original: 0x00428720 - 0x0042880D (237 bytes, 62 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00428720: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0x00428730u); RECOMP_ABI_CALL(0x0001E999u, sub_0001E999); /* call 0x0001E999 */

loc_00428730: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp) = 0x839378;
    edi = ebp + 0x40;
    ecx = 0x10;
    esi = 0x87DB50;
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
    MEM32(ebp + 0x80) = ebx;
    MEM32(ebp + 0x84) = ebx;
    MEM32(ebp + 0x90) = ebx;
    MEM32(ebp + 0x94) = ebx;
    MEM32(ebp + 0x98) = ebx;
    MEM32(ebp + 0x9C) = ebx;
    MEM32(ebp + 0xA0) = ebx;
    MEM32(ebp + 0xA4) = ebx;
    MEM32(ebp + 0xA8) = ebx;
    MEM32(ebp + 0xC0) = ebx;
    MEMF(ebp + 0x30) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x34) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x38) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp + 0x88) = xmm0.f[0]; /* movss */
    MEMF(ebp + 0x8C) = xmm0.f[0]; /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64);
    MEM32(ebp + 0xAC) = ebx;
    MEM32(ebp + 0xB0) = ebx;
    MEM32(ebp + 0xB4) = ebx;
    MEM32(ebp + 0xB8) = ebx;
    MEM32(ebp + 0xBC) = ebx;
    PUSH32(esp, 0x004287D9u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_004287D9: ;
    esi = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004287FE; /* je: equal / zero */

loc_004287E2: ;
    ecx = esi + 0x20;
    PUSH32(esp, 0x004287EAu); RECOMP_ABI_CALL(0x00027E63u, sub_00027E63); /* call 0x00027E63 */

loc_004287EA: ;
    MEM8(esi) = LO8(ebx);
    MEM8(esi + 0x60) = LO8(ebx);
    POP32(esp, edi);
    MEM32(ebp + 0xA8) = esi;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004287FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0xA8) = ebx;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428850
 * Original: 0x00428850 - 0x00428858 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00428850: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00013701(); return; /* tail jmp 0x00013701 */

}

/**
 * sub_00428860
 * Original: 0x00428860 - 0x0042894B (235 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00428860: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 4);
    ebx = ecx;
    edx = eax + 1;
    /* nop */

loc_00428870: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00428870; /* jne: not equal / not zero */

loc_00428877: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    eax = esi + 2;
    PUSH32(esp, 0x100);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00428889u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_00428889: ;
    MEM32(ebx + 0xA4) = eax;
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax;

loc_00428897: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00428897; /* jne: not equal / not zero */

loc_004288A1: ;
    ecx = MEM32(ebx + 0xA4);
    MEM8(esi + ecx) = LO8(eax);
    edx = MEM32(ebx + 0xA4);
    MEM8(esi + edx + 1) = LO8(eax);
    esi = MEM32(ebx + 0xA4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = ebx + 0xAC;
    MEM32(esp + 0x10) = 0;
    MEM32(eax) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00428945; /* je: equal / zero */

loc_004288D2: ;
    PUSH32(esp, ebp);
    ebp = eax;

loc_004288D5: ;
    eax = esi;
    edx = eax + 1;
    /* nop */

loc_004288E0: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004288E0; /* jne: not equal / not zero */

loc_004288E7: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x839370);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x004288F6u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_004288F6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00428935; /* je: equal / zero */

loc_004288FD: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00428905; /* jne: not equal / not zero */

loc_00428904: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00428905: ;
    ecx = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x839370);
    MEM32(ebp) = esi;
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0042891Fu); RECOMP_ABI_CALL(0x005CD790u, sub_005CD790); /* call 0x005CD790 */

loc_0042891F: ;
    MEM8(eax + esi) = 0;
    esi = eax + esi + 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004288D5; /* jne: not equal / not zero */

loc_0042892E: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00428935: ;
    eax = MEM32(esp + 0x14);
    MEM32(ebx + eax * 4 + 0xAC) = 0;
    POP32(esp, ebp);

loc_00428945: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428990
 * Original: 0x00428990 - 0x00428BAC (540 bytes, 197 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428990(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00428990: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    edi = 0x83941C;
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
    if ((_flags == 0)) goto loc_004289E4; /* jne: not equal / not zero */

loc_004289AF: ;
    eax = MEM32(ebx + 8);
    edx = eax + 1;

loc_004289B5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004289B5; /* jne: not equal / not zero */

loc_004289BC: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004289C7u); RECOMP_ABI_CALL(0x0001FE2Fu, sub_0001FE2F); /* call 0x0001FE2F */

loc_004289C7: ;
    MEM32(ebp + 0xA0) = eax;
    ecx = MEM32(ebx + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_004289D3: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_004289D3; /* jne: not equal / not zero */

loc_004289DD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_004289E4: ;
    edi = 0x838890;
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
    if ((_flags == 0)) goto loc_00428A0F; /* jne: not equal / not zero */

loc_004289F6: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004289FFu); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_004289FF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x9C) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00428A0F: ;
    edi = 0x839174;
    esi = eax;
    ecx = 0xC;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00428A4B; /* jne: not equal / not zero */

loc_00428A21: ;
    eax = MEM32(ebx + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x00428A2Fu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00428A2F: ;
    PUSH32(esp, eax);
    ecx = ebp + 0xC0;
    PUSH32(esp, 0x00428A3Bu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_00428A3B: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x00428A44u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00428A44: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00428A4B: ;
    edi = 0x839414;
    esi = eax;
    ecx = 7;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00428ACD; /* jne: not equal / not zero */

loc_00428A5D: ;
    ebx = MEM32(ebx + 8);
    edi = 0x839408;
    esi = ebx;
    ecx = 9;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00428A83; /* jne: not equal / not zero */

loc_00428A72: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x80) = 1;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00428A83: ;
    edi = 0x8393F8;
    esi = ebx;
    ecx = 0xB;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00428AA6; /* jne: not equal / not zero */

loc_00428A95: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x80) = 2;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00428AA6: ;
    edi = 0x8393E8;
    esi = ebx;
    ecx = 0xD;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00428BA5; /* jne: not equal / not zero */

loc_00428ABC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x80) = 3;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00428ACD: ;
    edi = 0x8393DC;
    esi = eax;
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
    if ((_flags == 0)) goto loc_00428B72; /* jne: not equal / not zero */

loc_00428AE3: ;
    ebx = MEM32(ebx + 8);
    edi = 0x8393D4;
    esi = ebx;
    ecx = 7;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00428B09; /* jne: not equal / not zero */

loc_00428AF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x90) = 1;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00428B09: ;
    edi = 0x8393BC;
    esi = ebx;
    ecx = 0x12;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00428B2C; /* jne: not equal / not zero */

loc_00428B1B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x90) = 2;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00428B2C: ;
    edi = 0x8393A4;
    esi = ebx;
    ecx = 0x12;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00428B4F; /* jne: not equal / not zero */

loc_00428B3E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x90) = 3;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00428B4F: ;
    edi = 0x839398;
    esi = ebx;
    ecx = 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00428BA5; /* jne: not equal / not zero */

loc_00428B61: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x90) = 4;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00428B72: ;
    esi = eax;
    edi = 0x83938C;
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
    if ((_flags == 0)) goto loc_00428B9D; /* jne: not equal / not zero */

loc_00428B84: ;
    ecx = MEM32(ebx + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00428B8Du); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_00428B8D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x84) = eax;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00428B9D: ;
    PUSH32(esp, ebx);
    ecx = ebp;
    PUSH32(esp, 0x00428BA5u); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_00428BA5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428C40
 * Original: 0x00428C40 - 0x00428C8E (78 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428C40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00428C40: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC0);
    edx = MEM32(esi);
    PUSH32(esp, edi);
    edi = esi + 0xC0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00428C57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00428C54u); } /* indirect call */
    }

loc_00428C57: ;
    MEM32(esi + 0xC4) = eax;
    ecx = MEM32(eax + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00428C69; /* je: equal / zero */

loc_00428C66: ;
    MEM8(ecx + 0x3C) = LO8(edx);

loc_00428C69: ;
    PUSH32(esp, edx);
    PUSH32(esp, edx);
    ecx = esp + 0x10;
    MEM8(eax + 0x5C) = LO8(edx);
    PUSH32(esp, 0x00428C77u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_00428C77: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00428C7Fu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_00428C7F: ;
    ecx = esp + 8;
    PUSH32(esp, 0x00428C88u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00428C88: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428CB0
 * Original: 0x00428CB0 - 0x00428DFD (333 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428CB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00428CB0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00428CC7u); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_00428CC7: ;
    eax = MEM32(esi + 0x80);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00428D03; /* je: equal / zero */

loc_00428CD2: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00428D3D; /* jne: not equal / not zero */

loc_00428CD5: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x839460);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00428CECu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00428CEC: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esi + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40F4B4FA);
    goto loc_00428D2F;

loc_00428D03: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x83944C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00428D1Au); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00428D1A: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esi + 0x30;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x10F4A161);

loc_00428D2F: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00428D37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00428D34u); } /* indirect call */
    }

loc_00428D37: ;
    MEM32(esi + 0x94) = eax;

loc_00428D3D: ;
    eax = MEM32(esi + 0x90);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00428D7C; /* je: equal / zero */

loc_00428D48: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00428DB9; /* jne: not equal / not zero */

loc_00428D4B: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x839438);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00428D62u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00428D62: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esi + 0x88;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8F4AAAA);
    goto loc_00428DAB;

loc_00428D7C: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x839428);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00428D93u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00428D93: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    edx = esi + 0x84;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B810);

loc_00428DAB: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00428DB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00428DB0u); } /* indirect call */
    }

loc_00428DB3: ;
    MEM32(esi + 0x98) = eax;

loc_00428DB9: ;
    eax = MEM32(esi + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00428DF2; /* je: equal / zero */

loc_00428DC3: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    ecx = eax + 0x20;
    PUSH32(esp, 0x00428DCFu); RECOMP_ABI_CALL(0x000292E0u, sub_000292E0); /* call 0x000292E0 */

loc_00428DCF: ;
    eax = MEM32(esi + 0x9C);
    ecx = MEM32(esi + 0xA0);
    edx = esi + 0xAC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xA8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00428DF2u); RECOMP_ABI_CALL(0x000171FDu, sub_000171FD); /* call 0x000171FD */

loc_00428DF2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428E50
 * Original: 0x00428E50 - 0x00428E9D (77 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00428E50: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00428E5Eu); RECOMP_ABI_CALL(0x00017ABDu, sub_00017ABD); /* call 0x00017ABD */

loc_00428E5E: ;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00428E71; /* je: equal / zero */

loc_00428E68: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00428E71u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_00428E71: ;
    eax = MEM32(esi + 0x98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x94) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00428E8E; /* je: equal / zero */

loc_00428E85: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00428E8Eu); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_00428E8E: ;
    POP32(esp, edi);
    MEM32(esi + 0x98) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428EB0
 * Original: 0x00428EB0 - 0x00428EFB (75 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00428EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00428EB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_00428EC3; /* je: equal / zero */

loc_00428EBF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00428ED6; /* jne: not equal / not zero */

loc_00428EC3: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x00428ECEu); RECOMP_ABI_CALL(0x000229FEu, sub_000229FE); /* call 0x000229FE */

loc_00428ECE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00428ED6; /* je: equal / zero */

loc_00428ED2: ;
    MEM8(esi + 0x11) = 2;

loc_00428ED6: ;
    _fa = (uint32_t)(MEM8(esi + 0x11)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x11), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00428EF6; /* jne: not equal / not zero */

loc_00428EDC: ;
    ecx = MEM32(esi + 0xC4);
    SET_LO8(edx, MEM8(ecx + 0x11));
    SET_LO8(eax, 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00428EF3; /* jne: not equal / not zero */

loc_00428EEB: ;
    POP32(esp, edi);
    MEM8(esi + 0x11) = LO8(eax);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00428EF3: ;
    MEM32(edi + 8) = MEM32(edi + 8) + 1;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00428EF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00428F10
 * Original: 0x00428F10 - 0x00429253 (835 bytes, 254 insns)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00428F10(void)
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

loc_00428F10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    MEM32(esp + 0x2C) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0042924A; /* je: equal / zero */

loc_00428F2D: ;
    ecx = edi;
    MEM32(esp + 0x28) = edi;
    MEM8(esp + 0x1B) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00428F3Du); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00428F3D: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00428F5B; /* je: equal / zero */

loc_00428F44: ;
    PUSH32(esp, 0x100);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00428F50u); RECOMP_ABI_CALL(0x005A86B8u, sub_005A86B8); /* call 0x005A86B8 */

loc_00428F50: ;
    MEM32(esp + 0x28) = eax;
    MEM8(esp + 0x1B) = 1;
    edi = eax;

loc_00428F5B: ;
    eax = MEM32(esi + 0x90);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x20) = ebx;
    if (CMP_A(_fa, _fb)) goto loc_00428FD3; /* ja: above (unsigned >) */

loc_00428F71: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x429254); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00428F78u) goto loc_00428F78;
    if (_jt == 0x00428F82u) goto loc_00428F82;
    if (_jt == 0x00428FA0u) goto loc_00428FA0;
    if (_jt == 0x00428FBBu) goto loc_00428FBB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00428F78: ;
    MEM32(esp + 0x24) = ebx;
    MEM32(esp + 0x20) = ebx;
    goto loc_00428FD3;

loc_00428F82: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00428F89u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00428F89: ;
    eax = MEM32(eax + 0x10);
    ecx = edi;
    MEM32(esp + 0x24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00428F97u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00428F97: ;
    ecx = MEM32(eax + 0x14);
    MEM32(esp + 0x20) = ecx;
    goto loc_00428FD3;

loc_00428FA0: ;
    ecx = MEM32(esi + 0x84);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00428FB9u); RECOMP_ABI_CALL(0x0001AFCEu, sub_0001AFCE); /* call 0x0001AFCE */

loc_00428FB9: ;
    goto loc_00428FD3;

loc_00428FBB: ;
    edx = (int32_t)MEMF(esi + 0x88); /* cvttss2si */
    eax = (int32_t)MEMF(esi + 0x8C); /* cvttss2si */
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x20) = eax;

loc_00428FD3: ;
    eax = MEM32(esi + 0x80);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0042920C; /* je: equal / zero */

loc_00428FE0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0042918E; /* je: equal / zero */

loc_00428FE7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00429239; /* jne: not equal / not zero */

loc_00428FEE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x7D);
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00428FFFu); RECOMP_ABI_CALL(0x005A3A2Bu, sub_005A3A2B); /* call 0x005A3A2B */

loc_00428FFF: ;
    PUSH32(esp, 0x100);
    ecx = esp + 0x54;
    PUSH32(esp, ecx);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00429010u); RECOMP_ABI_CALL(0x005A4A44u, sub_005A4A44); /* call 0x005A4A44 */

loc_00429010: ;
    esi = eax;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00429019u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00429019: ;
    ecx = MEM32(eax + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00429138; /* jle: less or equal (signed <=) */

loc_00429024: ;
    ecx = esi;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042902Du); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0042902D: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00429123; /* jle: less or equal (signed <=) */

loc_00429038: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edx = esp + 0x28;
    PUSH32(esp, edx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00429048u); RECOMP_ABI_CALL(0x005A7000u, sub_005A7000); /* call 0x005A7000 */

loc_00429048: ;
    eax = ZX8(MEM8(esp + 0x1E));
    xmm0 = XMM_SCALAR(MEMF(0x839478)); /* movss */
    ecx = ZX8(MEM8(esp + 0x1D));
    edx = ZX8(MEM8(esp + 0x1C));
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = ZX8(MEM8(esp + 0x1F));
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x34) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0x38) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    eax = MEM32(esp + 0x2C);
    ecx = esp + 0x40;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    edx = esp + 0x38;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, edx);
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004290B3u); RECOMP_ABI_CALL(0x0059F359u, sub_0059F359); /* call 0x0059F359 */

loc_004290B3: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004290C5u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_004290C5: ;
    fp_push(MEMF(esp + 0x44)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    MEM8(esp + 0x1E) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004290D8u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_004290D8: ;
    fp_push(MEMF(esp + 0x48)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    MEM8(esp + 0x1D) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004290EBu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_004290EB: ;
    fp_push(MEMF(esp + 0x4C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    MEM8(esp + 0x1C) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004290FEu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_004290FE: ;
    MEM8(esp + 0x1F) = LO8(eax);
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00429112u); RECOMP_ABI_CALL(0x005A6D80u, sub_005A6D80); /* call 0x005A6D80 */

loc_00429112: ;
    ecx = esi;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042911Au); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0042911A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x18) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00429038; /* jl: less (signed <) */

loc_00429123: ;
    ecx = esi;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042912Bu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0042912B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x1C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00429024; /* jl: less (signed <) */

loc_00429134: ;
    edi = MEM32(esp + 0x28);

loc_00429138: ;
    SET_LO8(eax, 0xFF);
    ecx = esi;
    MEM8(esp + 0x1F) = LO8(eax);
    MEM8(esp + 0x1E) = LO8(eax);
    MEM8(esp + 0x1D) = LO8(eax);
    MEM8(esp + 0x1C) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00429151u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00429151: ;
    ebx = MEM32(eax + 0x1C);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042915Bu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0042915B: ;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(eax + 0x18);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00429180u); RECOMP_ABI_CALL(0x005A3325u, sub_005A3325); /* call 0x005A3325 */

loc_00429180: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00429186u); RECOMP_ABI_CALL(0x005A1E5Eu, sub_005A1E5E); /* call 0x005A1E5E */

loc_00429186: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00429239;

loc_0042918E: ;
    fp_push(MEMF(esi + 0x3C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042919Cu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0042919C: ;
    fp_push(MEMF(esi + 0x30)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    MEM8(esp + 0x1F) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004291AEu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_004291AE: ;
    fp_push(MEMF(esi + 0x34)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    MEM8(esp + 0x1E) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004291C0u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_004291C0: ;
    fp_push(MEMF(esi + 0x38)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    MEM8(esp + 0x1D) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004291D2u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_004291D2: ;
    ecx = edi;
    MEM8(esp + 0x1C) = LO8(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004291DDu); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004291DD: ;
    esi = MEM32(eax + 0x1C);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x004291E7u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_004291E7: ;
    edx = MEM32(esp + 0x1C);
    eax = MEM32(eax + 0x18);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x30);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042920Au); RECOMP_ABI_CALL(0x005A3325u, sub_005A3325); /* call 0x005A3325 */

loc_0042920A: ;
    goto loc_00429239;

loc_0042920C: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00429213u); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_00429213: ;
    esi = MEM32(eax + 0x1C);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0042921Du); RECOMP_ABI_CALL(0x005A23F6u, sub_005A23F6); /* call 0x005A23F6 */

loc_0042921D: ;
    eax = MEM32(eax + 0x18);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00429239u); RECOMP_ABI_CALL(0x005A3388u, sub_005A3388); /* call 0x005A3388 */

loc_00429239: ;
    SET_LO8(eax, MEM8(esp + 0x1B));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042924A; /* je: equal / zero */

loc_00429241: ;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00429247u); RECOMP_ABI_CALL(0x005A1E5Eu, sub_005A1E5E); /* call 0x005A1E5E */

loc_00429247: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0042924A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00429370
 * Original: 0x00429370 - 0x00429391 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429370(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00429370: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x20;
    PUSH32(esp, 0x0042937Bu); RECOMP_ABI_CALL(0x00013701u, sub_00013701); /* call 0x00013701 */

loc_0042937B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042938B; /* je: equal / zero */

loc_00429382: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00429388u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_00429388: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0042938B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004293A0
 * Original: 0x004293A0 - 0x004293D8 (56 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004293A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004293A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    edx = ZX8(MEM8(esi + 0x11));
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004293BEu); RECOMP_ABI_CALL(0x000324F3u, sub_000324F3); /* call 0x000324F3 */

loc_004293BE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004293D4; /* je: equal / zero */

loc_004293C2: ;
    ecx = MEM32(esi + 0xA8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004293D0u); RECOMP_ABI_CALL(0x00025537u, sub_00025537); /* call 0x00025537 */

loc_004293D0: ;
    MEM8(esi + 0x11) = 4;

loc_004293D4: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004293F0
 * Original: 0x004293F0 - 0x00429443 (83 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004293F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004293F0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042943F; /* je: equal / zero */

loc_004293FD: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0xA8);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00429410; /* je: equal / zero */

loc_00429409: ;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00429421; /* je: equal / zero */

loc_00429410: ;
    PUSH32(esp, esi);
    ecx = esi + 0x20;
    PUSH32(esp, 0x00429419u); RECOMP_ABI_CALL(0x0002D0E8u, sub_0002D0E8); /* call 0x0002D0E8 */

loc_00429419: ;
    MEM8(esi + 0x50) = 0;
    MEM8(esi + 0x60) = 0;

loc_00429421: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0042943B; /* je: equal / zero */

loc_00429427: ;
    eax = MEM32(edi + 0xA8);
    SET_LO8(ecx, MEM8(eax + 0x50));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042943B; /* jne: not equal / not zero */

loc_00429434: ;
    SET_LO8(ecx, MEM8(eax + 0x60));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042943F; /* jne: not equal / not zero */

loc_0042943B: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0042943F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00429460
 * Original: 0x00429460 - 0x004294B7 (87 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00429460: ;
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(edi + 0xC4);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004294B5; /* je: equal / zero */

loc_0042946F: ;
    eax = MEM32(ecx + 0x28);
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004294B3; /* jne: not equal / not zero */

loc_00429478: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0xA8);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042948B; /* je: equal / zero */

loc_00429484: ;
    SET_LO8(eax, MEM8(esi + 0x50));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042949C; /* je: equal / zero */

loc_0042948B: ;
    PUSH32(esp, esi);
    ecx = esi + 0x20;
    PUSH32(esp, 0x00429494u); RECOMP_ABI_CALL(0x0002D0E8u, sub_0002D0E8); /* call 0x0002D0E8 */

loc_00429494: ;
    MEM8(esi + 0x50) = 0;
    MEM8(esi + 0x60) = 0;

loc_0042949C: ;
    ecx = MEM32(edi + 0xC4);
    ecx = MEM32(ecx + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004294ABu); RECOMP_ABI_CALL(0x00023598u, sub_00023598); /* call 0x00023598 */

loc_004294AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_004294B3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_004294B5: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_004294D0
 * Original: 0x004294D0 - 0x0042958F (191 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004294D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004294D0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00429589; /* je: equal / zero */

loc_004294E3: ;
    eax = MEM32(edi + 0xC4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00429589; /* je: equal / zero */

loc_004294F1: ;
    _fa = (uint32_t)(MEM32(edi + 0xA0)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xA0), ebx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_00429543; /* jne: not equal / not zero */

loc_004294FA: ;
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, 0x00429502u); RECOMP_ABI_CALL(0x00013611u, sub_00013611); /* call 0x00013611 */

loc_00429502: ;
    ebp = eax;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042957E; /* jbe: below or equal (unsigned <=) */

loc_0042950A: ;
    ebx = MEM32(esp + 0x18);
    edi = edi;

loc_00429510: ;
    eax = MEM32(edi + 0xC4);
    ecx = MEM32(eax + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042951Fu); RECOMP_ABI_CALL(0x0001A01Au, sub_0001A01A); /* call 0x0001A01A */

loc_0042951F: ;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0042952Du); RECOMP_ABI_CALL(0x000273D7u, sub_000273D7); /* call 0x000273D7 */

loc_0042952D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00429510; /* jb: below (unsigned <) */

loc_00429532: ;
    edx = MEM32(edi + 0xA8);
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    MEM8(edx + 0x60) = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00429543: ;
    esi = MEM32(edi + 0xA8);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00429552; /* je: equal / zero */

loc_0042954D: ;
    _fa = (uint32_t)(MEM8(esi + 0x50)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x50), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00429561; /* je: equal / zero */

loc_00429552: ;
    PUSH32(esp, esi);
    ecx = esi + 0x20;
    PUSH32(esp, 0x0042955Bu); RECOMP_ABI_CALL(0x0002D0E8u, sub_0002D0E8); /* call 0x0002D0E8 */

loc_0042955B: ;
    MEM8(esi + 0x50) = LO8(ebx);
    MEM8(esi + 0x60) = LO8(ebx);

loc_00429561: ;
    edx = MEM32(edi + 0xC4);
    ecx = MEM32(edx + 0x28);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00429570u); RECOMP_ABI_CALL(0x00023598u, sub_00023598); /* call 0x00023598 */

loc_00429570: ;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x0042957Eu); RECOMP_ABI_CALL(0x000273D7u, sub_000273D7); /* call 0x000273D7 */

loc_0042957E: ;
    edx = MEM32(edi + 0xA8);
    MEM8(edx + 0x60) = 1;
    POP32(esp, esi);

loc_00429589: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004295C0
 * Original: 0x004295C0 - 0x0042962F (111 bytes, 28 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004295C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004295C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xA8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi) = 0x839378;
    if (CMP_EQ(_fa, _fb)) goto loc_0042961B; /* je: equal / zero */

loc_004295D4: ;
    ecx = edi + 0x20;
    PUSH32(esp, 0x004295DCu); RECOMP_ABI_CALL(0x00013701u, sub_00013701); /* call 0x00013701 */

loc_004295DC: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x004295E2u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_004295E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xAC) = eax;
    MEM32(esi + 0xB0) = eax;
    MEM32(esi + 0xB4) = eax;
    MEM32(esi + 0xB8) = eax;
    MEM32(esi + 0xBC) = eax;
    ecx = MEM32(esi + 0xA4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042960Eu); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0042960E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xA4) = 0;

loc_0042961B: ;
    ecx = esi + 0xC0;
    PUSH32(esp, 0x00429626u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_00429626: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00035612(); return; /* tail jmp 0x00035612 */

}

/**
 * sub_00429650
 * Original: 0x00429650 - 0x00429745 (245 bytes, 111 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00429650: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x10 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004296A9; /* ja: above (unsigned >) */

loc_0042965C: ;
    edx = ZX8(MEM8(edx + 0x4296E0));
    { uint32_t _jt = MEM32(edx * 4 + 0x4296B8); /* switch: 10 entries, 9 targets */
    if (_jt == 0x0042966Au) goto loc_0042966A;
    if (_jt == 0x00429673u) goto loc_00429673;
    if (_jt == 0x0042967Cu) goto loc_0042967C;
    if (_jt == 0x00429685u) goto loc_00429685;
    if (_jt == 0x0042968Eu) goto loc_0042968E;
    if (_jt == 0x00429697u) goto loc_00429697;
    if (_jt == 0x004296A0u) goto loc_004296A0;
    if (_jt == 0x004296A9u) goto loc_004296A9;
    if (_jt == 0x004296B2u) goto loc_004296B2;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042966A: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00022A62(); return; /* tail jmp 0x00022A62 */

loc_00429673: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002808E(); return; /* tail jmp 0x0002808E */

loc_0042967C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002CAD0(); return; /* tail jmp 0x0002CAD0 */

loc_00429685: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002B207(); return; /* tail jmp 0x0002B207 */

loc_0042968E: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00032854(); return; /* tail jmp 0x00032854 */

loc_00429697: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002260C(); return; /* tail jmp 0x0002260C */

loc_004296A0: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002EA97(); return; /* tail jmp 0x0002EA97 */

loc_004296A9: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00017ABD(); return; /* tail jmp 0x00017ABD */

loc_004296B2: ;
    esp += 8; return; /* ret 4 */

    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042973F; /* je: equal / zero */

loc_0042972F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042973F; /* je: equal / zero */

loc_00429733: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042973Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042973Cu); } /* indirect call */
    }

loc_0042973F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00429750
 * Original: 0x00429750 - 0x00429756 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429750(void)
{

loc_00429750: ;
    SET_LO8(eax, MEM8(0x9093A5));
    esp += 4; return; /* ret */

}

/**
 * sub_00429760
 * Original: 0x00429760 - 0x0042976C (12 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00429760: ;
    SET_LO8(ecx, MEM8(esp + 4));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00429770
 * Original: 0x00429770 - 0x00429779 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00429770: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00429780
 * Original: 0x00429780 - 0x004297E1 (97 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00429780: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042978Eu); RECOMP_ABI_CALL(0x00032AB6u, sub_00032AB6); /* call 0x00032AB6 */

loc_0042978E: ;
    eax = esi + 0x24;
    PUSH32(esp, eax);
    ecx = esp + 0x10;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    MEM32(esi) = 0x8394AC;
    MEM32(eax) = ebx;
    MEM32(esi + 0x28) = 1;
    MEM32(esi + 0x2C) = ebx;
    MEM8(esi + 0x40) = 0xFF;
    PUSH32(esp, 0x004297B4u); RECOMP_ABI_CALL(0x0055A37Eu, sub_0055A37E); /* call 0x0055A37E */

loc_004297B4: ;
    MEM8(esp + 0x17) = LO8(ebx);
    MEM8(esp + 0x16) = LO8(ebx);
    MEM8(esp + 0x15) = LO8(ebx);
    MEM8(esp + 0x14) = LO8(ebx);
    edx = MEM32(esp + 0x14);
    MEM32(esi + 0x41) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x3C) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00429800
 * Original: 0x00429800 - 0x0042982C (44 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00429800: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esi) = 0x8394AC;
    PUSH32(esp, 0x00429818u); RECOMP_ABI_CALL(0x0055A927u, sub_0055A927); /* call 0x0055A927 */

loc_00429818: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x24) = 0;
    PUSH32(esp, 0x00429829u); RECOMP_ABI_CALL(0x000348A7u, sub_000348A7); /* call 0x000348A7 */

loc_00429829: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00429840
 * Original: 0x00429840 - 0x004299D6 (406 bytes, 133 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429840(void)
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

loc_00429840: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    ebx = ecx;
    PUSH32(esp, 0x00429850u); RECOMP_ABI_CALL(0x00029263u, sub_00029263); /* call 0x00029263 */

loc_00429850: ;
    eax = MEM32(ebp + 4);
    edi = 0x8394E4;
    esi = eax;
    ecx = 6;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429905; /* jne: not equal / not zero */

loc_00429869: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x7EA838);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00429877u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_00429877: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00429889; /* je: equal / zero */

loc_0042987E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0x40) = 7;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00429889: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x826F20);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00429897u); RECOMP_ABI_CALL(0x005CDE09u, sub_005CDE09); /* call 0x005CDE09 */

loc_00429897: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_004299CF; /* je: equal / zero */

loc_004298A2: ;
    MEM8(ebx + 0x40) = 0;
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x838BDC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004298B4u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_004298B4: ;
    SET_LO8(edx, MEM8(ebx + 0x40));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) | LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebx + 0x40) = LO8(edx);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 0x7E0964);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x004298CFu); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_004298CF: ;
    SET_LO8(ecx, MEM8(ebx + 0x40));
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    PUSH32(esp, 0x8394D8);
    _cf = 0; /* logical op clears CF */
    eax = eax & 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebx + 0x40) = LO8(ecx);
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x004298ECu); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_004298EC: ;
    SET_LO8(ecx, MEM8(ebx + 0x40));
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x18)) >> 32) & 1);
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) | LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebx + 0x40) = LO8(ecx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00429905: ;
    esi = eax;
    edi = 0x8394C8;
    ecx = 0xC;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_004299CF; /* jne: not equal / not zero */

loc_0042991B: ;
    esi = MEM32(ebp + 8);
    PUSH32(esp, 0x839480);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00429929u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00429929: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00429931u); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_00429931: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    PUSH32(esp, 0x0042993Cu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0042993C: ;
    PUSH32(esp, 0x83948C);
    PUSH32(esp, esi);
    MEM8(ebx + 0x44) = LO8(eax);
    PUSH32(esp, 0x0042994Au); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042994A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839480);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00429957u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00429957: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042995Fu); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042995F: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    PUSH32(esp, 0x0042996Au); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0042996A: ;
    PUSH32(esp, 0x83948C);
    PUSH32(esp, esi);
    MEM8(ebx + 0x43) = LO8(eax);
    PUSH32(esp, 0x00429978u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00429978: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839480);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00429985u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_00429985: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042998Du); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042998D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    PUSH32(esp, 0x00429998u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_00429998: ;
    PUSH32(esp, 0x83948C);
    PUSH32(esp, esi);
    MEM8(ebx + 0x42) = LO8(eax);
    PUSH32(esp, 0x004299A6u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_004299A6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839480);
    PUSH32(esp, esi);
    PUSH32(esp, 0x004299B3u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_004299B3: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x44)) >> 32) & 1);
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x004299BEu); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_004299BE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x004299CCu); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_004299CC: ;
    MEM8(ebx + 0x41) = LO8(eax);

loc_004299CF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00429A40
 * Original: 0x00429A40 - 0x00429A45 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429A40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00429A40: ;
    g_seh_ebp = ebp; sub_00029263(); return; /* tail jmp 0x00029263 */

}

/**
 * sub_00429A50
 * Original: 0x00429A50 - 0x00429AAB (91 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429A50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00429A50: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x8394EC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00429A78u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_00429A78: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4A771);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00429A95u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00429A92u); } /* indirect call */
    }

loc_00429A95: ;
    PUSH32(esp, edi);
    ecx = esi;
    MEM32(esi + 0x2C) = eax;
    PUSH32(esp, 0x00429AA0u); RECOMP_ABI_CALL(0x00029263u, sub_00029263); /* call 0x00029263 */

loc_00429AA0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00429AD0
 * Original: 0x00429AD0 - 0x00429AFA (42 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429AD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00429AD0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00429ADEu); RECOMP_ABI_CALL(0x00029263u, sub_00029263); /* call 0x00029263 */

loc_00429ADE: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00429AEE; /* je: equal / zero */

loc_00429AE5: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00429AEEu); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_00429AEE: ;
    POP32(esp, edi);
    MEM32(esi + 0x2C) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00429B10
 * Original: 0x00429B10 - 0x00429B87 (119 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00429B10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00429B10: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00429B7E; /* je: equal / zero */

loc_00429B23: ;
    SET_LO8(eax, MEM8(0x9093A5));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00429B3B; /* je: equal / zero */

loc_00429B2C: ;
    ecx = MEM32(edi + 0x24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00429B34u); RECOMP_ABI_CALL(0x00558A33u, sub_00558A33); /* call 0x00558A33 */

loc_00429B34: ;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00429B3Bu); RECOMP_ABI_CALL(0x0055981Du, sub_0055981D); /* call 0x0055981D */

loc_00429B3B: ;
    ebx = edi + 0x30;
    MEM32(esp + 0xC) = 4;

loc_00429B46: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00429B70; /* je: equal / zero */

loc_00429B4B: ;
    eax = MEM32(edi + 0x14);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00429B70; /* jbe: below or equal (unsigned <=) */

loc_00429B54: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(eax + esi * 4);
    eax = MEM32(ebp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00429B68u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00429B65u); } /* indirect call */
    }

loc_00429B68: ;
    eax = MEM32(edi + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00429B54; /* jb: below (unsigned <) */

loc_00429B70: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0xC) = eax;
    if ((_fa != 0)) goto loc_00429B46; /* jne: not equal / not zero */

loc_00429B7E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00429BB0
 * Original: 0x00429BB0 - 0x00429C03 (83 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429BB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00429BB0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00429BFE; /* je: equal / zero */

loc_00429BBD: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = esi + 0x30;
    ebx = 4;

loc_00429BC7: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00429BF6; /* je: equal / zero */

loc_00429BCD: ;
    SET_LO8(eax, MEM8(esi + 0x40));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00429BE6; /* je: equal / zero */

loc_00429BD4: ;
    edx = MEM32(esi + 0x41);
    eax = ZX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00429BE6u); RECOMP_ABI_CALL(0x00557F14u, sub_00557F14); /* call 0x00557F14 */

loc_00429BE6: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00429BF6u); RECOMP_ABI_CALL(0x00557EA3u, sub_00557EA3); /* call 0x00557EA3 */

loc_00429BF6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00429BC7; /* jne: not equal / not zero */

loc_00429BFC: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00429BFE: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00429C20
 * Original: 0x00429C20 - 0x00429C5A (58 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429C20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00429C20: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x00429C2Du); RECOMP_ABI_CALL(0x00032AB6u, sub_00032AB6); /* call 0x00032AB6 */

loc_00429C2D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM8(esi + 0x44) = LO8(eax);
    MEM32(esi) = 0x839500;
    MEM32(esi + 0x40) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00429C70
 * Original: 0x00429C70 - 0x00429D4B (219 bytes, 85 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00429C70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x83958C;
    esi = eax;
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
    if ((_flags == 0)) goto loc_00429C90; /* jne: not equal / not zero */

loc_00429C88: ;
    POP32(esp, edi);
    eax = 0x200;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429C90: ;
    edi = 0x839580;
    esi = eax;
    ecx = 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429CAA; /* jne: not equal / not zero */

loc_00429CA2: ;
    POP32(esp, edi);
    eax = 0x201;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429CAA: ;
    edi = 0x839574;
    esi = eax;
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
    if ((_flags == 0)) goto loc_00429CC4; /* jne: not equal / not zero */

loc_00429CBC: ;
    POP32(esp, edi);
    eax = 0x202;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429CC4: ;
    edi = 0x839560;
    esi = eax;
    ecx = 0xF;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429CDE; /* jne: not equal / not zero */

loc_00429CD6: ;
    POP32(esp, edi);
    eax = 0x203;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429CDE: ;
    edi = 0x839550;
    esi = eax;
    ecx = 0xC;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429CF8; /* jne: not equal / not zero */

loc_00429CF0: ;
    POP32(esp, edi);
    eax = 0x204;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429CF8: ;
    edi = 0x839540;
    esi = eax;
    ecx = 0xE;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429D12; /* jne: not equal / not zero */

loc_00429D0A: ;
    POP32(esp, edi);
    eax = 0x205;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429D12: ;
    edi = 0x839528;
    esi = eax;
    ecx = 0x12;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429D2C; /* jne: not equal / not zero */

loc_00429D24: ;
    POP32(esp, edi);
    eax = 0x206;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429D2C: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x839518;
    ecx = 0xB;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    SET_LO8(eax, ((_flags == 0)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x201) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x201;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00429D90
 * Original: 0x00429D90 - 0x00429E5A (202 bytes, 84 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429D90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00429D90: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x8395E0;
    esi = eax;
    ecx = 9;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429DAF; /* jne: not equal / not zero */

loc_00429DA9: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00429DAF: ;
    edi = 0x8395D4;
    esi = eax;
    ecx = 0xA;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429DCA; /* jne: not equal / not zero */

loc_00429DC1: ;
    POP32(esp, edi);
    eax = 0x1000000;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00429DCA: ;
    edi = 0x8395C8;
    esi = eax;
    ecx = 8;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429DE5; /* jne: not equal / not zero */

loc_00429DDC: ;
    POP32(esp, edi);
    eax = 0x10000;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00429DE5: ;
    edi = 0x8395BC;
    esi = eax;
    ecx = 0xA;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429E00; /* jne: not equal / not zero */

loc_00429DF7: ;
    POP32(esp, edi);
    eax = 0x100;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00429E00: ;
    edi = 0x8395B0;
    esi = eax;
    ecx = 9;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429E1B; /* jne: not equal / not zero */

loc_00429E12: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00429E1B: ;
    edi = 0x8395A4;
    esi = eax;
    ecx = 8;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429E36; /* jne: not equal / not zero */

loc_00429E2D: ;
    POP32(esp, edi);
    eax = 0x10101;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00429E36: ;
    esi = eax;
    edi = 0x839598;
    ecx = 8;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_00429E4D; /* je: equal / zero */

loc_00429E48: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_00429E4D: ;
    POP32(esp, edi);
    MEM32(esp + 4) = eax;
    eax = 0x1010101;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00429E90
 * Original: 0x00429E90 - 0x00429F80 (240 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00429E90: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x839664;
    esi = eax;
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
    if ((_flags == 0)) goto loc_00429EB0; /* jne: not equal / not zero */

loc_00429EA8: ;
    POP32(esp, edi);
    eax = 5;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429EB0: ;
    edi = 0x839658;
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
    if ((_flags == 0)) goto loc_00429EC7; /* jne: not equal / not zero */

loc_00429EC2: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429EC7: ;
    edi = 0x839648;
    esi = eax;
    ecx = 0xE;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429EE1; /* jne: not equal / not zero */

loc_00429ED9: ;
    POP32(esp, edi);
    eax = 6;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429EE1: ;
    edi = 0x839638;
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
    if ((_flags == 0)) goto loc_00429EFB; /* jne: not equal / not zero */

loc_00429EF3: ;
    POP32(esp, edi);
    eax = 7;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429EFB: ;
    edi = 0x839628;
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
    if ((_flags == 0)) goto loc_00429F15; /* jne: not equal / not zero */

loc_00429F0D: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429F15: ;
    edi = 0x839614;
    esi = eax;
    ecx = 0x11;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429F2F; /* jne: not equal / not zero */

loc_00429F27: ;
    POP32(esp, edi);
    eax = 2;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429F2F: ;
    edi = 0x839608;
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
    if ((_flags == 0)) goto loc_00429F49; /* jne: not equal / not zero */

loc_00429F41: ;
    POP32(esp, edi);
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429F49: ;
    edi = 0x8395FC;
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
    if ((_flags == 0)) goto loc_00429F63; /* jne: not equal / not zero */

loc_00429F5B: ;
    POP32(esp, edi);
    eax = 4;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00429F63: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x8395EC;
    ecx = 0xB;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    SET_LO8(eax, ((_flags == 0)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00429FC0
 * Original: 0x00429FC0 - 0x0042A0A8 (232 bytes, 95 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00429FC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00429FC0: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x8396E4;
    esi = eax;
    ecx = 0xA;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429FE2; /* jne: not equal / not zero */

loc_00429FD9: ;
    POP32(esp, edi);
    eax = 0x200;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00429FE2: ;
    edi = 0x8396D8;
    esi = eax;
    ecx = 9;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_00429FFD; /* jne: not equal / not zero */

loc_00429FF4: ;
    POP32(esp, edi);
    eax = 0x201;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00429FFD: ;
    edi = 0x8396CC;
    esi = eax;
    ecx = 0xA;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042A018; /* jne: not equal / not zero */

loc_0042A00F: ;
    POP32(esp, edi);
    eax = 0x202;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0042A018: ;
    edi = 0x8396B8;
    esi = eax;
    ecx = 0xF;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042A033; /* jne: not equal / not zero */

loc_0042A02A: ;
    POP32(esp, edi);
    eax = 0x203;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0042A033: ;
    edi = 0x8396A8;
    esi = eax;
    ecx = 0xC;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042A04E; /* jne: not equal / not zero */

loc_0042A045: ;
    POP32(esp, edi);
    eax = 0x204;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0042A04E: ;
    edi = 0x839698;
    esi = eax;
    ecx = 0xE;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042A069; /* jne: not equal / not zero */

loc_0042A060: ;
    POP32(esp, edi);
    eax = 0x205;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0042A069: ;
    edi = 0x839680;
    esi = eax;
    ecx = 0x12;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042A084; /* jne: not equal / not zero */

loc_0042A07B: ;
    POP32(esp, edi);
    eax = 0x206;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0042A084: ;
    esi = eax;
    edi = 0x839670;
    ecx = 0xB;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0042A09B; /* je: equal / zero */

loc_0042A096: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0042A09B: ;
    POP32(esp, edi);
    MEM32(esp + 4) = eax;
    eax = 0x207;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0042A0F0
 * Original: 0x0042A0F0 - 0x0042A141 (81 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A0F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042A0F0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x83970C;
    esi = eax;
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
    if ((_flags == 0)) goto loc_0042A110; /* jne: not equal / not zero */

loc_0042A108: ;
    POP32(esp, edi);
    eax = 3;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0042A110: ;
    edi = 0x839700;
    esi = eax;
    ecx = 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042A12A; /* jne: not equal / not zero */

loc_0042A122: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0042A12A: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x8396F0;
    ecx = 0xB;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    POP32(esp, esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_0042A160
 * Original: 0x0042A160 - 0x0042A25D (253 bytes, 90 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042A160: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0042A19C; /* je: equal / zero */

loc_0042A173: ;
    PUSH32(esp, 0x83949C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0042A17Eu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042A17E: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(edi));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042A19C; /* je: equal / zero */

loc_0042A189: ;
    PUSH32(esp, 0x83949C);
    PUSH32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0042A195u); RECOMP_ABI_CALL(0x005CD790u, sub_005CD790); /* call 0x005CD790 */

loc_0042A195: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa != 0)) goto loc_0042A173; /* jne: not equal / not zero */

loc_0042A19C: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    edi = ebx * 4;
    PUSH32(esp, edi);
    PUSH32(esp, 0x839778);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0042A1B9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A1B6u); } /* indirect call */
    }

loc_0042A1B9: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    MEM32(esi + 0x30) = eax;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x839748);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0042A1CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A1CCu); } /* indirect call */
    }

loc_0042A1CF: ;
    MEM32(esi + 0x34) = eax;
    edi = MEM32(ebp + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042A256; /* je: equal / zero */

loc_0042A1D9: ;
    /* nop */

loc_0042A1E0: ;
    PUSH32(esp, 0x83949C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0042A1EBu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042A1EB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(edi));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042A256; /* je: equal / zero */

loc_0042A1F6: ;
    PUSH32(esp, 0x83949C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0042A201u); RECOMP_ABI_CALL(0x005CD790u, sub_005CD790); /* call 0x005CD790 */

loc_0042A201: ;
    ecx = MEM32(0x9094E8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    edx = ebx + 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0x839718);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0042A21Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A21Cu); } /* indirect call */
    }

loc_0042A21F: ;
    ecx = MEM32(esi + 0x2C);
    edx = MEM32(esi + 0x30);
    MEM32(edx + ecx * 4) = eax;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + eax * 4);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042A239u); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0042A239: ;
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + eax * 4);
    MEM8(ebx + edx) = 0;
    ecx = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esi + 0x2C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0042A1E0; /* jne: not equal / not zero */

loc_0042A256: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042A2A0
 * Original: 0x0042A2A0 - 0x0042A306 (102 bytes, 40 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A2A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042A2A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042A2F6; /* jbe: below or equal (unsigned <=) */

loc_0042A2AA: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042A2DF; /* jbe: below or equal (unsigned <=) */

loc_0042A2B1: ;
    ecx = MEM32(esi + 0x30);
    edx = MEM32(ecx + edi * 4);
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0042A2BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A2BCu); } /* indirect call */
    }

loc_0042A2BF: ;
    ecx = MEM32(esi + 0x34);
    MEM32(ecx + edi * 4) = eax;
    eax = MEM32(esi + 0x30);
    ecx = MEM32(0x9094E8);
    eax = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0042A2D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A2D4u); } /* indirect call */
    }

loc_0042A2D7: ;
    eax = MEM32(esi + 0x2C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042A2B1; /* jb: below (unsigned <) */

loc_0042A2DF: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(esi + 0x30);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0042A2EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A2EBu); } /* indirect call */
    }

loc_0042A2EE: ;
    MEM32(esi + 0x30) = 0;
    POP32(esp, edi);

loc_0042A2F6: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0042A302u); RECOMP_ABI_CALL(0x00029263u, sub_00029263); /* call 0x00029263 */

loc_0042A302: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042A320
 * Original: 0x0042A320 - 0x0042A378 (88 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A320(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042A320: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = esi + 0x3C;
    eax = esp + 8;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042A335u); RECOMP_ABI_CALL(0x0055A1EFu, sub_0055A1EF); /* call 0x0055A1EF */

loc_0042A335: ;
    ecx = MEM32(esi + 0x38);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0x8397AC);
    edx = esp + 0x18;
    MEM32(eax) = 0;
    ecx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042A35Cu); RECOMP_ABI_CALL(0x0055A5F2u, sub_0055A5F2); /* call 0x0055A5F2 */

loc_0042A35C: ;
    ecx = MEM32(edi);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x24);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x0042A372u); RECOMP_ABI_CALL(0x00559AD5u, sub_00559AD5); /* call 0x00559AD5 */

loc_0042A372: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0042A390
 * Original: 0x0042A390 - 0x0042A3CC (60 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042A390: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042A3B4; /* jbe: below or equal (unsigned <=) */

loc_0042A39D: ;
    /* nop */

loc_0042A3A0: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x0042A3ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A3A9u); } /* indirect call */
    }

loc_0042A3AC: ;
    eax = MEM32(esi + 0x2C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042A3A0; /* jb: below (unsigned <) */

loc_0042A3B4: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esi + 0x3C) = 0;
    PUSH32(esp, 0x0042A3C7u); RECOMP_ABI_CALL(0x00029263u, sub_00029263); /* call 0x00029263 */

loc_0042A3C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042A3E0
 * Original: 0x0042A3E0 - 0x0042A42A (74 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042A3E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x34);
    MEM32(esi) = 0x839500;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042A3F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A3F6u); } /* indirect call */
    }

loc_0042A3F9: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x34) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0042A419; /* je: equal / zero */

loc_0042A407: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042A412u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0042A412: ;
    ecx = eax;
    PUSH32(esp, 0x0042A419u); RECOMP_ABI_CALL(0x0055D70Fu, sub_0055D70F); /* call 0x0055D70F */

loc_0042A419: ;
    ecx = esi;
    MEM32(esi + 0x38) = 0;
    PUSH32(esp, 0x0042A427u); RECOMP_ABI_CALL(0x000348A7u, sub_000348A7); /* call 0x000348A7 */

loc_0042A427: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0042A440
 * Original: 0x0042A440 - 0x0042A45B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A440(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0042A440: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0042A455; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0042A451: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0042A455: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0042A470
 * Original: 0x0042A470 - 0x0042A48B (27 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0042A470: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0042A485; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ecx)) */

loc_0042A481: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_0042A485: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_0042A4A0
 * Original: 0x0042A4A0 - 0x0042A5C3 (291 bytes, 118 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A4A0(void)
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

loc_0042A4A0: ;
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x800;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042A4C0; /* jne: not equal / not zero */

loc_0042A4B0: ;
    esi = MEM32(esi + 0x24);
    MEM8(esi) = MEM8(esi) & 0xFE;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x800;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_0042A4C0: ;
    eax = MEM32(esi + 0x24);
    SET_LO8(ecx, MEM8(eax));
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x810);
    SET_LO8(ecx, LO8(ecx) | 1);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x810);
    MEM8(eax) = LO8(ecx);
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042A4FF; /* jbe: below or equal (unsigned <=) */

loc_0042A4E4: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(eax + edi * 4);
    eax = MEM32(esi + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x0042A4F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A4F4u); } /* indirect call */
    }

loc_0042A4F7: ;
    eax = MEM32(esi + 0x2C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042A4E4; /* jb: below (unsigned <) */

loc_0042A4FF: ;
    eax = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042A51F; /* jbe: below or equal (unsigned <=) */

loc_0042A508: ;
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(ecx + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0042A517u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A514u); } /* indirect call */
    }

loc_0042A517: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042A508; /* jb: below (unsigned <) */

loc_0042A51F: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042A530; /* je: equal / zero */

loc_0042A527: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042A5B6; /* jne: not equal / not zero */

loc_0042A530: ;
    eax = MEM32(esi + 0x2C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042A571; /* jbe: below or equal (unsigned <=) */

loc_0042A53B: ;
    goto loc_0042A540;

    /* nop */

loc_0042A540: ;
    eax = MEM32(esi + 0x34);
    ecx = MEM32(eax + ebx * 4);
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042A569; /* je: equal / zero */

loc_0042A54D: ;
    edx = MEM32(esi + 0x34);
    ecx = MEM32(edx + ebx * 4);
    eax = edx + ebx * 4;
    MEM32(esp + edi * 8 + 0x14) = ecx;
    eax = MEM32(eax);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x0042A564u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A561u); } /* indirect call */
    }

loc_0042A564: ;
    MEMF(esp + edi * 8 + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0042A569: ;
    eax = MEM32(esi + 0x2C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042A540; /* jb: below (unsigned <) */

loc_0042A571: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042A586; /* jne: not equal / not zero */

loc_0042A577: ;
    PUSH32(esp, 0x16717);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    goto loc_0042A593;

loc_0042A586: ;
    PUSH32(esp, 0x1A6AF);
    PUSH32(esp, 8);
    PUSH32(esp, edi);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);

loc_0042A593: ;
    PUSH32(esp, 0x0042A598u); RECOMP_ABI_CALL(0x005CC050u, sub_005CC050); /* call 0x005CC050 */

loc_0042A598: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042A5B6; /* jbe: below or equal (unsigned <=) */

loc_0042A5A3: ;
    ebp = MEM32(esi + 0x24);
    ecx = MEM32(esp + ebx * 8 + 0x14);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x0042A5B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A5AEu); } /* indirect call */
    }

loc_0042A5B1: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042A5A3; /* jb: below (unsigned <) */

loc_0042A5B6: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(0x800) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x800;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0042A610
 * Original: 0x0042A610 - 0x0042A672 (98 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042A610: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    if (CMP_EQ(_fa, _fb)) goto loc_0042A65F; /* je: equal / zero */

loc_0042A628: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x8397BC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042A63Fu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042A63F: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4A771);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042A65Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A659u); } /* indirect call */
    }

loc_0042A65C: ;
    MEM32(esi + 0x48) = eax;

loc_0042A65F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0042A667u); RECOMP_ABI_CALL(0x00029263u, sub_00029263); /* call 0x00029263 */

loc_0042A667: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042A690
 * Original: 0x0042A690 - 0x0042A6C1 (49 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042A690: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0042A69Eu); RECOMP_ABI_CALL(0x00029263u, sub_00029263); /* call 0x00029263 */

loc_0042A69E: ;
    SET_LO8(eax, MEM8(esi + 0x44));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042A6BC; /* je: equal / zero */

loc_0042A6A5: ;
    eax = MEM32(esi + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042A6B5; /* je: equal / zero */

loc_0042A6AC: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042A6B5u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042A6B5: ;
    MEM32(esi + 0x48) = 0;

loc_0042A6BC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042A6D0
 * Original: 0x0042A6D0 - 0x0042A713 (67 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A6D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042A6D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    MEM32(esi) = 0x8394AC;
    PUSH32(esp, 0x0042A6E8u); RECOMP_ABI_CALL(0x0055A927u, sub_0055A927); /* call 0x0055A927 */

loc_0042A6E8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    MEM32(esi + 0x24) = 0;
    PUSH32(esp, 0x0042A6F9u); RECOMP_ABI_CALL(0x000348A7u, sub_000348A7); /* call 0x000348A7 */

loc_0042A6F9: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042A70C; /* je: equal / zero */

loc_0042A700: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0042A70Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A709u); } /* indirect call */
    }

loc_0042A70C: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042A730
 * Original: 0x0042A730 - 0x0042A75D (45 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042A730: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x0042A73Eu); RECOMP_ABI_CALL(0x00558A33u, sub_00558A33); /* call 0x00558A33 */

loc_0042A73E: ;
    MEM32(esp + 8) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 8) = 0xF;
    PUSH32(esp, 0x0042A756u); RECOMP_ABI_CALL(0x00029263u, sub_00029263); /* call 0x00029263 */

loc_0042A756: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042A770
 * Original: 0x0042A770 - 0x0042A7D1 (97 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042A770: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x34);
    MEM32(esi) = 0x839500;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042A789u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A786u); } /* indirect call */
    }

loc_0042A789: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x34) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0042A7A9; /* je: equal / zero */

loc_0042A797: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042A7A2u); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0042A7A2: ;
    ecx = eax;
    PUSH32(esp, 0x0042A7A9u); RECOMP_ABI_CALL(0x0055D70Fu, sub_0055D70F); /* call 0x0055D70F */

loc_0042A7A9: ;
    ecx = esi;
    MEM32(esi + 0x38) = 0;
    PUSH32(esp, 0x0042A7B7u); RECOMP_ABI_CALL(0x000348A7u, sub_000348A7); /* call 0x000348A7 */

loc_0042A7B7: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042A7CA; /* je: equal / zero */

loc_0042A7BE: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0042A7CAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042A7C7u); } /* indirect call */
    }

loc_0042A7CA: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042A7F0
 * Original: 0x0042A7F0 - 0x0042A846 (86 bytes, 35 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A7F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042A7F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 0x38;
    if (CMP_NE(_fa, _fb)) goto loc_0042A821; /* jne: not equal / not zero */

loc_0042A7FF: ;
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042A80Cu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0042A80C: ;
    ecx = eax;
    PUSH32(esp, 0x0042A813u); RECOMP_ABI_CALL(0x0055D468u, sub_0055D468); /* call 0x0055D468 */

loc_0042A813: ;
    eax = MEM32(edi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042A821; /* je: equal / zero */

loc_0042A81A: ;
    ecx = edi;
    PUSH32(esp, 0x0042A821u); RECOMP_ABI_CALL(0x0002DD36u, sub_0002DD36); /* call 0x0002DD36 */

loc_0042A821: ;
    _fa = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x14), 1 (32-bit) */
    eax = MEM32(esp + 0x10);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = ZX8(LO8(ecx));
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    PUSH32(esp, 0x0042A83Eu); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_0042A83E: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042A860
 * Original: 0x0042A860 - 0x0042A8AF (79 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042A860: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x38;
    if (CMP_NE(_fa, _fb)) goto loc_0042A891; /* jne: not equal / not zero */

loc_0042A86F: ;
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042A87Cu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0042A87C: ;
    ecx = eax;
    PUSH32(esp, 0x0042A883u); RECOMP_ABI_CALL(0x0055D468u, sub_0055D468); /* call 0x0055D468 */

loc_0042A883: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042A891; /* je: equal / zero */

loc_0042A88A: ;
    ecx = esi;
    PUSH32(esp, 0x0042A891u); RECOMP_ABI_CALL(0x0002DD36u, sub_0002DD36); /* call 0x0002DD36 */

loc_0042A891: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042A8A7u); RECOMP_ABI_CALL(0x00560D03u, sub_00560D03); /* call 0x00560D03 */

loc_0042A8A7: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042A8D0
 * Original: 0x0042A8D0 - 0x0042A91F (79 bytes, 33 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A8D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042A8D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi + 0x38;
    if (CMP_NE(_fa, _fb)) goto loc_0042A901; /* jne: not equal / not zero */

loc_0042A8DF: ;
    PUSH32(esp, edi);
    eax = esp + 0xC;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042A8ECu); RECOMP_ABI_CALL(0x0055D52Du, sub_0055D52D); /* call 0x0055D52D */

loc_0042A8EC: ;
    ecx = eax;
    PUSH32(esp, 0x0042A8F3u); RECOMP_ABI_CALL(0x0055D468u, sub_0055D468); /* call 0x0055D468 */

loc_0042A8F3: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042A901; /* je: equal / zero */

loc_0042A8FA: ;
    ecx = esi;
    PUSH32(esp, 0x0042A901u); RECOMP_ABI_CALL(0x0002DD36u, sub_0002DD36); /* call 0x0002DD36 */

loc_0042A901: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = MEM32(edi);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042A917u); RECOMP_ABI_CALL(0x00560CC1u, sub_00560CC1); /* call 0x00560CC1 */

loc_0042A917: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042A940
 * Original: 0x0042A940 - 0x0042ABD8 (664 bytes, 262 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042A940(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0042A940: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0x839930;
    esi = eax;
    ecx = 0x19;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042A978; /* jne: not equal / not zero */

loc_0042A95B: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042A965u); RECOMP_ABI_CALL(0x00032930u, sub_00032930); /* call 0x00032930 */

loc_0042A965: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = ebx;
    PUSH32(esp, 0x0042A972u); RECOMP_ABI_CALL(0x0002A271u, sub_0002A271); /* call 0x0002A271 */

loc_0042A972: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0042A978: ;
    edi = 0x839914;
    esi = eax;
    ecx = 0x15;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042A9AD; /* jne: not equal / not zero */

loc_0042A98A: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042A994u); RECOMP_ABI_CALL(0x0002A834u, sub_0002A834); /* call 0x0002A834 */

loc_0042A994: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = ebx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0042A9A7u); RECOMP_ABI_CALL(0x00027BACu, sub_00027BAC); /* call 0x00027BAC */

loc_0042A9A7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0042A9AD: ;
    edi = 0x839900;
    esi = eax;
    ecx = 0xF;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042A9E2; /* jne: not equal / not zero */

loc_0042A9BF: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042A9C9u); RECOMP_ABI_CALL(0x0002A834u, sub_0002A834); /* call 0x0002A834 */

loc_0042A9C9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = ebx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    PUSH32(esp, 3);
    PUSH32(esp, 0x0042A9DCu); RECOMP_ABI_CALL(0x00027BACu, sub_00027BAC); /* call 0x00027BAC */

loc_0042A9DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0042A9E2: ;
    edi = 0x8398DC;
    esi = eax;
    ecx = 0x1D;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042AA11; /* jne: not equal / not zero */

loc_0042A9F4: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042A9FEu); RECOMP_ABI_CALL(0x000207D5u, sub_000207D5); /* call 0x000207D5 */

loc_0042A9FE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 4);
    ecx = ebx;
    PUSH32(esp, 0x0042AA0Bu); RECOMP_ABI_CALL(0x0002A271u, sub_0002A271); /* call 0x0002A271 */

loc_0042AA0B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0042AA11: ;
    edi = 0x8398BC;
    esi = eax;
    ecx = 0x1A;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042AA40; /* jne: not equal / not zero */

loc_0042AA23: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042AA2Du); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0042AA2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 5);
    ecx = ebx;
    PUSH32(esp, 0x0042AA3Au); RECOMP_ABI_CALL(0x0002A271u, sub_0002A271); /* call 0x0002A271 */

loc_0042AA3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0042AA40: ;
    edi = 0x83989C;
    esi = eax;
    ecx = 0x1B;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042AA75; /* jne: not equal / not zero */

loc_0042AA52: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042AA5Cu); RECOMP_ABI_CALL(0x0002A834u, sub_0002A834); /* call 0x0002A834 */

loc_0042AA5C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = ebx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    PUSH32(esp, 6);
    PUSH32(esp, 0x0042AA6Fu); RECOMP_ABI_CALL(0x00027BACu, sub_00027BAC); /* call 0x00027BAC */

loc_0042AA6F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0042AA75: ;
    edi = 0x83987C;
    esi = eax;
    ecx = 0x19;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042AAAA; /* jne: not equal / not zero */

loc_0042AA87: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042AA91u); RECOMP_ABI_CALL(0x0002A834u, sub_0002A834); /* call 0x0002A834 */

loc_0042AA91: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = ebx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    PUSH32(esp, 7);
    PUSH32(esp, 0x0042AAA4u); RECOMP_ABI_CALL(0x00027BACu, sub_00027BAC); /* call 0x00027BAC */

loc_0042AAA4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0042AAAA: ;
    edi = 0x839860;
    esi = eax;
    ecx = 0x17;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042AAD9; /* jne: not equal / not zero */

loc_0042AABC: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042AAC6u); RECOMP_ABI_CALL(0x0001E3F9u, sub_0001E3F9); /* call 0x0001E3F9 */

loc_0042AAC6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 8);
    ecx = ebx;
    PUSH32(esp, 0x0042AAD3u); RECOMP_ABI_CALL(0x0002A271u, sub_0002A271); /* call 0x0002A271 */

loc_0042AAD3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0042AAD9: ;
    edi = 0x839848;
    esi = eax;
    ecx = 0x14;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042AB0E; /* jne: not equal / not zero */

loc_0042AAEB: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042AAF5u); RECOMP_ABI_CALL(0x0002A834u, sub_0002A834); /* call 0x0002A834 */

loc_0042AAF5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = ebx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    PUSH32(esp, 0x0042AB08u); RECOMP_ABI_CALL(0x00027BACu, sub_00027BAC); /* call 0x00027BAC */

loc_0042AB08: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0042AB0E: ;
    edi = 0x839828;
    esi = eax;
    ecx = 0x1A;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042AB3D; /* jne: not equal / not zero */

loc_0042AB20: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042AB2Au); RECOMP_ABI_CALL(0x0001B36Bu, sub_0001B36B); /* call 0x0001B36B */

loc_0042AB2A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xA);
    ecx = ebx;
    PUSH32(esp, 0x0042AB37u); RECOMP_ABI_CALL(0x0002A271u, sub_0002A271); /* call 0x0002A271 */

loc_0042AB37: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0042AB3D: ;
    edi = 0x83980C;
    esi = eax;
    ecx = 0x15;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042AB72; /* jne: not equal / not zero */

loc_0042AB4F: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042AB59u); RECOMP_ABI_CALL(0x0002A834u, sub_0002A834); /* call 0x0002A834 */

loc_0042AB59: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    ecx = ebx;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xB);
    PUSH32(esp, 0x0042AB6Cu); RECOMP_ABI_CALL(0x00027BACu, sub_00027BAC); /* call 0x00027BAC */

loc_0042AB6C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0042AB72: ;
    edi = 0x8397EC;
    esi = eax;
    ecx = 0x1B;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042ABA1; /* jne: not equal / not zero */

loc_0042AB84: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042AB8Eu); RECOMP_ABI_CALL(0x00033B87u, sub_00033B87); /* call 0x00033B87 */

loc_0042AB8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xC);
    ecx = ebx;
    PUSH32(esp, 0x0042AB9Bu); RECOMP_ABI_CALL(0x0002A271u, sub_0002A271); /* call 0x0002A271 */

loc_0042AB9B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0042ABA1: ;
    edi = 0x8397CC;
    esi = eax;
    ecx = 0x1B;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        _cf = (MEM8(esi) < MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042ABD0; /* jne: not equal / not zero */

loc_0042ABB3: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042ABBDu); RECOMP_ABI_CALL(0x00033B87u, sub_00033B87); /* call 0x00033B87 */

loc_0042ABBD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0xD);
    ecx = ebx;
    PUSH32(esp, 0x0042ABCAu); RECOMP_ABI_CALL(0x0002A271u, sub_0002A271); /* call 0x0002A271 */

loc_0042ABCA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_0042ABD0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042AC80
 * Original: 0x0042AC80 - 0x0042AD74 (244 bytes, 95 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042AC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042AC80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0x839984;
    esi = eax;
    ecx = 6;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042AD26; /* jne: not equal / not zero */

loc_0042ACA3: ;
    ebp = MEM32(ebp + 8);
    edi = 0x839978;
    esi = ebp;
    ecx = 9;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042ACC6; /* jne: not equal / not zero */

loc_0042ACB8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x28) = 1;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042ACC6: ;
    edi = 0x839970;
    esi = ebp;
    ecx = 6;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042ACE6; /* jne: not equal / not zero */

loc_0042ACD8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x28) = 2;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042ACE6: ;
    edi = 0x839960;
    esi = ebp;
    ecx = 0xE;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042AD06; /* jne: not equal / not zero */

loc_0042ACF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x28) = 3;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042AD06: ;
    edi = 0x839950;
    esi = ebp;
    ecx = 0xE;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042AD6D; /* jne: not equal / not zero */

loc_0042AD18: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x28) = 4;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042AD26: ;
    edi = 0x82C544;
    esi = eax;
    ecx = 7;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042AD55; /* jne: not equal / not zero */

loc_0042AD38: ;
    MEM8(ebx + 0x44) = 1;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042AD45u); RECOMP_ABI_CALL(0x0002A834u, sub_0002A834); /* call 0x0002A834 */

loc_0042AD45: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    ecx = ZX8(LO8(eax));
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x40) = ecx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042AD55: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0042AD61u); RECOMP_ABI_CALL(0x00031AC6u, sub_00031AC6); /* call 0x00031AC6 */

loc_0042AD61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042AD6D; /* jne: not equal / not zero */

loc_0042AD65: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x0042AD6Du); RECOMP_ABI_CALL(0x00029263u, sub_00029263); /* call 0x00029263 */

loc_0042AD6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042ADC0
 * Original: 0x0042ADC0 - 0x0042AE98 (216 bytes, 82 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042ADC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042ADC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 4);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    ebx = esi + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042ADE2u); RECOMP_ABI_CALL(0x0055A1C7u, sub_0055A1C7); /* call 0x0055A1C7 */

loc_0042ADE2: ;
    eax = MEM32(esi + 0x28);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042AE06; /* ja: above (unsigned >) */

loc_0042ADEE: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x42AE98); /* switch: 4 entries, 3 targets */
    if (_jt == 0x0042ADF5u) goto loc_0042ADF5;
    if (_jt == 0x0042ADF9u) goto loc_0042ADF9;
    if (_jt == 0x0042ADFDu) goto loc_0042ADFD;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042ADF5: ;
    PUSH32(esp, 2);
    goto loc_0042ADFF;

loc_0042ADF9: ;
    PUSH32(esp, 1);
    goto loc_0042ADFF;

loc_0042ADFD: ;
    PUSH32(esp, 0);

loc_0042ADFF: ;
    ecx = MEM32(ebx);
    PUSH32(esp, 0x0042AE06u); RECOMP_ABI_CALL(0x005589ADu, sub_005589AD); /* call 0x005589AD */

loc_0042AE06: ;
    eax = MEM32(esi + 0x2C);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042AE24; /* jbe: below or equal (unsigned <=) */

loc_0042AE0F: ;
    /* nop */

loc_0042AE10: ;
    ecx = MEM32(esi + 0x34);
    ecx = MEM32(ecx + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0042AE1Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042AE19u); } /* indirect call */
    }

loc_0042AE1C: ;
    eax = MEM32(esi + 0x2C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042AE10; /* jb: below (unsigned <) */

loc_0042AE24: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042AE75; /* je: equal / zero */

loc_0042AE2B: ;
    edi = esi + 0x3C;
    eax = esp + 0x20;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042AE39u); RECOMP_ABI_CALL(0x0055A1EFu, sub_0055A1EF); /* call 0x0055A1EF */

loc_0042AE39: ;
    ecx = MEM32(esi + 0x38);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0x8397AC);
    edx = esp + 0x1C;
    MEM32(eax) = 0;
    ecx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042AE60u); RECOMP_ABI_CALL(0x0055A5F2u, sub_0055A5F2); /* call 0x0055A5F2 */

loc_0042AE60: ;
    ecx = MEM32(edi);
    eax = MEM32(eax);
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x28) = eax;
    PUSH32(esp, 0x0042AE75u); RECOMP_ABI_CALL(0x00559AD5u, sub_00559AD5); /* call 0x00559AD5 */

loc_0042AE75: ;
    eax = MEM32(ebx);
    ecx = esp + 0x14;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = 0xF;
    PUSH32(esp, 0x0042AE8Fu); RECOMP_ABI_CALL(0x00029263u, sub_00029263); /* call 0x00029263 */

loc_0042AE8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042B080
 * Original: 0x0042B080 - 0x0042B084 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B080(void)
{

loc_0042B080: ;
    eax = MEM32(ecx + 0x14);
    esp += 4; return; /* ret */

}

/**
 * sub_0042B090
 * Original: 0x0042B090 - 0x0042B0A6 (22 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B090(void)
{

loc_0042B090: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042B098u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B095u); } /* indirect call */
    }

loc_0042B098: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(esp + 8);
    MEM32(edx + 8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042B0B0
 * Original: 0x0042B0B0 - 0x0042B126 (118 bytes, 39 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B0B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042B0B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = esi + 8;
    PUSH32(esp, 0);
    ecx = edi;
    MEM32(esi) = 0x839990;
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0042B0D0u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042B0D0: ;
    PUSH32(esp, 0);
    ebp = esi + 0xC;
    MEM32(ebp) = 0;
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    MEM8(esi + 0x10) = 0;
    MEM8(esi + 0x11) = 0;
    PUSH32(esp, 0x0042B0EFu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042B0EF: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0042B0F7u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0042B0F7: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0042B100u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042B100: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x18;
    PUSH32(esp, 0x0042B10Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042B10D: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x0042B115u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0042B115: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0042B11Eu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042B11E: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042B150
 * Original: 0x0042B150 - 0x0042B16A (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042B150: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x839990;
    PUSH32(esp, 0x0042B161u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042B161: ;
    ecx = esi + 8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_0042B170
 * Original: 0x0042B170 - 0x0042B347 (471 bytes, 182 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B170(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042B170: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10C));
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x118);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7FC4F0);
    PUSH32(esp, edi);
    ebp = ecx;
    PUSH32(esp, 0x0042B18Eu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0042B18E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B1D4; /* jne: not equal / not zero */

loc_0042B195: ;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B1A9; /* je: equal / zero */

loc_0042B19C: ;
    /* nop */

loc_0042B1A0: ;
    ebp = eax;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B1A0; /* jne: not equal / not zero */

loc_0042B1A9: ;
    eax = edi + 1;
    edx = esp + 0x14;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042B1B2: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B1B2; /* jne: not equal / not zero */

loc_0042B1BC: ;
    eax = MEM32(ebp);
    ecx = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0042B1C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B1C6u); } /* indirect call */
    }

loc_0042B1C9: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10C)) >> 32) & 1);
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0042B1D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x8399B4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0042B1E2u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0042B1E2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B215; /* jne: not equal / not zero */

loc_0042B1E9: ;
    ecx = MEM32(ebp + 4);
    eax = edi + 3;
    esi = esp + 0x18;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(eax));
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042B1F5: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(esi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B1F5; /* jne: not equal / not zero */

loc_0042B1FF: ;
    edx = MEM32(ecx);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0042B209u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B206u); } /* indirect call */
    }

loc_0042B209: ;
    POP32(esp, esi);
    POP32(esp, edi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10C)) >> 32) & 1);
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0042B215: ;
    esi = MEM32(ebp + 8);
    eax = edi;
    PUSH32(esp, ebx);
    goto loc_0042B220;

    /* nop */

loc_0042B220: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B248; /* jne: not equal / not zero */

loc_0042B22A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B244; /* je: equal / zero */

loc_0042B22E: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B248; /* jne: not equal / not zero */

loc_0042B23A: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0042B220; /* jne: not equal / not zero */

loc_0042B244: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0042B24D;

loc_0042B248: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0042B24D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B260; /* jne: not equal / not zero */

loc_0042B251: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    eax = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10C)) >> 32) & 1);
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0042B260: ;
    PUSH32(esp, 0x833474);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0042B26Bu); RECOMP_ABI_CALL(0x005CD790u, sub_005CD790); /* call 0x005CD790 */

loc_0042B26B: ;
    esi = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0042B278u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0042B278: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B291; /* jne: not equal / not zero */

loc_0042B27F: ;
    eax = edi;
    edx = eax + 1;

loc_0042B284: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B284; /* jne: not equal / not zero */

loc_0042B28B: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B251; /* jne: not equal / not zero */

loc_0042B291: ;
    PUSH32(esp, 0x7E0D78);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0042B29Cu); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0042B29C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B338; /* je: equal / zero */

loc_0042B2A7: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edi));
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0042B2B6u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0042B2B6: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B338; /* jne: not equal / not zero */

loc_0042B2BD: ;
    eax = MEM32(0x8399A4);
    ecx = MEM32(0x8399A8);
    SET_LO16(edx, MEM16(0x8399AC));
    MEM32(esp + 0x10) = eax;
    SET_LO8(eax, MEM8(0x8399AE));
    MEM8(esp + 0x1A) = LO8(eax);
    eax = MEM32(ebp + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    MEM16(esp + 0x20) = LO16(edx);
    PUSH32(esp, 0x0042B2F5u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042B2F5: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(esi)) >> 32) & 1);
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi + edi + 2;

loc_0042B303: ;
    SET_LO8(edx, MEM8(esi));
    SET_LO8(ebx, MEM8(ecx));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B32B; /* jne: not equal / not zero */

loc_0042B30D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B327; /* je: equal / zero */

loc_0042B311: ;
    SET_LO8(edx, MEM8(esi + 1));
    SET_LO8(ebx, MEM8(ecx + 1));
    SET_LO8(eax, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B32B; /* jne: not equal / not zero */

loc_0042B31D: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(2)) >> 32) & 1);
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B303; /* jne: not equal / not zero */

loc_0042B327: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0042B330;

loc_0042B32B: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0042B330: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B251; /* je: equal / zero */

loc_0042B338: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10C)) >> 32) & 1);
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042B3C0
 * Original: 0x0042B3C0 - 0x0042B41C (92 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042B3C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0x7DF5A0;
    esi = eax;
    ecx = 5;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042B3DD; /* jne: not equal / not zero */

loc_0042B3D8: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0042B3DD: ;
    edi = 0x7DF588;
    esi = eax;
    ecx = 6;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042B3F4; /* jne: not equal / not zero */

loc_0042B3EF: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0042B3F4: ;
    edi = 0x7E94C4;
    esi = eax;
    ecx = 2;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags != 0)) goto loc_0042B3EF; /* je: equal / zero */

loc_0042B406: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x7E94C8;
    ecx = 2;
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    POP32(esp, edi);
    SET_LO8(eax, ((_flags != 0)) ? 1 : 0); /* sete */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0042B440
 * Original: 0x0042B440 - 0x0042B467 (39 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B440(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042B440: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042B44Du); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042B44D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi) = 0x8399B8;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042B470
 * Original: 0x0042B470 - 0x0042B4D0 (96 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042B470: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x8399B8;
    if (CMP_EQ(_fa, _fb)) goto loc_0042B4B9; /* je: equal / zero */

loc_0042B480: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042B4A9; /* jbe: below or equal (unsigned <=) */

loc_0042B48A: ;
    /* nop */

loc_0042B490: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B4A1; /* je: equal / zero */

loc_0042B49A: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0042B4A1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B49Eu); } /* indirect call */
    }

loc_0042B4A1: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042B490; /* jb: below (unsigned <) */

loc_0042B4A9: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042B4B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B4B5u); } /* indirect call */
    }

loc_0042B4B8: ;
    POP32(esp, edi);

loc_0042B4B9: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x839990;
    PUSH32(esp, 0x0042B4C7u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042B4C7: ;
    ecx = esi + 8;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_005724CD(); return; /* tail jmp 0x005724CD */

}

/**
 * sub_0042B4F0
 * Original: 0x0042B4F0 - 0x0042B51B (43 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B4F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042B4F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x14);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042B516; /* jbe: below or equal (unsigned <=) */

loc_0042B4FD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);

loc_0042B502: ;
    eax = MEM32(edi + 0x18);
    ecx = MEM32(eax + esi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    uint32_t _scene_index=esi,_scene_parent=edi,_scene_event=ebx,_scene_target=MEM32(edx);
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0042B50Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B50Bu); } /* indirect call */
    if(esi!=_scene_index||edi!=_scene_parent||ebx!=_scene_event||esp!=_icall_esp){
        fprintf(stderr,"[NHL07-SCENE-ABI] child=%08X parent=%08X event=%08X index=%u->%u edi=%08X ebx=%08X esp=%08X->%08X\n",
            _scene_target,_scene_parent,_scene_event,_scene_index,esi,edi,ebx,_icall_esp,esp);abort();
    }
    }

loc_0042B50D: ;
    eax = MEM32(edi + 0x14);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042B502; /* jb: below (unsigned <) */

loc_0042B515: ;
    POP32(esp, ebx);

loc_0042B516: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042B530
 * Original: 0x0042B530 - 0x0042B610 (224 bytes, 68 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B530(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042B530: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x1C);
    ecx = eax + 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042B5D8; /* jbe: below or equal (unsigned <=) */

loc_0042B54A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042B5B4; /* jbe: below or equal (unsigned <=) */

loc_0042B54E: ;
    edx = eax * 4;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042B564u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0042B564: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(esi + 0x18);
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0042B576u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B573u); } /* indirect call */
    }

loc_0042B576: ;
    eax = MEM32(esi + 0x1C);
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    eax = eax * 4 + 0x40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x8399F4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0042B596u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B593u); } /* indirect call */
    }

loc_0042B596: ;
    ecx = MEM32(esi + 0x1C);
    edx = ecx * 4 + 0x40;
    PUSH32(esp, edx);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0042B5AFu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0042B5AF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0042B5D4;

loc_0042B5B4: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x100);
    edx = edx * 4 + 0x40;
    PUSH32(esp, edx);
    PUSH32(esp, 0x8399CC);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0042B5D1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B5CEu); } /* indirect call */
    }

loc_0042B5D1: ;
    MEM32(esi + 0x18) = eax;

loc_0042B5D4: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + 0x10;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0042B5D8: ;
    eax = MEM32(esi + 0x14);
    edx = MEM32(esp + 0x408);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x14) = eax;
    ecx = MEM32(0x9094E4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0042B5F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B5F0u); } /* indirect call */
    }

loc_0042B5F2: ;
    ecx = MEM32(esi + 0x14);
    edx = MEM32(esi + 0x18);
    MEM32(edx + ecx * 4 + -4) = eax;
    eax = MEM32(esi + 0x14);
    ecx = MEM32(esi + 0x18);
    eax = MEM32(ecx + eax * 4 + -4);
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042B650
 * Original: 0x0042B650 - 0x0042B658 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B650(void)
{

loc_0042B650: ;
    MEM32(ecx + 0x20) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_0042B660
 * Original: 0x0042B660 - 0x0042B696 (54 bytes, 24 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B660(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042B660: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x14) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_0042B68F; /* jae: above or equal (unsigned >=) */

loc_0042B66C: ;
    edi = MEM32(esp + 0xC);

loc_0042B670: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + ecx * 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0042B67Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B67Cu); } /* indirect call */
    }

loc_0042B67F: ;
    ecx = MEM32(esi + 0x20);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x20) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0042B691; /* jne: not equal / not zero */

loc_0042B68A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x14) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042B670; /* jb: below (unsigned <) */

loc_0042B68F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0042B691: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042B6B0
 * Original: 0x0042B6B0 - 0x0042B8AE (510 bytes, 209 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B6B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042B6B0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x100));
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x108);
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x7FC4F0);
    PUSH32(esp, ebp);
    esi = ecx;
    PUSH32(esp, 0x0042B6CEu); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0042B6CE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B71A; /* jne: not equal / not zero */

loc_0042B6D5: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B706; /* jne: not equal / not zero */

loc_0042B6DC: ;
    eax = ebp + 1;
    edx = esp + 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042B6E5: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B6E5; /* jne: not equal / not zero */

loc_0042B6EF: ;
    eax = MEM32(esi);
    ecx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0042B6FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B6F8u); } /* indirect call */
    }

loc_0042B6FB: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x100)) >> 32) & 1);
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0042B706: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0042B70Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B70Cu); } /* indirect call */
    }

loc_0042B70F: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x100)) >> 32) & 1);
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0042B71A: ;
    PUSH32(esp, edi);
    PUSH32(esp, 3);
    PUSH32(esp, 0x8399B4);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0042B728u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0042B728: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B760; /* jne: not equal / not zero */

loc_0042B72F: ;
    ecx = MEM32(esi + 4);
    eax = ebp + 3;
    edi = esp + 0xC;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(eax));
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0042B740;

    /* nop */

loc_0042B740: ;
    SET_LO8(edx, MEM8(eax));
    MEM8(edi + eax) = LO8(edx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B740; /* jne: not equal / not zero */

loc_0042B74A: ;
    eax = MEM32(ecx);
    edx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0042B754u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B751u); } /* indirect call */
    }

loc_0042B754: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x100)) >> 32) & 1);
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0042B760: ;
    PUSH32(esp, ebx);
    edi = esi + 8;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0042B76Du); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0042B76D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B87E; /* jne: not equal / not zero */

loc_0042B775: ;
    ebx = MEM32(edi);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B87E; /* je: equal / zero */

loc_0042B780: ;
    edi = ebx;
    eax = ebp;

loc_0042B784: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edi) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B7A8; /* jne: not equal / not zero */

loc_0042B78C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0042B7A4; /* je: equal / zero */

loc_0042B790: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(edi + 1)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(edi + 1) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B7A8; /* jne: not equal / not zero */

loc_0042B79A: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(2)) >> 32) & 1);
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(2)) >> 32) & 1);
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B784; /* jne: not equal / not zero */

loc_0042B7A4: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0042B7AD;

loc_0042B7A8: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0042B7AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B7C0; /* jne: not equal / not zero */

loc_0042B7B1: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x100)) >> 32) & 1);
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0042B7C0: ;
    eax = ebx;
    edx = eax + 1;

loc_0042B7C5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B7C5; /* jne: not equal / not zero */

loc_0042B7CC: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0042B7D8u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0042B7D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B823; /* jne: not equal / not zero */

loc_0042B7DF: ;
    _fa = (uint32_t)(MEM8(edi + ebp)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + ebp), 0x2F (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042B823; /* jne: not equal / not zero */

loc_0042B7E5: ;
    eax = edi + ebp + 1;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042B7F0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B7F0; /* jne: not equal / not zero */

loc_0042B7FA: ;
    eax = MEM32(esi + 0x14);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0042B823; /* jbe: below or equal (unsigned <=) */

loc_0042B803: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0042B813u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B810u); } /* indirect call */
    }

loc_0042B813: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B8A1; /* jne: not equal / not zero */

loc_0042B81B: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0042B803; /* jb: below (unsigned <) */

loc_0042B823: ;
    PUSH32(esp, 2);
    PUSH32(esp, 0x839A1C);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0042B830u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_0042B830: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B89F; /* jne: not equal / not zero */

loc_0042B837: ;
    eax = ebp + 2;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(eax));
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042B840: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B840; /* jne: not equal / not zero */

loc_0042B84A: ;
    eax = MEM32(esi + 0x14);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0042B89F; /* jbe: below or equal (unsigned <=) */

loc_0042B853: ;
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(ecx + edi * 4);
    edx = MEM32(ecx);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0042B863u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B860u); } /* indirect call */
    }

loc_0042B863: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B8A1; /* jne: not equal / not zero */

loc_0042B867: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0042B853; /* jb: below (unsigned <) */

loc_0042B86F: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x100)) >> 32) & 1);
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0042B87E: ;
    eax = MEM32(esi + 0x14);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_BE(_fa, _fb)) goto loc_0042B89F; /* jbe: below or equal (unsigned <=) */

loc_0042B887: ;
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(ecx + edi * 4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0042B893u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B890u); } /* indirect call */
    }

loc_0042B893: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042B8A1; /* jne: not equal / not zero */

loc_0042B897: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0042B887; /* jb: below (unsigned <) */

loc_0042B89F: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0042B8A1: ;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x100)) >> 32) & 1);
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042B930
 * Original: 0x0042B930 - 0x0042B962 (50 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042B930: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0xC;
    MEM32(esi) = 0x839990;
    PUSH32(esp, 0x0042B941u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042B941: ;
    ecx = esi + 8;
    PUSH32(esp, 0x0042B949u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042B949: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042B95C; /* je: equal / zero */

loc_0042B950: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042B95Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042B959u); } /* indirect call */
    }

loc_0042B95C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042B970
 * Original: 0x0042B970 - 0x0042BA50 (224 bytes, 86 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042B970(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042B970: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0x7DFD00;
    esi = edx;
    ecx = 5;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042B9B6; /* jne: not equal / not zero */

loc_0042B98F: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0042B99Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042B99D: ;
    PUSH32(esp, eax);
    ecx = ebx + 8;
    PUSH32(esp, 0x0042B9A6u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0042B9A6: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0042B9AFu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042B9AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042B9B6: ;
    edi = 0x839A44;
    esi = edx;
    ecx = 0x10;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042B9EF; /* jne: not equal / not zero */

loc_0042B9C8: ;
    ecx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, ecx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0042B9D6u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042B9D6: ;
    PUSH32(esp, eax);
    ecx = ebx + 0xC;
    PUSH32(esp, 0x0042B9DFu); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0042B9DF: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0042B9E8u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042B9E8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042B9EF: ;
    edi = 0x839A2C;
    esi = edx;
    ecx = 0x14;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042BA28; /* jne: not equal / not zero */

loc_0042BA01: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0042BA0Fu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042BA0F: ;
    PUSH32(esp, eax);
    ecx = ebx + 0xC;
    PUSH32(esp, 0x0042BA18u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0042BA18: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0042BA21u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042BA21: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042BA28: ;
    esi = edx;
    edi = 0x839A20;
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
    if ((_flags == 0)) goto loc_0042BA49; /* jne: not equal / not zero */

loc_0042BA3A: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042BA43u); RECOMP_ABI_CALL(0x0002A834u, sub_0002A834); /* call 0x0002A834 */

loc_0042BA43: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebx + 0x10) = LO8(eax);

loc_0042BA49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042BA90
 * Original: 0x0042BA90 - 0x0042BAB5 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BA90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042BA90: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0042BA98u); RECOMP_ABI_CALL(0x000348A7u, sub_000348A7); /* call 0x000348A7 */

loc_0042BA98: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042BAAF; /* je: equal / zero */

loc_0042BA9F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042BAAF; /* je: equal / zero */

loc_0042BAA3: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042BAAFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042BAACu); } /* indirect call */
    }

loc_0042BAAF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042BAC0
 * Original: 0x0042BAC0 - 0x0042BAD5 (21 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BAC0(void)
{

loc_0042BAC0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042BACEu); RECOMP_ABI_CALL(0x00033B64u, sub_00033B64); /* call 0x00033B64 */

loc_0042BACE: ;
    MEM32(esi + 8) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042BAE0
 * Original: 0x0042BAE0 - 0x0042BBB3 (211 bytes, 78 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042BAE0: ;
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = esi + 8;
    PUSH32(esp, 0);
    ecx = edi;
    PUSH32(esp, 0x0042BAF7u); RECOMP_ABI_CALL(0x005720D2u, sub_005720D2); /* call 0x005720D2 */

loc_0042BAF7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042BB2F; /* je: equal / zero */

loc_0042BAFB: ;
    eax = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042BBA7; /* jbe: below or equal (unsigned <=) */

loc_0042BB08: ;
    ebx = MEM32(esp + 0x11C);
    /* nop */

loc_0042BB10: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0042BB1Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042BB19u); } /* indirect call */
    }

loc_0042BB1B: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042BB10; /* jb: below (unsigned <) */

loc_0042BB23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0042BB2F: ;
    ebx = MEM32(esp + 0x11C);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042BB5A; /* je: equal / zero */

loc_0042BB3D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042BB5A; /* je: equal / zero */

loc_0042BB42: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x20;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042BB55u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042BB55: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0042BB6F;

loc_0042BB5A: ;
    eax = MEM32(edi);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x7E1290);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042BB6Cu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042BB6C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0042BB6F: ;
    edx = MEM32(ebx + 4);
    eax = esp + 0x18;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x14);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 5;
    MEM32(esp + 0x10) = edx;
    if (CMP_BE(_fa, _fb)) goto loc_0042BBA7; /* jbe: below or equal (unsigned <=) */

loc_0042BB8F: ;
    /* nop */

loc_0042BB90: ;
    ecx = MEM32(esi + 0x18);
    ecx = MEM32(ecx + edi * 4);
    edx = MEM32(ecx);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0042BB9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042BB9Du); } /* indirect call */
    }

loc_0042BB9F: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042BB90; /* jb: below (unsigned <) */

loc_0042BBA7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042BBF0
 * Original: 0x0042BBF0 - 0x0042BC21 (49 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042BBF0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ecx;
    if ((_fa == 0)) goto loc_0042BC14; /* je: equal / zero */

loc_0042BBFF: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0042BC1C; /* jne: not equal / not zero */

loc_0042BC04: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042BC09u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042BC06u); } /* indirect call */
    }

loc_0042BC09: ;
    ecx = MEM32(esi + 4);
    MEM32(edi + 8) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0042BC14: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0042BC1Cu); RECOMP_ABI_CALL(0x0002C6EDu, sub_0002C6ED); /* call 0x0002C6ED */

loc_0042BC1C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042BC30
 * Original: 0x0042BC30 - 0x0042BCD4 (164 bytes, 59 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042BC30: ;
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0042BC96; /* je: equal / zero */

loc_0042BC41: ;
    ecx = MEM32(esi + 0x14);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042BC53u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0042BC53: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(esi + 0x18);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042BC65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042BC62u); } /* indirect call */
    }

loc_0042BC65: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0x839A58);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0042BC7Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042BC7Bu); } /* indirect call */
    }

loc_0042BC7E: ;
    ecx = MEM32(esi + 0x14);
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0042BC93u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_0042BC93: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0042BC96: ;
    edi = MEM32(esp + 0x40C);
    eax = MEM32(edi);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0042BCC1; /* je: equal / zero */

loc_0042BCA4: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0042BCC9; /* jne: not equal / not zero */

loc_0042BCA9: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042BCB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042BCADu); } /* indirect call */
    }

loc_0042BCB0: ;
    ecx = MEM32(esi + 4);
    MEM32(edi + 8) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0042BCC1: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0042BCC9u); RECOMP_ABI_CALL(0x0002C6EDu, sub_0002C6ED); /* call 0x0002C6ED */

loc_0042BCC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x400) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x400;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042BD00
 * Original: 0x0042BD00 - 0x0042BD89 (137 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BD00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042BD00: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x10 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_A(_fa, _fb)) goto loc_0042BD65; /* ja: above (unsigned >) */

loc_0042BD10: ;
    eax = ZX8(MEM8(eax + 0x42BDA4));
    { uint32_t _jt = MEM32(eax * 4 + 0x42BD8C); /* switch: 6 entries, 6 targets */
    if (_jt == 0x0042BD1Eu) goto loc_0042BD1E;
    if (_jt == 0x0042BD2Bu) goto loc_0042BD2B;
    if (_jt == 0x0042BD3Eu) goto loc_0042BD3E;
    if (_jt == 0x0042BD4Bu) goto loc_0042BD4B;
    if (_jt == 0x0042BD58u) goto loc_0042BD58;
    if (_jt == 0x0042BD84u) goto loc_0042BD84;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042BD1E: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0042BD26u); RECOMP_ABI_CALL(0x0003402Du, sub_0003402D); /* call 0x0003402D */

loc_0042BD26: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042BD2B: ;
    ecx = MEM32(ebx + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0042BD36u); RECOMP_ABI_CALL(0x00033B64u, sub_00033B64); /* call 0x00033B64 */

loc_0042BD36: ;
    POP32(esp, esi);
    MEM32(ebx + 8) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042BD3E: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0042BD46u); RECOMP_ABI_CALL(0x0003433Eu, sub_0003433E); /* call 0x0003433E */

loc_0042BD46: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042BD4B: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0042BD53u); RECOMP_ABI_CALL(0x0002B707u, sub_0002B707); /* call 0x0002B707 */

loc_0042BD53: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042BD58: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x0042BD60u); RECOMP_ABI_CALL(0x000214AAu, sub_000214AA); /* call 0x000214AA */

loc_0042BD60: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042BD65: ;
    eax = MEM32(esi + 0x14);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042BD83; /* jbe: below or equal (unsigned <=) */

loc_0042BD6F: ;
    /* nop */

loc_0042BD70: ;
    edx = MEM32(esi + 0x18);
    ecx = MEM32(edx + edi * 4);
    eax = MEM32(ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0042BD7Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042BD79u); } /* indirect call */
    }

loc_0042BD7B: ;
    eax = MEM32(esi + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0042BD70; /* jb: below (unsigned <) */

loc_0042BD83: ;
    POP32(esp, edi);

loc_0042BD84: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042BE30
 * Original: 0x0042BE30 - 0x0042BE81 (81 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BE30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042BE30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = ecx;
    ecx = edi;
    PUSH32(esp, 0x0042BE3Fu); RECOMP_ABI_CALL(0x000166E5u, sub_000166E5); /* call 0x000166E5 */

loc_0042BE3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0042BE71; /* jne: not equal / not zero */

loc_0042BE46: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x829E44);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0042BE57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042BE55u); } /* indirect call */
    }

loc_0042BE57: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042BE64; /* je: equal / zero */

loc_0042BE5B: ;
    ecx = eax;
    PUSH32(esp, 0x0042BE62u); RECOMP_ABI_CALL(0x00013148u, sub_00013148); /* call 0x00013148 */

loc_0042BE62: ;
    goto loc_0042BE66;

loc_0042BE64: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0042BE66: ;
    PUSH32(esp, eax);
    ecx = edi;
    MEM32(esi + 0xC) = eax;
    PUSH32(esp, 0x0042BE71u); RECOMP_ABI_CALL(0x0001E219u, sub_0001E219); /* call 0x0001E219 */

loc_0042BE71: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042BE7Cu); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_0042BE7C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042BEA0
 * Original: 0x0042BEA0 - 0x0042BEB1 (17 bytes, 5 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BEA0(void)
{

loc_0042BEA0: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0042BEC0
 * Original: 0x0042BEC0 - 0x0042BEC9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BEC0(void)
{

loc_0042BEC0: ;
    eax = ecx;
    MEM32(eax) = 0x839AB0;
    esp += 4; return; /* ret */

}

/**
 * sub_0042BED0
 * Original: 0x0042BED0 - 0x0042BEE2 (18 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042BED0: ;
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax) = LO8(edx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042BEF0
 * Original: 0x0042BEF0 - 0x0042BEF7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BEF0(void)
{

loc_0042BEF0: ;
    MEM32(ecx) = 0x839AB0;
    esp += 4; return; /* ret */

}

/**
 * sub_0042BF00
 * Original: 0x0042BF00 - 0x0042BF1F (31 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BF00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042BF00: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x839AB0;
    if (TEST_Z(_fa, _fb)) goto loc_0042BF19; /* je: equal / zero */

loc_0042BF10: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042BF16u); RECOMP_ABI_CALL(0x00020951u, sub_00020951); /* call 0x00020951 */

loc_0042BF16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0042BF19: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042BF30
 * Original: 0x0042BF30 - 0x0042C076 (326 bytes, 115 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042BF30(void)
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

loc_0042BF30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM8(esp + 0x1C) = 0x20;
    MEM8(esp + 0x1D) = 9;
    MEM8(esp + 0x1E) = 0xD;
    MEM8(esp + 0x1F) = 0xA;
    MEM8(esp + 0x20) = 0;
    PUSH32(esp, 0x0042BF5Fu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042BF5F: ;
    SET_LO8(ecx, MEM8(eax + esi));
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042BF87; /* jne: not equal / not zero */

loc_0042BF74: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AACB4)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ebx = eax + 1;
    goto loc_0042BF8F;

loc_0042BF87: ;
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ebx = eax;

loc_0042BF8F: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_0042BFA0: ;
    SET_LO8(eax, MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2E (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042BFAF; /* jne: not equal / not zero */

loc_0042BFA6: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042BFDB; /* jne: not equal / not zero */

loc_0042BFAA: ;
    SET_LO8(edx, 1);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0042BFA0;

loc_0042BFAF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x30) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x30 (8-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0042BFDB; /* jl: less (signed <) */

loc_0042BFB3: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x39) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x39 (8-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0042BFDB; /* jg: greater (signed >) */

loc_0042BFB7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 9 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0042BFD3; /* jae: above or equal (unsigned >=) */

loc_0042BFBC: ;
    eax = SX8(LO8(eax));
    esi = esi + esi * 4;
    esi = eax + esi * 2 + -48;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042BFCB; /* je: equal / zero */

loc_0042BFCA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0042BFCB: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042BFD8; /* je: equal / zero */

loc_0042BFCF: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0042BFA0;

loc_0042BFD3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042BFDB; /* jne: not equal / not zero */

loc_0042BFD7: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0042BFD8: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0042BFA0;

loc_0042BFDB: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_0042C029; /* jl: less (signed <) */

loc_0042BFF0: ;
    eax = ecx + -8;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(3) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = eax;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = ecx + edx * 8;
    edi = edi;

loc_0042C000: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    if ((_fa != 0)) goto loc_0042C000; /* jne: not equal / not zero */

loc_0042C023: ;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */

loc_0042C029: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042C039; /* jle: less or equal (signed <=) */

loc_0042C02D: ;
    eax = ecx;
    /* nop */

loc_0042C030: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    if ((_fa != 0)) goto loc_0042C030; /* jne: not equal / not zero */

loc_0042C037: ;
    goto loc_0042C04E;

loc_0042C039: ;
    if (CMP_GE(_fas, _fbs)) goto loc_0042C054; /* jge: greater or equal (signed >=) */

loc_0042C03B: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AB7CC)); /* movss */
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = ecx;

loc_0042C047: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    if ((_fa != 0)) goto loc_0042C047; /* jne: not equal / not zero */

loc_0042C04E: ;
    MEMF(esp + 0x20) = xmm1.f[0]; /* movss */

loc_0042C054: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = esi;
    fp_push((double)SMEM32(esp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_0042C066; /* jge: greater or equal (signed >=) */

loc_0042C060: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x7B8E10)); /* fadd dword ptr [0x7b8e10] */

loc_0042C066: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
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
 * sub_0042C0D0
 * Original: 0x0042C0D0 - 0x0042C0F8 (40 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C0D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C0D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042C0DDu); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042C0DD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi) = 0x839ABC;
    MEM32(esi + 0x1C) = 3;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C110
 * Original: 0x0042C110 - 0x0042C11B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042C110: ;
    MEM32(ecx) = 0x839ABC;
    g_seh_ebp = ebp; sub_00033EB6(); return; /* tail jmp 0x00033EB6 */

}

/**
 * sub_0042C120
 * Original: 0x0042C120 - 0x0042C1C5 (165 bytes, 62 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042C120: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edx = ecx;
    edi = 0x839AE8;
    ecx = 7;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042C1B7; /* jne: not equal / not zero */

loc_0042C13C: ;
    eax = MEM32(eax + 8);
    edi = 0x839AE4;
    esi = eax;
    ecx = 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042C15E; /* jne: not equal / not zero */

loc_0042C151: ;
    MEM32(edx + 0x1C) = 1;

loc_0042C158: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042C15E: ;
    edi = 0x839ADC;
    esi = eax;
    ecx = 5;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042C17D; /* jne: not equal / not zero */

loc_0042C170: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 0x1C) = 2;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042C17D: ;
    edi = 0x839AD0;
    esi = eax;
    ecx = 9;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042C19C; /* jne: not equal / not zero */

loc_0042C18F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 0x1C) = 3;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042C19C: ;
    esi = eax;
    edi = 0x826F20;
    ecx = 5;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042C158; /* jne: not equal / not zero */

loc_0042C1AE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(edx + 0x1C) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042C1B7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = eax;
    ecx = edx;
    g_seh_ebp = ebp; sub_0003402D(); return; /* tail jmp 0x0003402D */

}

/**
 * sub_0042C1F0
 * Original: 0x0042C1F0 - 0x0042C1FF (15 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042C1F0: ;
    ecx = MEM32(ecx + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C1FC; /* je: equal / zero */

loc_0042C1F7: ;
    g_seh_ebp = ebp; sub_0001E219(); return; /* tail jmp 0x0001E219 */

loc_0042C1FC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C210
 * Original: 0x0042C210 - 0x0042C23B (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C210(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C210: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042C21Du); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042C21D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = 3;
    MEM32(esi) = 0x839AF0;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C250
 * Original: 0x0042C250 - 0x0042C26A (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C250: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042C260u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0042C260: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C270
 * Original: 0x0042C270 - 0x0042C27B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042C270: ;
    MEM32(ecx) = 0x839ABC;
    g_seh_ebp = ebp; sub_00033EB6(); return; /* tail jmp 0x00033EB6 */

}

/**
 * sub_0042C280
 * Original: 0x0042C280 - 0x0042C2D3 (83 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C280(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C280: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042C2A8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042C2A8: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B810);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042C2C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042C2C2u); } /* indirect call */
    }

loc_0042C2C5: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C2F0
 * Original: 0x0042C2F0 - 0x0042C312 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C2F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C2F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C307; /* je: equal / zero */

loc_0042C2FA: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x0042C307u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042C307: ;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C320
 * Original: 0x0042C320 - 0x0042C345 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C320(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C320: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C340; /* je: equal / zero */

loc_0042C32B: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042C336u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0042C336: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;

loc_0042C340: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C341
 * Original: 0x0042C341 - 0x0042C345 (4 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C341(void)
{

loc_0042C341: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C350
 * Original: 0x0042C350 - 0x0042C380 (48 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C350: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042C35Du); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042C35D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = 3;
    MEM32(esi) = 0x839B04;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C390
 * Original: 0x0042C390 - 0x0042C3AA (26 bytes, 10 insns)
 * CC: cdecl, 1 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_0042C390(void)
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

loc_0042C390: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042C3A0u); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042C3A0: ;
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0042C3B0
 * Original: 0x0042C3B0 - 0x0042C3BB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C3B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042C3B0: ;
    MEM32(ecx) = 0x839ABC;
    g_seh_ebp = ebp; sub_00033EB6(); return; /* tail jmp 0x00033EB6 */

}

/**
 * sub_0042C3C0
 * Original: 0x0042C3C0 - 0x0042C413 (83 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C3C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C3C0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042C3E8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042C3E8: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B17B);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042C405u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042C402u); } /* indirect call */
    }

loc_0042C405: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C430
 * Original: 0x0042C430 - 0x0042C452 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C430: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C447; /* je: equal / zero */

loc_0042C43A: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x0042C447u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042C447: ;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C460
 * Original: 0x0042C460 - 0x0042C485 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C460: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C480; /* je: equal / zero */

loc_0042C46B: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042C476u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0042C476: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;

loc_0042C480: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C490
 * Original: 0x0042C490 - 0x0042C4CF (63 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C490: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042C49Du); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042C49D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x20;
    ecx = esi + 0x24;
    MEM32(esi + 0x14) = edx;
    MEM32(esi + 0x18) = edx;
    MEM32(esi + 0x1C) = 3;
    MEM32(esi) = 0x839B18;
    MEM8(eax) = LO8(edx);
    MEM32(ecx) = edx;
    MEM32(esi + 0x28) = 0x839AB0;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C4E0
 * Original: 0x0042C4E0 - 0x0042C500 (32 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C4E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C4E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042C4F0u); RECOMP_ABI_CALL(0x0002A834u, sub_0002A834); /* call 0x0002A834 */

loc_0042C4F0: ;
    edx = ZX8(LO8(eax));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi + 0x20) = LO8(eax);
    MEM32(esi + 0x24) = edx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C510
 * Original: 0x0042C510 - 0x0042C522 (18 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042C510: ;
    MEM32(ecx + 0x28) = 0x839AB0;
    MEM32(ecx) = 0x839ABC;
    g_seh_ebp = ebp; sub_00033EB6(); return; /* tail jmp 0x00033EB6 */

}

/**
 * sub_0042C530
 * Original: 0x0042C530 - 0x0042C58C (92 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C530(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C530: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042C558u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042C558: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4A771);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042C575u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042C572u); } /* indirect call */
    }

loc_0042C575: ;
    PUSH32(esp, eax);
    ecx = esi + 0x28;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x0042C581u); RECOMP_ABI_CALL(0x0001C7DEu, sub_0001C7DE); /* call 0x0001C7DE */

loc_0042C581: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C5B0
 * Original: 0x0042C5B0 - 0x0042C5FF (79 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C5B0: ;
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C5F4; /* je: equal / zero */

loc_0042C5BA: ;
    ecx = MEM32(edi + 0x34);
    PUSH32(esp, esi);
    esi = edi + 0x28;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C5C7u); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_0042C5C7: ;
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042C5E3; /* jne: not equal / not zero */

loc_0042C5D1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C5DC; /* je: equal / zero */

loc_0042C5D5: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0042C5DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042C5D9u); } /* indirect call */
    }

loc_0042C5DC: ;
    MEM32(esi + 0xC) = 0;

loc_0042C5E3: ;
    ecx = MEM32(edi + 0x18);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    ecx = MEM32(edx + 4);
    PUSH32(esp, 0x0042C5F3u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042C5F3: ;
    POP32(esp, esi);

loc_0042C5F4: ;
    MEM32(edi + 0x18) = 0;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C620
 * Original: 0x0042C620 - 0x0042C645 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C620(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C620: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C640; /* je: equal / zero */

loc_0042C62B: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042C636u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0042C636: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;

loc_0042C640: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C650
 * Original: 0x0042C650 - 0x0042C68F (63 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C650: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042C65Du); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042C65D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = 3;
    MEM32(esi) = 0x839B2C;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C6A0
 * Original: 0x0042C6A0 - 0x0042C759 (185 bytes, 61 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C6A0(void)
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

loc_0042C6A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0042C6B6u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C6B6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C6BEu); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042C6BE: ;
    MEMF(edi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C6CCu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C6CC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C6D9u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C6D9: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C6E1u); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042C6E1: ;
    MEMF(edi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C6EFu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C6EF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C6FCu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C6FC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C704u); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042C704: ;
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C712u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C712: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C71Fu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C71F: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C72Fu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C72F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0042C747; /* jbe: below or equal (unsigned <=) */

loc_0042C736: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C73Cu); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042C73C: ;
    MEMF(edi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0042C747: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(edi + 0x2C) = xmm0.f[0]; /* movss */
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
 * sub_0042C790
 * Original: 0x0042C790 - 0x0042C79B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C790(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042C790: ;
    MEM32(ecx) = 0x839ABC;
    g_seh_ebp = ebp; sub_00033EB6(); return; /* tail jmp 0x00033EB6 */

}

/**
 * sub_0042C7A0
 * Original: 0x0042C7A0 - 0x0042C7F3 (83 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C7A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C7A0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042C7C8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042C7C8: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0xCF4BB78);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042C7E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042C7E2u); } /* indirect call */
    }

loc_0042C7E5: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C810
 * Original: 0x0042C810 - 0x0042C832 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C810: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C827; /* je: equal / zero */

loc_0042C81A: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x0042C827u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042C827: ;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C840
 * Original: 0x0042C840 - 0x0042C865 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C840: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042C860; /* je: equal / zero */

loc_0042C84B: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042C856u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0042C856: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;

loc_0042C860: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C870
 * Original: 0x0042C870 - 0x0042C8A6 (54 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C870(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C870: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042C87Du); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042C87D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    SET_LO8(eax, 0xFF);
    MEM8(esi + 0x23) = LO8(eax);
    MEM8(esi + 0x22) = LO8(eax);
    MEM8(esi + 0x21) = LO8(eax);
    MEM8(esi + 0x20) = LO8(eax);
    MEM32(esi + 0x1C) = 3;
    MEM32(esi) = 0x839B40;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042C8C0
 * Original: 0x0042C8C0 - 0x0042C981 (193 bytes, 58 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C8C0(void)
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

loc_0042C8C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0042C8D6u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C8D6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C8DEu); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042C8DE: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    PUSH32(esp, 0x0042C8E9u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0042C8E9: ;
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    MEM8(edi + 0x23) = LO8(eax);
    PUSH32(esp, 0x0042C8F7u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C8F7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C904u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C904: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C90Cu); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042C90C: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    PUSH32(esp, 0x0042C917u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0042C917: ;
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    MEM8(edi + 0x22) = LO8(eax);
    PUSH32(esp, 0x0042C925u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C925: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C932u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C932: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C93Au); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042C93A: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    PUSH32(esp, 0x0042C945u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0042C945: ;
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    MEM8(edi + 0x21) = LO8(eax);
    PUSH32(esp, 0x0042C953u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C953: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C960u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042C960: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042C96Bu); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042C96B: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7FE8B4)); /* fmul dword ptr [0x7fe8b4] */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0042C979u); RECOMP_ABI_CALL(0x005CBF44u, sub_005CBF44); /* call 0x005CBF44 */

loc_0042C979: ;
    MEM8(edi + 0x20) = LO8(eax);
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
 * sub_0042C9C0
 * Original: 0x0042C9C0 - 0x0042C9CB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C9C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042C9C0: ;
    MEM32(ecx) = 0x839ABC;
    g_seh_ebp = ebp; sub_00033EB6(); return; /* tail jmp 0x00033EB6 */

}

/**
 * sub_0042C9D0
 * Original: 0x0042C9D0 - 0x0042CA23 (83 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042C9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042C9D0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042C9F8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042C9F8: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4A779);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042CA15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042CA12u); } /* indirect call */
    }

loc_0042CA15: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042CA40
 * Original: 0x0042CA40 - 0x0042CA62 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CA40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042CA40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042CA57; /* je: equal / zero */

loc_0042CA4A: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x0042CA57u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042CA57: ;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042CA70
 * Original: 0x0042CA70 - 0x0042CA95 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042CA70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042CA90; /* je: equal / zero */

loc_0042CA7B: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042CA86u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0042CA86: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;

loc_0042CA90: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042CAA0
 * Original: 0x0042CAA0 - 0x0042CAE4 (68 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CAA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042CAA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042CAADu); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042CAAD: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = 3;
    MEM32(esi) = 0x839B54;
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042CB00
 * Original: 0x0042CB00 - 0x0042CB95 (149 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CB00(void)
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

loc_0042CB00: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0042CB16u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042CB16: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042CB1Eu); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042CB1E: ;
    MEMF(edi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042CB2Cu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042CB2C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042CB39u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042CB39: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042CB41u); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042CB41: ;
    MEMF(edi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042CB4Fu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042CB4F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042CB5Cu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042CB5C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042CB64u); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042CB64: ;
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042CB72u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042CB72: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042CB7Fu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042CB7F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042CB8Au); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042CB8A: ;
    MEMF(edi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0042CBC0
 * Original: 0x0042CBC0 - 0x0042CBCB (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CBC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042CBC0: ;
    MEM32(ecx) = 0x839ABC;
    g_seh_ebp = ebp; sub_00033EB6(); return; /* tail jmp 0x00033EB6 */

}

/**
 * sub_0042CBD0
 * Original: 0x0042CBD0 - 0x0042CC23 (83 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CBD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042CBD0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042CBF8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042CBF8: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x10F4A161);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042CC15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042CC12u); } /* indirect call */
    }

loc_0042CC15: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042CC40
 * Original: 0x0042CC40 - 0x0042CC62 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042CC40: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042CC57; /* je: equal / zero */

loc_0042CC4A: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x0042CC57u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042CC57: ;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042CC70
 * Original: 0x0042CC70 - 0x0042CC95 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CC70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042CC70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042CC90; /* je: equal / zero */

loc_0042CC7B: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042CC86u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0042CC86: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;

loc_0042CC90: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042CCA0
 * Original: 0x0042CCA0 - 0x0042CCCE (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CCA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042CCA0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042CCADu); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042CCAD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x1C) = 3;
    MEM32(esi) = 0x839B68;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042CCE0
 * Original: 0x0042CCE0 - 0x0042CD7D (157 bytes, 57 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CCE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042CCE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0042CD66; /* jne: not equal / not zero */

loc_0042CCEF: ;
    eax = MEM32(edi + 4);
    edx = eax + 1;

loc_0042CCF5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042CCF5; /* jne: not equal / not zero */

loc_0042CCFC: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7F (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0042CD4D; /* jg: greater (signed >) */

loc_0042CD03: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042CD11; /* jle: less or equal (signed <=) */

loc_0042CD08: ;
    MEM32(esi + 0x20) = 0x80;
    goto loc_0042CD4D;

loc_0042CD11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1F (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042CD1F; /* jle: less or equal (signed <=) */

loc_0042CD16: ;
    MEM32(esi + 0x20) = 0x40;
    goto loc_0042CD4D;

loc_0042CD1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xF (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042CD2D; /* jle: less or equal (signed <=) */

loc_0042CD24: ;
    MEM32(esi + 0x20) = 0x20;
    goto loc_0042CD4D;

loc_0042CD2D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042CD3B; /* jle: less or equal (signed <=) */

loc_0042CD32: ;
    MEM32(esi + 0x20) = 0x10;
    goto loc_0042CD4D;

loc_0042CD3B: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    SET_LO8(ecx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    ecx = ecx * 4 + 4;
    MEM32(esi + 0x20) = ecx;

loc_0042CD4D: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x838F28);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0042CD63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042CD60u); } /* indirect call */
    }

loc_0042CD63: ;
    MEM32(esi + 0x24) = eax;

loc_0042CD66: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(esi + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    edi = edi;

loc_0042CD70: ;
    SET_LO8(eax, MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(edx) = LO8(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042CD70; /* jne: not equal / not zero */

loc_0042CD7A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042CDB0
 * Original: 0x0042CDB0 - 0x0042CDDE (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042CDB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x24);
    MEM32(esi) = 0x839B68;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042CDC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042CDC5u); } /* indirect call */
    }

loc_0042CDC8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi) = 0x839ABC;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00033EB6(); return; /* tail jmp 0x00033EB6 */

}

/**
 * sub_0042CDF0
 * Original: 0x0042CDF0 - 0x0042CE80 (144 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CDF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042CDF0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042CE18u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042CE18: ;
    eax = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7C (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042CE57; /* ja: above (unsigned >) */

loc_0042CE26: ;
    eax = ZX8(MEM8(eax + 0x42CE9C));
    { uint32_t _jt = MEM32(eax * 4 + 0x42CE80); /* switch: 7 entries, 6 targets */
    if (_jt == 0x0042CE34u) goto loc_0042CE34;
    if (_jt == 0x0042CE3Bu) goto loc_0042CE3B;
    if (_jt == 0x0042CE42u) goto loc_0042CE42;
    if (_jt == 0x0042CE49u) goto loc_0042CE49;
    if (_jt == 0x0042CE50u) goto loc_0042CE50;
    if (_jt == 0x0042CE57u) goto loc_0042CE57;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042CE34: ;
    eax = 0x4F4B790;
    goto loc_0042CE5C;

loc_0042CE3B: ;
    eax = 0x8F4B794;
    goto loc_0042CE5C;

loc_0042CE42: ;
    eax = 0x10F4A963;
    goto loc_0042CE5C;

loc_0042CE49: ;
    eax = 0x20F4A9A1;
    goto loc_0042CE5C;

loc_0042CE50: ;
    eax = 0x40F4AA06;
    goto loc_0042CE5C;

loc_0042CE57: ;
    eax = 0x80F4B577u;

loc_0042CE5C: ;
    ecx = MEM32(edi + 4);
    edi = MEM32(esi + 0x24);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    edi = esp + 0x14;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x0042CE72u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042CE6Fu); } /* indirect call */
    }

loc_0042CE72: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042CF70
 * Original: 0x0042CF70 - 0x0042CF92 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042CF70: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042CF87; /* je: equal / zero */

loc_0042CF7A: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x0042CF87u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042CF87: ;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042CFA0
 * Original: 0x0042CFA0 - 0x0042CFC5 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CFA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042CFA0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042CFC0; /* je: equal / zero */

loc_0042CFAB: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042CFB6u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0042CFB6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;

loc_0042CFC0: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042CFD0
 * Original: 0x0042CFD0 - 0x0042D05C (140 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042CFD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042CFD0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042CFDEu); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042CFDE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ecx = esi + 0x2C;
    MEM32(esi + 0x14) = ebx;
    MEM32(esi + 0x18) = ebx;
    MEM32(esi + 0x1C) = 3;
    MEM32(esi + 0x20) = ebx;
    MEM32(esi + 0x24) = ebx;
    MEM32(esi) = 0x839B7C;
    MEM32(esi + 0x28) = ebx;
    PUSH32(esp, 0x0042D006u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042D006: ;
    eax = esi + 0x35;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    MEM32(esi + 0x30) = ebx;
    MEM8(esi + 0x34) = LO8(ebx);
    MEM32(esi + 0x158) = ebx;
    MEM8(esi + 0x11) = 1;
    MEM8(eax) = LO8(ebx);
    MEM32(esi + 0x138) = ebx;
    MEM32(esi + 0x24) = eax;
    ecx = MEM32(0x909368);
    edx = MEM32(ecx);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x7B891F);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0042D037u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042D034u); } /* indirect call */
    }

loc_0042D037: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D04F; /* je: equal / zero */

loc_0042D03B: ;
    ecx = eax;
    PUSH32(esp, 0x0042D042u); RECOMP_ABI_CALL(0x00027E63u, sub_00027E63); /* call 0x00027E63 */

loc_0042D042: ;
    MEM32(esi + 0x158) = eax;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042D04F: ;
    MEM32(esi + 0x158) = ebx;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D080
 * Original: 0x0042D080 - 0x0042D14C (204 bytes, 84 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042D080: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = MEM32(edi + 4);
    ebx = ecx;
    MEM32(esp + 0x10) = ebx;
    edx = eax + 1;

loc_0042D095: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042D095; /* jne: not equal / not zero */

loc_0042D09C: ;
    ecx = MEM32(0x9094E8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 1;
    PUSH32(esp, edx);
    PUSH32(esp, 0x839B90);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x0042D0B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042D0B3u); } /* indirect call */
    }

loc_0042D0B6: ;
    MEM32(ebx + 0x30) = eax;
    ecx = MEM32(edi + 4);
    /* nop */

loc_0042D0C0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0042D0C0; /* jne: not equal / not zero */

loc_0042D0CA: ;
    eax = MEM32(ebx + 0x30);
    MEM8(esi + eax) = LO8(edx);
    esi = MEM32(ebx + 0x30);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = ebx + 0x138;
    MEM32(eax) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0042D144; /* je: equal / zero */

loc_0042D0E1: ;
    ebx = eax;

loc_0042D0E3: ;
    eax = esi;
    edx = eax + 1;

loc_0042D0E8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042D0E8; /* jne: not equal / not zero */

loc_0042D0EF: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x839A88);
    PUSH32(esp, esi);
    edi = eax;
    PUSH32(esp, 0x0042D0FEu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D0FE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D135; /* je: equal / zero */

loc_0042D105: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x2F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x2F (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042D10D; /* jne: not equal / not zero */

loc_0042D10C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0042D10D: ;
    PUSH32(esp, 0x839A88);
    MEM32(ebx) = esi;
    PUSH32(esp, esi);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0042D11Eu); RECOMP_ABI_CALL(0x005CD790u, sub_005CD790); /* call 0x005CD790 */

loc_0042D11E: ;
    MEM8(eax + esi) = 0;
    esi = eax + esi + 1;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042D0E3; /* jne: not equal / not zero */

loc_0042D12D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0042D135: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ecx + ebp * 4 + 0x138) = 0;

loc_0042D144: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D180
 * Original: 0x0042D180 - 0x0042D211 (145 bytes, 46 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D180: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    ecx = esp + 0x10;
    MEM32(esi) = 0x839B7C;
    edi = esi + 0x2C;
    PUSH32(esp, 0x0042D19Bu); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042D19B: ;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x0042D1A3u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0042D1A3: ;
    ecx = esp + 8;
    PUSH32(esp, 0x0042D1ACu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042D1AC: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D1BF; /* je: equal / zero */

loc_0042D1B3: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0042D1BFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042D1BCu); } /* indirect call */
    }

loc_0042D1BF: ;
    ecx = MEM32(esi + 0x158);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D1CF; /* je: equal / zero */

loc_0042D1C9: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x0042D1CFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042D1CDu); } /* indirect call */
    }

loc_0042D1CF: ;
    ecx = edi;
    MEM32(esi + 0x24) = 0;
    PUSH32(esp, 0x0042D1DDu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042D1DD: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi) = 0x839B68;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0042D1F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042D1EFu); } /* indirect call */
    }

loc_0042D1F2: ;
    ecx = esi;
    MEM32(esi + 0x24) = 0;
    MEM32(esi + 0x20) = 0;
    MEM32(esi) = 0x839ABC;
    PUSH32(esp, 0x0042D20Du); RECOMP_ABI_CALL(0x00033EB6u, sub_00033EB6); /* call 0x00033EB6 */

loc_0042D20D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0042D240
 * Original: 0x0042D240 - 0x0042D290 (80 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D240: ;
    PUSH32(esp, esi);
    esi = ecx;
    SET_LO8(eax, MEM8(esi + 0x11));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D24E; /* je: equal / zero */

loc_0042D24A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042D28C; /* jne: not equal / not zero */

loc_0042D24E: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042D25Bu); RECOMP_ABI_CALL(0x000229FEu, sub_000229FE); /* call 0x000229FE */

loc_0042D25B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D28C; /* je: equal / zero */

loc_0042D25F: ;
    edx = MEM32(esi + 0x28);
    eax = MEM32(esi + 0x2C);
    ecx = esi + 0x138;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x158);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042D279u); RECOMP_ABI_CALL(0x000171FDu, sub_000171FD); /* call 0x000171FD */

loc_0042D279: ;
    ecx = esi + 0x35;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0x158);
    PUSH32(esp, 0x0042D288u); RECOMP_ABI_CALL(0x0002D0E8u, sub_0002D0E8); /* call 0x0002D0E8 */

loc_0042D288: ;
    MEM8(esi + 0x11) = 3;

loc_0042D28C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D2B0
 * Original: 0x0042D2B0 - 0x0042D335 (133 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D2B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0042D2B0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x100));
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x158);
    _fa = (uint32_t)(MEM8(ecx + 0x30)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x30), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042D32B; /* jne: not equal / not zero */

loc_0042D2C5: ;
    PUSH32(esp, edi);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042D2D0u); RECOMP_ABI_CALL(0x0002D0E8u, sub_0002D0E8); /* call 0x0002D0E8 */

loc_0042D2D0: ;
    edi = esi + 0x35;
    esi = edi;
    eax = esp + 8;
    PUSH32(esp, ebx);
    /* nop */

loc_0042D2E0: ;
    SET_LO8(edx, MEM8(eax));
    SET_LO8(ebx, MEM8(esi));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042D308; /* jne: not equal / not zero */

loc_0042D2EA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D304; /* je: equal / zero */

loc_0042D2EE: ;
    SET_LO8(edx, MEM8(eax + 1));
    SET_LO8(ebx, MEM8(esi + 1));
    SET_LO8(ecx, LO8(edx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042D308; /* jne: not equal / not zero */

loc_0042D2FA: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0042D2E0; /* jne: not equal / not zero */

loc_0042D304: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0042D30D;

loc_0042D308: ;
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0xFFFFFFFFu) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_0042D30D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0042D32A; /* je: equal / zero */

loc_0042D312: ;
    eax = esp + 8;
    edx = edi;
    ecx = eax;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edx) < (uint32_t)(ecx));
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042D320: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0042D320; /* jne: not equal / not zero */

loc_0042D32A: ;
    POP32(esp, edi);

loc_0042D32B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x100)) >> 32) & 1);
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D360
 * Original: 0x0042D360 - 0x0042D3B0 (80 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D360(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D360: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042D36Du); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042D36D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x8260A8)); /* movss */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x1C) = 3;
    MEM32(esi) = 0x839BCC;
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x28) = 0xFFFFFFFFu;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D3D0
 * Original: 0x0042D3D0 - 0x0042D465 (149 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D3D0(void)
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

loc_0042D3D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0042D3E6u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D3E6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D3EEu); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042D3EE: ;
    MEMF(edi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D3FCu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D3FC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D409u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D409: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D411u); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042D411: ;
    MEMF(edi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D41Fu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D41F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D42Cu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D42C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D434u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0042D434: ;
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    MEM32(edi + 0x28) = eax;
    PUSH32(esp, 0x0042D442u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D442: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D44Fu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D44F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D45Au); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0042D45A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x2C) = eax;
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
 * sub_0042D490
 * Original: 0x0042D490 - 0x0042D49B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042D490: ;
    MEM32(ecx) = 0x839ABC;
    g_seh_ebp = ebp; sub_00033EB6(); return; /* tail jmp 0x00033EB6 */

}

/**
 * sub_0042D4A0
 * Original: 0x0042D4A0 - 0x0042D598 (248 bytes, 89 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D4A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D4A0: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x839C18);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042D4C8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042D4C8: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B810);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042D4E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042D4E2u); } /* indirect call */
    }

loc_0042D4E5: ;
    MEM32(esi + 0x18) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x839C04);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042D4FFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042D4FF: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B17B);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042D51Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042D519u); } /* indirect call */
    }

loc_0042D51C: ;
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x839BF0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042D536u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042D536: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B17B);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042D553u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042D550u); } /* indirect call */
    }

loc_0042D553: ;
    MEM32(esi + 0x34) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x839BE0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042D56Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042D56D: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B810);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042D58Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042D587u); } /* indirect call */
    }

loc_0042D58A: ;
    POP32(esp, edi);
    MEM32(esi + 0x38) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D5E0
 * Original: 0x0042D5E0 - 0x0042D63D (93 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D5E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D5E0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0042D5FB; /* je: equal / zero */

loc_0042D5F2: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042D5FBu); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042D5FB: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D60B; /* je: equal / zero */

loc_0042D602: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042D60Bu); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042D60B: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D61B; /* je: equal / zero */

loc_0042D612: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042D61Bu); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042D61B: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D62B; /* je: equal / zero */

loc_0042D622: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042D62Bu); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042D62B: ;
    POP32(esp, edi);
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 0x30) = ebx;
    MEM32(esi + 0x34) = ebx;
    MEM32(esi + 0x18) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D660
 * Original: 0x0042D660 - 0x0042D69B (59 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D660: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    ebx = ecx;
    PUSH32(esp, 0x0042D66Fu); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042D66F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x14) = eax;
    MEM32(ebx + 0x18) = eax;
    edi = ebx + 0x20;
    MEM32(ebx + 0x1C) = 3;
    MEM32(ebx) = 0x839C30;
    ecx = 0x10;
    esi = 0x87DB50;
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
    eax = ebx;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D6B0
 * Original: 0x0042D6B0 - 0x0042D705 (85 bytes, 32 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D6B0(void)
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

loc_0042D6B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0042D6C7u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D6C7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = 0x10;

loc_0042D6D4: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D6DAu); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042D6DA: ;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D6E7u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D6E7: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D6F4u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D6F4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0042D6D4; /* jne: not equal / not zero */

loc_0042D6FF: ;
    POP32(esp, edi);
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
 * sub_0042D720
 * Original: 0x0042D720 - 0x0042D72B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042D720: ;
    MEM32(ecx) = 0x839ABC;
    g_seh_ebp = ebp; sub_00033EB6(); return; /* tail jmp 0x00033EB6 */

}

/**
 * sub_0042D730
 * Original: 0x0042D730 - 0x0042D783 (83 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D730(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D730: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042D758u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042D758: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40F4B4FA);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042D775u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042D772u); } /* indirect call */
    }

loc_0042D775: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D7A0
 * Original: 0x0042D7A0 - 0x0042D7C2 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D7A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D7A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D7B7; /* je: equal / zero */

loc_0042D7AA: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x0042D7B7u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042D7B7: ;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D7D0
 * Original: 0x0042D7D0 - 0x0042D7F5 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D7D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D7D0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D7F0; /* je: equal / zero */

loc_0042D7DB: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042D7E6u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0042D7E6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;

loc_0042D7F0: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D800
 * Original: 0x0042D800 - 0x0042D82B (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D800(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D800: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042D80Du); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042D80D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x1C) = 3;
    MEM32(esi) = 0x839C44;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D840
 * Original: 0x0042D840 - 0x0042D86A (42 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D840(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042D840: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x839C44;
    if (CMP_EQ(_fa, _fb)) goto loc_0042D85C; /* je: equal / zero */

loc_0042D850: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0042D85Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042D859u); } /* indirect call */
    }

loc_0042D85C: ;
    MEM32(esi) = 0x839ABC;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00033EB6(); return; /* tail jmp 0x00033EB6 */

}

/**
 * sub_0042D880
 * Original: 0x0042D880 - 0x0042D8D3 (83 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D880(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D880: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x82AE2C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042D8A8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042D8A8: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x40F4B4FA);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042D8C5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042D8C2u); } /* indirect call */
    }

loc_0042D8C5: ;
    POP32(esp, edi);
    MEM32(esi + 0x18) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D8F0
 * Original: 0x0042D8F0 - 0x0042D912 (34 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D8F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D8F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D907; /* je: equal / zero */

loc_0042D8FA: ;
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(eax + 4);
    PUSH32(esp, 0x0042D907u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042D907: ;
    MEM32(esi + 0x18) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D920
 * Original: 0x0042D920 - 0x0042D945 (37 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D920(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D920: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042D940; /* je: equal / zero */

loc_0042D92B: ;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042D936u); RECOMP_ABI_CALL(0x005737B4u, sub_005737B4); /* call 0x005737B4 */

loc_0042D936: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = 0;

loc_0042D940: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D950
 * Original: 0x0042D950 - 0x0042D997 (71 bytes, 19 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042D950: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    esi = ecx;
    PUSH32(esp, 0x0042D95Du); RECOMP_ABI_CALL(0x0002E169u, sub_0002E169); /* call 0x0002E169 */

loc_0042D95D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AB868)); /* movss */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = 3;
    MEM32(esi) = 0x839C58;
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042D9B0
 * Original: 0x0042D9B0 - 0x0042DA45 (149 bytes, 50 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042D9B0(void)
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

loc_0042D9B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x0042D9C6u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D9C6: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D9CEu); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042D9CE: ;
    MEMF(edi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D9DCu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D9DC: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D9E9u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D9E9: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D9F1u); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042D9F1: ;
    MEMF(edi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042D9FFu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042D9FF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042DA0Cu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042DA0C: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042DA14u); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042DA14: ;
    MEMF(edi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x839A9C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042DA22u); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042DA22: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x839A90);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042DA2Fu); RECOMP_ABI_CALL(0x005CCF00u, sub_005CCF00); /* call 0x005CCF00 */

loc_0042DA2F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042DA3Au); RECOMP_ABI_CALL(0x00036373u, sub_00036373); /* call 0x00036373 */

loc_0042DA3A: ;
    MEMF(edi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_0042DA70
 * Original: 0x0042DA70 - 0x0042DA7B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DA70: ;
    MEM32(ecx) = 0x839ABC;
    g_seh_ebp = ebp; sub_00033EB6(); return; /* tail jmp 0x00033EB6 */

}

/**
 * sub_0042DA80
 * Original: 0x0042DA80 - 0x0042DB78 (248 bytes, 89 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DA80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DA80: ;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10C);
    esi = ecx;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x839C98);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042DAA8u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042DAA8: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B17B);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042DAC5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042DAC2u); } /* indirect call */
    }

loc_0042DAC5: ;
    MEM32(esi + 0x30) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x839C8C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042DADFu); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042DADF: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x24;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B17B);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042DAFCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042DAF9u); } /* indirect call */
    }

loc_0042DAFC: ;
    MEM32(esi + 0x34) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x839C7C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042DB16u); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042DB16: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x28;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B17B);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042DB33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042DB30u); } /* indirect call */
    }

loc_0042DB33: ;
    MEM32(esi + 0x38) = eax;
    eax = MEM32(esi + 8);
    ecx = MEM32(edi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    edx = esp + 0x10;
    PUSH32(esp, 0x839C6C);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042DB4Du); RECOMP_ABI_CALL(0x005CBDA4u, sub_005CBDA4); /* call 0x005CBDA4 */

loc_0042DB4D: ;
    ecx = MEM32(edi + 4);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    edx = esi + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x4F4B17B);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0042DB6Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042DB67u); } /* indirect call */
    }

loc_0042DB6A: ;
    POP32(esp, edi);
    MEM32(esi + 0x3C) = eax;
    POP32(esp, esi);
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x100;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DBC0
 * Original: 0x0042DBC0 - 0x0042DC1D (93 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DBC0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x30);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    if (CMP_EQ(_fa, _fb)) goto loc_0042DBDB; /* je: equal / zero */

loc_0042DBD2: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042DBDBu); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042DBDB: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x30) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0042DBEE; /* je: equal / zero */

loc_0042DBE5: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042DBEEu); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042DBEE: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x34) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0042DC01; /* je: equal / zero */

loc_0042DBF8: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042DC01u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042DC01: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(esi + 0x38) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0042DC14; /* je: equal / zero */

loc_0042DC0B: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042DC14u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_0042DC14: ;
    POP32(esp, edi);
    MEM32(esi + 0x3C) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DC40
 * Original: 0x0042DC40 - 0x0042DCB2 (114 bytes, 40 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DC40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DC40: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0042DC58; /* jne: not equal / not zero */

loc_0042DC4C: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_0042DC8A;

loc_0042DC58: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042DC62u); RECOMP_ABI_CALL(0x00574405u, sub_00574405); /* call 0x00574405 */

loc_0042DC62: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0042DC8Au); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_0042DC8A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0042DC93u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042DC93: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042DCA2; /* je: equal / zero */

loc_0042DC9A: ;
    MEM32(esp + 0x14) = 0;

loc_0042DCA2: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0042DCABu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042DCAB: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0042DCD0
 * Original: 0x0042DCD0 - 0x0042DD42 (114 bytes, 40 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DCD0: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0042DCE8; /* jne: not equal / not zero */

loc_0042DCDC: ;
    esi = MEM32(esp + 0xC);
    MEM32(esi) = 0xFFFFFEDAu;
    goto loc_0042DD1A;

loc_0042DCE8: ;
    esi = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042DCF2u); RECOMP_ABI_CALL(0x00574399u, sub_00574399); /* call 0x00574399 */

loc_0042DCF2: ;
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    ecx = esp + 0x2C;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x0042DD1Au); RECOMP_ABI_CALL(0x00572FEFu, sub_00572FEF); /* call 0x00572FEF */

loc_0042DD1A: ;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0042DD23u); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042DD23: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042DD32; /* je: equal / zero */

loc_0042DD2A: ;
    MEM32(esp + 0x14) = 0;

loc_0042DD32: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0042DD3Bu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042DD3B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0042DD60
 * Original: 0x0042DD60 - 0x0042DD87 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DD60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DD60: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x839ABC;
    PUSH32(esp, 0x0042DD6Eu); RECOMP_ABI_CALL(0x00033EB6u, sub_00033EB6); /* call 0x00033EB6 */

loc_0042DD6E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042DD81; /* je: equal / zero */

loc_0042DD75: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042DD81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042DD7Eu); } /* indirect call */
    }

loc_0042DD81: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DD90
 * Original: 0x0042DD90 - 0x0042DDBA (42 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DD90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DD90: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DDAE; /* je: equal / zero */

loc_0042DD9B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042DDB7; /* jle: less or equal (signed <=) */

loc_0042DDA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0042DDB7; /* jg: greater (signed >) */

loc_0042DDA5: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0003402D(); return; /* tail jmp 0x0003402D */

loc_0042DDAE: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0001EA75(); return; /* tail jmp 0x0001EA75 */

loc_0042DDB7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DDD0
 * Original: 0x0042DDD0 - 0x0042DDF7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DDD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DDD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x839ABC;
    PUSH32(esp, 0x0042DDDEu); RECOMP_ABI_CALL(0x00033EB6u, sub_00033EB6); /* call 0x00033EB6 */

loc_0042DDDE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042DDF1; /* je: equal / zero */

loc_0042DDE5: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042DDF1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042DDEEu); } /* indirect call */
    }

loc_0042DDF1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DE00
 * Original: 0x0042DE00 - 0x0042DE2A (42 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DE00: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DE1E; /* je: equal / zero */

loc_0042DE0B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042DE27; /* jle: less or equal (signed <=) */

loc_0042DE10: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0042DE27; /* jg: greater (signed >) */

loc_0042DE15: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0003402D(); return; /* tail jmp 0x0003402D */

loc_0042DE1E: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0001EA75(); return; /* tail jmp 0x0001EA75 */

loc_0042DE27: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DE40
 * Original: 0x0042DE40 - 0x0042DE67 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DE40: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x839ABC;
    PUSH32(esp, 0x0042DE4Eu); RECOMP_ABI_CALL(0x00033EB6u, sub_00033EB6); /* call 0x00033EB6 */

loc_0042DE4E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042DE61; /* je: equal / zero */

loc_0042DE55: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042DE61u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042DE5Eu); } /* indirect call */
    }

loc_0042DE61: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DE70
 * Original: 0x0042DE70 - 0x0042DE9A (42 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DE70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DE70: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DE8E; /* je: equal / zero */

loc_0042DE7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042DE97; /* jle: less or equal (signed <=) */

loc_0042DE80: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0042DE97; /* jg: greater (signed >) */

loc_0042DE85: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0003402D(); return; /* tail jmp 0x0003402D */

loc_0042DE8E: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0001EA75(); return; /* tail jmp 0x0001EA75 */

loc_0042DE97: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DEB0
 * Original: 0x0042DEB0 - 0x0042DEDE (46 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DEB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DEB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi + 0x28) = 0x839AB0;
    MEM32(esi) = 0x839ABC;
    PUSH32(esp, 0x0042DEC5u); RECOMP_ABI_CALL(0x00033EB6u, sub_00033EB6); /* call 0x00033EB6 */

loc_0042DEC5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042DED8; /* je: equal / zero */

loc_0042DECC: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042DED8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042DED5u); } /* indirect call */
    }

loc_0042DED8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DEF0
 * Original: 0x0042DEF0 - 0x0042DF17 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DEF0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x839ABC;
    PUSH32(esp, 0x0042DEFEu); RECOMP_ABI_CALL(0x00033EB6u, sub_00033EB6); /* call 0x00033EB6 */

loc_0042DEFE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042DF11; /* je: equal / zero */

loc_0042DF05: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042DF11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042DF0Eu); } /* indirect call */
    }

loc_0042DF11: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DF20
 * Original: 0x0042DF20 - 0x0042DF4A (42 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DF20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042DF20: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042DF3E; /* je: equal / zero */

loc_0042DF2B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042DF47; /* jle: less or equal (signed <=) */

loc_0042DF30: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0042DF47; /* jg: greater (signed >) */

loc_0042DF35: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0003402D(); return; /* tail jmp 0x0003402D */

loc_0042DF3E: ;
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0001EA75(); return; /* tail jmp 0x0001EA75 */

loc_0042DF47: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DF60
 * Original: 0x0042DF60 - 0x0042DF87 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DF60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DF60: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x839ABC;
    PUSH32(esp, 0x0042DF6Eu); RECOMP_ABI_CALL(0x00033EB6u, sub_00033EB6); /* call 0x00033EB6 */

loc_0042DF6E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042DF81; /* je: equal / zero */

loc_0042DF75: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042DF81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042DF7Eu); } /* indirect call */
    }

loc_0042DF81: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DF90
 * Original: 0x0042DF90 - 0x0042DFB7 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DF90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DF90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x839ABC;
    PUSH32(esp, 0x0042DF9Eu); RECOMP_ABI_CALL(0x00033EB6u, sub_00033EB6); /* call 0x00033EB6 */

loc_0042DF9E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042DFB1; /* je: equal / zero */

loc_0042DFA5: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042DFB1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042DFAEu); } /* indirect call */
    }

loc_0042DFB1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042DFC0
 * Original: 0x0042DFC0 - 0x0042E006 (70 bytes, 23 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042DFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042DFC0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 0x24);
    MEM32(esi) = 0x839B68;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042DFD8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042DFD5u); } /* indirect call */
    }

loc_0042DFD8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi) = 0x839ABC;
    PUSH32(esp, 0x0042DFEDu); RECOMP_ABI_CALL(0x00033EB6u, sub_00033EB6); /* call 0x00033EB6 */

loc_0042DFED: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042E000; /* je: equal / zero */

loc_0042DFF4: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042E000u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042DFFDu); } /* indirect call */
    }

loc_0042E000: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042E020
 * Original: 0x0042E020 - 0x0042E132 (274 bytes, 92 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E020: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0x838FAC;
    ecx = 0xB;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042E105; /* jne: not equal / not zero */

loc_0042E040: ;
    eax = MEM32(eax + 8);
    edi = 0x838FA0;
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
    if ((_flags == 0)) goto loc_0042E061; /* jne: not equal / not zero */

loc_0042E055: ;
    MEM32(ebx + 0x20) = 4;
    goto loc_0042E0E6;

loc_0042E061: ;
    edi = 0x838F94;
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
    if ((_flags == 0)) goto loc_0042E07C; /* jne: not equal / not zero */

loc_0042E073: ;
    MEM32(ebx + 0x20) = 8;
    goto loc_0042E0E6;

loc_0042E07C: ;
    edi = 0x838F88;
    esi = eax;
    ecx = 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042E097; /* jne: not equal / not zero */

loc_0042E08E: ;
    MEM32(ebx + 0x20) = 0x10;
    goto loc_0042E0E6;

loc_0042E097: ;
    edi = 0x838F7C;
    esi = eax;
    ecx = 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042E0B2; /* jne: not equal / not zero */

loc_0042E0A9: ;
    MEM32(ebx + 0x20) = 0x20;
    goto loc_0042E0E6;

loc_0042E0B2: ;
    edi = 0x838F70;
    esi = eax;
    ecx = 9;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042E0CD; /* jne: not equal / not zero */

loc_0042E0C4: ;
    MEM32(ebx + 0x20) = 0x40;
    goto loc_0042E0E6;

loc_0042E0CD: ;
    esi = eax;
    edi = 0x838F64;
    ecx = 0xA;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042E0E6; /* jne: not equal / not zero */

loc_0042E0DF: ;
    MEM32(ebx + 0x20) = 0x80;

loc_0042E0E6: ;
    eax = MEM32(ebx + 0x20);
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x838F28);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0042E0FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042E0F9u); } /* indirect call */
    }

loc_0042E0FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebx + 0x24) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042E105: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E124; /* je: equal / zero */

loc_0042E10C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042E12C; /* jle: less or equal (signed <=) */

loc_0042E111: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0042E12C; /* jg: greater (signed >) */

loc_0042E116: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0042E11Eu); RECOMP_ABI_CALL(0x0003402Du, sub_0003402D); /* call 0x0003402D */

loc_0042E11E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042E124: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0042E12Cu); RECOMP_ABI_CALL(0x0001EA75u, sub_0001EA75); /* call 0x0001EA75 */

loc_0042E12C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042E180
 * Original: 0x0042E180 - 0x0042E1A5 (37 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E180: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0042E188u); RECOMP_ABI_CALL(0x00011122u, sub_00011122); /* call 0x00011122 */

loc_0042E188: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042E19F; /* je: equal / zero */

loc_0042E18F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E19F; /* je: equal / zero */

loc_0042E193: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042E19Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042E19Cu); } /* indirect call */
    }

loc_0042E19F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042E1B0
 * Original: 0x0042E1B0 - 0x0042E1E1 (49 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E1B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E1B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    edx = ZX8(MEM8(esi + 0x11));
    PUSH32(esp, eax);
    SET_LO8(eax, MEM8(esi + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042E1CEu); RECOMP_ABI_CALL(0x000324F3u, sub_000324F3); /* call 0x000324F3 */

loc_0042E1CE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E1DD; /* je: equal / zero */

loc_0042E1D2: ;
    ecx = MEM32(esi + 0x158);
    PUSH32(esp, 0x0042E1DDu); RECOMP_ABI_CALL(0x00025537u, sub_00025537); /* call 0x00025537 */

loc_0042E1DD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042E1F0
 * Original: 0x0042E1F0 - 0x0042E217 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E1F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E1F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x839ABC;
    PUSH32(esp, 0x0042E1FEu); RECOMP_ABI_CALL(0x00033EB6u, sub_00033EB6); /* call 0x00033EB6 */

loc_0042E1FE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042E211; /* je: equal / zero */

loc_0042E205: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042E211u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042E20Eu); } /* indirect call */
    }

loc_0042E211: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042E220
 * Original: 0x0042E220 - 0x0042E2F7 (215 bytes, 99 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042E220: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = eax + -2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042E291; /* ja: above (unsigned >) */

loc_0042E22F: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x42E298); /* switch: 5 entries, 4 targets */
    if (_jt == 0x0042E236u) goto loc_0042E236;
    if (_jt == 0x0042E259u) goto loc_0042E259;
    if (_jt == 0x0042E263u) goto loc_0042E263;
    if (_jt == 0x0042E27Au) goto loc_0042E27A;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042E236: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E24F; /* je: equal / zero */

loc_0042E23B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042E291; /* jle: less or equal (signed <=) */

loc_0042E240: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0042E291; /* jg: greater (signed >) */

loc_0042E245: ;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0003402D(); return; /* tail jmp 0x0003402D */

loc_0042E24F: ;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0001EA75(); return; /* tail jmp 0x0001EA75 */

loc_0042E259: ;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0002F6F4(); return; /* tail jmp 0x0002F6F4 */

loc_0042E263: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E270; /* je: equal / zero */

loc_0042E26B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E291; /* jne: not equal / not zero */

loc_0042E270: ;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0002D322(); return; /* tail jmp 0x0002D322 */

loc_0042E27A: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E287; /* je: equal / zero */

loc_0042E282: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E291; /* jne: not equal / not zero */

loc_0042E287: ;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0002D7EB(); return; /* tail jmp 0x0002D7EB */

loc_0042E291: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -30) = MEM8(ecx + -30) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx + -30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi) = MEM8(esi) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ecx -= 1; /* loop: count down */
    if (ecx != 0) goto loc_0042E2E5; /* loop: ecx is non-zero */

loc_0042E2A3: ;
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + -30) = MEM8(ebx + -30) + HI8(eax);
    _fa = (uint32_t)(MEM8(ebx + -30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx + -30) = MEM8(edx + -30) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edx + -30)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
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
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x839ABC;
    PUSH32(esp, 0x0042E2DEu); RECOMP_ABI_CALL(0x00033EB6u, sub_00033EB6); /* call 0x00033EB6 */

loc_0042E2DE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042E2F1; /* je: equal / zero */

loc_0042E2E5: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042E2F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042E2EEu); } /* indirect call */
    }

loc_0042E2F1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042E300
 * Original: 0x0042E300 - 0x0042E342 (66 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E300: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x839C44;
    if (CMP_EQ(_fa, _fb)) goto loc_0042E31C; /* je: equal / zero */

loc_0042E310: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x0042E31Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042E319u); } /* indirect call */
    }

loc_0042E31C: ;
    ecx = esi;
    MEM32(esi) = 0x839ABC;
    PUSH32(esp, 0x0042E329u); RECOMP_ABI_CALL(0x00033EB6u, sub_00033EB6); /* call 0x00033EB6 */

loc_0042E329: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042E33C; /* je: equal / zero */

loc_0042E330: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042E33Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042E339u); } /* indirect call */
    }

loc_0042E33C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042E360
 * Original: 0x0042E360 - 0x0042E3FA (154 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E360: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    ebx = ecx;
    edi = 0x839CE4;
    ecx = 7;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_0042E3CD; /* jne: not equal / not zero */

loc_0042E37C: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042E385u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0042E385: ;
    ecx = MEM32(0x9094E8);
    edx = MEM32(ecx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;
    PUSH32(esp, 0);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(6) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x839CA4);
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0042E3A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042E39Du); } /* indirect call */
    }

loc_0042E3A0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebx + 0x20) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0042E3F4; /* jle: less or equal (signed <=) */

loc_0042E3A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esi;
    goto loc_0042E3B0;

    /* nop */

loc_0042E3B0: ;
    edi = MEM32(ebx + 0x20);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0x10;
    esi = 0x87DB50;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
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
    if ((_fa != 0)) goto loc_0042E3B0; /* jne: not equal / not zero */

loc_0042E3C7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042E3CD: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E3EC; /* je: equal / zero */

loc_0042E3D4: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042E3F4; /* jle: less or equal (signed <=) */

loc_0042E3D9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0042E3F4; /* jg: greater (signed >) */

loc_0042E3DE: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0042E3E6u); RECOMP_ABI_CALL(0x0003402Du, sub_0003402D); /* call 0x0003402D */

loc_0042E3E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042E3EC: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0042E3F4u); RECOMP_ABI_CALL(0x0001EA75u, sub_0001EA75); /* call 0x0001EA75 */

loc_0042E3F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042E420
 * Original: 0x0042E420 - 0x0042E447 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042E420: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x839ABC;
    PUSH32(esp, 0x0042E42Eu); RECOMP_ABI_CALL(0x00033EB6u, sub_00033EB6); /* call 0x00033EB6 */

loc_0042E42E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0042E441; /* je: equal / zero */

loc_0042E435: ;
    ecx = MEM32(0x9094E8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x0042E441u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0042E43Eu); } /* indirect call */
    }

loc_0042E441: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042E450
 * Original: 0x0042E450 - 0x0042E667 (535 bytes, 215 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042E450: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx);
    PUSH32(esp, esi);
    esi = eax + -2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042E4C1; /* ja: above (unsigned >) */

loc_0042E45F: ;
    { uint32_t _jt = MEM32(esi * 4 + 0x42E4C8); /* switch: 5 entries, 4 targets */
    if (_jt == 0x0042E466u) goto loc_0042E466;
    if (_jt == 0x0042E489u) goto loc_0042E489;
    if (_jt == 0x0042E493u) goto loc_0042E493;
    if (_jt == 0x0042E4AAu) goto loc_0042E4AA;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042E466: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E47F; /* je: equal / zero */

loc_0042E46B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0042E4C1; /* jle: less or equal (signed <=) */

loc_0042E470: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0042E4C1; /* jg: greater (signed >) */

loc_0042E475: ;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0003402D(); return; /* tail jmp 0x0003402D */

loc_0042E47F: ;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_0001EA75(); return; /* tail jmp 0x0001EA75 */

loc_0042E489: ;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00034893(); return; /* tail jmp 0x00034893 */

loc_0042E493: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E4A0; /* je: equal / zero */

loc_0042E49B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E4C1; /* jne: not equal / not zero */

loc_0042E4A0: ;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00030AFE(); return; /* tail jmp 0x00030AFE */

loc_0042E4AA: ;
    eax = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E4B7; /* je: equal / zero */

loc_0042E4B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E4C1; /* jne: not equal / not zero */

loc_0042E4B7: ;
    POP32(esp, esi);
    MEM32(esp + 4) = edx;
    g_seh_ebp = ebp; sub_00035A27(); return; /* tail jmp 0x00035A27 */

loc_0042E4C1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

    edx = esp + 0x50;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042E520: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E520; /* jne: not equal / not zero */

loc_0042E52A: ;
    goto loc_0042E531;

loc_0042E52C: ;
    MEM8(esp + 0x50) = 0;

loc_0042E531: ;
    eax = MEM32(esp + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E54E; /* je: equal / zero */

loc_0042E53C: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042E542: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E542; /* jne: not equal / not zero */

loc_0042E54C: ;
    goto loc_0042E553;

loc_0042E54E: ;
    MEM8(esp + 0x10) = 0;

loc_0042E553: ;
    esi = MEM32(esp + 0xA4);
    PUSH32(esp, 0x82BE34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042E565u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0042E565: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E59E; /* jne: not equal / not zero */

loc_0042E56E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0042E58C; /* jne: not equal / not zero */

loc_0042E574: ;
    edx = esp + 0x50;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042E580: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E580; /* jne: not equal / not zero */

loc_0042E58A: ;
    goto loc_0042E5ED;

loc_0042E58C: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042E592: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E592; /* jne: not equal / not zero */

loc_0042E59C: ;
    goto loc_0042E5ED;

loc_0042E59E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E5BC; /* jne: not equal / not zero */

loc_0042E5A2: ;
    eax = esi + 1;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0042E5B0;

    /* nop */

loc_0042E5B0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E5B0; /* jne: not equal / not zero */

loc_0042E5BA: ;
    goto loc_0042E5ED;

loc_0042E5BC: ;
    edi = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = esp + 0x54;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042E5CCu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0042E5CC: ;
    eax = ebp + 1;
    MEM8(esp + edi + 0x5C) = 0;
    SET_LO8(ecx, MEM8(eax));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E5ED; /* je: equal / zero */

loc_0042E5DD: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042E5E3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E5E3; /* jne: not equal / not zero */

loc_0042E5ED: ;
    ecx = MEM32(esp + 0xA8);
    edx = MEM32(esp + 0x98);
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0042E628; /* je: equal / zero */

loc_0042E606: ;
    eax = esp + 0x1C;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042E612u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0042E612: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042E621u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042E621: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    goto loc_0042E64A;

loc_0042E628: ;
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = 0;
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042E645u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042E645: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);

loc_0042E64A: ;
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, 0x0042E656u); RECOMP_ABI_CALL(0x00023A25u, sub_00023A25); /* call 0x00023A25 */

loc_0042E656: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0042E500
 * Original: 0x0042E500 - 0x0042E667 (359 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042E500: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x9C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E52C; /* je: equal / zero */

loc_0042E514: ;
    edx = esp + 0x50;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042E520: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E520; /* jne: not equal / not zero */

loc_0042E52A: ;
    goto loc_0042E531;

loc_0042E52C: ;
    MEM8(esp + 0x50) = 0;

loc_0042E531: ;
    eax = MEM32(esp + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E54E; /* je: equal / zero */

loc_0042E53C: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042E542: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E542; /* jne: not equal / not zero */

loc_0042E54C: ;
    goto loc_0042E553;

loc_0042E54E: ;
    MEM8(esp + 0x10) = 0;

loc_0042E553: ;
    esi = MEM32(esp + 0xA4);
    PUSH32(esp, 0x82BE34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042E565u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0042E565: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E59E; /* jne: not equal / not zero */

loc_0042E56E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0042E58C; /* jne: not equal / not zero */

loc_0042E574: ;
    edx = esp + 0x50;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042E580: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E580; /* jne: not equal / not zero */

loc_0042E58A: ;
    goto loc_0042E5ED;

loc_0042E58C: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042E592: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E592; /* jne: not equal / not zero */

loc_0042E59C: ;
    goto loc_0042E5ED;

loc_0042E59E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E5BC; /* jne: not equal / not zero */

loc_0042E5A2: ;
    eax = esi + 1;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0042E5B0;

    /* nop */

loc_0042E5B0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E5B0; /* jne: not equal / not zero */

loc_0042E5BA: ;
    goto loc_0042E5ED;

loc_0042E5BC: ;
    edi = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = esp + 0x54;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042E5CCu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0042E5CC: ;
    eax = ebp + 1;
    MEM8(esp + edi + 0x5C) = 0;
    SET_LO8(ecx, MEM8(eax));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E5ED; /* je: equal / zero */

loc_0042E5DD: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042E5E3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E5E3; /* jne: not equal / not zero */

loc_0042E5ED: ;
    ecx = MEM32(esp + 0xA8);
    edx = MEM32(esp + 0x98);
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0042E628; /* je: equal / zero */

loc_0042E606: ;
    eax = esp + 0x1C;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042E612u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0042E612: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042E621u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042E621: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    goto loc_0042E64A;

loc_0042E628: ;
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = 0;
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042E645u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042E645: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);

loc_0042E64A: ;
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, 0x0042E656u); RECOMP_ABI_CALL(0x00023A25u, sub_00023A25); /* call 0x00023A25 */

loc_0042E656: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0042E6C0
 * Original: 0x0042E6C0 - 0x0042E827 (359 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E6C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042E6C0: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x9C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E6EC; /* je: equal / zero */

loc_0042E6D4: ;
    edx = esp + 0x50;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042E6E0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E6E0; /* jne: not equal / not zero */

loc_0042E6EA: ;
    goto loc_0042E6F1;

loc_0042E6EC: ;
    MEM8(esp + 0x50) = 0;

loc_0042E6F1: ;
    eax = MEM32(esp + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E70E; /* je: equal / zero */

loc_0042E6FC: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042E702: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E702; /* jne: not equal / not zero */

loc_0042E70C: ;
    goto loc_0042E713;

loc_0042E70E: ;
    MEM8(esp + 0x10) = 0;

loc_0042E713: ;
    esi = MEM32(esp + 0xA4);
    PUSH32(esp, 0x82BE34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042E725u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0042E725: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E75E; /* jne: not equal / not zero */

loc_0042E72E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0042E74C; /* jne: not equal / not zero */

loc_0042E734: ;
    edx = esp + 0x50;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042E740: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E740; /* jne: not equal / not zero */

loc_0042E74A: ;
    goto loc_0042E7AD;

loc_0042E74C: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042E752: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E752; /* jne: not equal / not zero */

loc_0042E75C: ;
    goto loc_0042E7AD;

loc_0042E75E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E77C; /* jne: not equal / not zero */

loc_0042E762: ;
    eax = esi + 1;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0042E770;

    /* nop */

loc_0042E770: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E770; /* jne: not equal / not zero */

loc_0042E77A: ;
    goto loc_0042E7AD;

loc_0042E77C: ;
    edi = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = esp + 0x54;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042E78Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0042E78C: ;
    eax = ebp + 1;
    MEM8(esp + edi + 0x5C) = 0;
    SET_LO8(ecx, MEM8(eax));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E7AD; /* je: equal / zero */

loc_0042E79D: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042E7A3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E7A3; /* jne: not equal / not zero */

loc_0042E7AD: ;
    ecx = MEM32(esp + 0xA8);
    edx = MEM32(esp + 0x98);
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0042E7E8; /* je: equal / zero */

loc_0042E7C6: ;
    eax = esp + 0x1C;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042E7D2u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0042E7D2: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042E7E1u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042E7E1: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    goto loc_0042E80A;

loc_0042E7E8: ;
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = 0;
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042E805u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042E805: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);

loc_0042E80A: ;
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, 0x0042E816u); RECOMP_ABI_CALL(0x0001EF43u, sub_0001EF43); /* call 0x0001EF43 */

loc_0042E816: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0042E880
 * Original: 0x0042E880 - 0x0042E9E7 (359 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042E880(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042E880: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x9C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E8AC; /* je: equal / zero */

loc_0042E894: ;
    edx = esp + 0x50;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042E8A0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E8A0; /* jne: not equal / not zero */

loc_0042E8AA: ;
    goto loc_0042E8B1;

loc_0042E8AC: ;
    MEM8(esp + 0x50) = 0;

loc_0042E8B1: ;
    eax = MEM32(esp + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E8CE; /* je: equal / zero */

loc_0042E8BC: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042E8C2: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E8C2; /* jne: not equal / not zero */

loc_0042E8CC: ;
    goto loc_0042E8D3;

loc_0042E8CE: ;
    MEM8(esp + 0x10) = 0;

loc_0042E8D3: ;
    esi = MEM32(esp + 0xA4);
    PUSH32(esp, 0x82BE34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042E8E5u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0042E8E5: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E91E; /* jne: not equal / not zero */

loc_0042E8EE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0042E90C; /* jne: not equal / not zero */

loc_0042E8F4: ;
    edx = esp + 0x50;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042E900: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E900; /* jne: not equal / not zero */

loc_0042E90A: ;
    goto loc_0042E96D;

loc_0042E90C: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042E912: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E912; /* jne: not equal / not zero */

loc_0042E91C: ;
    goto loc_0042E96D;

loc_0042E91E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E93C; /* jne: not equal / not zero */

loc_0042E922: ;
    eax = esi + 1;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0042E930;

    /* nop */

loc_0042E930: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E930; /* jne: not equal / not zero */

loc_0042E93A: ;
    goto loc_0042E96D;

loc_0042E93C: ;
    edi = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = esp + 0x54;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042E94Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0042E94C: ;
    eax = ebp + 1;
    MEM8(esp + edi + 0x5C) = 0;
    SET_LO8(ecx, MEM8(eax));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042E96D; /* je: equal / zero */

loc_0042E95D: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042E963: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042E963; /* jne: not equal / not zero */

loc_0042E96D: ;
    ecx = MEM32(esp + 0xA8);
    edx = MEM32(esp + 0x98);
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0042E9A8; /* je: equal / zero */

loc_0042E986: ;
    eax = esp + 0x1C;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042E992u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0042E992: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042E9A1u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042E9A1: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    goto loc_0042E9CA;

loc_0042E9A8: ;
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = 0;
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042E9C5u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042E9C5: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);

loc_0042E9CA: ;
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, 0x0042E9D6u); RECOMP_ABI_CALL(0x0001D044u, sub_0001D044); /* call 0x0001D044 */

loc_0042E9D6: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0042EA40
 * Original: 0x0042EA40 - 0x0042EBA7 (359 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042EA40: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x9C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042EA6C; /* je: equal / zero */

loc_0042EA54: ;
    edx = esp + 0x50;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042EA60: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EA60; /* jne: not equal / not zero */

loc_0042EA6A: ;
    goto loc_0042EA71;

loc_0042EA6C: ;
    MEM8(esp + 0x50) = 0;

loc_0042EA71: ;
    eax = MEM32(esp + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042EA8E; /* je: equal / zero */

loc_0042EA7C: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042EA82: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EA82; /* jne: not equal / not zero */

loc_0042EA8C: ;
    goto loc_0042EA93;

loc_0042EA8E: ;
    MEM8(esp + 0x10) = 0;

loc_0042EA93: ;
    esi = MEM32(esp + 0xA4);
    PUSH32(esp, 0x82BE34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042EAA5u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0042EAA5: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EADE; /* jne: not equal / not zero */

loc_0042EAAE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0042EACC; /* jne: not equal / not zero */

loc_0042EAB4: ;
    edx = esp + 0x50;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042EAC0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EAC0; /* jne: not equal / not zero */

loc_0042EACA: ;
    goto loc_0042EB2D;

loc_0042EACC: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042EAD2: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EAD2; /* jne: not equal / not zero */

loc_0042EADC: ;
    goto loc_0042EB2D;

loc_0042EADE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EAFC; /* jne: not equal / not zero */

loc_0042EAE2: ;
    eax = esi + 1;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0042EAF0;

    /* nop */

loc_0042EAF0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EAF0; /* jne: not equal / not zero */

loc_0042EAFA: ;
    goto loc_0042EB2D;

loc_0042EAFC: ;
    edi = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = esp + 0x54;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042EB0Cu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0042EB0C: ;
    eax = ebp + 1;
    MEM8(esp + edi + 0x5C) = 0;
    SET_LO8(ecx, MEM8(eax));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042EB2D; /* je: equal / zero */

loc_0042EB1D: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042EB23: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EB23; /* jne: not equal / not zero */

loc_0042EB2D: ;
    ecx = MEM32(esp + 0xA8);
    edx = MEM32(esp + 0x98);
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0042EB68; /* je: equal / zero */

loc_0042EB46: ;
    eax = esp + 0x1C;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042EB52u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0042EB52: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042EB61u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042EB61: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    goto loc_0042EB8A;

loc_0042EB68: ;
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = 0;
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042EB85u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042EB85: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);

loc_0042EB8A: ;
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, 0x0042EB96u); RECOMP_ABI_CALL(0x0001C1EEu, sub_0001C1EE); /* call 0x0001C1EE */

loc_0042EB96: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0042EC00
 * Original: 0x0042EC00 - 0x0042ED67 (359 bytes, 133 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EC00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042EC00: ;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x9C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042EC2C; /* je: equal / zero */

loc_0042EC14: ;
    edx = esp + 0x50;
    eax = edi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042EC20: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EC20; /* jne: not equal / not zero */

loc_0042EC2A: ;
    goto loc_0042EC31;

loc_0042EC2C: ;
    MEM8(esp + 0x50) = 0;

loc_0042EC31: ;
    eax = MEM32(esp + 0xA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042EC4E; /* je: equal / zero */

loc_0042EC3C: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042EC42: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EC42; /* jne: not equal / not zero */

loc_0042EC4C: ;
    goto loc_0042EC53;

loc_0042EC4E: ;
    MEM8(esp + 0x10) = 0;

loc_0042EC53: ;
    esi = MEM32(esp + 0xA4);
    PUSH32(esp, 0x82BE34);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0042EC65u); RECOMP_ABI_CALL(0x005CC310u, sub_005CC310); /* call 0x005CC310 */

loc_0042EC65: ;
    ebp = eax;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EC9E; /* jne: not equal / not zero */

loc_0042EC6E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = esi;
    if (CMP_NE(_fa, _fb)) goto loc_0042EC8C; /* jne: not equal / not zero */

loc_0042EC74: ;
    edx = esp + 0x50;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_0042EC80: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EC80; /* jne: not equal / not zero */

loc_0042EC8A: ;
    goto loc_0042ECED;

loc_0042EC8C: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042EC92: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042EC92; /* jne: not equal / not zero */

loc_0042EC9C: ;
    goto loc_0042ECED;

loc_0042EC9E: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042ECBC; /* jne: not equal / not zero */

loc_0042ECA2: ;
    eax = esi + 1;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_0042ECB0;

    /* nop */

loc_0042ECB0: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042ECB0; /* jne: not equal / not zero */

loc_0042ECBA: ;
    goto loc_0042ECED;

loc_0042ECBC: ;
    edi = ebp;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = esp + 0x54;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042ECCCu); RECOMP_ABI_CALL(0x005CBC80u, sub_005CBC80); /* call 0x005CBC80 */

loc_0042ECCC: ;
    eax = ebp + 1;
    MEM8(esp + edi + 0x5C) = 0;
    SET_LO8(ecx, MEM8(eax));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042ECED; /* je: equal / zero */

loc_0042ECDD: ;
    edx = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0042ECE3: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(edx + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042ECE3; /* jne: not equal / not zero */

loc_0042ECED: ;
    ecx = MEM32(esp + 0xA8);
    edx = MEM32(esp + 0x98);
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0042ED28; /* je: equal / zero */

loc_0042ED06: ;
    eax = esp + 0x1C;
    ecx = esp;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042ED12u); RECOMP_ABI_CALL(0x005725B8u, sub_005725B8); /* call 0x005725B8 */

loc_0042ED12: ;
    PUSH32(esp, ecx);
    ecx = esp;
    PUSH32(esp, 0);
    edx = esp + 0x64;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042ED21u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042ED21: ;
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    goto loc_0042ED4A;

loc_0042ED28: ;
    eax = esp;
    PUSH32(esp, ecx);
    MEM32(eax) = 0;
    ecx = esp;
    MEM32(eax) = 0;
    PUSH32(esp, 0);
    eax = esp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042ED45u); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042ED45: ;
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);

loc_0042ED4A: ;
    ecx = MEM32(esp + 0xA8);
    PUSH32(esp, 0x0042ED56u); RECOMP_ABI_CALL(0x0001841Du, sub_0001841D); /* call 0x0001841D */

loc_0042ED56: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, esi);
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0042EDC0
 * Original: 0x0042EDC0 - 0x0042EDE1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EDC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EDC0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042EDDDu); RECOMP_ABI_CALL(0x000140F7u, sub_000140F7); /* call 0x000140F7 */

loc_0042EDDD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0042EDF0
 * Original: 0x0042EDF0 - 0x0042EE11 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EDF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EDF0: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042EE0Du); RECOMP_ABI_CALL(0x00024600u, sub_00024600); /* call 0x00024600 */

loc_0042EE0D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0042EE20
 * Original: 0x0042EE20 - 0x0042EE41 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EE20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EE20: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042EE3Du); RECOMP_ABI_CALL(0x00029C7Cu, sub_00029C7C); /* call 0x00029C7C */

loc_0042EE3D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0042EE50
 * Original: 0x0042EE50 - 0x0042EE71 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EE50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EE50: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042EE6Du); RECOMP_ABI_CALL(0x0001CD56u, sub_0001CD56); /* call 0x0001CD56 */

loc_0042EE6D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0042EE80
 * Original: 0x0042EE80 - 0x0042EEA1 (33 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EE80: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042EE9Du); RECOMP_ABI_CALL(0x0001F88Au, sub_0001F88A); /* call 0x0001F88A */

loc_0042EE9D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0042EEB0
 * Original: 0x0042EEB0 - 0x0042EED3 (35 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EEB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EEB0: ;
    edx = MEM32(ecx + 8);
    eax = ecx + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042EECDu); RECOMP_ABI_CALL(0x000140F7u, sub_000140F7); /* call 0x000140F7 */

loc_0042EECD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042EEE0
 * Original: 0x0042EEE0 - 0x0042EF03 (35 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EEE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EEE0: ;
    edx = MEM32(ecx + 8);
    eax = ecx + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042EEFDu); RECOMP_ABI_CALL(0x00024600u, sub_00024600); /* call 0x00024600 */

loc_0042EEFD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042EF10
 * Original: 0x0042EF10 - 0x0042EF33 (35 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EF10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EF10: ;
    edx = MEM32(ecx + 8);
    eax = ecx + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042EF2Du); RECOMP_ABI_CALL(0x0001F4F2u, sub_0001F4F2); /* call 0x0001F4F2 */

loc_0042EF2D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042EF40
 * Original: 0x0042EF40 - 0x0042EF63 (35 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EF40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EF40: ;
    edx = MEM32(ecx + 8);
    eax = ecx + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042EF5Du); RECOMP_ABI_CALL(0x00029C7Cu, sub_00029C7C); /* call 0x00029C7C */

loc_0042EF5D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042EF70
 * Original: 0x0042EF70 - 0x0042EF93 (35 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EF70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EF70: ;
    edx = MEM32(ecx + 8);
    eax = ecx + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042EF8Du); RECOMP_ABI_CALL(0x0002DCF0u, sub_0002DCF0); /* call 0x0002DCF0 */

loc_0042EF8D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042EFA0
 * Original: 0x0042EFA0 - 0x0042EFC3 (35 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EFA0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EFA0: ;
    edx = MEM32(ecx + 8);
    eax = ecx + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042EFBDu); RECOMP_ABI_CALL(0x00029C7Cu, sub_00029C7C); /* call 0x00029C7C */

loc_0042EFBD: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042EFD0
 * Original: 0x0042EFD0 - 0x0042EFF3 (35 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042EFD0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042EFD0: ;
    edx = MEM32(ecx + 8);
    eax = ecx + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x24);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042EFEDu); RECOMP_ABI_CALL(0x0001CD56u, sub_0001CD56); /* call 0x0001CD56 */

loc_0042EFED: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042F000
 * Original: 0x0042F000 - 0x0042F023 (35 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F000: ;
    edx = MEM32(ecx + 8);
    eax = ecx + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(esp + 8);
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0042F01Du); RECOMP_ABI_CALL(0x0001F88Au, sub_0001F88A); /* call 0x0001F88A */

loc_0042F01D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042F030
 * Original: 0x0042F030 - 0x0042F053 (35 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F030(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0042F030: ;
    edx = MEM32(ecx + 8);
    eax = ecx + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(ecx + 0x20);
    ecx = MEM32(esp + 8);
    PUSH32(esp, edx);
    edx = MEM32(ecx + 4);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042F04Du); RECOMP_ABI_CALL(0x0001F88Au, sub_0001F88A); /* call 0x0001F88A */

loc_0042F04D: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042F060
 * Original: 0x0042F060 - 0x0042F112 (178 bytes, 66 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F060: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFEu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042F10E; /* ja: above (unsigned >) */

loc_0042F075: ;
    ecx = ZX8(MEM8(ecx + 0x42F134));
    { uint32_t _jt = MEM32(ecx * 4 + 0x42F114); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0042F083u) goto loc_0042F083;
    if (_jt == 0x0042F08Fu) goto loc_0042F08F;
    if (_jt == 0x0042F09Bu) goto loc_0042F09B;
    if (_jt == 0x0042F0AEu) goto loc_0042F0AE;
    if (_jt == 0x0042F0C7u) goto loc_0042F0C7;
    if (_jt == 0x0042F0E0u) goto loc_0042F0E0;
    if (_jt == 0x0042F0F9u) goto loc_0042F0F9;
    if (_jt == 0x0042F10Eu) goto loc_0042F10E;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042F083: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0042F08Bu); RECOMP_ABI_CALL(0x00014903u, sub_00014903); /* call 0x00014903 */

loc_0042F08B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0042F08F: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0042F097u); RECOMP_ABI_CALL(0x0001C243u, sub_0001C243); /* call 0x0001C243 */

loc_0042F097: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0042F09B: ;
    edx = MEM32(eax + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0042F0A4u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0042F0A4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = eax;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0042F0AE: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F0BB; /* je: equal / zero */

loc_0042F0B6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F10E; /* jne: not equal / not zero */

loc_0042F0BB: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0042F0C3u); RECOMP_ABI_CALL(0x00030B99u, sub_00030B99); /* call 0x00030B99 */

loc_0042F0C3: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0042F0C7: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F0D4; /* je: equal / zero */

loc_0042F0CF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F10E; /* jne: not equal / not zero */

loc_0042F0D4: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0042F0DCu); RECOMP_ABI_CALL(0x0002148Cu, sub_0002148C); /* call 0x0002148C */

loc_0042F0DC: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0042F0E0: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F0ED; /* je: equal / zero */

loc_0042F0E8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F10E; /* jne: not equal / not zero */

loc_0042F0ED: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0042F0F5u); RECOMP_ABI_CALL(0x0002A5A0u, sub_0002A5A0); /* call 0x0002A5A0 */

loc_0042F0F5: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0042F0F9: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F106; /* je: equal / zero */

loc_0042F101: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F10E; /* jne: not equal / not zero */

loc_0042F106: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0042F10Eu); RECOMP_ABI_CALL(0x00023CD2u, sub_00023CD2); /* call 0x00023CD2 */

loc_0042F10E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042F112
 * Original: 0x0042F112 - 0x0042F232 (288 bytes, 1 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F112(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F112: ;
    edi = edi;

    g_seh_ebp = ebp; sub_0042F232(); return; /* fallthrough 0x0042F232 */

}

/**
 * sub_0042F232
 * Original: 0x0042F232 - 0x0042F426 (500 bytes, 248 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F232(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F232: ;
    edi = edi;
    { uint32_t _rc = ecx; ecx = 1;
    { int32_t _st = RECOMP_DF_STEP(4);
    while (ecx != 0) {
        _flags = (eax == MEM32(edi));
        edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe scasd */
    ecx = _rc; }
    RECOMP_UNIMPL("int1", 0x0042F235u); /* TODO: int1 */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx + -1560263951) = MEM8(ebx + -1560263951) + HI8(ebx);
    _fa = (uint32_t)(MEM8(ebx + -1560263951)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("int1", 0x0042F23Du); /* TODO: int1 */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(edx, HI8(edx) + LO8(ecx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("int1", 0x0042F241u); /* TODO: int1 */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_HI8(ebx, HI8(ebx) + HI8(eax));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("int1", 0x0042F245u); /* TODO: int1 */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx) = MEM8(ecx) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(esi) = MEM8(esi) + HI8(ecx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(edi + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(edi + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(0xCCCC0607u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xCCCC0607u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042F326; /* ja: above (unsigned >) */

loc_0042F2AE: ;
    edx = ZX8(MEM8(edx + 0x42F348));
    { uint32_t _jt = MEM32(edx * 4 + 0x42F32C); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0042F2BCu) goto loc_0042F2BC;
    if (_jt == 0x0042F2C5u) goto loc_0042F2C5;
    if (_jt == 0x0042F2CEu) goto loc_0042F2CE;
    if (_jt == 0x0042F2E4u) goto loc_0042F2E4;
    if (_jt == 0x0042F2FAu) goto loc_0042F2FA;
    if (_jt == 0x0042F310u) goto loc_0042F310;
    if (_jt == 0x0042F326u) goto loc_0042F326;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042F2BC: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00014903(); return; /* tail jmp 0x00014903 */

loc_0042F2C5: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00032E67(); return; /* tail jmp 0x00032E67 */

loc_0042F2CE: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F2DB; /* je: equal / zero */

loc_0042F2D6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F326; /* jne: not equal / not zero */

loc_0042F2DB: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000183AF(); return; /* tail jmp 0x000183AF */

loc_0042F2E4: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F2F1; /* je: equal / zero */

loc_0042F2EC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F326; /* jne: not equal / not zero */

loc_0042F2F1: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00034A37(); return; /* tail jmp 0x00034A37 */

loc_0042F2FA: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F307; /* je: equal / zero */

loc_0042F302: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F326; /* jne: not equal / not zero */

loc_0042F307: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00028CE6(); return; /* tail jmp 0x00028CE6 */

loc_0042F310: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F31D; /* je: equal / zero */

loc_0042F318: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F326; /* jne: not equal / not zero */

loc_0042F31D: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000217B1(); return; /* tail jmp 0x000217B1 */

loc_0042F326: ;
    esp += 8; return; /* ret 4 */

    edx = ZX8(MEM8(edx + 0x42F448));
    { uint32_t _jt = MEM32(edx * 4 + 0x42F428); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0042F3B0u) goto loc_0042F3B0;
    if (_jt == 0x0042F3B9u) goto loc_0042F3B9;
    if (_jt == 0x0042F3C2u) goto loc_0042F3C2;
    if (_jt == 0x0042F3CBu) goto loc_0042F3CB;
    if (_jt == 0x0042F3E1u) goto loc_0042F3E1;
    if (_jt == 0x0042F3F7u) goto loc_0042F3F7;
    if (_jt == 0x0042F40Du) goto loc_0042F40D;
    if (_jt == 0x0042F423u) goto loc_0042F423;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042F3B0: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00014903(); return; /* tail jmp 0x00014903 */

loc_0042F3B9: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00021A13(); return; /* tail jmp 0x00021A13 */

loc_0042F3C2: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000335F1(); return; /* tail jmp 0x000335F1 */

loc_0042F3CB: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F3D8; /* je: equal / zero */

loc_0042F3D3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F423; /* jne: not equal / not zero */

loc_0042F3D8: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0003616B(); return; /* tail jmp 0x0003616B */

loc_0042F3E1: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F3EE; /* je: equal / zero */

loc_0042F3E9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F423; /* jne: not equal / not zero */

loc_0042F3EE: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000133C3(); return; /* tail jmp 0x000133C3 */

loc_0042F3F7: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F404; /* je: equal / zero */

loc_0042F3FF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F423; /* jne: not equal / not zero */

loc_0042F404: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00036189(); return; /* tail jmp 0x00036189 */

loc_0042F40D: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F41A; /* je: equal / zero */

loc_0042F415: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F423; /* jne: not equal / not zero */

loc_0042F41A: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00036F0D(); return; /* tail jmp 0x00036F0D */

loc_0042F423: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042F426
 * Original: 0x0042F426 - 0x0042F670 (586 bytes, 323 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F426(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F426: ;
    edi = edi;
    ecx = 0xC20042F3u;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + -889175309)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(eax + -889175309) = MEM8(eax + -889175309) + HI8(edx);
    _fa = (uint32_t)(MEM8(eax + -889175309)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(ecx)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    SET_LO8(ecx, LO8(ecx) + HI8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + HI8(edx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(0x230042F4)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(0x230042F4) = MEM8(0x230042F4) + LO8(ecx);
    _fa = (uint32_t)(MEM8(0x230042F4)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("hlt", 0x0042F445u); /* TODO: hlt */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(edx)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(edi + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(edi + eax))) >> 32) & 1);
    eax = eax + MEM32(edi + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(0xCCCC0607u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xCCCC0607u)) >> 32) & 1);
    eax = eax + 0xCCCC0607u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0xFFFFFFFEu)) >> 32) & 1);
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_0042F516; /* ja: above (unsigned >) */

loc_0042F49E: ;
    edx = ZX8(MEM8(edx + 0x42F538));
    { uint32_t _jt = MEM32(edx * 4 + 0x42F51C); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0042F4ACu) goto loc_0042F4AC;
    if (_jt == 0x0042F4B5u) goto loc_0042F4B5;
    if (_jt == 0x0042F4BEu) goto loc_0042F4BE;
    if (_jt == 0x0042F4D4u) goto loc_0042F4D4;
    if (_jt == 0x0042F4EAu) goto loc_0042F4EA;
    if (_jt == 0x0042F500u) goto loc_0042F500;
    if (_jt == 0x0042F516u) goto loc_0042F516;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042F4AC: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00014903(); return; /* tail jmp 0x00014903 */

loc_0042F4B5: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00016B7C(); return; /* tail jmp 0x00016B7C */

loc_0042F4BE: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F4CB; /* je: equal / zero */

loc_0042F4C6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F516; /* jne: not equal / not zero */

loc_0042F4CB: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_000143E0(); return; /* tail jmp 0x000143E0 */

loc_0042F4D4: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F4E1; /* je: equal / zero */

loc_0042F4DC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F516; /* jne: not equal / not zero */

loc_0042F4E1: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002587F(); return; /* tail jmp 0x0002587F */

loc_0042F4EA: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F4F7; /* je: equal / zero */

loc_0042F4F2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F516; /* jne: not equal / not zero */

loc_0042F4F7: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001339B(); return; /* tail jmp 0x0001339B */

loc_0042F500: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F50D; /* je: equal / zero */

loc_0042F508: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F516; /* jne: not equal / not zero */

loc_0042F50D: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00024542(); return; /* tail jmp 0x00024542 */

loc_0042F516: ;
    esp += 8; return; /* ret 4 */

    edx = ZX8(MEM8(edx + 0x42F628));
    { uint32_t _jt = MEM32(edx * 4 + 0x42F60C); /* switch: 7 entries, 7 targets */
    if (_jt == 0x0042F59Cu) goto loc_0042F59C;
    if (_jt == 0x0042F5A5u) goto loc_0042F5A5;
    if (_jt == 0x0042F5AEu) goto loc_0042F5AE;
    if (_jt == 0x0042F5C4u) goto loc_0042F5C4;
    if (_jt == 0x0042F5DAu) goto loc_0042F5DA;
    if (_jt == 0x0042F5F0u) goto loc_0042F5F0;
    if (_jt == 0x0042F606u) goto loc_0042F606;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042F59C: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00014903(); return; /* tail jmp 0x00014903 */

loc_0042F5A5: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00023363(); return; /* tail jmp 0x00023363 */

loc_0042F5AE: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F5BB; /* je: equal / zero */

loc_0042F5B6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F606; /* jne: not equal / not zero */

loc_0042F5BB: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002D2B9(); return; /* tail jmp 0x0002D2B9 */

loc_0042F5C4: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F5D1; /* je: equal / zero */

loc_0042F5CC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F606; /* jne: not equal / not zero */

loc_0042F5D1: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00017A9A(); return; /* tail jmp 0x00017A9A */

loc_0042F5DA: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F5E7; /* je: equal / zero */

loc_0042F5E2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F606; /* jne: not equal / not zero */

loc_0042F5E7: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001B7E9(); return; /* tail jmp 0x0001B7E9 */

loc_0042F5F0: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0042F5FD; /* je: equal / zero */

loc_0042F5F8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0042F606; /* jne: not equal / not zero */

loc_0042F5FD: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0001170D(); return; /* tail jmp 0x0001170D */

loc_0042F606: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0042F670
 * Original: 0x0042F670 - 0x0042F7ED (381 bytes, 167 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0042F670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0042F670: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFEu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xE (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0042F703; /* ja: above (unsigned >) */

loc_0042F682: ;
    edx = ZX8(MEM8(edx + 0x42F728));
    { uint32_t _jt = MEM32(edx * 4 + 0x42F708); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0042F690u) goto loc_0042F690;
    if (_jt == 0x0042F699u) goto loc_0042F699;
    if (_jt == 0x0042F6A2u) goto loc_0042F6A2;
    if (_jt == 0x0042F6ABu) goto loc_0042F6AB;
    if (_jt == 0x0042F6C1u) goto loc_0042F6C1;
    if (_jt == 0x0042F6D7u) goto loc_0042F6D7;
    if (_jt == 0x0042F6EDu) goto loc_0042F6ED;
    if (_jt == 0x0042F703u) goto loc_0042F703;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0042F690: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00014903(); return; /* tail jmp 0x00014903 */

loc_0042F699: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00024678(); return; /* tail jmp 0x00024678 */

loc_0042F6A2: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002F992(); return; /* tail jmp 0x0002F992 */

loc_0042F6AB: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F6B8; /* je: equal / zero */

loc_0042F6B3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F703; /* jne: not equal / not zero */

loc_0042F6B8: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002E7C7(); return; /* tail jmp 0x0002E7C7 */

loc_0042F6C1: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F6CE; /* je: equal / zero */

loc_0042F6C9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F703; /* jne: not equal / not zero */

loc_0042F6CE: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00035DE7(); return; /* tail jmp 0x00035DE7 */

loc_0042F6D7: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F6E4; /* je: equal / zero */

loc_0042F6DF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F703; /* jne: not equal / not zero */

loc_0042F6E4: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_0002204E(); return; /* tail jmp 0x0002204E */

loc_0042F6ED: ;
    edx = MEM32(ecx + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0042F6FA; /* je: equal / zero */

loc_0042F6F5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0042F703; /* jne: not equal / not zero */

loc_0042F6FA: ;
    MEM32(esp + 4) = eax;
    g_seh_ebp = ebp; sub_00034C80(); return; /* tail jmp 0x00034C80 */

loc_0042F703: ;
    esp += 8; return; /* ret 4 */

    eax = MEM32(eax + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    ecx = esp + 0x1C;
    PUSH32(esp, 0x0042F79Du); RECOMP_ABI_CALL(0x00572176u, sub_00572176); /* call 0x00572176 */

loc_0042F79D: ;
    PUSH32(esp, eax);
    ecx = ebx + 0x2C;
    PUSH32(esp, 0x0042F7A6u); RECOMP_ABI_CALL(0x005724DCu, sub_005724DC); /* call 0x005724DC */

loc_0042F7A6: ;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0042F7AFu); RECOMP_ABI_CALL(0x005724CDu, sub_005724CD); /* call 0x005724CD */

loc_0042F7AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042F7B6: ;
    esi = edx;
    edi = 0x838890;
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
    if ((_flags == 0)) goto loc_0042F7DE; /* jne: not equal / not zero */

loc_0042F7C8: ;
    eax = MEM32(eax + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0042F7D1u); RECOMP_ABI_CALL(0x005CC5E1u, sub_005CC5E1); /* call 0x005CC5E1 */

loc_0042F7D1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ebx + 0x28) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_0042F7DE: ;
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0042F7E6u); RECOMP_ABI_CALL(0x0003664Du, sub_0003664D); /* call 0x0003664D */

loc_0042F7E6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}
