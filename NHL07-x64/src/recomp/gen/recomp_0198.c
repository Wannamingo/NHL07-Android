/**
 * nhl_07_recomp - Recompiled code chunk 198
 * Functions: 250 (0x00434920 - 0x004390D0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00434920
 * Original: 0x00434920 - 0x00434937 (23 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434920(void)
{

loc_00434920: ;
    eax = MEM32(ecx + 0x38);
    ecx = MEM32(esp + 4);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(edx + 0x20);
    ecx = MEM32(esp + 8);
    eax = eax + ecx * 8;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00434940
 * Original: 0x00434940 - 0x00434944 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434940(void)
{

loc_00434940: ;
    eax = MEM32(ecx + 0x2C);
    esp += 4; return; /* ret */

}

/**
 * sub_00434950
 * Original: 0x00434950 - 0x0043496A (26 bytes, 8 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434950(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00434950: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00434967; /* je: equal / zero */

loc_0043495B: ;
    edx = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx)); return; /* indirect tail jmp */

loc_00434967: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434970
 * Original: 0x00434970 - 0x00434984 (20 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434970(void)
{

loc_00434970: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(esp + 8);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00434981u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043497Eu); } /* indirect call */
    }

loc_00434981: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00434990
 * Original: 0x00434990 - 0x00434996 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434990(void)
{

loc_00434990: ;
    eax = 0x9097F0;
    esp += 4; return; /* ret */

}

/**
 * sub_004349A0
 * Original: 0x004349A0 - 0x004349A1 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004349A0(void)
{

loc_004349A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004349B0
 * Original: 0x004349B0 - 0x004349D1 (33 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004349B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004349B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x004349B8u); RECOMP_ABI_CALL(0x00017059u, sub_00017059); /* call 0x00017059 */

loc_004349B8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_004349CB; /* je: equal / zero */

loc_004349BF: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004349CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004349C8u); } /* indirect call */
    }

loc_004349CB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004349E0
 * Original: 0x004349E0 - 0x00434BE6 (518 bytes, 189 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004349E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004349E0: ;
    ecx = MEM32(0x907BA0);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004349F9u); RECOMP_ABI_CALL(0x0001AF51u, sub_0001AF51); /* call 0x0001AF51 */

loc_004349F9: ;
    MEM32(esi + 8) = eax;
    ecx = esi + 0x48;
    MEM32(esi + 0x30) = ecx;
    edx = ZX16(MEM16(eax + 0x18));
    ecx = ecx + edx * 8;
    edx = MEM32(esi + 0x20);
    MEM32(esi + 0x34) = ecx;
    eax = ZX16(MEM16(eax + 0x1E));
    eax = ecx + eax * 8;
    ecx = MEM32(esi + 0x1C);
    MEM32(esi + 0x38) = eax;
    eax = eax + ecx * 4;
    MEM32(esi + 0x3C) = eax;
    eax = eax + edx * 4;
    edx = MEM32(esi + 0x24);
    MEM32(esi + 0x40) = eax;
    eax = eax + edx * 4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x44) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00434A8D; /* jle: less or equal (signed <=) */

loc_00434A37: ;
    ecx = MEM32(esi + 0x38);
    edx = MEM32(ecx + ebx * 4);
    eax = ecx + ebx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(esi + 0x38);
    edi = MEM32(edx + ebx * 4);
    eax = MEM32(edi + 4);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00434A59u); RECOMP_ABI_CALL(0x0001AF51u, sub_0001AF51); /* call 0x0001AF51 */

loc_00434A59: ;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x1A);
    ecx = edi + 0x2C;
    MEM32(edi + 0x24) = ecx;
    ecx = ecx + edx * 4;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x1B);
    MEM32(edi + 0x28) = ecx;
    ecx = ecx + edx * 4;
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x19);
    MEM32(edi + 0x1C) = ecx;
    MEM32(edi) = eax;
    eax = ZX16(MEM16(eax + 0x1A));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + edx * 8;
    MEM32(edi + 0x20) = ecx;
    eax = MEM32(esi + 0x1C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00434A37; /* jl: less (signed <) */

loc_00434A8D: ;
    eax = MEM32(esi + 0x20);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00434AD1; /* jle: less or equal (signed <=) */

loc_00434A96: ;
    edx = MEM32(esi + 0x3C);
    edi = MEM32(edx + ebx * 4);
    eax = edx + ebx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    eax = MEM32(esi + 0x3C);
    edi = MEM32(eax + ebx * 4);
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x00434AB8u); RECOMP_ABI_CALL(0x00033FBFu, sub_00033FBF); /* call 0x00033FBF */

loc_00434AB8: ;
    edx = MEM32(edi + 0x18);
    MEM32(edi) = eax;
    eax = edi + 0x24;
    MEM32(edi + 0x20) = eax;
    eax = eax + edx * 4;
    MEM32(edi + 0x1C) = eax;
    eax = MEM32(esi + 0x20);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00434A96; /* jl: less (signed <) */

loc_00434AD1: ;
    ecx = MEM32(esi + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00434AF5; /* jle: less or equal (signed <=) */

loc_00434ADA: ;
    /* nop */

loc_00434AE0: ;
    ecx = MEM32(esi + 0x40);
    edi = MEM32(ecx + eax * 4);
    ecx = ecx + eax * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;
    ecx = MEM32(esi + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00434AE0; /* jl: less (signed <) */

loc_00434AF5: ;
    eax = MEM32(esi + 0x28);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00434B36; /* jle: less or equal (signed <=) */

loc_00434AFE: ;
    edi = edi;

loc_00434B00: ;
    edx = MEM32(esi + 0x44);
    ecx = MEM32(edx + edi * 4);
    eax = edx + edi * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    eax = MEM32(esi + 0x44);
    ebx = MEM32(eax + edi * 4);
    ecx = MEM32(0x907288);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    eax = ebx + 0x14;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00434B2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00434B28u); } /* indirect call */
    }

loc_00434B2B: ;
    MEM32(ebx + 0x54) = eax;
    eax = MEM32(esi + 0x28);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00434B00; /* jl: less (signed <) */

loc_00434B36: ;
    ecx = MEM32(esi + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = MEM32(esi + 0x20);
    eax = edx + ecx * 2;
    eax = eax * 4 + 0x3C;
    if (CMP_LE(_fas, _fbs)) goto loc_00434BC1; /* jle: less or equal (signed <=) */

loc_00434B4A: ;
    edx = MEM32(esi + 0x38);
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, ebp);

loc_00434B56: ;
    ecx = MEM32(esp + 0x1C);
    edi = MEM32(ecx);
    ecx = MEM32(edi);
    edx = (uint32_t)(int32_t)SMEM8(edi + 0x1B);
    ebx = ZX16(MEM16(ecx + 0x1E));
    ebp = edx + ebx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x14) = ebp;
    eax = eax + ebp * 4;
    if (CMP_LE(_fas, _fbs)) goto loc_00434BAA; /* jle: less or equal (signed <=) */

loc_00434B76: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00434B84; /* jge: greater or equal (signed >=) */

loc_00434B7A: ;
    ecx = MEM32(edi);
    ecx = MEM32(ecx + 0x28);
    ecx = MEM32(ecx + edx * 4);
    goto loc_00434B93;

loc_00434B84: ;
    ebp = MEM32(edi + 0x28);
    ecx = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + ecx * 4);
    ebp = MEM32(esp + 0x14);

loc_00434B93: ;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00434BA5; /* je: equal / zero */

loc_00434B9C: ;
    /* nop */

loc_00434BA0: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00434BA0; /* jne: not equal / not zero */

loc_00434BA5: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00434B76; /* jl: less (signed <) */

loc_00434BAA: ;
    edx = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x10) = ecx;
    if ((_fa != 0)) goto loc_00434B56; /* jne: not equal / not zero */

loc_00434BC0: ;
    POP32(esp, ebp);

loc_00434BC1: ;
    edx = MEM32(esi + 4);
    MEM32(esi + 0x2C) = eax;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00434BD3u); RECOMP_ABI_CALL(0x0002402Eu, sub_0002402E); /* call 0x0002402E */

loc_00434BD3: ;
    ecx = ZX8(MEM8(esi + 7));
    edx = MEM32(eax + 0x24);
    POP32(esp, edi);
    MEM32(edx + ecx * 4) = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00434C70
 * Original: 0x00434C70 - 0x00434CC7 (87 bytes, 31 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434C70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00434C70: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x28);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00434C9D; /* jle: less or equal (signed <=) */

loc_00434C7F: ;
    /* nop */

loc_00434C80: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx + 0x54);
    ecx = MEM32(0x907288);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00434C95u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_00434C95: ;
    eax = MEM32(esi + 0x28);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00434C80; /* jl: less (signed <) */

loc_00434C9D: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00434CC2; /* je: equal / zero */

loc_00434CA5: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00434CB4u); RECOMP_ABI_CALL(0x0002402Eu, sub_0002402E); /* call 0x0002402E */

loc_00434CB4: ;
    ecx = ZX8(MEM8(esi + 7));
    edx = MEM32(eax + 0x24);
    MEM32(edx + ecx * 4) = 0;

loc_00434CC2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00434CE0
 * Original: 0x00434CE0 - 0x00434CE5 (5 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434CE0(void)
{

loc_00434CE0: ;
    eax = MEM32(ecx);
    eax = MEM32(eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00434CF0
 * Original: 0x00434CF0 - 0x00434E3A (330 bytes, 115 insns)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434CF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00434CF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00434CFCu); RECOMP_ABI_CALL(0x00017EAAu, sub_00017EAA); /* call 0x00017EAA */

loc_00434CFC: ;
    edi = esi + 0x1C;
    ecx = edi;
    PUSH32(esp, 0x00434D06u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00434D06: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esp + 0x18);
    MEM32(esi + 0x24) = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x3C;
    SET_LO8(edx, 1);
    MEM32(esi + 0x34) = ecx;
    MEM32(esi) = 0x83A0E8;
    MEM32(edi) = 0x83A0C0;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x28) = ebp;
    MEM32(esi + 0x2C) = ebp;
    MEM32(esi + 0x10) = 0xDDCCBB88u;
    MEM8(esi + 0x38) = LO8(edx);
    MEM8(esi + 0x39) = LO8(edx);
    edx = MEM32(eax + 0x20);
    ebx = ecx + edx * 4;
    MEM32(esi + 0x30) = ebx;
    edi = MEM32(eax + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM32(esp + 0x10) = edi;
    ebx = ebx + edi * 8;
    MEM32(esp + 0x18) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_00434E30; /* jle: less or equal (signed <=) */

loc_00434D5E: ;
    edi = edi;

loc_00434D60: ;
    eax = MEM32(esi + 0x20);
    edx = MEM32(eax + 0x38);
    ebp = MEM32(edx + ecx * 4);
    eax = MEM32(esi + 0x30);
    MEM32(eax + ecx * 8) = 0;
    edx = MEM32(esi + 0x30);
    MEM32(edx + ecx * 8 + 4) = ebx;
    edx = MEM32(ebp);
    edx = ZX16(MEM16(edx + 0x1E));
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x1B);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x1C) = eax;
    ebx = ebx + eax * 4;
    if (CMP_LE(_fas, _fbs)) goto loc_00434E23; /* jle: less or equal (signed <=) */

loc_00434D98: ;
    goto loc_00434DA0;

    /* nop */

loc_00434DA0: ;
    eax = MEM32(esi + 0x30);
    eax = MEM32(eax + ecx * 8 + 4);
    MEM32(eax + edx * 4) = ebx;
    edi = MEM32(ebp);
    eax = ZX16(MEM16(edi + 0x1E));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00434DBD; /* jge: greater or equal (signed >=) */

loc_00434DB5: ;
    eax = MEM32(edi + 0x28);
    eax = MEM32(eax + edx * 4);
    goto loc_00434DC7;

loc_00434DBD: ;
    edi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x28);
    eax = MEM32(eax + edi * 4);

loc_00434DC7: ;
    edi = MEM32(esi + 0x30);
    edi = MEM32(edi + ecx * 8 + 4);
    edi = MEM32(edi + edx * 4);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00434DE7; /* jle: less or equal (signed <=) */

loc_00434DD8: ;
    ecx = eax + -1;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(esp + 0x18);

loc_00434DE7: ;
    edi = MEM32(ebp);
    eax = ZX16(MEM16(edi + 0x1E));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00434DFA; /* jge: greater or equal (signed >=) */

loc_00434DF2: ;
    eax = MEM32(edi + 0x28);
    eax = MEM32(eax + edx * 4);
    goto loc_00434E04;

loc_00434DFA: ;
    edi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x28);
    eax = MEM32(eax + edi * 4);

loc_00434E04: ;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00434E16; /* je: equal / zero */

loc_00434E0E: ;
    edi = edi;

loc_00434E10: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 3 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00434E10; /* jne: not equal / not zero */

loc_00434E16: ;
    eax = MEM32(esp + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00434DA0; /* jl: less (signed <) */

loc_00434E1F: ;
    edi = MEM32(esp + 0x10);

loc_00434E23: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_00434D60; /* jl: less (signed <) */

loc_00434E30: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00434E90
 * Original: 0x00434E90 - 0x00434E98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434E90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00434E90: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_00034933(); return; /* tail jmp 0x00034933 */

}

/**
 * sub_00434EA0
 * Original: 0x00434EA0 - 0x0043501F (383 bytes, 138 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00434EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00434EA0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00435016; /* ja: above (unsigned >) */

loc_00434EB5: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x435020); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00434EBCu) goto loc_00434EBC;
    if (_jt == 0x00434EC8u) goto loc_00434EC8;
    if (_jt == 0x00434EE1u) goto loc_00434EE1;
    if (_jt == 0x00434FBCu) goto loc_00434FBC;
    if (_jt == 0x00434FD4u) goto loc_00434FD4;
    if (_jt == 0x00434FEBu) goto loc_00434FEB;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00434EBC: ;
    eax = 0x909808;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00434EC8: ;
    ecx = ZX16(MEM16(eax + 4));
    edx = MEM32(esi + 0x30);
    eax = ZX16(MEM16(eax + 6));
    ecx = MEM32(edx + ecx * 8 + 4);
    eax = MEM32(ecx + eax * 4);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00434EE1: ;
    edx = ZX16(MEM16(eax + 4));
    SET_LO8(eax, MEM8(esi + 0x38));
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ebx) (8-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00434F18; /* je: equal / zero */

loc_00434EF4: ;
    _fa = (uint32_t)(MEM8(esi + 0x39)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x39), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00434F18; /* je: equal / zero */

loc_00434EF9: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00434F10; /* jle: less or equal (signed <=) */

loc_00434F05: ;
    edi = MEM32(esi + 0x34);
    MEM32(edi + eax * 4) = ebx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00434F05; /* jl: less (signed <) */

loc_00434F10: ;
    MEM8(esi + 0x39) = LO8(ebx);
    MEM8(esi + 0x38) = LO8(ebx);
    goto loc_00434F29;

loc_00434F18: ;
    ecx = MEM32(esi + 0x34);
    MEM8(esi + 0x38) = LO8(ebx);
    eax = MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00434FB3; /* jne: not equal / not zero */

loc_00434F29: ;
    eax = MEM32(esi + 0x20);
    ecx = MEM32(eax + 0x3C);
    edi = MEM32(ecx + edx * 4);
    edx = MEM32(edi);
    ecx = MEM32(0x9097F8);
    PUSH32(esp, ebp);
    ebp = ZX16(MEM16(edx + 0x18));
    _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + MEM32(edi + 0x18);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00434F4Fu); RECOMP_ABI_CALL(0x00014944u, sub_00014944); /* call 0x00014944 */

loc_00434F4F: ;
    ecx = MEM32(edi);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ecx + 0x1C);
    ecx = MEM32(0x9097F8);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        eax = _sv >> _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, 0x00434F67u); RECOMP_ABI_CALL(0x00014944u, sub_00014944); /* call 0x00014944 */

loc_00434F67: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00434F8A; /* jle: less or equal (signed <=) */

loc_00434F6F: ;
    /* nop */

loc_00434F70: ;
    edx = MEM32(edi + 0x1C);
    eax = edx + ebx * 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00434F7Eu); RECOMP_ABI_CALL(0x00014BF6u, sub_00014BF6); /* call 0x00014BF6 */

loc_00434F7E: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(ecx + ebx * 4) = eax;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00434F70; /* jl: less (signed <) */

loc_00434F8A: ;
    edx = MEM32(edi);
    ecx = MEM32(edx);
    edx = MEM32(edi + 0x18);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00434FA0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00434F9Eu); } /* indirect call */
    }

loc_00434FA0: ;
    ecx = MEM32(esi + 0x34);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x14);
    MEM32(ecx + edx * 4) = eax;
    MEM8(esi + 0x39) = 1;
    POP32(esp, ebp);

loc_00434FB3: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00434FBC: ;
    eax = ZX16(MEM16(eax + 4));
    esi = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00434FCDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00434FCAu); } /* indirect call */
    }

loc_00434FCD: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00434FD4: ;
    eax = ZX16(MEM16(eax + 4));
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx + 0x40);
    eax = MEM32(edx + eax * 4);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00434FEB: ;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 6), 0 (16-bit) */
    ecx = ZX16(MEM16(eax + 4));
    edx = MEM32(esi + 0x20);
    edx = MEM32(edx + 0x44);
    ecx = MEM32(edx + ecx * 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0043500C; /* je: equal / zero */

loc_00434FFF: ;
    eax = MEM32(ecx + 0x54);
    eax = MEM32(eax + 0x14);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_0043500C: ;
    eax = ecx + 0x54;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00435016: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004350E0
 * Original: 0x004350E0 - 0x0043512F (79 bytes, 28 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004350E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004350E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax + 0x18);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 0x38);
    ecx = MEM32(eax + ecx * 4);
    edx = MEM32(ecx + 0x1C);
    eax = MEM32(esp + 0xC);
    ecx = MEM32(0x9097F4);
    PUSH32(esp, edi);
    edi = edx + eax * 8;
    PUSH32(esp, 0x00435109u); RECOMP_ABI_CALL(0x0002208Fu, sub_0002208F); /* call 0x0002208F */

loc_00435109: ;
    MEM32(eax) = edi;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00435124; /* je: equal / zero */

loc_00435119: ;
    MEM32(ecx + 4) = eax;
    POP32(esp, edi);
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_00435124: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00435150
 * Original: 0x00435150 - 0x00435176 (38 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435150(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435150: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x18);
    eax = MEM32(ecx + 4);
    eax = MEM32(eax + 0x38);
    edx = MEM32(eax + edx * 4);
    eax = MEM32(edx + 0x20);
    edx = MEM32(esp + 8);
    eax = eax + edx * 8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0xFFFFFFE4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFE4u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00435173u); RECOMP_ABI_CALL(0x00014BF6u, sub_00014BF6); /* call 0x00014BF6 */

loc_00435173: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00435180
 * Original: 0x00435180 - 0x004351DB (91 bytes, 36 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435180(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435180: ;
    eax = MEM32(esp + 4);
    edx = ecx;
    ecx = MEM32(eax + 0x18);
    eax = MEM32(edx + 4);
    eax = MEM32(eax + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + ecx * 4);
    eax = MEM32(esp + 0x10);
    ebx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x14);
    ecx = MEM32(edi + ecx * 8 + 4);
    edi = MEM32(ecx + eax * 4);
    ecx = ZX16(MEM16(ebx + 0x1E));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004351B2; /* jge: greater or equal (signed >=) */

loc_004351AD: ;
    ecx = MEM32(ebx + 0x28);
    goto loc_004351B7;

loc_004351B2: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x28);

loc_004351B7: ;
    eax = MEM32(ecx + eax * 4);
    esi = MEM32(esp + 0x18);
    ecx = eax;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
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
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(edx + 0x1C) = 1;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00435200
 * Original: 0x00435200 - 0x00435217 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435200(void)
{

loc_00435200: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 0x38);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(eax + edx * 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x18);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435220
 * Original: 0x00435220 - 0x00435237 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435220(void)
{

loc_00435220: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 0x38);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(eax + edx * 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x19);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435240
 * Original: 0x00435240 - 0x00435257 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435240(void)
{

loc_00435240: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 0x38);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(eax + edx * 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x1A);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435250
 * Original: 0x00435250 - 0x00435257 (7 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435250(void)
{

loc_00435250: ;
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x1A);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435260
 * Original: 0x00435260 - 0x00435277 (23 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435260(void)
{

loc_00435260: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(esp + 4);
    eax = MEM32(eax + 0x38);
    edx = MEM32(ecx + 0x18);
    eax = MEM32(eax + edx * 4);
    eax = (uint32_t)(int32_t)SMEM8(eax + 0x1B);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435280
 * Original: 0x00435280 - 0x0043530E (142 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435280(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435280: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004352C6; /* jne: not equal / not zero */

loc_0043528D: ;
    eax = MEM32(edi + 0x14);
    esi = MEM32(eax + 4);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0043529Fu); RECOMP_ABI_CALL(0x0002402Eu, sub_0002402E); /* call 0x0002402E */

loc_0043529F: ;
    ecx = MEM32(eax + 0x24);
    { uint32_t _sv=(uint32_t)(esi), _sc=(uint32_t)(0x18) & 31u;
      if (_sc) {
        esi = _sv >> _sc;
        _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    esi = MEM32(ecx + esi * 4);
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x004352B3u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_004352B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004352C4; /* je: equal / zero */

loc_004352B7: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    ecx = eax;
    PUSH32(esp, 0x004352C0u); RECOMP_ABI_CALL(0x0002B5F4u, sub_0002B5F4); /* call 0x0002B5F4 */

loc_004352C0: ;
    esi = eax;
    goto loc_004352C6;

loc_004352C4: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_004352C6: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx + 0x30);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebx);
    ebx = eax + ecx * 8;
    ecx = MEM32(0x9097F4);
    PUSH32(esp, 0x004352DFu); RECOMP_ABI_CALL(0x0002208Fu, sub_0002208F); /* call 0x0002208F */

loc_004352DF: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = 0;
    ecx = MEM32(esi + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_004352FF; /* je: equal / zero */

loc_004352F0: ;
    MEM32(ecx + 4) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM8(edi + 0x1C) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_004352FF: ;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM8(edi + 0x1C) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00435340
 * Original: 0x00435340 - 0x00435349 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435340(void)
{

loc_00435340: ;
    eax = ecx;
    MEM32(eax) = 0x83A0F4;
    esp += 4; return; /* ret */

}

/**
 * sub_00435350
 * Original: 0x00435350 - 0x00435356 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435350(void)
{

loc_00435350: ;
    eax = 0xAABBCC22u;
    esp += 4; return; /* ret */

}

/**
 * sub_00435360
 * Original: 0x00435360 - 0x004353AF (79 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435360: ;
    ecx = MEM32(0x9097F4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0043537E; /* je: equal / zero */

loc_0043536D: ;
    PUSH32(esp, 0x00435372u); RECOMP_ABI_CALL(0x0002FFF5u, sub_0002FFF5); /* call 0x0002FFF5 */

loc_00435372: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043537Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043537Bu); } /* indirect call */
    }

loc_0043537E: ;
    ecx = MEM32(0x9097F8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0043539B; /* je: equal / zero */

loc_0043538A: ;
    PUSH32(esp, 0x0043538Fu); RECOMP_ABI_CALL(0x00017059u, sub_00017059); /* call 0x00017059 */

loc_0043538F: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0043539Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435398u); } /* indirect call */
    }

loc_0043539B: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x9097FC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004353ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004353AAu); } /* indirect call */
    }

loc_004353AD: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004353D0
 * Original: 0x004353D0 - 0x0043549C (204 bytes, 73 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004353D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004353D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, ebp);
    ebp = eax + 8;
    MEM32(esp + 4) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00435495; /* jle: less or equal (signed <=) */

loc_004353F2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);

loc_004353F5: ;
    ecx = MEM32(0x907BA0);
    esi = ebp + 4;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00435404u); RECOMP_ABI_CALL(0x0002F613u, sub_0002F613); /* call 0x0002F613 */

loc_00435404: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00435413u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00435413: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x5DC0);
    ebx = eax;
    PUSH32(esp, 0x00435420u); RECOMP_ABI_CALL(0x0001C9A0u, sub_0001C9A0); /* call 0x0001C9A0 */

loc_00435420: ;
    esi = eax;
    ecx = MEM32(esi);
    eax = esi + 4;
    edx = eax;
    edi = eax + ecx * 4;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0043543F; /* jle: less or equal (signed <=) */

loc_00435435: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx + eax * 4) = MEM32(edx + eax * 4) + esi;
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00435435; /* jl: less (signed <) */

loc_0043543F: ;
    ecx = MEM32(0x9097FC);
    PUSH32(esp, ecx);
    ecx = ebx;
    MEM32(ebx + 0x24) = edx;
    PUSH32(esp, 0x00435450u); RECOMP_ABI_CALL(0x000174E1u, sub_000174E1); /* call 0x000174E1 */

loc_00435450: ;
    eax = MEM32(esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00435475; /* jle: less or equal (signed <=) */

loc_00435458: ;
    edx = MEM32(edi);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x00435468u); RECOMP_ABI_CALL(0x0002A4D8u, sub_0002A4D8); /* call 0x0002A4D8 */

loc_00435468: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00435458; /* jl: less (signed <) */

loc_00435475: ;
    edi = MEM32(ebp);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_004353F5; /* jl: less (signed <) */

loc_00435492: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_00435495: ;
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435456
 * Original: 0x00435456 - 0x0043549C (70 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435456(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435456: ;
    if (_flags /* jle: less or equal (signed <=) */) goto loc_00435475;

loc_00435458: ;
    edx = MEM32(edi);
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x00435468u); RECOMP_ABI_CALL(0x0002A4D8u, sub_0002A4D8); /* call 0x0002A4D8 */

loc_00435468: ;
    edx = MEM32(esp + 0x18);
    eax = MEM32(esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00435458; /* jl: less (signed <) */

loc_00435475: ;
    edi = MEM32(ebp);
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + edi;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_004353F5(); return; } /* jl: less (signed <) */

loc_00435492: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004354D0
 * Original: 0x004354D0 - 0x0043557D (173 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004354D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004354D0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    esi = edi + 8;
    MEM32(esp + 8) = esi;
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_00435575; /* jle: less or equal (signed <=) */

loc_004354F3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);

loc_004354F5: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x5DC0);
    PUSH32(esp, 0x00435503u); RECOMP_ABI_CALL(0x0001C9A0u, sub_0001C9A0); /* call 0x0001C9A0 */

loc_00435503: ;
    ebx = eax;
    eax = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0043554C; /* jle: less or equal (signed <=) */

loc_00435510: ;
    esi = MEM32(ebx + ebp * 4 + 4);
    eax = MEM32(esi + 0x28);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0043553D; /* jle: less or equal (signed <=) */

loc_0043551D: ;
    /* nop */

loc_00435520: ;
    eax = MEM32(esi + 0x44);
    ecx = MEM32(eax + edi * 4);
    edx = MEM32(ecx + 0x54);
    ecx = MEM32(0x907288);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00435535u); RECOMP_ABI_CALL(0x000237CDu, sub_000237CD); /* call 0x000237CD */

loc_00435535: ;
    eax = MEM32(esi + 0x28);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00435520; /* jl: less (signed <) */

loc_0043553D: ;
    eax = MEM32(ebx);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00435510; /* jl: less (signed <) */

loc_00435544: ;
    esi = MEM32(esp + 0x10);
    edi = MEM32(esp + 0x1C);

loc_0043554C: ;
    ecx = MEM32(0x907BA0);
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043555Bu); RECOMP_ABI_CALL(0x00021883u, sub_00021883); /* call 0x00021883 */

loc_0043555B: ;
    ebx = MEM32(esi);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(edi + 4);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ebx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x10) = esi;
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_004354F5; /* jl: less (signed <) */

loc_00435573: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_00435575: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004355B0
 * Original: 0x004355B0 - 0x00435634 (132 bytes, 47 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004355B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004355B0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x20);
    ebp = esi + 0x1C;
    MEM32(esi) = 0x83A0E8;
    MEM32(ebp) = 0x83A0C0;
    ebx = MEM32(eax + 0x1C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004355E9; /* jle: less or equal (signed <=) */

loc_004355D2: ;
    ecx = MEM32(esi + 0x30);
    eax = MEM32(ecx + edi * 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004355E4; /* je: equal / zero */

loc_004355DC: ;
    PUSH32(esp, eax);
    ecx = ebp;
    PUSH32(esp, 0x004355E4u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_004355E4: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004355D2; /* jl: less (signed <) */

loc_004355E9: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x24) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0043561B; /* je: equal / zero */

loc_004355F7: ;
    goto loc_00435600;

    /* nop */

loc_00435600: ;
    eax = MEM32(esi + 0x28);
    ecx = MEM32(0x9097F4);
    edi = MEM32(eax + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00435612u); RECOMP_ABI_CALL(0x00035306u, sub_00035306); /* call 0x00035306 */

loc_00435612: ;
    eax = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x28) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00435600; /* jne: not equal / not zero */

loc_0043561B: ;
    ecx = ebp;
    MEM32(esi + 0x2C) = 0;
    PUSH32(esp, 0x00435629u); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_00435629: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0002B194(); return; /* tail jmp 0x0002B194 */

}

/**
 * sub_00435660
 * Original: 0x00435660 - 0x004356DD (125 bytes, 51 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435660: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_004356D9; /* ja: above (unsigned >) */

loc_0043566E: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x4356E0); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00435675u) goto loc_00435675;
    if (_jt == 0x0043569Fu) goto loc_0043569F;
    if (_jt == 0x004356B4u) goto loc_004356B4;
    if (_jt == 0x004356D9u) goto loc_004356D9;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00435675: ;
    ecx = ZX16(MEM16(eax + 4));
    eax = ZX16(MEM16(eax + 6));
    edx = MEM32(esi + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0x38);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(edx);
    edx = MEM32(esi + 0x30);
    PUSH32(esp, eax);
    eax = edx + ecx * 8;
    PUSH32(esp, eax);
    ecx = esi + 0x1C;
    PUSH32(esp, 0x0043569Bu); RECOMP_ABI_CALL(0x0001CB8Au, sub_0001CB8A); /* call 0x0001CB8A */

loc_0043569B: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_0043569F: ;
    eax = ZX16(MEM16(eax + 4));
    esi = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x004356B0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004356ADu); } /* indirect call */
    }

loc_004356B0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004356B4: ;
    ecx = MEM32(esi + 0x20);
    edx = MEM32(ecx + 0x34);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax + 4));
    eax = edx + edi * 8;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x004356CAu); RECOMP_ABI_CALL(0x00014BF6u, sub_00014BF6); /* call 0x00014BF6 */

loc_004356CA: ;
    esi = MEM32(esi + 0x24);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004356D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004356D5u); } /* indirect call */
    }

loc_004356D8: ;
    POP32(esp, edi);

loc_004356D9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435720
 * Original: 0x00435720 - 0x004357FD (221 bytes, 96 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435720: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(edi + 0x38) = 1;
    /* nop */

loc_00435730: ;
    eax = MEM32(edi + 0x20);
    ebx = MEM32(eax + 0x1C);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0043576F; /* jle: less or equal (signed <=) */

loc_0043573C: ;
    /* nop */

loc_00435740: ;
    ecx = MEM32(edi + 0x30);
    esi = MEM32(ecx + ebp * 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043576A; /* je: equal / zero */

loc_0043574A: ;
    SET_LO8(eax, MEM8(esi + 0x1C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043576A; /* je: equal / zero */

loc_00435751: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0043575Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435758u); } /* indirect call */
    }

loc_0043575B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xAABBCC22u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xAABBCC22u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043576A; /* jne: not equal / not zero */

loc_00435762: ;
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, 0x0043576Au); RECOMP_ABI_CALL(0x0002C724u, sub_0002C724); /* call 0x0002C724 */

loc_0043576A: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00435740; /* jl: less (signed <) */

loc_0043576F: ;
    esi = MEM32(edi + 0x28);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ebx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004357A9; /* je: equal / zero */

loc_0043577B: ;
    goto loc_00435780;

    /* nop */

loc_00435780: ;
    ecx = MEM32(esi);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0043578Au); RECOMP_ABI_CALL(0x0002374Bu, sub_0002374B); /* call 0x0002374B */

loc_0043578A: ;
    ecx = MEM32(0x9097F4);
    ebp = MEM32(esi + 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00435799u); RECOMP_ABI_CALL(0x00035306u, sub_00035306); /* call 0x00035306 */

loc_00435799: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(edi + 0x28) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_004357A3; /* jne: not equal / not zero */

loc_004357A0: ;
    MEM32(edi + 0x2C) = ebp;

loc_004357A3: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    esi = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_00435780; /* jne: not equal / not zero */

loc_004357A9: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00435730; /* je: equal / zero */

loc_004357AD: ;
    edx = MEM32(edi + 0x20);
    eax = MEM32(edx + 0x1C);
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_004357F2; /* jle: less or equal (signed <=) */

loc_004357BB: ;
    edx = MEM32(edi + 0x30);
    edi = edi;

loc_004357C0: ;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004357CC; /* je: equal / zero */

loc_004357C6: ;
    _fa = (uint32_t)(MEM8(eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x1C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004357E5; /* jne: not equal / not zero */

loc_004357CC: ;
    eax = MEM32(edi + 0x20);
    esi = MEM32(eax + 0x1C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004357C0; /* jl: less (signed <) */

loc_004357DA: ;
    ecx = MEM32(edi + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ecx + 0x1C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_004357E5: ;
    edx = MEM32(edi + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebp);
    MEM8(edx + 0x1C) = LO8(eax);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_004357F2: ;
    eax = MEM32(edi + 0x24);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(eax + 0x1C) = LO8(ebx);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00435840
 * Original: 0x00435840 - 0x0043584E (14 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435840(void)
{

loc_00435840: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00435848u); RECOMP_ABI_CALL(0x0001CBDAu, sub_0001CBDA); /* call 0x0001CBDA */

loc_00435848: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435860
 * Original: 0x00435860 - 0x00435903 (163 bytes, 51 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435860: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x835CB0);
    PUSH32(esp, 0x1C);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00435875u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435873u); } /* indirect call */
    }

loc_00435875: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_00435890; /* je: equal / zero */

loc_0043587D: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, 8);
    ecx = eax;
    PUSH32(esp, 0x00435889u); RECOMP_ABI_CALL(0x0001F8B7u, sub_0001F8B7); /* call 0x0001F8B7 */

loc_00435889: ;
    MEM32(0x9097F4) = eax;
    goto loc_0043589A;

loc_00435890: ;
    MEM32(0x9097F4) = 0;

loc_0043589A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A094);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004358ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004358A9u); } /* indirect call */
    }

loc_004358AB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004358C1; /* je: equal / zero */

loc_004358AF: ;
    ecx = MEM32(edi + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x004358BAu); RECOMP_ABI_CALL(0x0001D067u, sub_0001D067); /* call 0x0001D067 */

loc_004358BA: ;
    MEM32(0x9097F8) = eax;
    goto loc_004358CB;

loc_004358C1: ;
    MEM32(0x9097F8) = 0;

loc_004358CB: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A0AC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004358DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004358DAu); } /* indirect call */
    }

loc_004358DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004358F2; /* je: equal / zero */

loc_004358E0: ;
    MEM32(eax) = 0x83A0F4;
    MEM32(0x9097FC) = eax;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004358F2: ;
    POP32(esp, edi);
    eax = esi;
    MEM32(0x9097FC) = 0;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435930
 * Original: 0x00435930 - 0x00435935 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435930: ;
    g_seh_ebp = ebp; sub_0002C724(); return; /* tail jmp 0x0002C724 */

}

/**
 * sub_00435940
 * Original: 0x00435940 - 0x0043594E (14 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435940(void)
{

loc_00435940: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00435948u); RECOMP_ABI_CALL(0x00035B9Eu, sub_00035B9E); /* call 0x00035B9E */

loc_00435948: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435960
 * Original: 0x00435960 - 0x0043599E (62 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435960: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(MEM32(ecx + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xDDCCBB88u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x10), 0xDDCCBB88u (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00435990; /* je: equal / zero */

loc_00435974: ;
    PUSH32(esp, 0x00435979u); RECOMP_ABI_CALL(0x0002C724u, sub_0002C724); /* call 0x0002C724 */

loc_00435979: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x00435985u); RECOMP_ABI_CALL(0x00027EEFu, sub_00027EEF); /* call 0x00027EEF */

loc_00435985: ;
    ecx = esi;
    PUSH32(esp, 0x0043598Cu); RECOMP_ABI_CALL(0x0002C724u, sub_0002C724); /* call 0x0002C724 */

loc_0043598C: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00435990: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0043599Au); RECOMP_ABI_CALL(0x00027EEFu, sub_00027EEF); /* call 0x00027EEF */

loc_0043599A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004359B0
 * Original: 0x004359B0 - 0x004359C5 (21 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004359B0(void)
{

loc_004359B0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, eax);
    ecx = 0x9097F0;
    PUSH32(esp, 0x004359BFu); RECOMP_ABI_CALL(0x00012BC6u, sub_00012BC6); /* call 0x00012BC6 */

loc_004359BF: ;
    MEM32(0x909800) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_004359D0
 * Original: 0x004359D0 - 0x004359EA (26 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004359D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004359D0: ;
    ecx = MEM32(0x909800);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004359DF; /* je: equal / zero */

loc_004359DA: ;
    PUSH32(esp, 0x004359DFu); RECOMP_ABI_CALL(0x0001CBDAu, sub_0001CBDA); /* call 0x0001CBDA */

loc_004359DF: ;
    MEM32(0x909800) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_004359F0
 * Original: 0x004359F0 - 0x004359FF (15 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004359F0(void)
{

loc_004359F0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, 0x004359FCu); RECOMP_ABI_CALL(0x0002C724u, sub_0002C724); /* call 0x0002C724 */

loc_004359FC: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435A10
 * Original: 0x00435A10 - 0x00435A1E (14 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435A10: ;
    ecx = MEM32(0x90993C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    esp += 4; return; /* ret */

}

/**
 * sub_00435A30
 * Original: 0x00435A30 - 0x00435A36 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435A30(void)
{

loc_00435A30: ;
    eax = MEM32(0x90993C);
    esp += 4; return; /* ret */

}

/**
 * sub_00435A40
 * Original: 0x00435A40 - 0x00435A7B (59 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435A40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435A40: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x00435A49u); RECOMP_ABI_CALL(0x000181CAu, sub_000181CA); /* call 0x000181CA */

loc_00435A49: ;
    ecx = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x408) = ecx;
    MEM32(esi + 4) = eax;
    MEM32(esi + 0x40C) = eax;
    MEM32(esi + 0x410) = eax;
    edi = esi + 8;
    MEM32(esi) = 0x83A108;
    ecx = 0x100;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435A90
 * Original: 0x00435A90 - 0x00435AA1 (17 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435A90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435A90: ;
    ecx = MEM32(0x90993C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00435A9E; /* je: equal / zero */

loc_00435A9A: ;
    eax = MEM32(ecx);
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax)); return; /* indirect tail jmp */

loc_00435A9E: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435AB0
 * Original: 0x00435AB0 - 0x00435B36 (134 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435AB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435AB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x410);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00435AC4; /* je: equal / zero */

loc_00435ABE: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00435AC4u); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_00435AC4: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00435AED; /* je: equal / zero */

loc_00435ACB: ;
    ecx = MEM32(0x909800);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00435AD7u); RECOMP_ABI_CALL(0x00013206u, sub_00013206); /* call 0x00013206 */

loc_00435AD7: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00435AE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435AE3u); } /* indirect call */
    }

loc_00435AE6: ;
    MEM32(esi + 4) = 0;

loc_00435AED: ;
    eax = MEM32(esi + 0x40C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00435B0D; /* je: equal / zero */

loc_00435AF7: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00435B03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435B00u); } /* indirect call */
    }

loc_00435B03: ;
    MEM32(esi + 0x40C) = 0;

loc_00435B0D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = 0x100;

loc_00435B15: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00435B2D; /* je: equal / zero */

loc_00435B1B: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00435B27u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435B24u); } /* indirect call */
    }

loc_00435B27: ;
    MEM32(esi) = 0;

loc_00435B2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00435B15; /* jne: not equal / not zero */

loc_00435B33: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00435B60
 * Original: 0x00435B60 - 0x00435BD2 (114 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435B60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435B60: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00435B8E; /* je: equal / zero */

loc_00435B6C: ;
    ecx = MEM32(0x909800);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00435B78u); RECOMP_ABI_CALL(0x00013206u, sub_00013206); /* call 0x00013206 */

loc_00435B78: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ebx + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00435B87u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435B84u); } /* indirect call */
    }

loc_00435B87: ;
    MEM32(ebx + 4) = 0;

loc_00435B8E: ;
    esi = MEM32(esp + 0x10);
    ecx = MEM32(0x907BA4);
    edx = MEM32(esi + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A130);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00435BA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435BA3u); } /* indirect call */
    }

loc_00435BA5: ;
    MEM32(ebx + 4) = eax;
    ecx = MEM32(esi + 4);
    esi = MEM32(esi);
    edi = eax;
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
    ecx = MEM32(ebx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(0x909800);
    g_seh_ebp = ebp; sub_00027E09(); return; /* tail jmp 0x00027E09 */

}

/**
 * sub_00435BF0
 * Original: 0x00435BF0 - 0x00435D28 (312 bytes, 107 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435BF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435BF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    eax = MEM32(ebp + 0x410);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00435C0D; /* je: equal / zero */

loc_00435C07: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00435C0Du); RECOMP_ABI_CALL(0x000347B7u, sub_000347B7); /* call 0x000347B7 */

loc_00435C0D: ;
    eax = MEM32(ebp + 0x40C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00435C2D; /* je: equal / zero */

loc_00435C17: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00435C23u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435C20u); } /* indirect call */
    }

loc_00435C23: ;
    MEM32(ebp + 0x40C) = 0;

loc_00435C2D: ;
    ebx = MEM32(esp + 0x1C);
    ecx = MEM32(0x907BA4);
    edx = MEM32(ebx + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A160);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00435C44u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435C42u); } /* indirect call */
    }

loc_00435C44: ;
    MEM32(ebp + 0x40C) = eax;
    ecx = MEM32(ebx + 4);
    esi = MEM32(ebx);
    edi = eax;
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
    eax = MEM32(ebp + 0x40C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00435C75; /* je: equal / zero */

loc_00435C69: ;
    ecx = MEM32(0x909800);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00435C75u); RECOMP_ABI_CALL(0x0002A4D8u, sub_0002A4D8); /* call 0x0002A4D8 */

loc_00435C75: ;
    ecx = MEM32(ebx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_00435CF1; /* jle: less or equal (signed <=) */

loc_00435C82: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00435C88: ;
    eax = MEM32(ebp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00435CA2; /* je: equal / zero */

loc_00435C8F: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00435C9Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435C98u); } /* indirect call */
    }

loc_00435C9B: ;
    MEM32(ebp) = 0;

loc_00435CA2: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ebx);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A148);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00435CB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435CB2u); } /* indirect call */
    }

loc_00435CB4: ;
    MEM32(ebp) = eax;
    ecx = MEM32(ebx);
    esi = MEM32(ebx + 4);
    edi = eax;
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
    eax = MEM32(esp + 0x10);
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
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_00435C88; /* jl: less (signed <) */

loc_00435CE6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x100 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00435D1E; /* jge: greater or equal (signed >=) */

loc_00435CED: ;
    ebp = MEM32(esp + 0x14);

loc_00435CF1: ;
    edi = 0x100;
    esi = ebp + eax * 4 + 8;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    /* nop */

loc_00435D00: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00435D18; /* je: equal / zero */

loc_00435D06: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00435D12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435D0Fu); } /* indirect call */
    }

loc_00435D12: ;
    MEM32(esi) = 0;

loc_00435D18: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00435D00; /* jne: not equal / not zero */

loc_00435D1E: ;
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
 * sub_00435D80
 * Original: 0x00435D80 - 0x00435DA9 (41 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435D80(void)
{

loc_00435D80: ;
    eax = MEM32(ecx + 0x408);
    edx = MEM32(esp + 4);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    eax = MEM32(edx);
    edx = MEM32(ecx + 0x40C);
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    edx = ecx + 0x410;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00435DA6u); RECOMP_ABI_CALL(0x0003076Bu, sub_0003076B); /* call 0x0003076B */

loc_00435DA6: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435DC0
 * Original: 0x00435DC0 - 0x00435E3B (123 bytes, 46 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435DC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435DC0: ;
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x40C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00435E37; /* je: equal / zero */

loc_00435DCD: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00435E36; /* jl: less (signed <) */

loc_00435DD8: ;
    ecx = MEM32(ecx + 8);
    edx = ZX16(MEM16(ecx + 0x1C));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00435E36; /* jge: greater or equal (signed >=) */

loc_00435DE3: ;
    eax = MEM32(ebx + eax * 4 + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00435E01; /* je: equal / zero */

loc_00435DEB: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00435DF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435DF4u); } /* indirect call */
    }

loc_00435DF7: ;
    eax = MEM32(edi);
    MEM32(ebx + eax * 4 + 8) = 0;

loc_00435E01: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(edi + 8);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A148);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00435E15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435E13u); } /* indirect call */
    }

loc_00435E15: ;
    ecx = MEM32(edi);
    MEM32(ebx + ecx * 4 + 8) = eax;
    ecx = MEM32(edi + 8);
    edx = MEM32(edi);
    esi = MEM32(edi + 4);
    edi = MEM32(ebx + edx * 4 + 8);
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
    POP32(esp, esi);

loc_00435E36: ;
    POP32(esp, edi);

loc_00435E37: ;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435E60
 * Original: 0x00435E60 - 0x00435E6B (11 bytes, 3 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435E60(void)
{

loc_00435E60: ;
    eax = MEM32(esp + 8);
    eax = MEM32(ecx + eax * 4 + 8);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00435E70
 * Original: 0x00435E70 - 0x00435E86 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435E70: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A108;
    PUSH32(esp, 0x00435E7Eu); RECOMP_ABI_CALL(0x00020C1Cu, sub_00020C1C); /* call 0x00020C1C */

loc_00435E7E: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001490D(); return; /* tail jmp 0x0001490D */

}

/**
 * sub_00435E90
 * Original: 0x00435E90 - 0x00435EBE (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435E90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A108;
    PUSH32(esp, 0x00435E9Eu); RECOMP_ABI_CALL(0x00020C1Cu, sub_00020C1C); /* call 0x00020C1C */

loc_00435E9E: ;
    ecx = esi;
    PUSH32(esp, 0x00435EA5u); RECOMP_ABI_CALL(0x0001490Du, sub_0001490D); /* call 0x0001490D */

loc_00435EA5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00435EB8; /* je: equal / zero */

loc_00435EAC: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00435EB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435EB5u); } /* indirect call */
    }

loc_00435EB8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435ED0
 * Original: 0x00435ED0 - 0x00435EE5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435ED0(void)
{

loc_00435ED0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A180);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00435EE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435EE2u); } /* indirect call */
    }

loc_00435EE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00435EF0
 * Original: 0x00435EF0 - 0x00435F05 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435EF0(void)
{

loc_00435EF0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A19C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00435F04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435F02u); } /* indirect call */
    }

loc_00435F04: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00435F10
 * Original: 0x00435F10 - 0x00435F19 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435F10(void)
{

loc_00435F10: ;
    eax = ecx;
    MEM32(eax) = 0x83A1B8;
    esp += 4; return; /* ret */

}

/**
 * sub_00435F20
 * Original: 0x00435F20 - 0x00435F34 (20 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00435F20: ;
    MEM32(ecx) = 0x83A1C8;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00435F33; /* je: equal / zero */

loc_00435F2D: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00435F33u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00435F31u); } /* indirect call */
    }

loc_00435F33: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00435F40
 * Original: 0x00435F40 - 0x00435F4A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435F40(void)
{

loc_00435F40: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 4) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00435F50
 * Original: 0x00435F50 - 0x00436066 (278 bytes, 85 insns)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00435F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00435F50: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax);
    edx = MEM32(eax);
    _fb = (uint32_t)(0x81C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x81C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0043605D; /* ja: above (unsigned >) */

loc_00435F6A: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x436068); /* switch: 6 entries, 6 targets */
    if (_jt == 0x00435F71u) goto loc_00435F71;
    if (_jt == 0x00435F99u) goto loc_00435F99;
    if (_jt == 0x00435FC1u) goto loc_00435FC1;
    if (_jt == 0x0043600Fu) goto loc_0043600F;
    if (_jt == 0x0043602Bu) goto loc_0043602B;
    if (_jt == 0x00436055u) goto loc_00436055;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00435F71: ;
    edx = MEM32(eax);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = edx;
    edx = MEM32(edx + eax);
    eax = esp;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x00435F90u); RECOMP_ABI_CALL(0x00033A6Au, sub_00033A6A); /* call 0x00033A6A */

loc_00435F90: ;
    _fb = (uint32_t)(0x81C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x81C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00435F99: ;
    edx = MEM32(eax);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = edx;
    edx = MEM32(edx + eax);
    eax = esp;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x00435FB8u); RECOMP_ABI_CALL(0x00033475u, sub_00033475); /* call 0x00033475 */

loc_00435FB8: ;
    _fb = (uint32_t)(0x81C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x81C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00435FC1: ;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x10) = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x1C) = esi;
    if (CMP_LE(_fas, _fbs)) goto loc_00435FF8; /* jle: less or equal (signed <=) */

loc_00435FE0: ;
    esi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + edx * 8 + 0x24) = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + edx * 8 + 0x20) = esi;
    esi = MEM32(esp + 0x1C);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00435FE0; /* jl: less (signed <) */

loc_00435FF8: ;
    ecx = MEM32(ecx + 8);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00436005u); RECOMP_ABI_CALL(0x00022F62u, sub_00022F62); /* call 0x00022F62 */

loc_00436005: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x81C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x81C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0043600F: ;
    eax = MEM32(eax);
    ecx = MEM32(ecx + 8);
    edx = esp + 0xC;
    PUSH32(esp, edx);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, 0x00436022u); RECOMP_ABI_CALL(0x0003824Au, sub_0003824A); /* call 0x0003824A */

loc_00436022: ;
    _fb = (uint32_t)(0x81C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x81C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0043602B: ;
    edx = MEM32(eax);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 4) = eax;
    eax = esp;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x0043604Cu); RECOMP_ABI_CALL(0x0003463Bu, sub_0003463B); /* call 0x0003463B */

loc_0043604C: ;
    _fb = (uint32_t)(0x81C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x81C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00436055: ;
    ecx = MEM32(ecx + 8);
    PUSH32(esp, 0x0043605Du); RECOMP_ABI_CALL(0x00020C1Cu, sub_00020C1C); /* call 0x00020C1C */

loc_0043605D: ;
    _fb = (uint32_t)(0x81C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x81C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00436066
 * Original: 0x00436066 - 0x00436124 (190 bytes, 129 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436066(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00436066: ;
    edi = edi;
    if (_flags /* jno: not overflow */) goto loc_004360C9;

loc_0043606A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ecx + -1056947361) = MEM8(ecx + -1056947361) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx + -1056947361)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    POP32(esp, edi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edi) = MEM8(edi) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebx) = MEM8(ebx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(ebp + 0x60) = MEM8(ebp + 0x60) + LO8(edx);
    _fa = (uint32_t)(MEM8(ebp + 0x60)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
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
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

loc_004360C9: ;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043611F; /* je: equal / zero */

loc_004360DD: ;
    edx = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    eax = MEM32(ecx);
    edx = esp + 8;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004360EDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004360EBu); } /* indirect call */
    }

loc_004360ED: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043611F; /* je: equal / zero */

loc_004360F5: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x00436106u); RECOMP_ABI_CALL(0x0001C0E0u, sub_0001C0E0); /* call 0x0001C0E0 */

loc_00436106: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx);
    eax = esp + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00436117u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436115u); } /* indirect call */
    }

loc_00436117: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004360F5; /* jne: not equal / not zero */

loc_0043611F: ;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00436140
 * Original: 0x00436140 - 0x00436148 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436140(void)
{

loc_00436140: ;
    MEM32(ecx + 4) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00436150
 * Original: 0x00436150 - 0x00436159 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436150(void)
{

loc_00436150: ;
    eax = ecx;
    MEM32(eax) = 0x83A1DC;
    esp += 4; return; /* ret */

}

/**
 * sub_00436160
 * Original: 0x00436160 - 0x00436178 (24 bytes, 7 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00436160: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436175; /* je: equal / zero */

loc_00436168: ;
    eax = MEM32(ecx);
    MEM32(esp + 4) = 1;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(eax + 0xC)); return; /* indirect tail jmp */

loc_00436175: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00436180
 * Original: 0x00436180 - 0x00436186 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436180(void)
{

loc_00436180: ;
    eax = 0x83A1EC;
    esp += 4; return; /* ret */

}

/**
 * sub_00436190
 * Original: 0x00436190 - 0x004361D8 (72 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00436190: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A1C8;
    MEM32(esi + 4) = 0;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A19C);
    PUSH32(esp, 0x414);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004361B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004361B2u); } /* indirect call */
    }

loc_004361B4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004361CD; /* je: equal / zero */

loc_004361B8: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x004361C4u); RECOMP_ABI_CALL(0x00037656u, sub_00037656); /* call 0x00037656 */

loc_004361C4: ;
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_004361CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_004361F0
 * Original: 0x004361F0 - 0x0043621F (47 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004361F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004361F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x83A1C8;
    if (CMP_EQ(_fa, _fb)) goto loc_00436206; /* je: equal / zero */

loc_00436200: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436206u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436204u); } /* indirect call */
    }

loc_00436206: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00436219; /* je: equal / zero */

loc_0043620D: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00436219u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436216u); } /* indirect call */
    }

loc_00436219: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00436230
 * Original: 0x00436230 - 0x00436242 (18 bytes, 5 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436230(void)
{

loc_00436230: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x83A214;
    MEM32(eax + 4) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00436250
 * Original: 0x00436250 - 0x00436279 (41 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436250(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00436250: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A180);
    PUSH32(esp, 0xC);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436264u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436262u); } /* indirect call */
    }

loc_00436264: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436275; /* je: equal / zero */

loc_00436268: ;
    ecx = MEM32(esi + 4);
    PUSH32(esp, ecx);
    ecx = eax;
    PUSH32(esp, 0x00436273u); RECOMP_ABI_CALL(0x00014048u, sub_00014048); /* call 0x00014048 */

loc_00436273: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00436275: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436290
 * Original: 0x00436290 - 0x004362DD (77 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00436290: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = ecx;
    PUSH32(esp, 8);
    MEM32(esi) = eax;
    MEM32(esi + 4) = edi;
    PUSH32(esp, 0x004362A8u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_004362A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004362C9; /* je: equal / zero */

loc_004362AF: ;
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x004362B7u); RECOMP_ABI_CALL(0x00035DC9u, sub_00035DC9); /* call 0x00035DC9 */

loc_004362B7: ;
    ecx = MEM32(esi);
    MEM32(esi + 8) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004362C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004362BFu); } /* indirect call */
    }

loc_004362C2: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_004362C9: ;
    ecx = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 8) = eax;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x004362D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004362D3u); } /* indirect call */
    }

loc_004362D6: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004362F0
 * Original: 0x004362F0 - 0x0043630C (28 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004362F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004362F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi);
    edx = MEM32(esi + 8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x004362FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004362FBu); } /* indirect call */
    }

loc_004362FE: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00436307u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_00436307: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436320
 * Original: 0x00436320 - 0x00436335 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436320(void)
{

loc_00436320: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A224);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436334u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436332u); } /* indirect call */
    }

loc_00436334: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436340
 * Original: 0x00436340 - 0x00436351 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436340(void)
{

loc_00436340: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436350u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043634Du); } /* indirect call */
    }

loc_00436350: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436360
 * Original: 0x00436360 - 0x00436375 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436360(void)
{

loc_00436360: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A240);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436374u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436372u); } /* indirect call */
    }

loc_00436374: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436380
 * Original: 0x00436380 - 0x00436391 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436380(void)
{

loc_00436380: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436390u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043638Du); } /* indirect call */
    }

loc_00436390: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004363A0
 * Original: 0x004363A0 - 0x004363CA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004363A0(void)
{

loc_004363A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A258;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x004363B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004363B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x732F40);
    ecx = eax;
    PUSH32(esp, 0x004363C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004363C6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004363E0
 * Original: 0x004363E0 - 0x004363F5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004363E0(void)
{

loc_004363E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A25C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004363F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004363F2u); } /* indirect call */
    }

loc_004363F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436400
 * Original: 0x00436400 - 0x00436411 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436400(void)
{

loc_00436400: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436410u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043640Du); } /* indirect call */
    }

loc_00436410: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436420
 * Original: 0x00436420 - 0x0043644A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436420(void)
{

loc_00436420: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A278;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436439u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436439: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x73332C);
    ecx = eax;
    PUSH32(esp, 0x00436446u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436446: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436460
 * Original: 0x00436460 - 0x00436475 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436460(void)
{

loc_00436460: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A27C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436474u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436472u); } /* indirect call */
    }

loc_00436474: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436480
 * Original: 0x00436480 - 0x00436491 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436480(void)
{

loc_00436480: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436490u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043648Du); } /* indirect call */
    }

loc_00436490: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004364A0
 * Original: 0x004364A0 - 0x004364CA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004364A0(void)
{

loc_004364A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A298;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x004364B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004364B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x73345A);
    ecx = eax;
    PUSH32(esp, 0x004364C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004364C6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004364E0
 * Original: 0x004364E0 - 0x004364F5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004364E0(void)
{

loc_004364E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A29C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004364F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004364F2u); } /* indirect call */
    }

loc_004364F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436500
 * Original: 0x00436500 - 0x00436511 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436500(void)
{

loc_00436500: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436510u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043650Du); } /* indirect call */
    }

loc_00436510: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436520
 * Original: 0x00436520 - 0x0043654A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436520(void)
{

loc_00436520: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A2CC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436539u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436539: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7338E3);
    ecx = eax;
    PUSH32(esp, 0x00436546u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436546: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436560
 * Original: 0x00436560 - 0x00436575 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436560(void)
{

loc_00436560: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A2D0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436574u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436572u); } /* indirect call */
    }

loc_00436574: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436580
 * Original: 0x00436580 - 0x00436591 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436580(void)
{

loc_00436580: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436590u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043658Du); } /* indirect call */
    }

loc_00436590: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004365A0
 * Original: 0x004365A0 - 0x004365CA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004365A0(void)
{

loc_004365A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A2F4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x004365B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004365B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x732761);
    ecx = eax;
    PUSH32(esp, 0x004365C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004365C6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004365E0
 * Original: 0x004365E0 - 0x004365F5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004365E0(void)
{

loc_004365E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A2F8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004365F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004365F2u); } /* indirect call */
    }

loc_004365F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436600
 * Original: 0x00436600 - 0x00436611 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436600(void)
{

loc_00436600: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436610u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043660Du); } /* indirect call */
    }

loc_00436610: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436620
 * Original: 0x00436620 - 0x0043664A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436620(void)
{

loc_00436620: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A318;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436639u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436639: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x73394B);
    ecx = eax;
    PUSH32(esp, 0x00436646u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436646: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436660
 * Original: 0x00436660 - 0x00436675 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436660(void)
{

loc_00436660: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A31C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436674u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436672u); } /* indirect call */
    }

loc_00436674: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436680
 * Original: 0x00436680 - 0x00436691 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436680(void)
{

loc_00436680: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436690u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043668Du); } /* indirect call */
    }

loc_00436690: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004366A0
 * Original: 0x004366A0 - 0x004366CA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004366A0(void)
{

loc_004366A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A340;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x004366B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004366B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x733237);
    ecx = eax;
    PUSH32(esp, 0x004366C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004366C6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004366E0
 * Original: 0x004366E0 - 0x004366F5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004366E0(void)
{

loc_004366E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A344);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004366F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004366F2u); } /* indirect call */
    }

loc_004366F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436700
 * Original: 0x00436700 - 0x00436711 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436700(void)
{

loc_00436700: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436710u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043670Du); } /* indirect call */
    }

loc_00436710: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436720
 * Original: 0x00436720 - 0x0043674A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436720(void)
{

loc_00436720: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A368;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436739u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436739: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7338A5);
    ecx = eax;
    PUSH32(esp, 0x00436746u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436746: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436760
 * Original: 0x00436760 - 0x00436775 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436760(void)
{

loc_00436760: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A36C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436774u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436772u); } /* indirect call */
    }

loc_00436774: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436780
 * Original: 0x00436780 - 0x00436791 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436780(void)
{

loc_00436780: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436790u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043678Du); } /* indirect call */
    }

loc_00436790: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004367A0
 * Original: 0x004367A0 - 0x004367CA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004367A0(void)
{

loc_004367A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A38C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x004367B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004367B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x73344F);
    ecx = eax;
    PUSH32(esp, 0x004367C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004367C6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004367E0
 * Original: 0x004367E0 - 0x004367F5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004367E0(void)
{

loc_004367E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A390);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004367F4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004367F2u); } /* indirect call */
    }

loc_004367F4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436800
 * Original: 0x00436800 - 0x00436811 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436800(void)
{

loc_00436800: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436810u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043680Du); } /* indirect call */
    }

loc_00436810: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436820
 * Original: 0x00436820 - 0x0043684A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436820(void)
{

loc_00436820: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A3B8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436839u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436839: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x73306D);
    ecx = eax;
    PUSH32(esp, 0x00436846u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436846: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436860
 * Original: 0x00436860 - 0x00436875 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436860(void)
{

loc_00436860: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A3BC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436874u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436872u); } /* indirect call */
    }

loc_00436874: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00436880
 * Original: 0x00436880 - 0x00436891 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436880(void)
{

loc_00436880: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436890u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043688Du); } /* indirect call */
    }

loc_00436890: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004368A0
 * Original: 0x004368A0 - 0x004368CA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004368A0(void)
{

loc_004368A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A3E4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x004368B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004368B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x732CD8);
    ecx = eax;
    PUSH32(esp, 0x004368C6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004368C6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004368E0
 * Original: 0x004368E0 - 0x004369B9 (217 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004368E0(void)
{

loc_004368E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90995C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004368F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004368EFu); } /* indirect call */
    }

loc_004368F2: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909960);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436904u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436901u); } /* indirect call */
    }

loc_00436904: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909964);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436916u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436913u); } /* indirect call */
    }

loc_00436916: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909940);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436928u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436925u); } /* indirect call */
    }

loc_00436928: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909948);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043693Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436937u); } /* indirect call */
    }

loc_0043693A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909950);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043694Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436949u); } /* indirect call */
    }

loc_0043694C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909968);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043695Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043695Bu); } /* indirect call */
    }

loc_0043695E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909944);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436970u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043696Du); } /* indirect call */
    }

loc_00436970: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909954);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436982u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043697Fu); } /* indirect call */
    }

loc_00436982: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909958);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00436994u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436991u); } /* indirect call */
    }

loc_00436994: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90996C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004369A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004369A3u); } /* indirect call */
    }

loc_004369A6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90994C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004369B8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004369B5u); } /* indirect call */
    }

loc_004369B8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004369F0
 * Original: 0x004369F0 - 0x00436A1A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004369F0(void)
{

loc_004369F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A3E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436A09u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436A09: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x732DF6);
    ecx = eax;
    PUSH32(esp, 0x00436A16u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436A16: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436A30
 * Original: 0x00436A30 - 0x00436A41 (17 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436A30(void)
{

loc_00436A30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx));
    eax = MEM32(esp + 8);
    MEM8(eax) = LO8(edx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00436A50
 * Original: 0x00436A50 - 0x00436A62 (18 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436A50(void)
{

loc_00436A50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 1));
    eax = MEM32(esp + 8);
    MEM8(eax) = LO8(edx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00436A70
 * Original: 0x00436A70 - 0x00436A82 (18 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436A70(void)
{

loc_00436A70: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 2));
    eax = MEM32(esp + 8);
    MEM8(eax) = LO8(edx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00436A90
 * Original: 0x00436A90 - 0x00436AA2 (18 bytes, 6 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436A90(void)
{

loc_00436A90: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    SET_LO8(edx, MEM8(ecx + 3));
    eax = MEM32(esp + 8);
    MEM8(eax) = LO8(edx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00436AB0
 * Original: 0x00436AB0 - 0x00436ADD (45 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436AB0(void)
{

loc_00436AB0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 4);
    eax = MEM32(eax);
    SET_LO8(edx, MEM8(eax));
    eax = MEM32(esp + 0x10);
    MEM8(eax) = LO8(edx);
    SET_LO8(edx, MEM8(edi));
    MEM8(eax + 1) = LO8(edx);
    SET_LO8(edx, MEM8(esi));
    MEM8(eax + 2) = LO8(edx);
    SET_LO8(ecx, MEM8(ecx));
    POP32(esp, edi);
    MEM8(eax + 3) = LO8(ecx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00436AF0
 * Original: 0x00436AF0 - 0x00436B08 (24 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436AF0(void)
{

loc_00436AF0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx));
    MEM8(eax) = LO8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00436B10
 * Original: 0x00436B10 - 0x00436B29 (25 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436B10(void)
{

loc_00436B10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx));
    MEM8(eax + 1) = LO8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00436B30
 * Original: 0x00436B30 - 0x00436B49 (25 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436B30(void)
{

loc_00436B30: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx));
    MEM8(eax + 2) = LO8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00436B50
 * Original: 0x00436B50 - 0x00436B69 (25 bytes, 9 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436B50(void)
{

loc_00436B50: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    edx = MEM32(eax);
    eax = MEM32(esp + 8);
    MEM32(eax) = edx;
    SET_LO8(ecx, MEM8(ecx));
    MEM8(eax + 3) = LO8(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00436B70
 * Original: 0x00436B70 - 0x00436B73 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436B70(void)
{

loc_00436B70: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00436B80
 * Original: 0x00436B80 - 0x00436B83 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436B80(void)
{

loc_00436B80: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00436B90
 * Original: 0x00436B90 - 0x00436B93 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436B90(void)
{

loc_00436B90: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00436BA0
 * Original: 0x00436BA0 - 0x00436F08 (872 bytes, 236 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00436BA0: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A224);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436BB3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436BB1u); } /* indirect call */
    }

loc_00436BB3: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436BE6; /* je: equal / zero */

loc_00436BBB: ;
    MEM32(esi) = 0x83A3E8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436BD1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436BD1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x732DF6);
    ecx = eax;
    PUSH32(esp, 0x00436BDEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436BDE: ;
    MEM32(0x90995C) = esi;
    goto loc_00436BEC;

loc_00436BE6: ;
    MEM32(0x90995C) = edi;

loc_00436BEC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A240);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00436BFDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436BFBu); } /* indirect call */
    }

loc_00436BFD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436C2E; /* je: equal / zero */

loc_00436C03: ;
    MEM32(esi) = 0x83A258;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436C19u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436C19: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x732F40);
    ecx = eax;
    PUSH32(esp, 0x00436C26u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436C26: ;
    MEM32(0x909960) = esi;
    goto loc_00436C34;

loc_00436C2E: ;
    MEM32(0x909960) = edi;

loc_00436C34: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A25C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436C45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436C43u); } /* indirect call */
    }

loc_00436C45: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436C76; /* je: equal / zero */

loc_00436C4B: ;
    MEM32(esi) = 0x83A278;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436C61u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436C61: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x73332C);
    ecx = eax;
    PUSH32(esp, 0x00436C6Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436C6E: ;
    MEM32(0x909964) = esi;
    goto loc_00436C7C;

loc_00436C76: ;
    MEM32(0x909964) = edi;

loc_00436C7C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A27C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00436C8Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436C8Bu); } /* indirect call */
    }

loc_00436C8D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436CBE; /* je: equal / zero */

loc_00436C93: ;
    MEM32(esi) = 0x83A298;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436CA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436CA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x73345A);
    ecx = eax;
    PUSH32(esp, 0x00436CB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436CB6: ;
    MEM32(0x909940) = esi;
    goto loc_00436CC4;

loc_00436CBE: ;
    MEM32(0x909940) = edi;

loc_00436CC4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A29C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436CD5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436CD3u); } /* indirect call */
    }

loc_00436CD5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436D06; /* je: equal / zero */

loc_00436CDB: ;
    MEM32(esi) = 0x83A2CC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436CF1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436CF1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7338E3);
    ecx = eax;
    PUSH32(esp, 0x00436CFEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436CFE: ;
    MEM32(0x909948) = esi;
    goto loc_00436D0C;

loc_00436D06: ;
    MEM32(0x909948) = edi;

loc_00436D0C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A2D0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00436D1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436D1Bu); } /* indirect call */
    }

loc_00436D1D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436D4E; /* je: equal / zero */

loc_00436D23: ;
    MEM32(esi) = 0x83A2F4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436D39u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436D39: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x732761);
    ecx = eax;
    PUSH32(esp, 0x00436D46u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436D46: ;
    MEM32(0x909950) = esi;
    goto loc_00436D54;

loc_00436D4E: ;
    MEM32(0x909950) = edi;

loc_00436D54: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A2F8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436D65u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436D63u); } /* indirect call */
    }

loc_00436D65: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436D96; /* je: equal / zero */

loc_00436D6B: ;
    MEM32(esi) = 0x83A318;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436D81u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436D81: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x73394B);
    ecx = eax;
    PUSH32(esp, 0x00436D8Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436D8E: ;
    MEM32(0x909968) = esi;
    goto loc_00436D9C;

loc_00436D96: ;
    MEM32(0x909968) = edi;

loc_00436D9C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A31C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00436DADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436DABu); } /* indirect call */
    }

loc_00436DAD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436DDE; /* je: equal / zero */

loc_00436DB3: ;
    MEM32(esi) = 0x83A340;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436DC9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436DC9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x733237);
    ecx = eax;
    PUSH32(esp, 0x00436DD6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436DD6: ;
    MEM32(0x909944) = esi;
    goto loc_00436DE4;

loc_00436DDE: ;
    MEM32(0x909944) = edi;

loc_00436DE4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A344);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436DF5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436DF3u); } /* indirect call */
    }

loc_00436DF5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436E26; /* je: equal / zero */

loc_00436DFB: ;
    MEM32(esi) = 0x83A368;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436E11u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436E11: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x7338A5);
    ecx = eax;
    PUSH32(esp, 0x00436E1Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436E1E: ;
    MEM32(0x909954) = esi;
    goto loc_00436E2C;

loc_00436E26: ;
    MEM32(0x909954) = edi;

loc_00436E2C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A36C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00436E3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436E3Bu); } /* indirect call */
    }

loc_00436E3D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436E6E; /* je: equal / zero */

loc_00436E43: ;
    MEM32(esi) = 0x83A38C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436E59u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436E59: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x73344F);
    ecx = eax;
    PUSH32(esp, 0x00436E66u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436E66: ;
    MEM32(0x909958) = esi;
    goto loc_00436E74;

loc_00436E6E: ;
    MEM32(0x909958) = edi;

loc_00436E74: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A390);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00436E85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436E83u); } /* indirect call */
    }

loc_00436E85: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436EB6; /* je: equal / zero */

loc_00436E8B: ;
    MEM32(esi) = 0x83A3B8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436EA1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436EA1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x73306D);
    ecx = eax;
    PUSH32(esp, 0x00436EAEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436EAE: ;
    MEM32(0x90996C) = esi;
    goto loc_00436EBC;

loc_00436EB6: ;
    MEM32(0x90996C) = edi;

loc_00436EBC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A3BC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00436ECDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00436ECBu); } /* indirect call */
    }

loc_00436ECD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00436EFF; /* je: equal / zero */

loc_00436ED3: ;
    MEM32(esi) = 0x83A3E4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x399);
    PUSH32(esp, 0x00436EE9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00436EE9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x732CD8);
    ecx = eax;
    PUSH32(esp, 0x00436EF6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00436EF6: ;
    POP32(esp, edi);
    MEM32(0x90994C) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00436EFF: ;
    MEM32(0x90994C) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00436FF0
 * Original: 0x00436FF0 - 0x00437005 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00436FF0(void)
{

loc_00436FF0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A3EC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00437004u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437002u); } /* indirect call */
    }

loc_00437004: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437010
 * Original: 0x00437010 - 0x00437021 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437010(void)
{

loc_00437010: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437020u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043701Du); } /* indirect call */
    }

loc_00437020: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437030
 * Original: 0x00437030 - 0x00437045 (21 bytes, 7 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437030(void)
{

loc_00437030: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A404);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00437044u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437042u); } /* indirect call */
    }

loc_00437044: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437050
 * Original: 0x00437050 - 0x00437061 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437050(void)
{

loc_00437050: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437060u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043705Du); } /* indirect call */
    }

loc_00437060: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437070
 * Original: 0x00437070 - 0x0043709A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437070(void)
{

loc_00437070: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A418;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00437089u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00437089: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CC27E);
    ecx = eax;
    PUSH32(esp, 0x00437096u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00437096: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004370B0
 * Original: 0x004370B0 - 0x004370C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004370B0(void)
{

loc_004370B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A42C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004370C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004370C2u); } /* indirect call */
    }

loc_004370C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004370D0
 * Original: 0x004370D0 - 0x004370E1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004370D0(void)
{

loc_004370D0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004370E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004370DDu); } /* indirect call */
    }

loc_004370E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004370F0
 * Original: 0x004370F0 - 0x0043711A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004370F0(void)
{

loc_004370F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A430;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00437109u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00437109: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD414);
    ecx = eax;
    PUSH32(esp, 0x00437116u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00437116: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00437130
 * Original: 0x00437130 - 0x00437145 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437130(void)
{

loc_00437130: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A444);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00437144u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437142u); } /* indirect call */
    }

loc_00437144: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437150
 * Original: 0x00437150 - 0x00437161 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437150(void)
{

loc_00437150: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437160u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043715Du); } /* indirect call */
    }

loc_00437160: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437170
 * Original: 0x00437170 - 0x0043719A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437170(void)
{

loc_00437170: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A454;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00437189u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00437189: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD920);
    ecx = eax;
    PUSH32(esp, 0x00437196u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00437196: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004371B0
 * Original: 0x004371B0 - 0x004371C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004371B0(void)
{

loc_004371B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A468);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004371C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004371C2u); } /* indirect call */
    }

loc_004371C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004371D0
 * Original: 0x004371D0 - 0x004371E1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004371D0(void)
{

loc_004371D0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004371E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004371DDu); } /* indirect call */
    }

loc_004371E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004371F0
 * Original: 0x004371F0 - 0x0043721A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004371F0(void)
{

loc_004371F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A478;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00437209u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00437209: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CCF7F);
    ecx = eax;
    PUSH32(esp, 0x00437216u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00437216: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00437230
 * Original: 0x00437230 - 0x00437245 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437230(void)
{

loc_00437230: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A48C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00437244u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437242u); } /* indirect call */
    }

loc_00437244: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437250
 * Original: 0x00437250 - 0x00437261 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437250(void)
{

loc_00437250: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437260u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043725Du); } /* indirect call */
    }

loc_00437260: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437270
 * Original: 0x00437270 - 0x0043729A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437270(void)
{

loc_00437270: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A498;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00437289u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00437289: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CDB18);
    ecx = eax;
    PUSH32(esp, 0x00437296u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00437296: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004372B0
 * Original: 0x004372B0 - 0x004372C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004372B0(void)
{

loc_004372B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A4AC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004372C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004372C2u); } /* indirect call */
    }

loc_004372C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004372D0
 * Original: 0x004372D0 - 0x004372E1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004372D0(void)
{

loc_004372D0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004372E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004372DDu); } /* indirect call */
    }

loc_004372E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004372F0
 * Original: 0x004372F0 - 0x0043731A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004372F0(void)
{

loc_004372F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A4C4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00437309u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00437309: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD51B);
    ecx = eax;
    PUSH32(esp, 0x00437316u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00437316: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00437330
 * Original: 0x00437330 - 0x00437345 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437330(void)
{

loc_00437330: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A4D8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00437344u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437342u); } /* indirect call */
    }

loc_00437344: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437350
 * Original: 0x00437350 - 0x00437361 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437350(void)
{

loc_00437350: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437360u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043735Du); } /* indirect call */
    }

loc_00437360: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437370
 * Original: 0x00437370 - 0x0043739A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437370(void)
{

loc_00437370: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A4F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00437389u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00437389: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD96E);
    ecx = eax;
    PUSH32(esp, 0x00437396u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00437396: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004373B0
 * Original: 0x004373B0 - 0x004373C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004373B0(void)
{

loc_004373B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A504);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004373C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004373C2u); } /* indirect call */
    }

loc_004373C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004373D0
 * Original: 0x004373D0 - 0x004373E1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004373D0(void)
{

loc_004373D0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004373E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004373DDu); } /* indirect call */
    }

loc_004373E0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004373F0
 * Original: 0x004373F0 - 0x0043741A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004373F0(void)
{

loc_004373F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A51C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00437409u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00437409: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CDE1E);
    ecx = eax;
    PUSH32(esp, 0x00437416u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00437416: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00437430
 * Original: 0x00437430 - 0x00437445 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437430(void)
{

loc_00437430: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A530);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00437444u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437442u); } /* indirect call */
    }

loc_00437444: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437450
 * Original: 0x00437450 - 0x00437461 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437450(void)
{

loc_00437450: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437460u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043745Du); } /* indirect call */
    }

loc_00437460: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437470
 * Original: 0x00437470 - 0x00437485 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437470(void)
{

loc_00437470: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A54C);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00437484u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437482u); } /* indirect call */
    }

loc_00437484: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437490
 * Original: 0x00437490 - 0x004374A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437490(void)
{

loc_00437490: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004374A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043749Du); } /* indirect call */
    }

loc_004374A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004374B0
 * Original: 0x004374B0 - 0x004374DA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004374B0(void)
{

loc_004374B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A56C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x004374C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004374C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CCC7D);
    ecx = eax;
    PUSH32(esp, 0x004374D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004374D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004374F0
 * Original: 0x004374F0 - 0x00437505 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004374F0(void)
{

loc_004374F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A570);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00437504u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437502u); } /* indirect call */
    }

loc_00437504: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437510
 * Original: 0x00437510 - 0x00437521 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437510(void)
{

loc_00437510: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437520u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043751Du); } /* indirect call */
    }

loc_00437520: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437530
 * Original: 0x00437530 - 0x0043755A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437530(void)
{

loc_00437530: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A590;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00437549u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00437549: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD295);
    ecx = eax;
    PUSH32(esp, 0x00437556u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00437556: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00437570
 * Original: 0x00437570 - 0x00437585 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437570(void)
{

loc_00437570: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A594);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00437584u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437582u); } /* indirect call */
    }

loc_00437584: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437590
 * Original: 0x00437590 - 0x004375A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437590(void)
{

loc_00437590: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004375A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043759Du); } /* indirect call */
    }

loc_004375A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004375B0
 * Original: 0x004375B0 - 0x004375DA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004375B0(void)
{

loc_004375B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A5B8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x004375C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004375C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD100);
    ecx = eax;
    PUSH32(esp, 0x004375D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004375D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004375F0
 * Original: 0x004375F0 - 0x00437605 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004375F0(void)
{

loc_004375F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A5BC);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00437604u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437602u); } /* indirect call */
    }

loc_00437604: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437610
 * Original: 0x00437610 - 0x00437621 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437610(void)
{

loc_00437610: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437620u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043761Du); } /* indirect call */
    }

loc_00437620: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437630
 * Original: 0x00437630 - 0x0043765A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437630(void)
{

loc_00437630: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A5DC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00437649u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00437649: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CC6EB);
    ecx = eax;
    PUSH32(esp, 0x00437656u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00437656: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00437670
 * Original: 0x00437670 - 0x00437685 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437670(void)
{

loc_00437670: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A5E0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00437684u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437682u); } /* indirect call */
    }

loc_00437684: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437690
 * Original: 0x00437690 - 0x004376A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437690(void)
{

loc_00437690: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004376A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043769Du); } /* indirect call */
    }

loc_004376A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004376B0
 * Original: 0x004376B0 - 0x004376DA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004376B0(void)
{

loc_004376B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A600;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x004376C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004376C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CDC52);
    ecx = eax;
    PUSH32(esp, 0x004376D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004376D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004376F0
 * Original: 0x004376F0 - 0x00437705 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004376F0(void)
{

loc_004376F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A604);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00437704u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437702u); } /* indirect call */
    }

loc_00437704: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437710
 * Original: 0x00437710 - 0x00437721 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437710(void)
{

loc_00437710: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437720u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043771Du); } /* indirect call */
    }

loc_00437720: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437730
 * Original: 0x00437730 - 0x0043775A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437730(void)
{

loc_00437730: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A624;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00437749u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00437749: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CC6DC);
    ecx = eax;
    PUSH32(esp, 0x00437756u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00437756: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00437770
 * Original: 0x00437770 - 0x00437785 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437770(void)
{

loc_00437770: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A628);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00437784u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437782u); } /* indirect call */
    }

loc_00437784: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437790
 * Original: 0x00437790 - 0x004377A1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437790(void)
{

loc_00437790: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004377A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043779Du); } /* indirect call */
    }

loc_004377A0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004377B0
 * Original: 0x004377B0 - 0x004377DA (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004377B0(void)
{

loc_004377B0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A668;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x004377C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004377C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD0A8);
    ecx = eax;
    PUSH32(esp, 0x004377D6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004377D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004377F0
 * Original: 0x004377F0 - 0x00437923 (307 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004377F0(void)
{

loc_004377F0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x9099BC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437802u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004377FFu); } /* indirect call */
    }

loc_00437802: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90998C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437814u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437811u); } /* indirect call */
    }

loc_00437814: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909990);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437826u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437823u); } /* indirect call */
    }

loc_00437826: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x9099AC);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437838u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437835u); } /* indirect call */
    }

loc_00437838: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909984);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043784Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437847u); } /* indirect call */
    }

loc_0043784A: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90999C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043785Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437859u); } /* indirect call */
    }

loc_0043785C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x9099A8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0043786Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043786Bu); } /* indirect call */
    }

loc_0043786E: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x9099A0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437880u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043787Du); } /* indirect call */
    }

loc_00437880: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x9099B0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437892u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043788Fu); } /* indirect call */
    }

loc_00437892: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909980);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004378A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004378A1u); } /* indirect call */
    }

loc_004378A4: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909994);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004378B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004378B3u); } /* indirect call */
    }

loc_004378B6: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x9099A4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004378C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004378C5u); } /* indirect call */
    }

loc_004378C8: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909998);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004378DAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004378D7u); } /* indirect call */
    }

loc_004378DA: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x9099B4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004378ECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004378E9u); } /* indirect call */
    }

loc_004378EC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x90997C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004378FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004378FBu); } /* indirect call */
    }

loc_004378FE: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x909988);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437910u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043790Du); } /* indirect call */
    }

loc_00437910: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x9099B8);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437922u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043791Fu); } /* indirect call */
    }

loc_00437922: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00437970
 * Original: 0x00437970 - 0x0043799A (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437970(void)
{

loc_00437970: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A66C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00437989u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00437989: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CC1AE);
    ecx = eax;
    PUSH32(esp, 0x00437996u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00437996: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004379B0
 * Original: 0x004379B0 - 0x004379CD (29 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004379B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004379B0: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_004379CA; /* jne: not equal / not zero */

loc_004379C0: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x004379CAu); RECOMP_ABI_CALL(0x00028179u, sub_00028179); /* call 0x00028179 */

loc_004379CA: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_004379E0
 * Original: 0x004379E0 - 0x00437A18 (56 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004379E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004379E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x004379F3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004379F0u); } /* indirect call */
    }

loc_004379F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00437A13; /* jle: less or equal (signed <=) */

loc_004379F7: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00437A03u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437A00u); } /* indirect call */
    }

loc_00437A03: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00437A0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437A0Cu); } /* indirect call */
    }

loc_00437A0F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004379F7; /* jl: less (signed <) */

loc_00437A13: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437A30
 * Original: 0x00437A30 - 0x00437A33 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437A30(void)
{

loc_00437A30: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437A40
 * Original: 0x00437A40 - 0x00437A43 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437A40(void)
{

loc_00437A40: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437A50
 * Original: 0x00437A50 - 0x00437A6A (26 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437A50(void)
{

loc_00437A50: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(esp + 4) = eax;
    PUSH32(esp, edx);
    eax = esp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00437A67u); RECOMP_ABI_CALL(0x00013283u, sub_00013283); /* call 0x00013283 */

loc_00437A67: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437A70
 * Original: 0x00437A70 - 0x00437B06 (150 bytes, 69 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00437A70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x24);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x00437A86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437A83u); } /* indirect call */
    }

loc_00437A86: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebp = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00437AAA; /* jne: not equal / not zero */

loc_00437A8C: ;
    PUSH32(esp, ebp);
    ecx = ebx;
    PUSH32(esp, 0x00437A94u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_00437A94: ;
    esi = eax;
    ecx = ebp;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */

loc_00437AAA: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00437ABA; /* jl: less (signed <) */

loc_00437AB2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00437ABA; /* jge: greater or equal (signed >=) */

loc_00437AB6: ;
    MEM8(esi + eax) = 1;

loc_00437ABA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00437ACB; /* jle: less or equal (signed <=) */

loc_00437AC0: ;
    _fa = (uint32_t)(MEM8(eax + esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00437AFB; /* je: equal / zero */

loc_00437AC6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00437AC0; /* jl: less (signed <) */

loc_00437ACB: ;
    eax = MEM32(esp + 0x14);
    eax = MEM32(eax);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00437ADCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437AD9u); } /* indirect call */
    }

loc_00437ADC: ;
    ecx = ebp;
    edx = ecx;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv >> _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0x1C) = 0;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_00437AFB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM8(ebx + 0x1C) = 1;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437B30
 * Original: 0x00437B30 - 0x00437B33 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437B30(void)
{

loc_00437B30: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437B40
 * Original: 0x00437B40 - 0x00437B43 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437B40(void)
{

loc_00437B40: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437B50
 * Original: 0x00437B50 - 0x00437B6D (29 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437B50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437B50: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00437B6A; /* jne: not equal / not zero */

loc_00437B60: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00437B6Au); RECOMP_ABI_CALL(0x0002BB5Du, sub_0002BB5D); /* call 0x0002BB5D */

loc_00437B6A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437B80
 * Original: 0x00437B80 - 0x00437BBA (58 bytes, 27 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437B80: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00437B92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437B8Fu); } /* indirect call */
    }

loc_00437B92: ;
    ecx = MEM32(eax);
    eax = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00437BA3; /* je: equal / zero */

loc_00437B9F: ;
    PUSH32(esp, 0);
    goto loc_00437BA5;

loc_00437BA3: ;
    PUSH32(esp, 1);

loc_00437BA5: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00437BA9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437BA6u); } /* indirect call */
    }

loc_00437BA9: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437BB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437BB3u); } /* indirect call */
    }

loc_00437BB6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437BD0
 * Original: 0x00437BD0 - 0x00437BD3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437BD0(void)
{

loc_00437BD0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437BE0
 * Original: 0x00437BE0 - 0x00437BE3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437BE0(void)
{

loc_00437BE0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437BF0
 * Original: 0x00437BF0 - 0x00437C0D (29 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437BF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437BF0: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00437C0A; /* jne: not equal / not zero */

loc_00437C00: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00437C0Au); RECOMP_ABI_CALL(0x00034429u, sub_00034429); /* call 0x00034429 */

loc_00437C0A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437C20
 * Original: 0x00437C20 - 0x00437C5A (58 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437C20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437C20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00437C32u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437C2Fu); } /* indirect call */
    }

loc_00437C32: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00437C56; /* jl: less (signed <) */

loc_00437C37: ;
    edx = MEM32(edi);
    ecx = MEM32(edx + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(ecx);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x00437C45u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437C42u); } /* indirect call */
    }

loc_00437C45: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00437C55; /* jge: greater or equal (signed >=) */

loc_00437C49: ;
    edi = MEM32(edi);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00437C55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437C52u); } /* indirect call */
    }

loc_00437C55: ;
    POP32(esp, esi);

loc_00437C56: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437C70
 * Original: 0x00437C70 - 0x00437C73 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437C70(void)
{

loc_00437C70: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437C80
 * Original: 0x00437C80 - 0x00437C83 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437C80(void)
{

loc_00437C80: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437C90
 * Original: 0x00437C90 - 0x00437CBE (46 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437C90: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00437CB1; /* je: equal / zero */

loc_00437CA1: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00437CBB; /* jne: not equal / not zero */

loc_00437CA4: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00437CAEu); RECOMP_ABI_CALL(0x00033885u, sub_00033885); /* call 0x00033885 */

loc_00437CAE: ;
    esp += 12; return; /* ret 8 */

loc_00437CB1: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00437CBBu); RECOMP_ABI_CALL(0x0002F055u, sub_0002F055); /* call 0x0002F055 */

loc_00437CBB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437CD0
 * Original: 0x00437CD0 - 0x00437D43 (115 bytes, 52 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437CD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437CD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = MEM32(edi);
    esi = MEM32(ebx + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00437CEB; /* jne: not equal / not zero */

loc_00437CE0: ;
    PUSH32(esp, 8);
    ecx = ebx;
    PUSH32(esp, 0x00437CE9u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_00437CE9: ;
    esi = eax;

loc_00437CEB: ;
    MEM32(esi) = 0;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00437CFEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437CFBu); } /* indirect call */
    }

loc_00437CFE: ;
    eax = MEM32(eax);
    MEM32(esi + 4) = eax;
    MEM8(ebx + 0x1C) = 1;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00437D15u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437D12u); } /* indirect call */
    }

loc_00437D15: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    edi = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ecx = MEM32(edi + 0x10);
    if (CMP_L(_fas, _fbs)) goto loc_00437D35; /* jl: less (signed <) */

loc_00437D23: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00437D2Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437D28u); } /* indirect call */
    }

loc_00437D2B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0x1C) = 0;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00437D35: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437D3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437D3Au); } /* indirect call */
    }

loc_00437D3D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437D60
 * Original: 0x00437D60 - 0x00437DB6 (86 bytes, 43 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437D60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437D60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    ebx = MEM32(edi);
    esi = MEM32(ebx + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00437DB0; /* je: equal / zero */

loc_00437D70: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00437DB0; /* je: equal / zero */

loc_00437D77: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0xC); PUSH32(esp, 0x00437D88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437D85u); } /* indirect call */
    }

loc_00437D88: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    edi = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    ecx = MEM32(edi + 0x10);
    if (CMP_L(_fas, _fbs)) goto loc_00437DA8; /* jl: less (signed <) */

loc_00437D96: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00437D9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437D9Bu); } /* indirect call */
    }

loc_00437D9E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM8(ebx + 0x1C) = 0;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_00437DA8: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437DB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437DADu); } /* indirect call */
    }

loc_00437DB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437DD0
 * Original: 0x00437DD0 - 0x00437DD3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437DD0(void)
{

loc_00437DD0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437DE0
 * Original: 0x00437DE0 - 0x00437DE3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437DE0(void)
{

loc_00437DE0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437DF0
 * Original: 0x00437DF0 - 0x00437E1E (46 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437DF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437DF0: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00437E11; /* je: equal / zero */

loc_00437E01: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00437E1B; /* jne: not equal / not zero */

loc_00437E04: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00437E0Eu); RECOMP_ABI_CALL(0x0002C017u, sub_0002C017); /* call 0x0002C017 */

loc_00437E0E: ;
    esp += 12; return; /* ret 8 */

loc_00437E11: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00437E1Bu); RECOMP_ABI_CALL(0x00029344u, sub_00029344); /* call 0x00029344 */

loc_00437E1B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437E30
 * Original: 0x00437E30 - 0x00437E72 (66 bytes, 31 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437E30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437E30: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    MEM8(edi + 0x1C) = 1;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00437E49u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437E46u); } /* indirect call */
    }

loc_00437E49: ;
    ecx = MEM32(eax);
    esi = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ecx = MEM32(esi + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_00437E65; /* jne: not equal / not zero */

loc_00437E54: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437E5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437E59u); } /* indirect call */
    }

loc_00437E5C: ;
    MEM8(edi + 0x1C) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00437E65: ;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00437E6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437E6Au); } /* indirect call */
    }

loc_00437E6D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437E90
 * Original: 0x00437E90 - 0x00437ED0 (64 bytes, 30 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437E90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = MEM32(edi);
    ecx = MEM32(esi + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00437EA3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437EA0u); } /* indirect call */
    }

loc_00437EA3: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00437EBE; /* jne: not equal / not zero */

loc_00437EA8: ;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00437EB5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437EB2u); } /* indirect call */
    }

loc_00437EB5: ;
    POP32(esp, edi);
    MEM8(esi + 0x1C) = 1;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00437EBE: ;
    edi = MEM32(edi);
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00437ECBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00437EC8u); } /* indirect call */
    }

loc_00437ECB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437EE0
 * Original: 0x00437EE0 - 0x00437EE3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437EE0(void)
{

loc_00437EE0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437EF0
 * Original: 0x00437EF0 - 0x00437EF3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437EF0(void)
{

loc_00437EF0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437F00
 * Original: 0x00437F00 - 0x00437F03 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437F00(void)
{

loc_00437F00: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437F10
 * Original: 0x00437F10 - 0x00437F13 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437F10(void)
{

loc_00437F10: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437F20
 * Original: 0x00437F20 - 0x00437F23 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437F20(void)
{

loc_00437F20: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437F30
 * Original: 0x00437F30 - 0x00437F33 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437F30(void)
{

loc_00437F30: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437F40
 * Original: 0x00437F40 - 0x00437F43 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437F40(void)
{

loc_00437F40: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437F50
 * Original: 0x00437F50 - 0x00437F53 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437F50(void)
{

loc_00437F50: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437F60
 * Original: 0x00437F60 - 0x00437F63 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437F60(void)
{

loc_00437F60: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437F70
 * Original: 0x00437F70 - 0x00437F73 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437F70(void)
{

loc_00437F70: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00437F80
 * Original: 0x00437F80 - 0x00437F83 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437F80(void)
{

loc_00437F80: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00437F90
 * Original: 0x00437F90 - 0x00437FBA (42 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437F90(void)
{

loc_00437F90: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A680;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00437FA9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00437FA9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD64A);
    ecx = eax;
    PUSH32(esp, 0x00437FB6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00437FB6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00437FD0
 * Original: 0x00437FD0 - 0x00437FFE (46 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00437FD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00437FD0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00437FF1; /* jl: less (signed <) */

loc_00437FDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00437FF1; /* jge: greater or equal (signed >=) */

loc_00437FE2: ;
    eax = MEM32(ecx + eax * 4 + 4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    esp += 16; return; /* ret 12 */

loc_00437FF1: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00438010
 * Original: 0x00438010 - 0x0043803B (43 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438010: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00438031; /* jl: less (signed <) */

loc_0043801C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00438031; /* jge: greater or equal (signed >=) */

loc_00438022: ;
    eax = MEM32(ecx + eax * 4 + 4);
    SET_LO8(ecx, MEM8(eax));
    edx = MEM32(esp + 8);
    MEM8(edx) = LO8(ecx);
    esp += 16; return; /* ret 12 */

loc_00438031: ;
    eax = MEM32(esp + 8);
    MEM8(eax) = 0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00438050
 * Original: 0x00438050 - 0x0043807F (47 bytes, 16 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438050: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00438071; /* jl: less (signed <) */

loc_0043805C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00438071; /* jge: greater or equal (signed >=) */

loc_00438062: ;
    eax = MEM32(ecx + eax * 4 + 4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    esp += 16; return; /* ret 12 */

loc_00438071: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00438090
 * Original: 0x00438090 - 0x004380BE (46 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438090: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004380B1; /* jl: less (signed <) */

loc_0043809C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004380B1; /* jge: greater or equal (signed >=) */

loc_004380A2: ;
    eax = MEM32(ecx + eax * 4 + 4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    esp += 16; return; /* ret 12 */

loc_004380B1: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004380D0
 * Original: 0x004380D0 - 0x004380FE (46 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004380D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_004380D0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_004380F1; /* jl: less (signed <) */

loc_004380DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_004380F1; /* jge: greater or equal (signed >=) */

loc_004380E2: ;
    eax = MEM32(ecx + eax * 4 + 4);
    ecx = MEM32(eax);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    esp += 16; return; /* ret 12 */

loc_004380F1: ;
    eax = MEM32(esp + 8);
    MEM32(eax) = 0;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00438110
 * Original: 0x00438110 - 0x00438155 (69 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438110(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438110: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0043813D; /* jl: less (signed <) */

loc_0043811C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0043813D; /* jge: greater or equal (signed >=) */

loc_00438122: ;
    eax = MEM32(ecx + eax * 4 + 4);
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 16; return; /* ret 12 */

loc_0043813D: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00438170
 * Original: 0x00438170 - 0x004381B5 (69 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438170: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0043819D; /* jl: less (signed <) */

loc_0043817C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0043819D; /* jge: greater or equal (signed >=) */

loc_00438182: ;
    eax = MEM32(ecx + eax * 4 + 4);
    edx = MEM32(eax);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ecx + 8) = eax;
    esp += 16; return; /* ret 12 */

loc_0043819D: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_004381D0
 * Original: 0x004381D0 - 0x004381FD (45 bytes, 19 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004381D0(void)
{

loc_004381D0: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    edx = MEM32(eax + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    eax = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = MEM32(esp + 0x10);
    MEM32(eax) = edi;
    esi = MEM32(esi);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx);
    MEM32(eax + 8) = edx;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(eax + 0xC) = ecx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00438210
 * Original: 0x00438210 - 0x004386E0 (1232 bytes, 331 insns)
 * Category: game_network
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438210: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A530);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00438223u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438221u); } /* indirect call */
    }

loc_00438223: ;
    esi = eax;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438256; /* je: equal / zero */

loc_0043822B: ;
    MEM32(esi) = 0x83A680;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00438241u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438241: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD64A);
    ecx = eax;
    PUSH32(esp, 0x0043824Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043824E: ;
    MEM32(0x9099BC) = esi;
    goto loc_0043825C;

loc_00438256: ;
    MEM32(0x9099BC) = edi;

loc_0043825C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A54C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043826Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043826Bu); } /* indirect call */
    }

loc_0043826D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043829E; /* je: equal / zero */

loc_00438273: ;
    MEM32(esi) = 0x83A56C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00438289u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438289: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CCC7D);
    ecx = eax;
    PUSH32(esp, 0x00438296u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00438296: ;
    MEM32(0x90998C) = esi;
    goto loc_004382A4;

loc_0043829E: ;
    MEM32(0x90998C) = edi;

loc_004382A4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A570);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004382B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004382B3u); } /* indirect call */
    }

loc_004382B5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004382E6; /* je: equal / zero */

loc_004382BB: ;
    MEM32(esi) = 0x83A590;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x004382D1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004382D1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD295);
    ecx = eax;
    PUSH32(esp, 0x004382DEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004382DE: ;
    MEM32(0x909990) = esi;
    goto loc_004382EC;

loc_004382E6: ;
    MEM32(0x909990) = edi;

loc_004382EC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A594);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004382FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004382FBu); } /* indirect call */
    }

loc_004382FD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043832E; /* je: equal / zero */

loc_00438303: ;
    MEM32(esi) = 0x83A5B8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00438319u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438319: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD100);
    ecx = eax;
    PUSH32(esp, 0x00438326u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00438326: ;
    MEM32(0x9099AC) = esi;
    goto loc_00438334;

loc_0043832E: ;
    MEM32(0x9099AC) = edi;

loc_00438334: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A5BC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00438345u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438343u); } /* indirect call */
    }

loc_00438345: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438376; /* je: equal / zero */

loc_0043834B: ;
    MEM32(esi) = 0x83A5DC;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00438361u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438361: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CC6EB);
    ecx = eax;
    PUSH32(esp, 0x0043836Eu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_0043836E: ;
    MEM32(0x909984) = esi;
    goto loc_0043837C;

loc_00438376: ;
    MEM32(0x909984) = edi;

loc_0043837C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A5E0);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043838Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043838Bu); } /* indirect call */
    }

loc_0043838D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004383BE; /* je: equal / zero */

loc_00438393: ;
    MEM32(esi) = 0x83A600;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x004383A9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004383A9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CDC52);
    ecx = eax;
    PUSH32(esp, 0x004383B6u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004383B6: ;
    MEM32(0x90999C) = esi;
    goto loc_004383C4;

loc_004383BE: ;
    MEM32(0x90999C) = edi;

loc_004383C4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A604);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004383D5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004383D3u); } /* indirect call */
    }

loc_004383D5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438406; /* je: equal / zero */

loc_004383DB: ;
    MEM32(esi) = 0x83A624;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x004383F1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004383F1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CC6DC);
    ecx = eax;
    PUSH32(esp, 0x004383FEu); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004383FE: ;
    MEM32(0x9099A8) = esi;
    goto loc_0043840C;

loc_00438406: ;
    MEM32(0x9099A8) = edi;

loc_0043840C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A628);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043841Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043841Bu); } /* indirect call */
    }

loc_0043841D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043844E; /* je: equal / zero */

loc_00438423: ;
    MEM32(esi) = 0x83A668;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00438439u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438439: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD0A8);
    ecx = eax;
    PUSH32(esp, 0x00438446u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00438446: ;
    MEM32(0x9099A0) = esi;
    goto loc_00438454;

loc_0043844E: ;
    MEM32(0x9099A0) = edi;

loc_00438454: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A3EC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00438465u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438463u); } /* indirect call */
    }

loc_00438465: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438496; /* je: equal / zero */

loc_0043846B: ;
    MEM32(esi) = 0x83A66C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00438481u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438481: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CC1AE);
    ecx = eax;
    PUSH32(esp, 0x0043848Eu); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043848E: ;
    MEM32(0x9099B0) = esi;
    goto loc_0043849C;

loc_00438496: ;
    MEM32(0x9099B0) = edi;

loc_0043849C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A404);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004384ADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004384ABu); } /* indirect call */
    }

loc_004384AD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004384DE; /* je: equal / zero */

loc_004384B3: ;
    MEM32(esi) = 0x83A418;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x004384C9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004384C9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CC27E);
    ecx = eax;
    PUSH32(esp, 0x004384D6u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_004384D6: ;
    MEM32(0x909980) = esi;
    goto loc_004384E4;

loc_004384DE: ;
    MEM32(0x909980) = edi;

loc_004384E4: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A42C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004384F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004384F3u); } /* indirect call */
    }

loc_004384F5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438526; /* je: equal / zero */

loc_004384FB: ;
    MEM32(esi) = 0x83A430;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00438511u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438511: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD414);
    ecx = eax;
    PUSH32(esp, 0x0043851Eu); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043851E: ;
    MEM32(0x909994) = esi;
    goto loc_0043852C;

loc_00438526: ;
    MEM32(0x909994) = edi;

loc_0043852C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A444);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043853Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043853Bu); } /* indirect call */
    }

loc_0043853D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043856E; /* je: equal / zero */

loc_00438543: ;
    MEM32(esi) = 0x83A454;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00438559u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438559: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD920);
    ecx = eax;
    PUSH32(esp, 0x00438566u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00438566: ;
    MEM32(0x9099A4) = esi;
    goto loc_00438574;

loc_0043856E: ;
    MEM32(0x9099A4) = edi;

loc_00438574: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A468);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00438585u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438583u); } /* indirect call */
    }

loc_00438585: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004385B6; /* je: equal / zero */

loc_0043858B: ;
    MEM32(esi) = 0x83A478;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x004385A1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004385A1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CCF7F);
    ecx = eax;
    PUSH32(esp, 0x004385AEu); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_004385AE: ;
    MEM32(0x909998) = esi;
    goto loc_004385BC;

loc_004385B6: ;
    MEM32(0x909998) = edi;

loc_004385BC: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A48C);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x004385CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004385CBu); } /* indirect call */
    }

loc_004385CD: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004385FE; /* je: equal / zero */

loc_004385D3: ;
    MEM32(esi) = 0x83A498;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x004385E9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004385E9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CDB18);
    ecx = eax;
    PUSH32(esp, 0x004385F6u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_004385F6: ;
    MEM32(0x9099B4) = esi;
    goto loc_00438604;

loc_004385FE: ;
    MEM32(0x9099B4) = edi;

loc_00438604: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A4AC);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00438615u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438613u); } /* indirect call */
    }

loc_00438615: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438646; /* je: equal / zero */

loc_0043861B: ;
    MEM32(esi) = 0x83A4C4;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00438631u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438631: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD51B);
    ecx = eax;
    PUSH32(esp, 0x0043863Eu); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_0043863E: ;
    MEM32(0x90997C) = esi;
    goto loc_0043864C;

loc_00438646: ;
    MEM32(0x90997C) = edi;

loc_0043864C: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A4D8);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0043865Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043865Bu); } /* indirect call */
    }

loc_0043865D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0043868E; /* je: equal / zero */

loc_00438663: ;
    MEM32(esi) = 0x83A4F0;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x00438679u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438679: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CD96E);
    ecx = eax;
    PUSH32(esp, 0x00438686u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00438686: ;
    MEM32(0x909988) = esi;
    goto loc_00438694;

loc_0043868E: ;
    MEM32(0x909988) = edi;

loc_00438694: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A504);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004386A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004386A3u); } /* indirect call */
    }

loc_004386A5: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_004386D7; /* je: equal / zero */

loc_004386AB: ;
    MEM32(esi) = 0x83A51C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0xE6);
    PUSH32(esp, 0x004386C1u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004386C1: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x1CDE1E);
    ecx = eax;
    PUSH32(esp, 0x004386CEu); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_004386CE: ;
    POP32(esp, edi);
    MEM32(0x9099B8) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_004386D7: ;
    MEM32(0x9099B8) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00438820
 * Original: 0x00438820 - 0x00438835 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438820(void)
{

loc_00438820: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x829E44);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00438834u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438832u); } /* indirect call */
    }

loc_00438834: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00438840
 * Original: 0x00438840 - 0x00438851 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438840(void)
{

loc_00438840: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00438850u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043884Du); } /* indirect call */
    }

loc_00438850: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00438860
 * Original: 0x00438860 - 0x00438875 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438860(void)
{

loc_00438860: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A684);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00438874u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438872u); } /* indirect call */
    }

loc_00438874: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00438880
 * Original: 0x00438880 - 0x00438891 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438880(void)
{

loc_00438880: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00438890u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043888Du); } /* indirect call */
    }

loc_00438890: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004388A0
 * Original: 0x004388A0 - 0x004388CA (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004388A0(void)
{

loc_004388A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A694;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x407);
    PUSH32(esp, 0x004388B9u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_004388B9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x80FF4D);
    ecx = eax;
    PUSH32(esp, 0x004388C6u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_004388C6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004388E0
 * Original: 0x004388E0 - 0x00438905 (37 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004388E0(void)
{

loc_004388E0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x9099D0);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004388F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004388EFu); } /* indirect call */
    }

loc_004388F2: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(0x9099D4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00438904u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438901u); } /* indirect call */
    }

loc_00438904: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00438910
 * Original: 0x00438910 - 0x0043893A (42 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438910(void)
{

loc_00438910: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A6A8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x407);
    PUSH32(esp, 0x00438929u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438929: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x80F261);
    ecx = eax;
    PUSH32(esp, 0x00438936u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00438936: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00438950
 * Original: 0x00438950 - 0x0043896D (29 bytes, 9 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438950(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438950: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0043896A; /* jne: not equal / not zero */

loc_00438960: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0043896Au); RECOMP_ABI_CALL(0x000161E0u, sub_000161E0); /* call 0x000161E0 */

loc_0043896A: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00438980
 * Original: 0x00438980 - 0x00438A98 (280 bytes, 102 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00438980: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00438997u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438994u); } /* indirect call */
    }

loc_00438997: ;
    ebp = MEM32(eax);
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = ebp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x004389AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004389A7u); } /* indirect call */
    }

loc_004389AA: ;
    eax = MEM32(eax);
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x004389B8u); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_004389B8: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    edi = eax;
    MEM32(esp + 0x14) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00438A8F; /* je: equal / zero */

loc_004389C6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438A8F; /* je: equal / zero */

loc_004389CE: ;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM16(ecx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0xC), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00438A8F; /* jne: not equal / not zero */

loc_004389DC: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x004389E4u); RECOMP_ABI_CALL(0x000159A7u, sub_000159A7); /* call 0x000159A7 */

loc_004389E4: ;
    ebx = eax;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    MEM32(esp + 0x18) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x004389F5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004389F2u); } /* indirect call */
    }

loc_004389F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00438A8E; /* jne: not equal / not zero */

loc_004389FD: ;
    eax = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = 0x9099E0;
    if (CMP_LE(_fas, _fbs)) goto loc_00438A63; /* jle: less or equal (signed <=) */

loc_00438A0F: ;
    /* nop */

loc_00438A10: ;
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x00438A18u); RECOMP_ABI_CALL(0x000256BDu, sub_000256BD); /* call 0x000256BD */

loc_00438A18: ;
    eax = MEM32(eax + 4);
    ebp = ZX16(MEM16(eax + 2));
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    esi = ebx + 2;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00438A2Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438A2Bu); } /* indirect call */
    }

loc_00438A2E: ;
    edi = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    esi = eax;
    ecx = ebp;
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
    eax = MEM32(esp + 0x14);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
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
    edi = MEM32(esp + 0x18);
    esi = MEM32(esp + 0x2C);
    MEM32(esp + 0x10) = edx;
    if (CMP_L(_fas, _fbs)) goto loc_00438A10; /* jl: less (signed <) */

loc_00438A5F: ;
    ebp = MEM32(esp + 0x1C);

loc_00438A63: ;
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx + 4);
    ecx = esp + 0x20;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x24) = 0x9099E0;
    eax = MEM32(ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00438A81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438A7Fu); } /* indirect call */
    }

loc_00438A81: ;
    esi = MEM32(esi);
    ecx = MEM32(esi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00438A8Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438A8Bu); } /* indirect call */
    }

loc_00438A8E: ;
    POP32(esp, ebx);

loc_00438A8F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00438AE0
 * Original: 0x00438AE0 - 0x00438AE3 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438AE0(void)
{

loc_00438AE0: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00438AF0
 * Original: 0x00438AF0 - 0x00438AF3 (3 bytes, 1 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438AF0(void)
{

loc_00438AF0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00438B00
 * Original: 0x00438B00 - 0x00438B03 (3 bytes, 1 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438B00(void)
{

loc_00438B00: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00438B10
 * Original: 0x00438B10 - 0x00438B25 (21 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438B10(void)
{

loc_00438B10: ;
    eax = MEM32(esp + 4);
    edx = esp + 4;
    PUSH32(esp, edx);
    MEM32(esp + 8) = eax;
    PUSH32(esp, 0x00438B22u); RECOMP_ABI_CALL(0x000374C1u, sub_000374C1); /* call 0x000374C1 */

loc_00438B22: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00438B30
 * Original: 0x00438B30 - 0x00438B6A (58 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438B30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438B30: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = MEM32(eax + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438B65; /* je: equal / zero */

loc_00438B3F: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438B65; /* je: equal / zero */

loc_00438B45: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438B52; /* je: equal / zero */

loc_00438B4C: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00438B52u); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_00438B52: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    ecx = MEM32(edi);
    MEM8(ecx + 0x1C) = 0;

loc_00438B65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00438B80
 * Original: 0x00438B80 - 0x00438C1B (155 bytes, 42 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438B80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438B80: ;
    ecx = MEM32(0x907BA4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x829E44);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00438B92u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438B90u); } /* indirect call */
    }

loc_00438B92: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438BC3; /* je: equal / zero */

loc_00438B98: ;
    MEM32(esi) = 0x83A6A8;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x407);
    PUSH32(esp, 0x00438BAEu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438BAE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x80F261);
    ecx = eax;
    PUSH32(esp, 0x00438BBBu); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00438BBB: ;
    MEM32(0x9099D0) = esi;
    goto loc_00438BCD;

loc_00438BC3: ;
    MEM32(0x9099D0) = 0;

loc_00438BCD: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A684);
    PUSH32(esp, 4);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00438BDEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438BDCu); } /* indirect call */
    }

loc_00438BDE: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438C0F; /* je: equal / zero */

loc_00438BE4: ;
    MEM32(esi) = 0x83A694;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x407);
    PUSH32(esp, 0x00438BFAu); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438BFA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x80FF4D);
    ecx = eax;
    PUSH32(esp, 0x00438C07u); RECOMP_ABI_CALL(0x00035F4Au, sub_00035F4A); /* call 0x00035F4A */

loc_00438C07: ;
    MEM32(0x9099D4) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00438C0F: ;
    MEM32(0x9099D4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00438C50
 * Original: 0x00438C50 - 0x00438C7E (46 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438C50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438C50: ;
    eax = MEM32(esp + 4);
    MEM32(esp + 4) = eax;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00438C71; /* je: equal / zero */

loc_00438C61: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00438C7B; /* jne: not equal / not zero */

loc_00438C64: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00438C6Eu); RECOMP_ABI_CALL(0x0003518Au, sub_0003518A); /* call 0x0003518A */

loc_00438C6E: ;
    esp += 12; return; /* ret 8 */

loc_00438C71: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00438C7Bu); RECOMP_ABI_CALL(0x0001F15Fu, sub_0001F15F); /* call 0x0001F15F */

loc_00438C7B: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00438C90
 * Original: 0x00438C90 - 0x00438CE9 (89 bytes, 36 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438C90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438C90: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = MEM32(eax + 0x24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00438CB5; /* jne: not equal / not zero */

loc_00438C9F: ;
    MEM8(eax + 0x1C) = 0;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00438CB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438CADu); } /* indirect call */
    }

loc_00438CB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_00438CB5: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438CC4; /* je: equal / zero */

loc_00438CBC: ;
    eax = MEM32(esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00438CC4u); RECOMP_ABI_CALL(0x00033551u, sub_00033551); /* call 0x00033551 */

loc_00438CC4: ;
    MEM32(esi) = 0;
    MEM32(esi + 4) = 0;
    ecx = MEM32(edi);
    MEM8(ecx + 0x1C) = 0;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00438CE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438CE1u); } /* indirect call */
    }

loc_00438CE4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00438D00
 * Original: 0x00438D00 - 0x00438D8C (140 bytes, 63 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438D00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438D00: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    ecx = MEM32(edi);
    eax = MEM32(ecx + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00438D7B; /* jne: not equal / not zero */

loc_00438D0E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x00438D16u); RECOMP_ABI_CALL(0x0001F2B3u, sub_0001F2B3); /* call 0x0001F2B3 */

loc_00438D16: ;
    esi = eax;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00438D25u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438D22u); } /* indirect call */
    }

loc_00438D25: ;
    eax = MEM32(eax);
    ecx = esi + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438D39; /* je: equal / zero */

loc_00438D2E: ;
    edx = MEM32(edi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00438D37u); RECOMP_ABI_CALL(0x00025E92u, sub_00025E92); /* call 0x00025E92 */

loc_00438D37: ;
    goto loc_00438D3B;

loc_00438D39: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00438D3B: ;
    MEM32(esi) = eax;
    eax = MEM32(edi);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00438D4Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438D47u); } /* indirect call */
    }

loc_00438D4A: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00438D6A; /* jne: not equal / not zero */

loc_00438D53: ;
    eax = MEM32(edi);
    MEM8(eax + 0x1C) = LO8(ecx);
    edi = MEM32(edi);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx);
    POP32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00438D66u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438D63u); } /* indirect call */
    }

loc_00438D66: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_00438D6A: ;
    edx = MEM32(esi);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00438D74u); RECOMP_ABI_CALL(0x00037C91u, sub_00037C91); /* call 0x00037C91 */

loc_00438D74: ;
    eax = MEM32(edi);
    MEM8(eax + 0x1C) = 1;
    POP32(esp, esi);

loc_00438D7B: ;
    edi = MEM32(edi);
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00438D88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438D85u); } /* indirect call */
    }

loc_00438D88: ;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00438DB0
 * Original: 0x00438DB0 - 0x00438DF1 (65 bytes, 20 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438DB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00438DB0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(esi) = 0x83A6BC;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    MEM32(esi + 0xC) = ecx;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00438DDAu); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_00438DDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438DEB; /* je: equal / zero */

loc_00438DDE: ;
    edx = MEM32(eax + 4);
    _fa = (uint32_t)(MEM16(edx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0xC), 4 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00438DEB; /* jne: not equal / not zero */

loc_00438DE8: ;
    MEM32(esi + 8) = eax;

loc_00438DEB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00438E10
 * Original: 0x00438E10 - 0x00438E89 (121 bytes, 55 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438E10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00438E10: ;
    PUSH32(esp, ecx);
    edx = MEM32(ecx + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0xC);
    MEM32(esp + 8) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_00438E83; /* jne: not equal / not zero */

loc_00438E27: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00438E83; /* je: equal / zero */

loc_00438E2E: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00438E34u); RECOMP_ABI_CALL(0x000159A7u, sub_000159A7); /* call 0x000159A7 */

loc_00438E34: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ebp = eax;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x00438E3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438E3Cu); } /* indirect call */
    }

loc_00438E3F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00438E82; /* jne: not equal / not zero */

loc_00438E43: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 4);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00438E76; /* jle: less or equal (signed <=) */

loc_00438E4D: ;
    /* nop */

loc_00438E50: ;
    ecx = MEM32(edi + 0x10);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00438E5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438E58u); } /* indirect call */
    }

loc_00438E5B: ;
    ecx = MEM32(esp + 0x10);
    ecx = MEM32(ecx + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00438E68u); RECOMP_ABI_CALL(0x000256BDu, sub_000256BD); /* call 0x000256BD */

loc_00438E68: ;
    edx = MEM32(eax + 4);
    eax = ZX16(MEM16(edx + 2));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00438E50; /* jl: less (signed <) */

loc_00438E76: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00438E81u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438E7Eu); } /* indirect call */
    }

loc_00438E81: ;
    POP32(esp, ebx);

loc_00438E82: ;
    POP32(esp, ebp);

loc_00438E83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00438EB0
 * Original: 0x00438EB0 - 0x00438EC5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438EB0(void)
{

loc_00438EB0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A6C4);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00438EC4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438EC2u); } /* indirect call */
    }

loc_00438EC4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00438ED0
 * Original: 0x00438ED0 - 0x00438EE1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438ED0(void)
{

loc_00438ED0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00438EE0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438EDDu); } /* indirect call */
    }

loc_00438EE0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00438EF0
 * Original: 0x00438EF0 - 0x00438F05 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438EF0(void)
{

loc_00438EF0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A6E0);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00438F04u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438F02u); } /* indirect call */
    }

loc_00438F04: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00438F10
 * Original: 0x00438F10 - 0x00438F21 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438F10(void)
{

loc_00438F10: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00438F20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438F1Du); } /* indirect call */
    }

loc_00438F20: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00438F30
 * Original: 0x00438F30 - 0x00438F57 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438F30(void)
{

loc_00438F30: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A704;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00438F46u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438F46: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCBFD3);
    ecx = eax;
    PUSH32(esp, 0x00438F53u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00438F53: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00438F60
 * Original: 0x00438F60 - 0x00438F75 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438F60(void)
{

loc_00438F60: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A708);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00438F74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438F72u); } /* indirect call */
    }

loc_00438F74: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00438F80
 * Original: 0x00438F80 - 0x00438F91 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438F80(void)
{

loc_00438F80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00438F90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438F8Du); } /* indirect call */
    }

loc_00438F90: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00438FA0
 * Original: 0x00438FA0 - 0x00438FC7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438FA0(void)
{

loc_00438FA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A72C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00438FB6u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00438FB6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB603);
    ecx = eax;
    PUSH32(esp, 0x00438FC3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00438FC3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00438FD0
 * Original: 0x00438FD0 - 0x00438FE5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438FD0(void)
{

loc_00438FD0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A730);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00438FE4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438FE2u); } /* indirect call */
    }

loc_00438FE4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00438FF0
 * Original: 0x00438FF0 - 0x00439001 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00438FF0(void)
{

loc_00438FF0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439000u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00438FFDu); } /* indirect call */
    }

loc_00439000: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439010
 * Original: 0x00439010 - 0x00439037 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439010(void)
{

loc_00439010: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A750;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439026u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439026: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCA08D);
    ecx = eax;
    PUSH32(esp, 0x00439033u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_00439033: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00439040
 * Original: 0x00439040 - 0x00439055 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439040(void)
{

loc_00439040: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A754);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x00439054u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00439052u); } /* indirect call */
    }

loc_00439054: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439060
 * Original: 0x00439060 - 0x00439071 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439060(void)
{

loc_00439060: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00439070u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0043906Du); } /* indirect call */
    }

loc_00439070: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00439080
 * Original: 0x00439080 - 0x004390A7 (39 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00439080(void)
{

loc_00439080: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83A76C;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, 0x65);
    PUSH32(esp, 0x00439096u); RECOMP_ABI_CALL(0x0001A4DEu, sub_0001A4DE); /* call 0x0001A4DE */

loc_00439096: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0xCB4F6);
    ecx = eax;
    PUSH32(esp, 0x004390A3u); RECOMP_ABI_CALL(0x00031A12u, sub_00031A12); /* call 0x00031A12 */

loc_004390A3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_004390B0
 * Original: 0x004390B0 - 0x004390C5 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004390B0(void)
{

loc_004390B0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x83A770);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x004390C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004390C2u); } /* indirect call */
    }

loc_004390C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_004390D0
 * Original: 0x004390D0 - 0x004390E1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004390D0(void)
{

loc_004390D0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x004390E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x004390DDu); } /* indirect call */
    }

loc_004390E0: ;
    esp += 4; return; /* ret */

}
