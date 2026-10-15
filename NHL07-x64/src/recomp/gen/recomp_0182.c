/**
 * nhl_07_recomp - Recompiled code chunk 182
 * Functions: 250 (0x003C8F50 - 0x003CE9C0)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003C8F50
 * Original: 0x003C8F50 - 0x003C8F97 (71 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C8F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C8F50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834E44;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x30) = 0x834E2C;
    if (CMP_LE(_fas, _fbs)) goto loc_003C8F8F; /* jle: less or equal (signed <=) */

loc_003C8F67: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C8F7A; /* je: equal / zero */

loc_003C8F6E: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C8F7Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C8F77u); } /* indirect call */
    }

loc_003C8F7A: ;
    MEM32(esi + 0x3C) = 0;
    MEM32(esi + 0x34) = 0;
    MEM32(esi + 0x38) = 0;

loc_003C8F8F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001988B(); return; /* tail jmp 0x0001988B */

}

/**
 * sub_003C8FB0
 * Original: 0x003C8FB0 - 0x003C8FCE (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003C8FB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C8FB0: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x44);
    PUSH32(esp, 0x003C8FBBu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003C8FBB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C8FC9; /* je: equal / zero */

loc_003C8FC2: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0001D47C(); return; /* tail jmp 0x0001D47C */

loc_003C8FC9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003C8FE0
 * Original: 0x003C8FE0 - 0x003C903C (92 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C8FE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C8FE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834E44;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x30) = 0x834E2C;
    if (CMP_LE(_fas, _fbs)) goto loc_003C901F; /* jle: less or equal (signed <=) */

loc_003C8FF7: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C900A; /* je: equal / zero */

loc_003C8FFE: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C900Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C9007u); } /* indirect call */
    }

loc_003C900A: ;
    MEM32(esi + 0x3C) = 0;
    MEM32(esi + 0x34) = 0;
    MEM32(esi + 0x38) = 0;

loc_003C901F: ;
    ecx = esi;
    PUSH32(esp, 0x003C9026u); RECOMP_ABI_CALL(0x0001988Bu, sub_0001988B); /* call 0x0001988B */

loc_003C9026: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C9036; /* je: equal / zero */

loc_003C902D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C9033u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003C9033: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003C9036: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9060
 * Original: 0x003C9060 - 0x003C9067 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9060(void)
{

loc_003C9060: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003C9070
 * Original: 0x003C9070 - 0x003C9092 (34 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9070(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003C9070: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C9080u); RECOMP_ABI_CALL(0x00028EEEu, sub_00028EEE); /* call 0x00028EEE */

loc_003C9080: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003C9087u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C9084u); } /* indirect call */
    }

loc_003C9087: ;
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
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C90A0
 * Original: 0x003C90A0 - 0x003C90B7 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C90A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C90A0: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x834E84;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003C90C0
 * Original: 0x003C90C0 - 0x003C90C4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C90C0(void)
{

loc_003C90C0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003C90D0
 * Original: 0x003C90D0 - 0x003C90D4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C90D0(void)
{

loc_003C90D0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003C90E0
 * Original: 0x003C90E0 - 0x003C90E9 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C90E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C90E0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_003C90F0
 * Original: 0x003C90F0 - 0x003C90F9 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C90F0(void)
{

loc_003C90F0: ;
    eax = ecx;
    MEM32(eax) = 0x834E88;
    esp += 4; return; /* ret */

}

/**
 * sub_003C9100
 * Original: 0x003C9100 - 0x003C9106 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9100(void)
{

loc_003C9100: ;
    eax = 0x834E68;
    esp += 4; return; /* ret */

}

/**
 * sub_003C9110
 * Original: 0x003C9110 - 0x003C9116 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9110(void)
{

loc_003C9110: ;
    eax = 9;
    esp += 4; return; /* ret */

}

/**
 * sub_003C9120
 * Original: 0x003C9120 - 0x003C913F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C9120: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003C9139; /* je: equal / zero */

loc_003C9130: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C9136u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003C9136: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003C9139: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9150
 * Original: 0x003C9150 - 0x003C9170 (32 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9150(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C9150: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C9168; /* jl: less (signed <) */

loc_003C9158: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x54) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C9168; /* jge: greater or equal (signed >=) */

loc_003C915D: ;
    ecx = MEM32(ecx + 0x58);
    eax = ecx + eax * 4;
    eax = MEM32(eax);
    esp += 8; return; /* ret 4 */

loc_003C9168: ;
    ecx = MEM32(ecx + 0x58);
    eax = MEM32(ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9180
 * Original: 0x003C9180 - 0x003C9257 (215 bytes, 78 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9180(void)
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

loc_003C9180: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x2C);
    eax = MEM32(edi + 8);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C91A5; /* jne: not equal / not zero */

loc_003C9197: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003C91A2u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003C91A2: ;
    MEM32(edi + 8) = eax;

loc_003C91A5: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C91C1; /* jne: not equal / not zero */

loc_003C91AF: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003C91B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C91B3u); } /* indirect call */
    }

loc_003C91B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C91C1; /* jne: not equal / not zero */

loc_003C91BB: ;
    MEM32(esp + 0x10) = edi;
    goto loc_003C91D0;

loc_003C91C1: ;
    MEM32(esp + 0x10) = ebp;
    edi = ebp;
    goto loc_003C91D0;

    /* nop */

loc_003C91D0: ;
    ecx = MEM32(ebx + 0x20);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003C91DAu); RECOMP_ABI_CALL(0x0001C8FBu, sub_0001C8FB); /* call 0x0001C8FB */

loc_003C91DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C923F; /* jl: less (signed <) */

loc_003C91DE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x54) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C91EB; /* jge: greater or equal (signed >=) */

loc_003C91E3: ;
    ecx = MEM32(edi + 0x58);
    eax = ecx + eax * 4;
    goto loc_003C91EE;

loc_003C91EB: ;
    eax = MEM32(edi + 0x58);

loc_003C91EE: ;
    edx = MEM32(ebx + 0x20);
    edi = MEM32(eax);
    ecx = edx + ebp + 0x64;
    PUSH32(esp, 0x003C91FCu); RECOMP_ABI_CALL(0x00014E17u, sub_00014E17); /* call 0x00014E17 */

loc_003C91FC: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(ebx + 0x28);
    PUSH32(esp, 0x003C9208u); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003C9208: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = MEM32(esp + 0x14);
    MEM32(eax + 0x14) = edi;
    MEM32(eax + 0x1C) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003C921A; /* jne: not equal / not zero */

loc_003C9216: ;
    esi = eax;
    goto loc_003C923B;

loc_003C921A: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9224; /* je: equal / zero */

loc_003C9221: ;
    MEM32(ecx + 8) = eax;

loc_003C9224: ;
    edx = MEM32(esi);
    MEM32(eax) = edx;
    MEM32(eax + 4) = 0;
    MEM32(eax + 8) = esi;
    ecx = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = ecx;
    MEM32(esi + 0xC) = eax;

loc_003C923B: ;
    edi = MEM32(esp + 0x10);

loc_003C923F: ;
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0xC8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0x258) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0x258 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C91D0; /* jl: less (signed <) */

loc_003C924D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
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
 * sub_003C9290
 * Original: 0x003C9290 - 0x003C9364 (212 bytes, 80 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9290(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C9290: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C935D; /* je: equal / zero */

loc_003C92A3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C92DA; /* jne: not equal / not zero */

loc_003C92A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C92D3; /* jle: less or equal (signed <=) */

loc_003C92AB: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C92BE; /* je: equal / zero */

loc_003C92B2: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C92BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C92BBu); } /* indirect call */
    }

loc_003C92BE: ;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_003C92D3: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003C92DA: ;
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebx);
    ecx = edi * 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003C92F6u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003C92F6: ;
    ebx = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C9321; /* jle: less or equal (signed <=) */

loc_003C9302: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9343; /* je: equal / zero */

loc_003C9309: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9343; /* je: equal / zero */

loc_003C9310: ;
    edx = ecx * 4;
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003C931Fu); RECOMP_ABI_CALL(0x0002E71Du, sub_0002E71D); /* call 0x0002E71D */

loc_003C931F: ;
    goto loc_003C9340;

loc_003C9321: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9343; /* je: equal / zero */

loc_003C9328: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C932F; /* jle: less or equal (signed <=) */

loc_003C932C: ;
    MEM32(esi + 8) = edi;

loc_003C932F: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003C9340u); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003C9340: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003C9343: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9356; /* je: equal / zero */

loc_003C934A: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C9356u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C9353u); } /* indirect call */
    }

loc_003C9356: ;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 4) = edi;
    POP32(esp, ebx);

loc_003C935D: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C93A0
 * Original: 0x003C93A0 - 0x003C93DA (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C93A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C93A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x834E84;
    if (CMP_LE(_fas, _fbs)) goto loc_003C93D8; /* jle: less or equal (signed <=) */

loc_003C93B0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C93C3; /* je: equal / zero */

loc_003C93B7: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C93C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C93C0u); } /* indirect call */
    }

loc_003C93C3: ;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_003C93D8: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C93F0
 * Original: 0x003C93F0 - 0x003C943E (78 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C93F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C93F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x834E84;
    if (CMP_LE(_fas, _fbs)) goto loc_003C9428; /* jle: less or equal (signed <=) */

loc_003C9400: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9413; /* je: equal / zero */

loc_003C9407: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C9413u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C9410u); } /* indirect call */
    }

loc_003C9413: ;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_003C9428: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C9438; /* je: equal / zero */

loc_003C942F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C9435u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003C9435: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003C9438: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9460
 * Original: 0x003C9460 - 0x003C94C3 (99 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9460(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C9460: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003C9481u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003C9481: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi) = 0x834E9C;
    ecx = 1;
    MEM8(esi + 0x14) = LO8(ecx);
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x40) = eax;
    MEM32(esi + 0x44) = eax;
    MEM32(esi + 0x34) = 0x834E84;
    MEM32(esi + 0x2C) = edi;
    POP32(esp, edi);
    MEM32(esi + 0xC) = ecx;
    MEM32(esi + 0x1C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003C94E0
 * Original: 0x003C94E0 - 0x003C94E6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C94E0(void)
{

loc_003C94E0: ;
    eax = MEM32(0x8CDB24);
    esp += 4; return; /* ret */

}

/**
 * sub_003C94F0
 * Original: 0x003C94F0 - 0x003C9537 (71 bytes, 20 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C94F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C94F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834E9C;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x34) = 0x834E84;
    if (CMP_LE(_fas, _fbs)) goto loc_003C952F; /* jle: less or equal (signed <=) */

loc_003C9507: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C951A; /* je: equal / zero */

loc_003C950E: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C951Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C9517u); } /* indirect call */
    }

loc_003C951A: ;
    MEM32(esi + 0x40) = 0;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x3C) = 0;

loc_003C952F: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001988B(); return; /* tail jmp 0x0001988B */

}

/**
 * sub_003C9550
 * Original: 0x003C9550 - 0x003C956E (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003C9550(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C9550: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x48);
    PUSH32(esp, 0x003C955Bu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003C955B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9569; /* je: equal / zero */

loc_003C9562: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0002EEDE(); return; /* tail jmp 0x0002EEDE */

loc_003C9569: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003C9580
 * Original: 0x003C9580 - 0x003C95DC (92 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C9580: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834E9C;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x34) = 0x834E84;
    if (CMP_LE(_fas, _fbs)) goto loc_003C95BF; /* jle: less or equal (signed <=) */

loc_003C9597: ;
    eax = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C95AA; /* je: equal / zero */

loc_003C959E: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C95AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C95A7u); } /* indirect call */
    }

loc_003C95AA: ;
    MEM32(esi + 0x40) = 0;
    MEM32(esi + 0x38) = 0;
    MEM32(esi + 0x3C) = 0;

loc_003C95BF: ;
    ecx = esi;
    PUSH32(esp, 0x003C95C6u); RECOMP_ABI_CALL(0x0001988Bu, sub_0001988B); /* call 0x0001988B */

loc_003C95C6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C95D6; /* je: equal / zero */

loc_003C95CD: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C95D3u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003C95D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003C95D6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9600
 * Original: 0x003C9600 - 0x003C9609 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9600(void)
{

loc_003C9600: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9610
 * Original: 0x003C9610 - 0x003C9613 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9610(void)
{

loc_003C9610: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003C9620
 * Original: 0x003C9620 - 0x003C962E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9620(void)
{

loc_003C9620: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9640
 * Original: 0x003C9640 - 0x003C9644 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9640(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003C9640: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003C9650
 * Original: 0x003C9650 - 0x003C965E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9650(void)
{

loc_003C9650: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9670
 * Original: 0x003C9670 - 0x003C9674 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9670(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003C9670: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003C9680
 * Original: 0x003C9680 - 0x003C9687 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9680(void)
{

loc_003C9680: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003C9690
 * Original: 0x003C9690 - 0x003C96A7 (23 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9690(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C9690: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax) = 0x834ED4;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x10) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003C96B0
 * Original: 0x003C96B0 - 0x003C96B4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C96B0(void)
{

loc_003C96B0: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003C96C0
 * Original: 0x003C96C0 - 0x003C96E6 (38 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C96C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C96C0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x10) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003C96E0; /* jl: less (signed <) */

loc_003C96CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C96E0; /* jge: greater or equal (signed >=) */

loc_003C96D4: ;
    ecx = MEM32(ecx + 0xC);
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

loc_003C96E0: ;
    eax = MEM32(ecx + 0xC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C96F0
 * Original: 0x003C96F0 - 0x003C96F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C96F0(void)
{

loc_003C96F0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003C9700
 * Original: 0x003C9700 - 0x003C9709 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9700(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C9700: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    esp += 4; return; /* ret */

}

/**
 * sub_003C9710
 * Original: 0x003C9710 - 0x003C9719 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9710(void)
{

loc_003C9710: ;
    eax = ecx;
    MEM32(eax) = 0x834ED8;
    esp += 4; return; /* ret */

}

/**
 * sub_003C9720
 * Original: 0x003C9720 - 0x003C9726 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9720(void)
{

loc_003C9720: ;
    eax = 0x834EEC;
    esp += 4; return; /* ret */

}

/**
 * sub_003C9730
 * Original: 0x003C9730 - 0x003C9736 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9730(void)
{

loc_003C9730: ;
    eax = 9;
    esp += 4; return; /* ret */

}

/**
 * sub_003C9740
 * Original: 0x003C9740 - 0x003C975F (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C9740: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003C9759; /* je: equal / zero */

loc_003C9750: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C9756u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003C9756: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003C9759: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9770
 * Original: 0x003C9770 - 0x003C9842 (210 bytes, 82 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9770(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C9770: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C983B; /* je: equal / zero */

loc_003C9783: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C97BA; /* jne: not equal / not zero */

loc_003C9787: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C97B3; /* jle: less or equal (signed <=) */

loc_003C978B: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C979E; /* je: equal / zero */

loc_003C9792: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C979Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C979Bu); } /* indirect call */
    }

loc_003C979E: ;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_003C97B3: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003C97BA: ;
    edx = MEM32(esp + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    PUSH32(esp, ebx);
    ecx = edi + edi * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003C97D5u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003C97D5: ;
    ebx = eax;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    eax = MEM32(esi + 8);
    if (CMP_LE(_fas, _fbs)) goto loc_003C97FF; /* jle: less or equal (signed <=) */

loc_003C97E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9821; /* je: equal / zero */

loc_003C97E8: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9821; /* je: equal / zero */

loc_003C97EF: ;
    edx = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003C97FDu); RECOMP_ABI_CALL(0x0002E71Du, sub_0002E71D); /* call 0x0002E71D */

loc_003C97FD: ;
    goto loc_003C981E;

loc_003C97FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9821; /* je: equal / zero */

loc_003C9803: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C980A; /* jle: less or equal (signed <=) */

loc_003C9807: ;
    MEM32(esi + 8) = edi;

loc_003C980A: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    eax = eax + eax * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003C981Eu); RECOMP_ABI_CALL(0x0059EADCu, sub_0059EADC); /* call 0x0059EADC */

loc_003C981E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003C9821: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9834; /* je: equal / zero */

loc_003C9828: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C9834u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C9831u); } /* indirect call */
    }

loc_003C9834: ;
    MEM32(esi + 0xC) = ebx;
    MEM32(esi + 4) = edi;
    POP32(esp, ebx);

loc_003C983B: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C9880
 * Original: 0x003C9880 - 0x003C98B8 (56 bytes, 20 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C9880: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C98B5; /* jge: greater or equal (signed >=) */

loc_003C9888: ;
    edx = MEM32(ecx + 0xC);
    eax = eax + eax * 2;
    eax = edx + eax * 4;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    edx = MEM32(edx + 8);
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x10) = 0;
    POP32(esp, esi);

loc_003C98B5: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C98D0
 * Original: 0x003C98D0 - 0x003C98ED (29 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C98D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C98D0: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx + 0x10) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003C98E9; /* je: equal / zero */

loc_003C98DE: ;
    ecx = MEM32(ecx + 0xC);
    eax = eax + eax * 2;
    eax = ecx + eax * 4 + -12;
    esp += 4; return; /* ret */

loc_003C98E9: ;
    eax = MEM32(ecx + 0xC);
    esp += 4; return; /* ret */

}

/**
 * sub_003C9900
 * Original: 0x003C9900 - 0x003C9CCC (972 bytes, 316 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9900(void)
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

loc_003C9900: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x34);
    SET_LO8(ecx, MEM8(esi + 0x14));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ebx;
    MEM8(esp + 0xF) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_003C9995; /* jne: not equal / not zero */

loc_003C991D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C9967; /* jne: not equal / not zero */

loc_003C9921: ;
    eax = MEM32(esi + 0x34);
    edi = MEM32(esi + 0x38);
    MEM32(esi + 0x3C) = ebx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, 0x003C9932u); RECOMP_ABI_CALL(0x00014E17u, sub_00014E17); /* call 0x00014E17 */

loc_003C9932: ;
    fp_top() = RECOMP_FP_PC(MEMF(edi + 4) - fp_top()); /* fsubr dword ptr [edi + 4] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x7AA840)); /* fld float */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp < 0 || g_fp_cmp == 2) /* fcompi */) goto loc_003C9951; /* jb: below (unsigned <) */

loc_003C9949: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    goto loc_003C995A;

loc_003C9951: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x14); /* subss */

loc_003C995A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB2D0); /* comiss */
    if ((_fca > _fcb)) goto loc_003C9CC1; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(0x7AB2D0)) */

loc_003C9967: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0x003C996Fu); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003C996F: ;
    ecx = MEM32(esi + 0x34);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0x3C) = ebx;
    esi = MEM32(esi + 0x38);
    ecx = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(esp + 8) = eax;
    MEM32(eax + 0x14) = ecx;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003C9995: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C9CC1; /* jl: less (signed <) */

loc_003C999E: ;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003C99A7u); RECOMP_ABI_CALL(0x00014E17u, sub_00014E17); /* call 0x00014E17 */

loc_003C99A7: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esi + 0x34);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003C99E7; /* jle: less or equal (signed <=) */

loc_003C99B4: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003C99B6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x3C) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_003C99C9; /* jl: less (signed <) */

loc_003C99BD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x34) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C99C9; /* jge: greater or equal (signed >=) */

loc_003C99C2: ;
    eax = MEM32(esi + 0x38);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003C99CC;

loc_003C99C9: ;
    eax = MEM32(esi + 0x38);

loc_003C99CC: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003C99ED; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_003C99DC: ;
    eax = MEM32(esi + 0x34);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C99B6; /* jl: less (signed <) */

loc_003C99E7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_003C99ED: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x34) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C9A41; /* jne: not equal / not zero */

loc_003C99F2: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9CC0; /* je: equal / zero */

loc_003C99FE: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0x003C9A06u); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003C9A06: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x3C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003C9A20; /* je: equal / zero */

loc_003C9A14: ;
    edx = ecx + ecx * 2;
    ecx = MEM32(esi + 0x38);
    esi = ecx + edx * 4 + -12;
    goto loc_003C9A23;

loc_003C9A20: ;
    esi = MEM32(esi + 0x38);

loc_003C9A23: ;
    edx = MEM32(esi);

loc_003C9A25: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(eax + 0x14) = edx;
    POP32(esp, esi);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003C9A41: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C9A84; /* jne: not equal / not zero */

loc_003C9A45: ;
    SET_LO8(eax, MEM8(esp + 0x13));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9CC0; /* je: equal / zero */

loc_003C9A51: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0x003C9A59u); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003C9A59: ;
    ecx = MEM32(esi + 0x34);
    MEM32(esi + 0x3C) = ebx;
    esi = MEM32(esi + 0x38);
    ecx = MEM32(esi);
    MEM32(esp + 0x14) = eax;

loc_003C9A68: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    POP32(esp, ebp);
    POP32(esp, edi);
    MEM32(eax + 0x14) = ecx;
    POP32(esp, esi);
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003C9A84: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003C9B41; /* jne: not equal / not zero */

loc_003C9A8D: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0x003C9A95u); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003C9A95: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = ebp + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = eax;
    MEM32(esi + 0x3C) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_003C9AC0; /* jl: less (signed <) */

loc_003C9AB0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x34) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C9AC0; /* jge: greater or equal (signed >=) */

loc_003C9AB5: ;
    edi = MEM32(esi + 0x38);
    edx = ecx + ecx * 2;
    edx = edi + edx * 4;
    goto loc_003C9AC3;

loc_003C9AC0: ;
    edx = MEM32(esi + 0x38);

loc_003C9AC3: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 0x18); /* comiss */
    MEM32(esi + 0x3C) = ebx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C9B09; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esp + 0x18)) */

loc_003C9AD2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C9AF5; /* jl: less (signed <) */

loc_003C9AD6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x34) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C9AF5; /* jge: greater or equal (signed >=) */

loc_003C9ADB: ;
    edx = MEM32(esi + 0x38);
    ecx = ecx + ecx * 2;
    POP32(esp, ebp);
    esi = edx + ecx * 4;
    ecx = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(esp + 8);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003C9AF5: ;
    esi = MEM32(esi + 0x38);
    ecx = MEM32(esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x14) = ecx;
    eax = MEM32(esp + 8);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003C9B09: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C9B2D; /* jl: less (signed <) */

loc_003C9B0D: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x34) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C9B2D; /* jge: greater or equal (signed >=) */

loc_003C9B12: ;
    ecx = MEM32(esi + 0x38);
    edx = ebp + ebp * 2;
    POP32(esp, ebp);
    esi = ecx + edx * 4;
    edx = MEM32(esi);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(esp + 8);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003C9B2D: ;
    esi = MEM32(esi + 0x38);
    edx = MEM32(esi);
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(eax + 0x14) = edx;
    eax = MEM32(esp + 8);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003C9B41: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = ebp + -1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    edi = esi + 0x2C;
    MEM32(edi + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_003C9B60; /* jl: less (signed <) */

loc_003C9B50: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C9B60; /* jge: greater or equal (signed >=) */

loc_003C9B55: ;
    edx = MEM32(edi + 0xC);
    eax = ebx + ebx * 2;
    eax = edx + eax * 4;
    goto loc_003C9B63;

loc_003C9B60: ;
    eax = MEM32(edi + 0xC);

loc_003C9B63: ;
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(edi + 0x10) = ecx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C9BB9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003C9B70: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C9B84; /* jl: less (signed <) */

loc_003C9B74: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C9B84; /* jge: greater or equal (signed >=) */

loc_003C9B79: ;
    ecx = MEM32(edi + 0xC);
    eax = ebx + ebx * 2;
    eax = ecx + eax * 4;
    goto loc_003C9B87;

loc_003C9B84: ;
    eax = MEM32(edi + 0xC);

loc_003C9B87: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C9BA7; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_003C9B9D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    goto loc_003C9C09;

loc_003C9BA7: ;
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x7AA820); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    goto loc_003C9C09;

loc_003C9BB9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003C9BCE; /* jl: less (signed <) */

loc_003C9BBD: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(edi + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C9BCE; /* jge: greater or equal (signed >=) */

loc_003C9BC2: ;
    eax = MEM32(edi + 0xC);
    edx = ebp + ebp * 2;
    eax = eax + edx * 4;
    goto loc_003C9BD1;

loc_003C9BCE: ;
    eax = MEM32(edi + 0xC);

loc_003C9BD1: ;
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x7AD340)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C9BF1; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_003C9BE7: ;
    xmm0 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    goto loc_003C9C09;

loc_003C9BF1: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(0x7AA820)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm2.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_003C9C09: ;
    ecx = MEM32(esi + 0x28);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003C9C17u); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003C9C17: ;
    xmm1 = XMM_SCALAR(MEMF(0x7AB2D0)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(esp + 0x14) = eax;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C9C58; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003C9C2E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi + 0x10) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003C9C4E; /* jl: less (signed <) */

loc_003C9C39: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003C9C4E; /* jge: greater or equal (signed >=) */

loc_003C9C3E: ;
    edx = MEM32(edi + 0xC);
    ecx = ebx + ebx * 2;
    edi = edx + ecx * 4;
    ecx = MEM32(edi);
    goto loc_003C9A68;

loc_003C9C4E: ;
    edi = MEM32(edi + 0xC);
    ecx = MEM32(edi);
    goto loc_003C9A68;

loc_003C9C58: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AD388); /* comiss */
    ecx = edi;
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003C9C74; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x7AD388)) */

loc_003C9C63: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003C9C69u); RECOMP_ABI_CALL(0x00014D04u, sub_00014D04); /* call 0x00014D04 */

loc_003C9C69: ;
    edx = MEM32(eax);
    eax = MEM32(esp + 0x14);
    goto loc_003C9A25;

loc_003C9C74: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003C9C7Au); RECOMP_ABI_CALL(0x00014D04u, sub_00014D04); /* call 0x00014D04 */

loc_003C9C7A: ;
    eax = MEM32(eax);
    ebx = MEM32(esp + 0x14);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x18); /* subss */
    MEM32(ebx + 0x14) = eax;
    MEMF(ebx + 0x1C) = xmm0.f[0]; /* movss */
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0x003C9C9Eu); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003C9C9E: ;
    PUSH32(esp, ebp);
    ecx = edi;
    esi = eax;
    PUSH32(esp, 0x003C9CA8u); RECOMP_ABI_CALL(0x00014D04u, sub_00014D04); /* call 0x00014D04 */

loc_003C9CA8: ;
    ecx = MEM32(eax);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEM32(esi + 0x14) = ecx;
    PUSH32(esp, esi);
    ecx = ebx;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003C9CC0u); RECOMP_ABI_CALL(0x00030BE9u, sub_00030BE9); /* call 0x00030BE9 */

loc_003C9CC0: ;
    POP32(esp, ebp);

loc_003C9CC1: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
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
 * sub_003C9DC0
 * Original: 0x003C9DC0 - 0x003C9E95 (213 bytes, 77 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9DC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003C9DC0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x10));
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x003C9DD7u); RECOMP_ABI_CALL(0x00028EEEu, sub_00028EEE); /* call 0x00028EEE */

loc_003C9DD7: ;
    eax = MEM32(esi);
    ecx = esp + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003C9DE3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C9DE0u); } /* indirect call */
    }

loc_003C9DE3: ;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, 1);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x2C)) >> 32) & 1);
    edi = edi + 0x2C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003C9DF4u); RECOMP_ABI_CALL(0x0002E227u, sub_0002E227); /* call 0x0002E227 */

loc_003C9DF4: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_003C9E7E; /* jle: less or equal (signed <=) */

loc_003C9E04: ;
    PUSH32(esp, ebx);

loc_003C9E05: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C9E0Cu); RECOMP_ABI_CALL(0x00037D9Au, sub_00037D9A); /* call 0x00037D9A */

loc_003C9E0C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x28;
    ebx = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x003C9E1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C9E1Au); } /* indirect call */
    }

loc_003C9E1D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    edx = MEM32(esi);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003C9E35u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C9E32u); } /* indirect call */
    }

loc_003C9E35: ;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_003C9E6C; /* jge: greater or equal (signed >=) */

loc_003C9E49: ;
    edx = MEM32(edi + 0xC);
    ecx = eax + eax * 2;
    eax = edx + ecx * 4;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = edx;
    MEM32(edi + 8) = MEM32(edi + 8) + 1;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x10) = 0;

loc_003C9E6C: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x24);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003C9E05; /* jl: less (signed <) */

loc_003C9E7D: ;
    POP32(esp, ebx);

loc_003C9E7E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003C9E85u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C9E82u); } /* indirect call */
    }

loc_003C9E85: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, edi);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003C9ED0
 * Original: 0x003C9ED0 - 0x003C9F0A (58 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C9ED0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x834ED4;
    if (CMP_LE(_fas, _fbs)) goto loc_003C9F08; /* jle: less or equal (signed <=) */

loc_003C9EE0: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9EF3; /* je: equal / zero */

loc_003C9EE7: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C9EF3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C9EF0u); } /* indirect call */
    }

loc_003C9EF3: ;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_003C9F08: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003C9F20
 * Original: 0x003C9F20 - 0x003C9F6E (78 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9F20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C9F20: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x834ED4;
    if (CMP_LE(_fas, _fbs)) goto loc_003C9F58; /* jle: less or equal (signed <=) */

loc_003C9F30: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003C9F43; /* je: equal / zero */

loc_003C9F37: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003C9F43u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003C9F40u); } /* indirect call */
    }

loc_003C9F43: ;
    MEM32(esi + 0xC) = 0;
    MEM32(esi + 4) = 0;
    MEM32(esi + 8) = 0;

loc_003C9F58: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003C9F68; /* je: equal / zero */

loc_003C9F5F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003C9F65u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003C9F65: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003C9F68: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003C9F90
 * Original: 0x003C9F90 - 0x003C9FEE (94 bytes, 32 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003C9F90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003C9F90: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 9);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003C9FB0u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003C9FB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi) = 0x834F04;
    ecx = 1;
    MEM8(esi + 0x14) = LO8(ecx);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0x38) = eax;
    MEM32(esi + 0x3C) = eax;
    MEM32(esi + 0x2C) = 0x834ED4;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = ecx;
    MEM32(esi + 0x1C) = ecx;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CA010
 * Original: 0x003CA010 - 0x003CA016 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA010(void)
{

loc_003CA010: ;
    eax = MEM32(0x8CDB38);
    esp += 4; return; /* ret */

}

/**
 * sub_003CA020
 * Original: 0x003CA020 - 0x003CA04E (46 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CA020: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x2C;
    MEM32(esi) = 0x834F04;
    PUSH32(esp, 0x003CA031u); RECOMP_ABI_CALL(0x00019F84u, sub_00019F84); /* call 0x00019F84 */

loc_003CA031: ;
    ecx = esi;
    PUSH32(esp, 0x003CA038u); RECOMP_ABI_CALL(0x0001988Bu, sub_0001988B); /* call 0x0001988B */

loc_003CA038: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CA048; /* je: equal / zero */

loc_003CA03F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CA045u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003CA045: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CA048: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CA060
 * Original: 0x003CA060 - 0x003CA07E (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003CA060(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CA060: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x40);
    PUSH32(esp, 0x003CA06Bu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CA06B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CA079; /* je: equal / zero */

loc_003CA072: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_0001CF4F(); return; /* tail jmp 0x0001CF4F */

loc_003CA079: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CA090
 * Original: 0x003CA090 - 0x003CA0D3 (67 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA090(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CA090: ;
    eax = MEM32(ecx + 4);
    ecx = MEM32(0x9071EC);
    edx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, MEM8(eax + edx + 0xD));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003CA0D0; /* je: equal / zero */

loc_003CA0B5: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CA0C3; /* jne: not equal / not zero */

loc_003CA0BB: ;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

loc_003CA0C3: ;
    ecx = MEM32(eax + 4);
    edx = esp + 4;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003CA0D0u); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003CA0D0: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CA0F0
 * Original: 0x003CA0F0 - 0x003CA0F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA0F0(void)
{

loc_003CA0F0: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003CA100
 * Original: 0x003CA100 - 0x003CA112 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CA100: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CA10Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CA10E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003CA120
 * Original: 0x003CA120 - 0x003CA135 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA120(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CA120: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CA134; /* je: equal / zero */

loc_003CA128: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CA134u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CA131u); } /* indirect call */
    }

loc_003CA134: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CA140
 * Original: 0x003CA140 - 0x003CA1AC (108 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA140(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CA140: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 9);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CA160u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CA160: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi + 0x24) = eax;
    MEM32(esi + 0x28) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = eax;
    MEM32(esi + 0xC) = eax;
    MEM8(esi + 0x14) = 1;
    MEM32(esi) = 0x834F4C;
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x40) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x44) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x48) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CA1D0
 * Original: 0x003CA1D0 - 0x003CA1D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA1D0(void)
{

loc_003CA1D0: ;
    eax = MEM32(0x8CDB4C);
    esp += 4; return; /* ret */

}

/**
 * sub_003CA1E0
 * Original: 0x003CA1E0 - 0x003CA20B (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA1E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CA1E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x834F4C;
    if (CMP_EQ(_fa, _fb)) goto loc_003CA1FC; /* je: equal / zero */

loc_003CA1F0: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CA1FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CA1F9u); } /* indirect call */
    }

loc_003CA1FC: ;
    MEM32(esi + 0x2C) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_0001988B(); return; /* tail jmp 0x0001988B */

}

/**
 * sub_003CA220
 * Original: 0x003CA220 - 0x003CA352 (306 bytes, 108 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA220(void)
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

loc_003CA220: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    edi = ecx;
    PUSH32(esp, 0x003CA238u); RECOMP_ABI_CALL(0x00028EEEu, sub_00028EEE); /* call 0x00028EEE */

loc_003CA238: ;
    eax = MEM32(esi);
    ebx = edi + 0x38;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x003CA243u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CA240u); } /* indirect call */
    }

loc_003CA243: ;
    edx = MEM32(esi);
    eax = edi + 0x40;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CA24Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CA24Bu); } /* indirect call */
    }

loc_003CA24E: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x834F44)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CA273; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_003CA26A: ;
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebx); /* divss */
    goto loc_003CA276;

loc_003CA273: ;
    xmm0 = xmm3; /* movaps */

loc_003CA276: ;
    MEMF(edi + 0x3C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x40)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    MEMF(edi + 0x44) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    if ((_fca > _fcb)) goto loc_003CA295; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_003CA292: ;
    xmm1 = xmm3; /* movaps */

loc_003CA295: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    MEMF(edi + 0x48) = xmm1.f[0]; /* movss */
    PUSH32(esp, 0x003CA2A1u); RECOMP_ABI_CALL(0x00037D9Au, sub_00037D9A); /* call 0x00037D9A */

loc_003CA2A1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x30) = eax;
    eax = MEM32(esi);
    ebp = edi + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003CA2B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CA2AFu); } /* indirect call */
    }

loc_003CA2B2: ;
    eax = MEM32(ebp);
    eax = eax + eax * 2;
    PUSH32(esp, 1);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CA2C6u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CA2C6: ;
    MEM32(edi + 0x2C) = eax;
    eax = MEM32(ebp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_003CA33A; /* jle: less or equal (signed <=) */

loc_003CA2D7: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CA2E3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CA2E0u); } /* indirect call */
    }

loc_003CA2E3: ;
    edx = MEM32(esi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CA2EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CA2ECu); } /* indirect call */
    }

loc_003CA2EF: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CA2FBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CA2F8u); } /* indirect call */
    }

loc_003CA2FB: ;
    ecx = MEM32(edi + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(ebx + ecx) = xmm0.f[0]; /* movss */
    edx = MEM32(edi + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(edx + ebx + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(edi + 0x2C);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax + ebx + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x20);
    ecx = MEM32(ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003CA2D7; /* jl: less (signed <) */

loc_003CA33A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CA341u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CA33Eu); } /* indirect call */
    }

loc_003CA341: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, ebp);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CA3A0
 * Original: 0x003CA3A0 - 0x003CA3A9 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA3A0(void)
{

loc_003CA3A0: ;
    eax = ecx;
    MEM32(eax) = 0x834F70;
    esp += 4; return; /* ret */

}

/**
 * sub_003CA3B0
 * Original: 0x003CA3B0 - 0x003CA3B6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA3B0(void)
{

loc_003CA3B0: ;
    eax = 0x834F84;
    esp += 4; return; /* ret */

}

/**
 * sub_003CA3C0
 * Original: 0x003CA3C0 - 0x003CA3C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA3C0(void)
{

loc_003CA3C0: ;
    eax = 9;
    esp += 4; return; /* ret */

}

/**
 * sub_003CA3D0
 * Original: 0x003CA3D0 - 0x003CA3EF (31 bytes, 11 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA3D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CA3D0: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003CA3E9; /* je: equal / zero */

loc_003CA3E0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CA3E6u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003CA3E6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CA3E9: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CA400
 * Original: 0x003CA400 - 0x003CA41E (30 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003CA400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CA400: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x4C);
    PUSH32(esp, 0x003CA40Bu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CA40B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CA419; /* je: equal / zero */

loc_003CA412: ;
    ecx = eax;
    g_seh_ebp = ebp; sub_00015DB7(); return; /* tail jmp 0x00015DB7 */

loc_003CA419: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CA430
 * Original: 0x003CA430 - 0x003CA470 (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CA430: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x834F4C;
    if (CMP_EQ(_fa, _fb)) goto loc_003CA44C; /* je: equal / zero */

loc_003CA440: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CA44Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CA449u); } /* indirect call */
    }

loc_003CA44C: ;
    ecx = esi;
    MEM32(esi + 0x2C) = 0;
    PUSH32(esp, 0x003CA45Au); RECOMP_ABI_CALL(0x0001988Bu, sub_0001988B); /* call 0x0001988B */

loc_003CA45A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CA46A; /* je: equal / zero */

loc_003CA461: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CA467u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003CA467: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CA46A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CA480
 * Original: 0x003CA480 - 0x003CA904 (1156 bytes, 307 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CA480(void)
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

loc_003CA480: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    PUSH32(esp, edi);
    MEM32(esp + 0x28) = 0;
    PUSH32(esp, 0x003CA498u); RECOMP_ABI_CALL(0x00014E17u, sub_00014E17); /* call 0x00014E17 */

loc_003CA498: ;
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x64;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003CA4A7u); RECOMP_ABI_CALL(0x00014E17u, sub_00014E17); /* call 0x00014E17 */

loc_003CA4A7: ;
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003CA4B9u); RECOMP_ABI_CALL(0x00014E17u, sub_00014E17); /* call 0x00014E17 */

loc_003CA4B9: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x12C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x12C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003CA4CBu); RECOMP_ABI_CALL(0x00014E17u, sub_00014E17); /* call 0x00014E17 */

loc_003CA4CB: ;
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x190) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x190;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003CA4DDu); RECOMP_ABI_CALL(0x00014E17u, sub_00014E17); /* call 0x00014E17 */

loc_003CA4DD: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esi + 0x20);
    _fb = (uint32_t)(0x1F4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1F4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003CA4EFu); RECOMP_ABI_CALL(0x00014E17u, sub_00014E17); /* call 0x00014E17 */

loc_003CA4EF: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esp + 0x14); /* subss */
    edx = MEM32(esi + 0x34);
    xmm4 = xmm0; /* movaps */
    xmm3 = xmm1; /* movaps */
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(0x834F40)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_003CA771; /* jl: less (signed <) */

loc_003CA586: ;
    eax = MEM32(esi + 0x2C);
    edi = edx + -3;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_003CA590: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + -8); /* subss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + -4); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CA5C9; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_003CA5C4: ;
    xmm7 = xmm1; /* movaps */
    goto loc_003CA5D0;

loc_003CA5C9: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm1.f[0]; /* subss */

loc_003CA5D0: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(esi + 0x3C); /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CA604; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm7.f[0]) */

loc_003CA5EA: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    ebx = ecx;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_003CA604: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 4); /* subss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0xC); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CA63E; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_003CA639: ;
    xmm7 = xmm1; /* movaps */
    goto loc_003CA645;

loc_003CA63E: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm1.f[0]; /* subss */

loc_003CA645: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(esi + 0x3C); /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CA67A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm7.f[0]) */

loc_003CA65F: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    ebx = ecx + 1;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_003CA67A: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x10); /* subss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x14); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x18); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CA6B4; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_003CA6AF: ;
    xmm7 = xmm1; /* movaps */
    goto loc_003CA6BB;

loc_003CA6B4: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] - xmm1.f[0]; /* subss */

loc_003CA6BB: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(esp + 0x14) = xmm7.f[0]; /* movss */
    xmm7.f[0] = xmm7.f[0] * MEMF(esi + 0x3C); /* mulss */
    xmm7.f[0] = xmm7.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CA6F0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm7.f[0]) */

loc_003CA6D5: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    ebx = ecx + 2;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */

loc_003CA6F0: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x1C); /* subss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x20); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x24); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CA72A; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_003CA725: ;
    xmm6 = xmm1; /* movaps */
    goto loc_003CA731;

loc_003CA72A: ;
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */

loc_003CA731: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x3C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CA75D; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm1.f[0]) */

loc_003CA748: ;
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    ebx = ecx + 3;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */

loc_003CA75D: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CA590; /* jl: less (signed <) */

loc_003CA771: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CA803; /* jge: greater or equal (signed >=) */

loc_003CA779: ;
    edi = MEM32(esi + 0x2C);
    eax = ecx + ecx * 2;
    eax = edi + eax * 4;
    goto loc_003CA790;

loc_003CA784: ;
    xmm6 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    /* nop */

loc_003CA790: ;
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm5 = XMM_SCALAR(MEMF(esi + 0x48)); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 8); /* subss */
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CA7C9; /* jb: below (unsigned <) (xmm1.f[0] vs xmm2.f[0]) */

loc_003CA7C4: ;
    xmm6 = xmm1; /* movaps */
    goto loc_003CA7D0;

loc_003CA7C9: ;
    xmm6 = xmm2; /* movaps */
    xmm6.f[0] = xmm6.f[0] - xmm1.f[0]; /* subss */

loc_003CA7D0: ;
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = xmm6; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 0x3C); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CA7FB; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm1.f[0]) */

loc_003CA7E7: ;
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    ebx = ecx;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm6.f[0]; /* movss */

loc_003CA7FB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CA784; /* jl: less (signed <) */

loc_003CA803: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CA869; /* jl: less (signed <) */

loc_003CA807: ;
    ecx = MEM32(esi + 0x28);
    PUSH32(esp, 0x003CA80Fu); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003CA80F: ;
    edi = MEM32(esi + 0x30);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CA82B; /* jne: not equal / not zero */

loc_003CA81D: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003CA828u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CA828: ;
    MEM32(edi + 8) = eax;

loc_003CA82B: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CA841; /* jne: not equal / not zero */

loc_003CA835: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003CA83Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CA839u); } /* indirect call */
    }

loc_003CA83C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CA843; /* je: equal / zero */

loc_003CA841: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CA843: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x54) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CA850; /* jge: greater or equal (signed >=) */

loc_003CA848: ;
    eax = MEM32(edi + 0x58);
    edi = eax + ebx * 4;
    goto loc_003CA853;

loc_003CA850: ;
    edi = MEM32(edi + 0x58);

loc_003CA853: ;
    ecx = MEM32(edi);
    eax = MEM32(esp + 0x28);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(eax + 0x14) = ecx;
    MEMF(eax + 0x1C) = xmm0.f[0]; /* movss */

loc_003CA869: ;
    edx = MEM32(esi + 0x20);
    eax = MEM32(edx + 0x25C);
    ecx = MEM32(0x9071EC);
    edx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, MEM8(eax + edx + 0xD));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003CA8AE; /* je: equal / zero */

loc_003CA894: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CA8A1; /* jne: not equal / not zero */

loc_003CA89A: ;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    goto loc_003CA8AE;

loc_003CA8A1: ;
    ecx = MEM32(eax + 4);
    edx = esp + 0x2C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003CA8AEu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003CA8AE: ;
    eax = MEM32(esi + 0x20);
    eax = MEM32(eax + 0x2C0);
    ecx = MEM32(0x9071EC);
    edx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    SET_LO8(ecx, MEM8(eax + edx + 0xD));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003CA8FC; /* je: equal / zero */

loc_003CA8DC: ;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CA8EF; /* jne: not equal / not zero */

loc_003CA8E2: ;
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003CA8EF: ;
    ecx = MEM32(eax + 4);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    PUSH32(esp, 0x003CA8FCu); RECOMP_ABI_CALL(0x0001A975u, sub_0001A975); /* call 0x0001A975 */

loc_003CA8FC: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CAA30
 * Original: 0x003CAA30 - 0x003CAA34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAA30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003CAA30: ;
    fp_push(MEMF(ecx + 0x30)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CAA40
 * Original: 0x003CAA40 - 0x003CAA4E (14 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAA40(void)
{

loc_003CAA40: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx + 0x2C) = xmm0.f[0]; /* movss */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CAA60
 * Original: 0x003CAA60 - 0x003CAA64 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAA60(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003CAA60: ;
    fp_push(MEMF(ecx + 0x10)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CAA70
 * Original: 0x003CAA70 - 0x003CAAD8 (104 bytes, 29 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAA70(void)
{

loc_003CAA70: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CAA90u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CAA90: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x834868;
    MEM8(esi + 0xC) = 0;
    MEM8(esi + 0xD) = 0;
    PUSH32(esp, 0x003CAAA6u); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003CAAA6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esi) = 0x834FA0;
    MEM32(esi + 0x34) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CAB00
 * Original: 0x003CAB00 - 0x003CAB06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAB00(void)
{

loc_003CAB00: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003CAB10
 * Original: 0x003CAB10 - 0x003CAB16 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAB10(void)
{

loc_003CAB10: ;
    eax = 3;
    esp += 4; return; /* ret */

}

/**
 * sub_003CAB20
 * Original: 0x003CAB20 - 0x003CAB26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAB20(void)
{

loc_003CAB20: ;
    eax = 0x834B48;
    esp += 4; return; /* ret */

}

/**
 * sub_003CAB30
 * Original: 0x003CAB30 - 0x003CAB39 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAB30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003CAB30: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CAB40
 * Original: 0x003CAB40 - 0x003CAB7D (61 bytes, 25 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAB40(void)
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

loc_003CAB40: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CAB5C; /* jne: not equal / not zero */

loc_003CAB4E: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003CAB59u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CAB59: ;
    MEM32(edi + 8) = eax;

loc_003CAB5C: ;
    eax = MEM32(edi + 8);
    fp_push(MEMF(esi + 0x28)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esi + 0x24)); /* fsub dword ptr [esi + 0x24] */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x24)); /* fadd dword ptr [esi + 0x24] */
    POP32(esp, esi);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 0xC)); /* fmul dword ptr [eax + 0xc] */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CAB90
 * Original: 0x003CAB90 - 0x003CAB93 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAB90(void)
{

loc_003CAB90: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CABA0
 * Original: 0x003CABA0 - 0x003CABCE (46 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CABA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CABA0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x34);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CABB9; /* jne: not equal / not zero */

loc_003CABAB: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CABB6u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CABB6: ;
    MEM32(esi + 8) = eax;

loc_003CABB9: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0x13 (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax + 0x14);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CABE0
 * Original: 0x003CABE0 - 0x003CABF9 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CABE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CABE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x834868;
    PUSH32(esp, 0x003CABF1u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CABF1: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

}

/**
 * sub_003CAC00
 * Original: 0x003CAC00 - 0x003CAC03 (3 bytes, 1 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAC00(void)
{

loc_003CAC00: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CAC10
 * Original: 0x003CAC10 - 0x003CAC18 (8 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAC10(void)
{

loc_003CAC10: ;
    eax = 0x834FD4;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CAC20
 * Original: 0x003CAC20 - 0x003CAC79 (89 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CAC20: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CAC3C; /* jne: not equal / not zero */

loc_003CAC2E: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003CAC39u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CAC39: ;
    MEM32(edi + 8) = eax;

loc_003CAC3C: ;
    eax = MEM32(edi + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x30); /* divss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0x13 (16-bit) */
    POP32(esp, edi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7A9980); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0x10); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CAC90
 * Original: 0x003CAC90 - 0x003CACC1 (49 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAC90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CAC90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x10;
    MEM32(esi) = 0x834868;
    PUSH32(esp, 0x003CACA1u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CACA1: ;
    ecx = esi;
    PUSH32(esp, 0x003CACA8u); RECOMP_ABI_CALL(0x00014241u, sub_00014241); /* call 0x00014241 */

loc_003CACA8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CACBB; /* je: equal / zero */

loc_003CACAF: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003CACBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CACB8u); } /* indirect call */
    }

loc_003CACBB: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CACD0
 * Original: 0x003CACD0 - 0x003CAD64 (148 bytes, 54 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CACD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CACD0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CACDFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CACDCu); } /* indirect call */
    }

loc_003CACDF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CAD51; /* jne: not equal / not zero */

loc_003CACE4: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x003CACF2u); RECOMP_ABI_CALL(0x00037FCFu, sub_00037FCF); /* call 0x00037FCF */

loc_003CACF2: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003CACF9u); RECOMP_ABI_CALL(0x00037D9Au, sub_00037D9A); /* call 0x00037D9A */

loc_003CACF9: ;
    edi = eax;
    MEM32(esi + 0x34) = edi;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003CAD16; /* jne: not equal / not zero */

loc_003CAD08: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003CAD13u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CAD13: ;
    MEM32(edi + 8) = eax;

loc_003CAD16: ;
    edi = MEM32(edi + 8);
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x30); /* divss */
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(0x13) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 0x13 (16-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    xmm1 = XMM_SCALAR(MEMF(eax + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(0x7A9980); /* subss */
    xmm1.f[0] = xmm1.f[0] / MEMF(eax + 0x10); /* divss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    POP32(esp, edi);

loc_003CAD51: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CAD58u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CAD55u); } /* indirect call */
    }

loc_003CAD58: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CAD90
 * Original: 0x003CAD90 - 0x003CADD9 (73 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAD90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CAD90: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x13);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CADB0u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CADB0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(esi + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7AD474)); /* movss */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi) = 0x834FE0;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CADF0
 * Original: 0x003CADF0 - 0x003CADF6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CADF0(void)
{

loc_003CADF0: ;
    eax = MEM32(0x8CDB6C);
    esp += 4; return; /* ret */

}

/**
 * sub_003CAE00
 * Original: 0x003CAE00 - 0x003CAE31 (49 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAE00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CAE00: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x834FE0;
    if (CMP_EQ(_fa, _fb)) goto loc_003CAE1D; /* je: equal / zero */

loc_003CAE10: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CAE16u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CAE14u); } /* indirect call */
    }

loc_003CAE16: ;
    MEM32(esi + 0x14) = 0;

loc_003CAE1D: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003CAE26u); RECOMP_ABI_CALL(0x000301A3u, sub_000301A3); /* call 0x000301A3 */

loc_003CAE26: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

}

/**
 * sub_003CAE40
 * Original: 0x003CAE40 - 0x003CAEA2 (98 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAE40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CAE40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CAE52u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CAE4Fu); } /* indirect call */
    }

loc_003CAE52: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CAE9A; /* jne: not equal / not zero */

loc_003CAE57: ;
    edx = MEM32(esi);
    eax = edi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CAE62u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CAE5Fu); } /* indirect call */
    }

loc_003CAE62: ;
    edx = MEM32(esi);
    eax = edi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CAE6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CAE6Au); } /* indirect call */
    }

loc_003CAE6D: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CAE78u); RECOMP_ABI_CALL(0x000290F1u, sub_000290F1); /* call 0x000290F1 */

loc_003CAE78: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(edi + 0x14) = eax;
    PUSH32(esp, 0x003CAE86u); RECOMP_ABI_CALL(0x00015D26u, sub_00015D26); /* call 0x00015D26 */

loc_003CAE86: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CAE8Cu); RECOMP_ABI_CALL(0x0002DCDCu, sub_0002DCDC); /* call 0x0002DCDC */

loc_003CAE8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x18) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003CAE9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, LO8(ebx));
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CAEC0
 * Original: 0x003CAEC0 - 0x003CAEEA (42 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAEC0(void)
{

loc_003CAEC0: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CAEDEu); RECOMP_ABI_CALL(0x00027D0Au, sub_00027D0A); /* call 0x00027D0A */

loc_003CAEDE: ;
    MEM32(esi) = 0x834FF4;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CAF00
 * Original: 0x003CAF00 - 0x003CAF06 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAF00(void)
{

loc_003CAF00: ;
    eax = MEM32(0x8CDB70);
    esp += 4; return; /* ret */

}

/**
 * sub_003CAF10
 * Original: 0x003CAF10 - 0x003CAF1B (11 bytes, 2 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAF10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CAF10: ;
    MEM32(ecx) = 0x834FF4;
    g_seh_ebp = ebp; sub_00031440(); return; /* tail jmp 0x00031440 */

}

/**
 * sub_003CAF20
 * Original: 0x003CAF20 - 0x003CAF61 (65 bytes, 30 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CAF20: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CAF2Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CAF2Cu); } /* indirect call */
    }

loc_003CAF2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CAF4E; /* jne: not equal / not zero */

loc_003CAF34: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003CAF41u); RECOMP_ABI_CALL(0x00021EAAu, sub_00021EAA); /* call 0x00021EAA */

loc_003CAF41: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x40);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x28)) >> 32) & 1);
    edi = edi + 0x28;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x003CAF4Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CAF4Bu); } /* indirect call */
    }

loc_003CAF4E: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CAF55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CAF52u); } /* indirect call */
    }

loc_003CAF55: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
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
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CAF80
 * Original: 0x003CAF80 - 0x003CAFC9 (73 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAF80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CAF80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x834FE0;
    if (CMP_EQ(_fa, _fb)) goto loc_003CAF9D; /* je: equal / zero */

loc_003CAF90: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CAF96u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CAF94u); } /* indirect call */
    }

loc_003CAF96: ;
    MEM32(esi + 0x14) = 0;

loc_003CAF9D: ;
    ecx = MEM32(esi + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003CAFA6u); RECOMP_ABI_CALL(0x000301A3u, sub_000301A3); /* call 0x000301A3 */

loc_003CAFA6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x003CAFB0u); RECOMP_ABI_CALL(0x00014241u, sub_00014241); /* call 0x00014241 */

loc_003CAFB0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CAFC3; /* je: equal / zero */

loc_003CAFB7: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CAFC3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CAFC0u); } /* indirect call */
    }

loc_003CAFC3: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CAFE0
 * Original: 0x003CAFE0 - 0x003CB007 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CAFE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CAFE0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834FF4;
    PUSH32(esp, 0x003CAFEEu); RECOMP_ABI_CALL(0x00031440u, sub_00031440); /* call 0x00031440 */

loc_003CAFEE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CB001; /* je: equal / zero */

loc_003CAFF5: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003CB001u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CAFFEu); } /* indirect call */
    }

loc_003CB001: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CB010
 * Original: 0x003CB010 - 0x003CB015 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB010(void)
{

loc_003CB010: ;
    MEM8(ecx + 0xC) = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003CB020
 * Original: 0x003CB020 - 0x003CB025 (5 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB020(void)
{

loc_003CB020: ;
    MEM8(ecx + 0xC) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003CB030
 * Original: 0x003CB030 - 0x003CB09D (109 bytes, 47 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CB030: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CB03Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB03Cu); } /* indirect call */
    }

loc_003CB03F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CB08A; /* jne: not equal / not zero */

loc_003CB044: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003CB050u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB04Du); } /* indirect call */
    }

loc_003CB050: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 0xC), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edi + 0xC) = LO8(ecx);
    edx = MEM32(esi);
    eax = edi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CB066u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB063u); } /* indirect call */
    }

loc_003CB066: ;
    edx = MEM32(esi);
    eax = edi + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CB071u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB06Eu); } /* indirect call */
    }

loc_003CB071: ;
    edx = MEM32(esi);
    eax = edi + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CB07Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB079u); } /* indirect call */
    }

loc_003CB07C: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi + 0x10;
    PUSH32(esp, 0x003CB08Au); RECOMP_ABI_CALL(0x0003676Au, sub_0003676A); /* call 0x0003676A */

loc_003CB08A: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CB091u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB08Eu); } /* indirect call */
    }

loc_003CB091: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
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
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CB0C0
 * Original: 0x003CB0C0 - 0x003CB16B (171 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003CB0C0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003CB0DD; /* jne: not equal / not zero */

loc_003CB0CF: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003CB0DAu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CB0DA: ;
    MEM32(esi + 8) = eax;

loc_003CB0DD: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 5 (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 0x10);
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003CB10A; /* jne: not equal / not zero */

loc_003CB0FC: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003CB107u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CB107: ;
    MEM32(esi + 8) = eax;

loc_003CB10A: ;
    esi = MEM32(esi + 8);
    eax = MEM32(edi + 0x14);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 5 (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CB12A; /* je: equal / zero */

loc_003CB124: ;
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    goto loc_003CB12D;

loc_003CB12A: ;
    xmm2 = xmm1; /* movaps */

loc_003CB12D: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x10)); /* movss */
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm3 = XMM_SCALAR(MEMF(0x7F0108)); /* movss */
    POP32(esp, edi);
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003CB14F; /* je: equal / zero */

loc_003CB14B: ;
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */

loc_003CB14F: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x10)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CB165; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_003CB161: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esp += 4; return; /* ret */

loc_003CB165: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003CB1A0
 * Original: 0x003CB1A0 - 0x003CB1CA (42 bytes, 19 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB1A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CB1A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CB1C5; /* je: equal / zero */

loc_003CB1AF: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003CB1BFu); RECOMP_ABI_CALL(0x005CC050u, sub_005CC050); /* call 0x005CC050 */

loc_003CB1BF: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x10) = edi;

loc_003CB1C5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CB1E0
 * Original: 0x003CB1E0 - 0x003CB2C7 (231 bytes, 84 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB1E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003CB1E0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    eax = MEM32(edi + 0x18);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_003CB290; /* jle: less or equal (signed <=) */

loc_003CB20D: ;
    /* nop */

loc_003CB210: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(edi + 0x20) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003CB228; /* jl: less (signed <) */

loc_003CB21B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x18) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CB228; /* jge: greater or equal (signed >=) */

loc_003CB220: ;
    eax = MEM32(edi + 0x1C);
    eax = eax + ebx * 4;
    goto loc_003CB22B;

loc_003CB228: ;
    eax = MEM32(edi + 0x1C);

loc_003CB22B: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CB242; /* jne: not equal / not zero */

loc_003CB234: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003CB23Fu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CB23F: ;
    MEM32(esi + 8) = eax;

loc_003CB242: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(5) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 5 (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_003CB264; /* je: equal / zero */

loc_003CB25E: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    goto loc_003CB267;

loc_003CB264: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_003CB267: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003CB270: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp + ecx * 4 + 0xC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CB282; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esp + ecx * 4 + 0xC)) */

loc_003CB277: ;
    xmm2 = XMM_SCALAR(MEMF(esp + ecx * 4 + 0x14)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003CB29B; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_003CB282: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CB270; /* jl: less (signed <) */

loc_003CB288: ;
    eax = MEM32(edi + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CB210; /* jl: less (signed <) */

loc_003CB290: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_003CB29B: ;
    _fca = xmm1.f[0]; _fcb = MEMF(esp + ecx * 4 + 0xC); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CB2B3; /* jb: below (unsigned <) (xmm1.f[0] vs MEMF(esp + ecx * 4 + 0xC)) */

loc_003CB2A2: ;
    edx = MEM32(esp + 0x28);
    POP32(esp, edi);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

loc_003CB2B3: ;
    edx = MEM32(esp + 0x28);
    POP32(esp, edi);
    ecx = 1;
    POP32(esp, esi);
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CB300
 * Original: 0x003CB300 - 0x003CB32C (44 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB300(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CB300: ;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2E353) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), 0x2E353 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CB32A; /* je: equal / zero */

loc_003CB30C: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x1C);
    PUSH32(esp, 0x2E353);
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003CB320u); RECOMP_ABI_CALL(0x005CC050u, sub_005CC050); /* call 0x005CC050 */

loc_003CB320: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x20) = 0x2E353;

loc_003CB32A: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CB340
 * Original: 0x003CB340 - 0x003CB37F (63 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB340(void)
{

loc_003CB340: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x11);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CB360u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CB360: ;
    ecx = esi + 0xC;
    MEM32(esi) = 0x835020;
    PUSH32(esp, 0x003CB36Eu); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003CB36E: ;
    MEM8(esi + 0x20) = 1;
    MEM32(esi + 0x24) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CB390
 * Original: 0x003CB390 - 0x003CB396 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB390(void)
{

loc_003CB390: ;
    eax = MEM32(0x8CDB8C);
    esp += 4; return; /* ret */

}

/**
 * sub_003CB3A0
 * Original: 0x003CB3A0 - 0x003CB3CC (44 bytes, 15 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB3A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CB3A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x835020;
    if (CMP_EQ(_fa, _fb)) goto loc_003CB3BC; /* je: equal / zero */

loc_003CB3B0: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CB3BCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB3B9u); } /* indirect call */
    }

loc_003CB3BC: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x003CB3C4u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CB3C4: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

}

/**
 * sub_003CB3E0
 * Original: 0x003CB3E0 - 0x003CB41B (59 bytes, 27 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB3E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CB3E0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CB3EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB3ECu); } /* indirect call */
    }

loc_003CB3EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CB414; /* jne: not equal / not zero */

loc_003CB3F4: ;
    edx = MEM32(esi);
    eax = edi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003CB3FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB3FCu); } /* indirect call */
    }

loc_003CB3FF: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    ecx = edi + 0xC;
    PUSH32(esp, 0x003CB40Du); RECOMP_ABI_CALL(0x0003676Au, sub_0003676A); /* call 0x0003676A */

loc_003CB40D: ;
    POP32(esp, edi);
    SET_LO8(eax, 1);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003CB414: ;
    POP32(esp, edi);
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CB430
 * Original: 0x003CB430 - 0x003CB471 (65 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CB430: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x835020;
    if (CMP_EQ(_fa, _fb)) goto loc_003CB44C; /* je: equal / zero */

loc_003CB440: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CB44Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB449u); } /* indirect call */
    }

loc_003CB44C: ;
    ecx = esi + 0xC;
    PUSH32(esp, 0x003CB454u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CB454: ;
    ecx = esi;
    PUSH32(esp, 0x003CB45Bu); RECOMP_ABI_CALL(0x00014241u, sub_00014241); /* call 0x00014241 */

loc_003CB45B: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CB46B; /* je: equal / zero */

loc_003CB462: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CB468u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003CB468: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CB46B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CB490
 * Original: 0x003CB490 - 0x003CB4C3 (51 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB490(void)
{

loc_003CB490: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x19);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CB4B0u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CB4B0: ;
    MEM32(esi) = 0x83504C;
    MEM32(esi + 0xC) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CB4D0
 * Original: 0x003CB4D0 - 0x003CB4D6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB4D0(void)
{

loc_003CB4D0: ;
    eax = MEM32(0x8CDB9C);
    esp += 4; return; /* ret */

}

/**
 * sub_003CB4E0
 * Original: 0x003CB4E0 - 0x003CB505 (37 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB4E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CB4E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x83504C;
    if (CMP_EQ(_fa, _fb)) goto loc_003CB4FD; /* je: equal / zero */

loc_003CB4F0: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CB4F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB4F4u); } /* indirect call */
    }

loc_003CB4F6: ;
    MEM32(esi + 0xC) = 0;

loc_003CB4FD: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

}

/**
 * sub_003CB510
 * Original: 0x003CB510 - 0x003CB54F (63 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CB510: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CB51Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB51Cu); } /* indirect call */
    }

loc_003CB51F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CB548; /* jne: not equal / not zero */

loc_003CB524: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CB52Fu); RECOMP_ABI_CALL(0x000290F1u, sub_000290F1); /* call 0x000290F1 */

loc_003CB52F: ;
    MEM32(edi + 0xC) = eax;
    edx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CB53Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB539u); } /* indirect call */
    }

loc_003CB53C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
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
    esp += 12; return; /* ret 8 */

loc_003CB548: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CB560
 * Original: 0x003CB560 - 0x003CB59D (61 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CB560: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x83504C;
    if (CMP_EQ(_fa, _fb)) goto loc_003CB57D; /* je: equal / zero */

loc_003CB570: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CB576u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB574u); } /* indirect call */
    }

loc_003CB576: ;
    MEM32(esi + 0xC) = 0;

loc_003CB57D: ;
    ecx = esi;
    PUSH32(esp, 0x003CB584u); RECOMP_ABI_CALL(0x00014241u, sub_00014241); /* call 0x00014241 */

loc_003CB584: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CB597; /* je: equal / zero */

loc_003CB58B: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CB597u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB594u); } /* indirect call */
    }

loc_003CB597: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CB5B0
 * Original: 0x003CB5B0 - 0x003CB5C5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB5B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CB5B0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CB5C4; /* je: equal / zero */

loc_003CB5B8: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CB5C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB5C1u); } /* indirect call */
    }

loc_003CB5C4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CB5D0
 * Original: 0x003CB5D0 - 0x003CB5E2 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB5D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CB5D0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CB5DEu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CB5DE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003CB5F0
 * Original: 0x003CB5F0 - 0x003CB605 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CB5F0: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CB604; /* je: equal / zero */

loc_003CB5F8: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CB604u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB601u); } /* indirect call */
    }

loc_003CB604: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CB610
 * Original: 0x003CB610 - 0x003CB657 (71 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CB610: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi) = 0x834C60;
    if (CMP_EQ(_fa, _fb)) goto loc_003CB648; /* je: equal / zero */

loc_003CB620: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_003CB63F; /* je: equal / zero */

loc_003CB62A: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CB630u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB62Eu); } /* indirect call */
    }

loc_003CB630: ;
    MEM32(esi + 0x20) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

loc_003CB63F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CB645u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003CB645: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CB648: ;
    MEM32(esi + 0x20) = 0;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

}

/**
 * sub_003CB670
 * Original: 0x003CB670 - 0x003CB67C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB670(void)
{

loc_003CB670: ;
    eax = MEM32(esp + 4);
    MEM32(0x9071EC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CB680
 * Original: 0x003CB680 - 0x003CB744 (196 bytes, 88 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CB680: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    ebp = ecx;
    PUSH32(esp, edi);
    ecx = ebp + 0xC;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003CB695u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB692u); } /* indirect call */
    }

loc_003CB695: ;
    edx = MEM32(esi);
    eax = ebp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CB6A0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB69Du); } /* indirect call */
    }

loc_003CB6A0: ;
    edx = MEM32(esi);
    eax = ebp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003CB6ABu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB6A8u); } /* indirect call */
    }

loc_003CB6AB: ;
    edx = MEM32(esi);
    edi = ebp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CB6B6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB6B3u); } /* indirect call */
    }

loc_003CB6B6: ;
    edi = MEM32(edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003CB6C8; /* jne: not equal / not zero */

loc_003CB6BC: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x003CB6C3u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003CB6C3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003CB6DD;

loc_003CB6C8: ;
    eax = edi;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x64);
    PUSH32(esp, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CB6DAu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CB6DA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CB6DD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003CB703; /* je: equal / zero */

loc_003CB6E1: ;
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x14) = eax;
    ebx = eax;
    if ((_fas < 0)) goto loc_003CB705; /* js: sign (negative) */

loc_003CB6EF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003CB6F0: ;
    ecx = ebx;
    PUSH32(esp, 0x003CB6F7u); RECOMP_ABI_CALL(0x0001B8C0u, sub_0001B8C0); /* call 0x0001B8C0 */

loc_003CB6F7: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x64)) >> 32) & 1);
    ebx = ebx + 0x64;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CB6F0; /* jne: not equal / not zero */

loc_003CB6FD: ;
    eax = MEM32(esp + 0x14);
    goto loc_003CB705;

loc_003CB703: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CB705: ;
    MEM32(ebp + 0x20) = eax;
    eax = MEM32(ebp + 0x1C);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003CB72F; /* jle: less or equal (signed <=) */

loc_003CB711: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CB713: ;
    ecx = MEM32(ebp + 0x20);
    eax = MEM32(esp + 0x18);
    edx = MEM32(ecx + ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(ebx)) >> 32) & 1);
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003CB724u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB721u); } /* indirect call */
    }

loc_003CB724: ;
    eax = MEM32(ebp + 0x1C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x64)) >> 32) & 1);
    ebx = ebx + 0x64;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003CB713; /* jl: less (signed <) */

loc_003CB72F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CB736u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB733u); } /* indirect call */
    }

loc_003CB736: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, ebp);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CB780
 * Original: 0x003CB780 - 0x003CB7F0 (112 bytes, 49 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB780(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CB780: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003CB7CD; /* je: equal / zero */

loc_003CB78D: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebp);
    ebp = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x64);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_003CB7AF; /* js: sign (negative) */

loc_003CB79F: ;
    edi = eax + 1;

loc_003CB7A2: ;
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi;
    PUSH32(esp, 0x003CB7ACu); RECOMP_ABI_CALL(0x00033632u, sub_00033632); /* call 0x00033632 */

loc_003CB7AC: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CB7A2; /* jne: not equal / not zero */

loc_003CB7AF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CB7C4; /* je: equal / zero */

loc_003CB7B4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CB7C4; /* je: equal / zero */

loc_003CB7B8: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003CB7C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB7C1u); } /* indirect call */
    }

loc_003CB7C4: ;
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003CB7CD: ;
    ecx = edi;
    PUSH32(esp, 0x003CB7D4u); RECOMP_ABI_CALL(0x00033632u, sub_00033632); /* call 0x00033632 */

loc_003CB7D4: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CB7E9; /* je: equal / zero */

loc_003CB7D9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CB7E9; /* je: equal / zero */

loc_003CB7DD: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CB7E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB7E6u); } /* indirect call */
    }

loc_003CB7E9: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CB810
 * Original: 0x003CB810 - 0x003CB92B (283 bytes, 103 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB810(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CB810: ;
    PUSH32(esp, ecx);
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    ebx = ecx;
    edx = MEM32(ebx);
    PUSH32(esp, ebp);
    MEM32(ebx + 0x28) = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CB827u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB824u); } /* indirect call */
    }

loc_003CB827: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(ebx + 0x18);
    MEM32(eax) = MEM32(eax) | ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x18); PUSH32(esp, 0x003CB837u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB834u); } /* indirect call */
    }

loc_003CB837: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0xC) = eax;
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CB924; /* je: equal / zero */

loc_003CB847: ;
    PUSH32(esp, edi);
    goto loc_003CB850;

    /* nop */

loc_003CB850: ;
    edi = MEM32(esi + 0x14);
    MEM32(esi + 0x10) = ebx;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CB869; /* jne: not equal / not zero */

loc_003CB85B: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003CB866u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CB866: ;
    MEM32(edi + 8) = eax;

loc_003CB869: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CB914; /* jne: not equal / not zero */

loc_003CB877: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003CB87Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CB87Bu); } /* indirect call */
    }

loc_003CB87E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CB914; /* jne: not equal / not zero */

loc_003CB887: ;
    edi = MEM32(edi + 0x34);
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 8), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CB89D; /* jne: not equal / not zero */

loc_003CB88F: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003CB89Au); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CB89A: ;
    MEM32(edi + 8) = eax;

loc_003CB89D: ;
    eax = MEM32(edi + 8);
    edx = MEM32(esp + 0x20);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(9) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 9 (16-bit) */
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x1C);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003CB8C1u); RECOMP_ABI_CALL(0x00036350u, sub_00036350); /* call 0x00036350 */

loc_003CB8C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    xmm0 = XMM_SCALAR(MEMF(esi + 0x1C)); /* movss */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CB8E5; /* je: equal / zero */

loc_003CB8CC: ;
    /* nop */

loc_003CB8D0: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x1C)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x20) = xmm1.f[0]; /* movss */
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CB8D0; /* jne: not equal / not zero */

loc_003CB8E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    edx = eax;
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CB8FE; /* je: equal / zero */

loc_003CB8ED: ;
    /* nop */

loc_003CB8F0: ;
    edx = ecx;
    MEM32(ecx) = esi;
    MEM32(ecx + 4) = ebp;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CB8F0; /* jne: not equal / not zero */

loc_003CB8FE: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CB908; /* je: equal / zero */

loc_003CB905: ;
    MEM32(ecx + 8) = edx;

loc_003CB908: ;
    MEM32(eax + 8) = ebp;
    ecx = MEM32(esi + 4);
    MEM32(edx + 0xC) = ecx;
    MEM32(esi + 4) = eax;

loc_003CB914: ;
    esi = MEM32(esi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CB850; /* jne: not equal / not zero */

loc_003CB91F: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);

loc_003CB924: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CB980
 * Original: 0x003CB980 - 0x003CBA00 (128 bytes, 35 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB980(void)
{

loc_003CB980: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CB9A0u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CB9A0: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x834868;
    MEM8(esi + 0xC) = 0;
    MEM8(esi + 0xD) = 0;
    PUSH32(esp, 0x003CB9B6u); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003CB9B6: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    ecx = esi + 0x38;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esi) = 0x835068;
    MEM32(esi + 0x34) = 0;
    PUSH32(esp, 0x003CB9EAu); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003CB9EA: ;
    ecx = esi + 0x4C;
    PUSH32(esp, 0x003CB9F2u); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003CB9F2: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esi + 0x60) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CBA20
 * Original: 0x003CBA20 - 0x003CBA26 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBA20(void)
{

loc_003CBA20: ;
    eax = 4;
    esp += 4; return; /* ret */

}

/**
 * sub_003CBA30
 * Original: 0x003CBA30 - 0x003CBA33 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003CBA30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBA30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003CBA40
 * Original: 0x003CBA40 - 0x003CBA46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBA40(void)
{

loc_003CBA40: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_003CBA50
 * Original: 0x003CBA50 - 0x003CBA67 (23 bytes, 7 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBA50(void)
{

loc_003CBA50: ;
    eax = MEM32(esp + 8);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    edx = MEM32(esp + 0xC);
    MEMF(eax) = xmm0.f[0]; /* movss */
    ecx = MEM32(ecx + 0x60);
    MEM32(edx) = ecx;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CBA70
 * Original: 0x003CBA70 - 0x003CBA79 (9 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBA70(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003CBA70: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CBA80
 * Original: 0x003CBA80 - 0x003CBA86 (6 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBA80(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003CBA80: ;
    fp_push(MEMF(ecx + 0x60)); /* fld float */
    esp += 8; return; /* ret 4 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CBA90
 * Original: 0x003CBA90 - 0x003CBA95 (5 bytes, 2 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003CBA90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBA90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CBAA0
 * Original: 0x003CBAA0 - 0x003CBAAE (14 bytes, 3 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBAA0(void)
{

loc_003CBAA0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 0x60) = xmm0.f[0]; /* movss */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CBAC0
 * Original: 0x003CBAC0 - 0x003CBAC6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBAC0(void)
{

loc_003CBAC0: ;
    eax = 0x834980;
    esp += 4; return; /* ret */

}

/**
 * sub_003CBAD0
 * Original: 0x003CBAD0 - 0x003CBAFF (47 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBAD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CBAD0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x4C;
    MEM32(esi) = 0x835068;
    PUSH32(esp, 0x003CBAE1u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CBAE1: ;
    ecx = esi + 0x38;
    PUSH32(esp, 0x003CBAE9u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CBAE9: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x834868;
    PUSH32(esp, 0x003CBAF7u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CBAF7: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

}

/**
 * sub_003CBB10
 * Original: 0x003CBB10 - 0x003CBB70 (96 bytes, 44 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CBB10: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CBB1Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBB1Cu); } /* indirect call */
    }

loc_003CBB1F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CBB69; /* jne: not equal / not zero */

loc_003CBB24: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CBB30u); RECOMP_ABI_CALL(0x00037D9Au, sub_00037D9A); /* call 0x00037D9A */

loc_003CBB30: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi + 0x38;
    MEM32(edi + 0x34) = eax;
    PUSH32(esp, 0x003CBB40u); RECOMP_ABI_CALL(0x0003676Au, sub_0003676A); /* call 0x0003676A */

loc_003CBB40: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi + 0x4C;
    PUSH32(esp, 0x003CBB4Au); RECOMP_ABI_CALL(0x0003676Au, sub_0003676A); /* call 0x0003676A */

loc_003CBB4A: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x60)) >> 32) & 1);
    edi = edi + 0x60;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CBB55u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBB52u); } /* indirect call */
    }

loc_003CBB55: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CBB5Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBB59u); } /* indirect call */
    }

loc_003CBB5C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ebx);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003CBB69: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CBB90
 * Original: 0x003CBB90 - 0x003CBBD7 (71 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBB90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBB90: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x4C;
    MEM32(esi) = 0x835068;
    PUSH32(esp, 0x003CBBA1u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CBBA1: ;
    ecx = esi + 0x38;
    PUSH32(esp, 0x003CBBA9u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CBBA9: ;
    ecx = esi + 0x10;
    MEM32(esi) = 0x834868;
    PUSH32(esp, 0x003CBBB7u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CBBB7: ;
    ecx = esi;
    PUSH32(esp, 0x003CBBBEu); RECOMP_ABI_CALL(0x00014241u, sub_00014241); /* call 0x00014241 */

loc_003CBBBE: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CBBD1; /* je: equal / zero */

loc_003CBBC5: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003CBBD1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBBCEu); } /* indirect call */
    }

loc_003CBBD1: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CBBF0
 * Original: 0x003CBBF0 - 0x003CBBFB (11 bytes, 4 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBBF0(void)
{

loc_003CBBF0: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CBC00
 * Original: 0x003CBC00 - 0x003CBC01 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBC00(void)
{

loc_003CBC00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CBC10
 * Original: 0x003CBC10 - 0x003CBC54 (68 bytes, 24 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBC10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBC10: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xF);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CBC30u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CBC30: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x14;
    MEM32(esi) = 0x8350B0;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    PUSH32(esp, 0x003CBC46u); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003CBC46: ;
    ecx = esi + 0x28;
    PUSH32(esp, 0x003CBC4Eu); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003CBC4E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CBC70
 * Original: 0x003CBC70 - 0x003CBC76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBC70(void)
{

loc_003CBC70: ;
    eax = MEM32(0x8CDBC4);
    esp += 4; return; /* ret */

}

/**
 * sub_003CBC80
 * Original: 0x003CBC80 - 0x003CBCA1 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBC80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CBC80: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x28;
    MEM32(esi) = 0x8350B0;
    PUSH32(esp, 0x003CBC91u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CBC91: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x003CBC99u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CBC99: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

}

/**
 * sub_003CBCB0
 * Original: 0x003CBCB0 - 0x003CBD0F (95 bytes, 43 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBCB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CBCB0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CBCBFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBCBCu); } /* indirect call */
    }

loc_003CBCBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CBD08; /* jne: not equal / not zero */

loc_003CBCC4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CBCD0u); RECOMP_ABI_CALL(0x00037D9Au, sub_00037D9A); /* call 0x00037D9A */

loc_003CBCD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(edi + 0xC) = eax;
    PUSH32(esp, 0x003CBCDAu); RECOMP_ABI_CALL(0x00037D9Au, sub_00037D9A); /* call 0x00037D9A */

loc_003CBCDA: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi + 0x28;
    MEM32(edi + 0x10) = eax;
    PUSH32(esp, 0x003CBCEAu); RECOMP_ABI_CALL(0x0003676Au, sub_0003676A); /* call 0x0003676A */

loc_003CBCEA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi + 0x14;
    PUSH32(esp, 0x003CBCF4u); RECOMP_ABI_CALL(0x0003676Au, sub_0003676A); /* call 0x0003676A */

loc_003CBCF4: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CBCFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBCF8u); } /* indirect call */
    }

loc_003CBCFB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ebx);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003CBD08: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CBD30
 * Original: 0x003CBD30 - 0x003CBD69 (57 bytes, 18 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBD30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBD30: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x28;
    MEM32(esi) = 0x8350B0;
    PUSH32(esp, 0x003CBD41u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CBD41: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x003CBD49u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CBD49: ;
    ecx = esi;
    PUSH32(esp, 0x003CBD50u); RECOMP_ABI_CALL(0x00014241u, sub_00014241); /* call 0x00014241 */

loc_003CBD50: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CBD63; /* je: equal / zero */

loc_003CBD57: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003CBD63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBD60u); } /* indirect call */
    }

loc_003CBD63: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CBD80
 * Original: 0x003CBD80 - 0x003CBD95 (21 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBD80(void)
{

loc_003CBD80: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8350C8);
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CBD94u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBD92u); } /* indirect call */
    }

loc_003CBD94: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CBDA0
 * Original: 0x003CBDA0 - 0x003CBDB1 (17 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBDA0(void)
{

loc_003CBDA0: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(esp + 4);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003CBDB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBDADu); } /* indirect call */
    }

loc_003CBDB0: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CBDC0
 * Original: 0x003CBDC0 - 0x003CBDC8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBDC0(void)
{

loc_003CBDC0: ;
    eax = MEM32(ecx + 4);
    eax = ZX16(MEM16(eax + 0xC));
    esp += 4; return; /* ret */

}

/**
 * sub_003CBDD0
 * Original: 0x003CBDD0 - 0x003CBDD8 (8 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBDD0(void)
{

loc_003CBDD0: ;
    eax = MEM32(ecx + 4);
    eax = ZX16(MEM16(eax + 2));
    esp += 4; return; /* ret */

}

/**
 * sub_003CBDE0
 * Original: 0x003CBDE0 - 0x003CBE2A (74 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBDE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBDE0: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 5);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CBE00u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CBE00: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi + 0x20;
    MEM32(esi) = 0x8350D8;
    MEM32(esi + 0xC) = eax;
    MEMF(esi + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x14) = eax;
    MEM32(esi + 0x18) = eax;
    MEM32(esi + 0x1C) = eax;
    PUSH32(esp, 0x003CBE24u); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003CBE24: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CBE40
 * Original: 0x003CBE40 - 0x003CBE46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBE40(void)
{

loc_003CBE40: ;
    eax = MEM32(0x8CDBD4);
    esp += 4; return; /* ret */

}

/**
 * sub_003CBE50
 * Original: 0x003CBE50 - 0x003CBEA4 (84 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBE50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CBE50: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x8350D8;
    if (CMP_EQ(_fa, _fb)) goto loc_003CBE73; /* je: equal / zero */

loc_003CBE60: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003CBE6Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBE69u); } /* indirect call */
    }

loc_003CBE6C: ;
    MEM32(esi + 0x1C) = 0;

loc_003CBE73: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBE8D; /* je: equal / zero */

loc_003CBE7A: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CBE86u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBE83u); } /* indirect call */
    }

loc_003CBE86: ;
    MEM32(esi + 0x18) = 0;

loc_003CBE8D: ;
    ecx = esi + 0x20;
    MEM32(esi + 0xC) = 0;
    PUSH32(esp, 0x003CBE9Cu); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CBE9C: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

}

/**
 * sub_003CBEC0
 * Original: 0x003CBEC0 - 0x003CBFF0 (304 bytes, 121 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CBEC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CBECFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBECCu); } /* indirect call */
    }

loc_003CBECF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CBFE9; /* jne: not equal / not zero */

loc_003CBED8: ;
    edx = MEM32(ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esi + 0x10;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    MEM32(esp + 0x18) = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CBEEBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBEE8u); } /* indirect call */
    }

loc_003CBEEB: ;
    edx = MEM32(ebx);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CBEF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBEF4u); } /* indirect call */
    }

loc_003CBEF7: ;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0xC) = eax;
    ecx = MEM32(0x907BA0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CBF0Au); RECOMP_ABI_CALL(0x00024B73u, sub_00024B73); /* call 0x00024B73 */

loc_003CBF0A: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CBF1C; /* jne: not equal / not zero */

loc_003CBF10: ;
    POP32(esp, edi);
    MEM32(esi + 0xC) = ebp;
    POP32(esp, ebp);
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003CBF1C: ;
    ecx = MEM32(edi + 4);
    ebp = ZX16(MEM16(ecx + 2));
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003CBF39; /* jle: less or equal (signed <=) */

loc_003CBF27: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003CBF31u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CBF31: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    goto loc_003CBF40;

loc_003CBF39: ;
    MEM32(esi + 0x18) = 0;

loc_003CBF40: ;
    ecx = MEM32(0x907BA4);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x8350C8);
    PUSH32(esp, 8);
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003CBF51u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBF4Fu); } /* indirect call */
    }

loc_003CBF51: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBF63; /* je: equal / zero */

loc_003CBF55: ;
    ecx = MEM32(esi + 0x18);
    edx = MEM32(esp + 0x14);
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    goto loc_003CBF65;

loc_003CBF63: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CBF65: ;
    ecx = MEM32(esi + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    MEM32(esi + 0x1C) = eax;
    eax = MEM32(ebx);
    PUSH32(esp, ebp);
    ecx = ebx;
    { uint32_t _icall_target = MEM32(eax + 0x30); PUSH32(esp, 0x003CBF74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBF71u); } /* indirect call */
    }

loc_003CBF74: ;
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x14) = ebp;
    edx = MEM32(edi + 4);
    _fa = (uint32_t)(MEM16(edx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0xC), 4 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CBFC6; /* jne: not equal / not zero */

loc_003CBF83: ;
    ecx = edi;
    PUSH32(esp, 0x003CBF8Au); RECOMP_ABI_CALL(0x000159A7u, sub_000159A7); /* call 0x000159A7 */

loc_003CBF8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003CBFC6; /* jle: less or equal (signed <=) */

loc_003CBF8E: ;
    edi = edi;

loc_003CBF90: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x8350EC);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x003CBF9Fu); RECOMP_ABI_CALL(0x00030306u, sub_00030306); /* call 0x00030306 */

loc_003CBF9F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CBFA5u); RECOMP_ABI_CALL(0x005CC550u, sub_005CC550); /* call 0x005CC550 */

loc_003CBFA5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003CBFBA; /* je: equal / zero */

loc_003CBFAE: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x003CBFB4u); RECOMP_ABI_CALL(0x000159A7u, sub_000159A7); /* call 0x000159A7 */

loc_003CBFB4: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003CBF90; /* jl: less (signed <) */

loc_003CBFB8: ;
    goto loc_003CBFC6;

loc_003CBFBA: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x003CBFC0u); RECOMP_ABI_CALL(0x00024FD3u, sub_00024FD3); /* call 0x00024FD3 */

loc_003CBFC0: ;
    _fb = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(esi + 0x18))) >> 32) & 1);
    eax = eax + MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = eax;

loc_003CBFC6: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi + 0x20;
    PUSH32(esp, 0x003CBFD4u); RECOMP_ABI_CALL(0x0003676Au, sub_0003676A); /* call 0x0003676A */

loc_003CBFD4: ;
    edx = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CBFDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CBFD8u); } /* indirect call */
    }

loc_003CBFDB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ebp);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

loc_003CBFE9: ;
    POP32(esp, esi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CC040
 * Original: 0x003CC040 - 0x003CC089 (73 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC040(void)
{

loc_003CC040: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, 0x835114);
    PUSH32(esp, 0x835104);
    ecx = esi;
    PUSH32(esp, 0x003CC056u); RECOMP_ABI_CALL(0x00020AB9u, sub_00020AB9); /* call 0x00020AB9 */

loc_003CC056: ;
    PUSH32(esp, 0x835100);
    PUSH32(esp, 0x835104);
    ecx = esi;
    MEM32(0x9071F8) = eax;
    PUSH32(esp, 0x003CC06Cu); RECOMP_ABI_CALL(0x00020AB9u, sub_00020AB9); /* call 0x00020AB9 */

loc_003CC06C: ;
    PUSH32(esp, 0x8350F8);
    PUSH32(esp, 0x835104);
    ecx = esi;
    MEM32(0x9071FC) = eax;
    PUSH32(esp, 0x003CC082u); RECOMP_ABI_CALL(0x00020AB9u, sub_00020AB9); /* call 0x00020AB9 */

loc_003CC082: ;
    MEM32(0x907200) = eax;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CC0A0
 * Original: 0x003CC0A0 - 0x003CC0BE (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC0A0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003CC0A8u); RECOMP_ABI_CALL(0x00021FA4u, sub_00021FA4); /* call 0x00021FA4 */

loc_003CC0A8: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC0B8; /* je: equal / zero */

loc_003CC0AF: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CC0B5u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003CC0B5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CC0B8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CC0D0
 * Original: 0x003CC0D0 - 0x003CC0F2 (34 bytes, 15 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC0D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CC0D0: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CC0E0u); RECOMP_ABI_CALL(0x00037FCFu, sub_00037FCF); /* call 0x00037FCF */

loc_003CC0E0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CC0E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CC0E4u); } /* indirect call */
    }

loc_003CC0E7: ;
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
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CC100
 * Original: 0x003CC100 - 0x003CC112 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC100: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = eax;
    MEM32(edx) = ecx;
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = ecx;
    MEM32(edx + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003CC120
 * Original: 0x003CC120 - 0x003CC14E (46 bytes, 9 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC120(void)
{

loc_003CC120: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    MEMF(ecx) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEMF(ecx + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ecx + 0xC) = xmm0.f[0]; /* movss */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CC160
 * Original: 0x003CC160 - 0x003CC1F3 (147 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CC160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC160: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp) = eax;
    MEM32(esp + 4) = eax;
    MEM32(esp + 8) = eax;
    MEM32(esp + 0xC) = eax;
    eax = MEM32(ebp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    edx = MEM32(esp);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    eax = MEM32(ebp + 8);
    ecx = eax;
    MEM32(ecx) = edx;
    edx = MEM32(esp + 4);
    MEM32(ecx + 4) = edx;
    edx = MEM32(esp + 8);
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(ecx + 8) = edx;
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    MEM32(ecx + 0xC) = edx;
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003CC220
 * Original: 0x003CC220 - 0x003CC395 (373 bytes, 107 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CC220(void)
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

loc_003CC220: ;
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
    edi = MEM32(ebp + 8);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CC238u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CC235u); } /* indirect call */
    }

loc_003CC238: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CC38A; /* jne: not equal / not zero */

loc_003CC241: ;
    edx = MEM32(edi);
    ebx = esi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CC24Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CC249u); } /* indirect call */
    }

loc_003CC24C: ;
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7AB7D4); /* comiss */
    eax = esp + 0x10;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CC26B; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x7AB7D4)) */

loc_003CC25D: ;
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(ebx); /* divss */
    goto loc_003CC26E;

loc_003CC26B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_003CC26E: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(eax);
    MEM32(esi + 0xC) = eax;
    edx = MEM32(edi);
    ebx = esi + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CC284u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CC281u); } /* indirect call */
    }

loc_003CC284: ;
    fp_push(MEMF(ebx)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x7AA820)); /* fmul dword ptr [0x7aa820] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = sin(fp_top()); /* fsin */
    fp_push(MEMF(0x87DA84)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x87DA88)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x87DA8C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esi + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esi + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebx)); /* fld float */
    eax = MEM32(0x87DA6C);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx = MEM32(0x87DA70);
    fp_top() = sin(fp_top()); /* fsin */
    edx = MEM32(0x87DA74);
    MEM32(esp + 0x14) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x18) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esp + 0x24);
    MEM32(0x907214) = edx;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = cos(fp_top()); /* fcos */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x20);
    MEM32(0x907210) = ecx;
    MEMF(esp + 0x28) = (float)fp_top(); /* fst */
    xmm0 = XMM_SCALAR(MEMF(0x907210)); /* movss */
    fp_push(MEMF(0x87DA74)); /* fld float */
    eax = MEM32(esp + 0x28);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM32(0x907218) = eax;
    fp_push(MEMF(0x87DA6C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(0x87DA70)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = -fp_top(); /* fchs */
    MEMF(esp + 0x2C) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp + 0x2C);
    MEM32(0x90721C) = ecx;
    MEMF(esi + 0x30) = xmm0.f[0]; /* movss */
    fp_pop(); /* fstp st(0) */
    xmm0 = XMM_SCALAR(MEMF(0x907214)); /* movss */
    fp_pop(); /* fstp st(0) */
    MEMF(esi + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x907218)); /* movss */
    MEMF(esi + 0x38) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x90721C)); /* movss */
    MEMF(esi + 0x3C) = xmm0.f[0]; /* movss */

loc_003CC38A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CC400
 * Original: 0x003CC400 - 0x003CC409 (9 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC400(void)
{

loc_003CC400: ;
    eax = ecx;
    MEM32(eax) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_003CC410
 * Original: 0x003CC410 - 0x003CC414 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC410(void)
{

loc_003CC410: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003CC420
 * Original: 0x003CC420 - 0x003CC43E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC420: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC438; /* jl: less (signed <) */

loc_003CC428: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CC438; /* jge: greater or equal (signed >=) */

loc_003CC42D: ;
    edx = MEM32(ecx + 0xC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_003CC438: ;
    eax = MEM32(ecx + 0xC);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CC450
 * Original: 0x003CC450 - 0x003CC780 (816 bytes, 239 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC450(void)
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

loc_003CC450: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = ecx;
    PUSH32(esp, 0x003CC45Cu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003CC45C: ;
    SET_LO8(ebx, MEM8(esp + 0x28));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 8) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(ebp + 0x54);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_003CC778; /* jle: less or equal (signed <=) */

loc_003CC482: ;
    PUSH32(esp, esi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edi);

loc_003CC488: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC498; /* jl: less (signed <) */

loc_003CC48C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x54) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CC498; /* jge: greater or equal (signed >=) */

loc_003CC491: ;
    esi = MEM32(ebp + 0x58);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003CC49B;

loc_003CC498: ;
    esi = MEM32(ebp + 0x58);

loc_003CC49B: ;
    edi = MEM32(esi);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CC4B2; /* jne: not equal / not zero */

loc_003CC4A4: ;
    edx = edi + 4;
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x003CC4AFu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CC4AF: ;
    MEM32(edi + 8) = eax;

loc_003CC4B2: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CC4CC; /* jne: not equal / not zero */

loc_003CC4BC: ;
    eax = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003CC4C3u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CC4C0u); } /* indirect call */
    }

loc_003CC4C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    MEM32(esp + 0x30) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003CC4D4; /* je: equal / zero */

loc_003CC4CC: ;
    MEM32(esp + 0x30) = 0;

loc_003CC4D4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CC4EA; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(esi + 8)) */

loc_003CC4E0: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_003CC50A; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003CC4EA: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003CC488; /* jl: less (signed <) */

loc_003CC4FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_003CC50A: ;
    ecx = MEM32(esp + 0x18);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CC553; /* jge: greater or equal (signed >=) */

loc_003CC513: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_003CC525; /* js: sign (negative) */

loc_003CC516: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x54) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CC525; /* jge: greater or equal (signed >=) */

loc_003CC51B: ;
    eax = MEM32(ebp + 0x58);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003CC528;

loc_003CC525: ;
    ebx = MEM32(ebp + 0x58);

loc_003CC528: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003CC553; /* ja: above (unsigned >) (xmm2.f[0] vs xmm1.f[0]) */

loc_003CC53F: ;
    xmm2 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_003CC553; /* ja: above (unsigned >) (xmm2.f[0] vs xmm0.f[0]) */

loc_003CC549: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0xC); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CC5F0; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0xC)) */

loc_003CC553: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x003CC55Cu); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003CC55C: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CC585; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003CC582: ;
    xmm0 = xmm1; /* movaps */

loc_003CC585: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 8); /* subss */
    edx = MEM32(esi);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x28);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(eax + 0x14) = edx;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x28);
    MEM32(eax + 0x28) = ecx;
    MEM32(eax + 0x24) = edx;
    edx = MEM32(esp + 0x30);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    SET_LO8(ebx, MEM8(edx + 0xC));
    edx = MEM32(esp + 0x1C);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, ((_fa != 0)) ? 1 : 0); /* setne */
    MEM8(eax + 0x18) = LO8(ecx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

loc_003CC5F0: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    ecx = MEM32(esp + 0x10);
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x003CC628u); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003CC628: ;
    xmm1 = XMM_SCALAR(MEMF(esi + 0xC)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 8); /* subss */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    edi = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CC653; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_003CC650: ;
    xmm1 = xmm2; /* movaps */

loc_003CC653: ;
    xmm1.f[0] = xmm1.f[0] - MEMF(esi + 8); /* subss */
    edx = MEM32(esi);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(esi + 8); /* subss */
    ebp = MEM32(esp + 0x1C);
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(edi + 0x14) = edx;
    MEM32(edi + 0x28) = eax;
    eax = MEM32(esp + 0x30);
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x2C);
    MEM32(edi + 0x24) = ecx;
    MEMF(edi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(edi + 0x20) = xmm0.f[0]; /* movss */
    SET_LO8(ecx, MEM8(eax + 0xC));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = edx ^ ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, ((_fa != 0)) ? 1 : 0); /* setne */
    MEM8(edi + 0x18) = LO8(ecx);
    esi = MEM32(ebx);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CC6CB; /* jne: not equal / not zero */

loc_003CC6BD: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003CC6C8u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CC6C8: ;
    MEM32(esi + 8) = eax;

loc_003CC6CB: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CC6E1; /* jne: not equal / not zero */

loc_003CC6D5: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x003CC6DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CC6D9u); } /* indirect call */
    }

loc_003CC6DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CC6E3; /* je: equal / zero */

loc_003CC6E1: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CC6E3: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, 0x003CC6ECu); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003CC6EC: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] / xmm0.f[0]; /* divss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CC715; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003CC712: ;
    xmm0 = xmm1; /* movaps */

loc_003CC715: ;
    xmm0.f[0] = xmm0.f[0] - MEMF(ebx + 8); /* subss */
    ecx = MEM32(ebx);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebx + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x30);
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x28) = edx;
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x30);
    MEM32(eax + 0x24) = ecx;
    MEMF(eax + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(eax + 0x20) = xmm1.f[0]; /* movss */
    SET_LO8(ebx, MEM8(esi + 0xC));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = edx ^ ebp;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ecx, ((_fa != 0)) ? 1 : 0); /* setne */
    MEM8(eax + 0x18) = LO8(ecx);
    MEM32(edi + 0xC) = eax;
    MEM32(eax + 8) = edi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003CC778: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CC850
 * Original: 0x003CC850 - 0x003CC88D (61 bytes, 22 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC850: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CC88A; /* jge: greater or equal (signed >=) */

loc_003CC858: ;
    edx = MEM32(ecx + 0xC);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(edx);
    MEM32(eax) = esi;
    esi = MEM32(edx + 4);
    MEM32(eax + 4) = esi;
    esi = MEM32(edx + 8);
    MEM32(eax + 8) = esi;
    edx = MEM32(edx + 0xC);
    MEM32(eax + 0xC) = edx;
    eax = MEM32(ecx + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = eax;
    MEM32(ecx + 0x10) = 0;
    POP32(esp, esi);

loc_003CC88A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CC8A0
 * Original: 0x003CC8A0 - 0x003CC8B2 (18 bytes, 6 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC8A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC8A0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x4C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003CC8AFu); RECOMP_ABI_CALL(0x0002C97Cu, sub_0002C97C); /* call 0x0002C97C */

loc_003CC8AF: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CC8C0
 * Original: 0x003CC8C0 - 0x003CC924 (100 bytes, 27 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC8C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC8C0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = MEM32(ecx + 0x54);
    edx = MEM32(esp + 0x14);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    PUSH32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x50) (32-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_003CC91D; /* jge: greater or equal (signed >=) */

loc_003CC8F4: ;
    esi = MEM32(ecx + 0x58);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    edx = MEM32(esp + 8);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 0xC) = edx;
    MEM32(ecx + 0x54) = MEM32(ecx + 0x54) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 0x5C) = 0;

loc_003CC91D: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CC940
 * Original: 0x003CC940 - 0x003CC98F (79 bytes, 30 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CC940: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0x74);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    MEM32(esi) = 0x834B54;
    if (CMP_EQ(_fa, _fb)) goto loc_003CC95C; /* je: equal / zero */

loc_003CC953: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CC959u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CC957u); } /* indirect call */
    }

loc_003CC959: ;
    MEM32(esi + 0x74) = edi;

loc_003CC95C: ;
    eax = MEM32(esi + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esi + 0x4C) = 0x834B30;
    if (CMP_LE(_fas, _fbs)) goto loc_003CC986; /* jle: less or equal (signed <=) */

loc_003CC96A: ;
    eax = MEM32(esi + 0x58);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CC97D; /* je: equal / zero */

loc_003CC971: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CC97Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CC97Au); } /* indirect call */
    }

loc_003CC97D: ;
    MEM32(esi + 0x58) = edi;
    MEM32(esi + 0x50) = edi;
    MEM32(esi + 0x54) = edi;

loc_003CC986: ;
    POP32(esp, edi);
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

}

/**
 * sub_003CC9B0
 * Original: 0x003CC9B0 - 0x003CCB06 (342 bytes, 118 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC9B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CC9B0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x2C);
    eax = MEM32(esi);
    ebx = ecx;
    PUSH32(esp, edi);
    edi = ebx + 0x60;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x003CC9C7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CC9C4u); } /* indirect call */
    }

loc_003CC9C7: ;
    edx = MEM32(esi);
    eax = ebx + 0x64;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CC9D2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CC9CFu); } /* indirect call */
    }

loc_003CC9D2: ;
    edx = MEM32(esi);
    eax = ebx + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CC9DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CC9DAu); } /* indirect call */
    }

loc_003CC9DD: ;
    edx = MEM32(esi);
    eax = ebx + 0x6C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CC9E8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CC9E5u); } /* indirect call */
    }

loc_003CC9E8: ;
    ecx = MEM32(edi);
    MEM32(ebx + 0x70) = ecx;
    edx = MEM32(esi);
    eax = esp + 0x30;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CC9F9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CC9F6u); } /* indirect call */
    }

loc_003CC9F9: ;
    ecx = MEM32(esp + 0x30);
    PUSH32(esp, 1);
    edi = ebx + 0x4C;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003CCA0Au); RECOMP_ABI_CALL(0x0002C97Cu, sub_0002C97C); /* call 0x0002C97C */

loc_003CCA0A: ;
    eax = MEM32(esp + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0xC) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_003CCABF; /* jle: less or equal (signed <=) */

loc_003CCA1E: ;
    PUSH32(esp, ebp);
    /* nop */

loc_003CCA20: ;
    edx = MEM32(esp + 0x38);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CCA2Bu); RECOMP_ABI_CALL(0x00037D9Au, sub_00037D9A); /* call 0x00037D9A */

loc_003CCA2B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x14;
    ebp = eax;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x003CCA3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CCA39u); } /* indirect call */
    }

loc_003CCA3C: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CCA48u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CCA45u); } /* indirect call */
    }

loc_003CCA48: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CCA54u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CCA51u); } /* indirect call */
    }

loc_003CCA54: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    if (CMP_GE(_fas, _fbs)) goto loc_003CCAA9; /* jge: greater or equal (signed >=) */

loc_003CCA80: ;
    ecx = MEM32(edi + 0xC);
    edx = MEM32(esp + 0x28);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(4) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x24);
    MEM32(eax) = ebp;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 0x2C);
    MEM32(eax + 8) = edx;
    MEM32(eax + 0xC) = ecx;
    MEM32(edi + 8) = MEM32(edi + 8) + 1;
    _fa = (uint32_t)(MEM32(edi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi + 0x10) = 0;

loc_003CCAA9: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x34);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x10) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003CCA20; /* jl: less (signed <) */

loc_003CCABE: ;
    POP32(esp, ebp);

loc_003CCABF: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CCACAu); RECOMP_ABI_CALL(0x000290F1u, sub_000290F1); /* call 0x000290F1 */

loc_003CCACA: ;
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x60)); /* movss */
    MEM32(ebx + 0x74) = eax;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 4); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    xmm0.f[0] = xmm0.f[0] - MEMF(0x7A9980); /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x70) = xmm1.f[0]; /* movss */
    eax = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CCAF6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CCAF3u); } /* indirect call */
    }

loc_003CCAF6: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, edi);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CCB60
 * Original: 0x003CCB60 - 0x003CCB6E (14 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CCB60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CCB60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 8)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 8), 0xF (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_003CCB80
 * Original: 0x003CCB80 - 0x003CCBA8 (40 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CCB80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CCB80: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCB96; /* jne: not equal / not zero */

loc_003CCB8A: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CCB93u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CCB93: ;
    MEM32(esi + 8) = eax;

loc_003CCB96: ;
    eax = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0xF (16-bit) */
    POP32(esp, esi);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_003CCBC0
 * Original: 0x003CCBC0 - 0x003CCBF3 (51 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CCBC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CCBC0: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CCBEF; /* je: equal / zero */

loc_003CCBC8: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCBDD; /* jne: not equal / not zero */

loc_003CCBCF: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CCBDAu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CCBDA: ;
    MEM32(esi + 8) = eax;

loc_003CCBDD: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0xB (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CCBEF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CCC00
 * Original: 0x003CCC00 - 0x003CCC0A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CCC00(void)
{

loc_003CCC00: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x18) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CCC10
 * Original: 0x003CCC10 - 0x003CCC1A (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CCC10(void)
{

loc_003CCC10: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CCC20
 * Original: 0x003CCC20 - 0x003CCC72 (82 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CCC20(void)
{

loc_003CCC20: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xB);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CCC40u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CCC40: ;
    ecx = esi + 0x18;
    MEM32(esi) = 0x835140;
    MEM8(esi + 0xC) = 1;
    MEM8(esi + 0xD) = 0;
    MEM32(esi + 0x14) = 0;
    PUSH32(esp, 0x003CCC5Du); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003CCC5D: ;
    ecx = esi + 0x30;
    MEM32(esi + 0x2C) = 0;
    PUSH32(esp, 0x003CCC6Cu); RECOMP_ABI_CALL(0x00020B59u, sub_00020B59); /* call 0x00020B59 */

loc_003CCC6C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CCC90
 * Original: 0x003CCC90 - 0x003CCC96 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CCC90(void)
{

loc_003CCC90: ;
    eax = 0x7DD1DC;
    esp += 4; return; /* ret */

}

/**
 * sub_003CCCA0
 * Original: 0x003CCCA0 - 0x003CCCC1 (33 bytes, 10 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CCCA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CCCA0: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x30;
    MEM32(esi) = 0x835140;
    PUSH32(esp, 0x003CCCB1u); RECOMP_ABI_CALL(0x0002CCC9u, sub_0002CCC9); /* call 0x0002CCC9 */

loc_003CCCB1: ;
    ecx = esi + 0x18;
    PUSH32(esp, 0x003CCCB9u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CCCB9: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

}

/**
 * sub_003CCCD0
 * Original: 0x003CCCD0 - 0x003CCD02 (50 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CCCD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CCCD0: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_003CCCEB; /* je: equal / zero */

loc_003CCCDD: ;
    /* nop */

loc_003CCCE0: ;
    edx = eax;
    MEM32(eax) = ecx;
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCCE0; /* jne: not equal / not zero */

loc_003CCCEB: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CCCFB; /* je: equal / zero */

loc_003CCCF2: ;
    MEM32(eax + 8) = edx;
    eax = MEM32(ecx + 4);
    MEM32(edx + 0xC) = eax;

loc_003CCCFB: ;
    MEM32(ecx + 4) = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CCD10
 * Original: 0x003CCD10 - 0x003CCD46 (54 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CCD10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CCD10: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x30;
    MEM32(esi) = 0x835140;
    PUSH32(esp, 0x003CCD21u); RECOMP_ABI_CALL(0x0002CCC9u, sub_0002CCC9); /* call 0x0002CCC9 */

loc_003CCD21: ;
    ecx = esi + 0x18;
    PUSH32(esp, 0x003CCD29u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CCD29: ;
    ecx = esi;
    PUSH32(esp, 0x003CCD30u); RECOMP_ABI_CALL(0x00014241u, sub_00014241); /* call 0x00014241 */

loc_003CCD30: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CCD40; /* je: equal / zero */

loc_003CCD37: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CCD3Du); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003CCD3D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CCD40: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CCD60
 * Original: 0x003CCD60 - 0x003CCE25 (197 bytes, 77 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CCD60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CCD60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = ecx;
    ecx = MEM32(ebx + 0x20);
    PUSH32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003CCE1F; /* jle: less or equal (signed <=) */

loc_003CCD78: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    /* nop */

loc_003CCD80: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(ebx + 0x28) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003CCD98; /* jl: less (signed <) */

loc_003CCD8B: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ebx + 0x20) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CCD98; /* jge: greater or equal (signed >=) */

loc_003CCD90: ;
    eax = MEM32(ebx + 0x24);
    eax = eax + ebp * 4;
    goto loc_003CCD9B;

loc_003CCD98: ;
    eax = MEM32(ebx + 0x24);

loc_003CCD9B: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCDB2; /* jne: not equal / not zero */

loc_003CCDA4: ;
    ecx = esi + 4;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003CCDAFu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CCDAF: ;
    MEM32(esi + 8) = eax;

loc_003CCDB2: ;
    eax = MEM32(esi + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(0xF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 0xF (16-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edx;
    esi = MEM32(edi + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CCDF2; /* je: equal / zero */

loc_003CCDCB: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCDE0; /* jne: not equal / not zero */

loc_003CCDD2: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CCDDDu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CCDDD: ;
    MEM32(esi + 8) = eax;

loc_003CCDE0: ;
    esi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0xB (16-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003CCDF4;

loc_003CCDF2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CCDF4: ;
    esi = MEM32(esp + 0x18);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(0xB) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 0xB (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCE0D; /* jne: not equal / not zero */

loc_003CCE09: ;
    MEM32(esp + 0x10) = edi;

loc_003CCE0D: ;
    eax = MEM32(ebx + 0x20);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCD80; /* jl: less (signed <) */

loc_003CCE19: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);

loc_003CCE1F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CCE60
 * Original: 0x003CCE60 - 0x003CCF36 (214 bytes, 88 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CCE60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CCE60: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x34);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(esp + 0x10) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003CCE87; /* jne: not equal / not zero */

loc_003CCE79: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CCE84u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CCE84: ;
    MEM32(esi + 8) = eax;

loc_003CCE87: ;
    esi = MEM32(esi + 8);
    ebp = MEM32(esp + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(9) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 9 (16-bit) */
    ecx = ebp;
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = 1;
    { uint32_t _sv=(uint32_t)(edx), _sc=(uint32_t)(LO8(ecx)) & 31u;
      if (_sc) {
        edx = _sv << _sc;
        _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = MEM32(eax + 0xC);
    MEM32(eax + 0x24) = ebp;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    MEM32(eax + 0x18) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003CCEBD; /* jne: not equal / not zero */

loc_003CCEB3: ;
    ecx = MEM32(edi + 0x2C);
    eax = edx;
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(edi + 0x2C) = ecx;

loc_003CCEBD: ;
    eax = MEM32(ebx + 0x54);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CCF2C; /* jle: less or equal (signed <=) */

loc_003CCEC6: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCED7; /* jl: less (signed <) */

loc_003CCECA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x54)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x54) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CCED7; /* jge: greater or equal (signed >=) */

loc_003CCECF: ;
    ecx = MEM32(ebx + 0x58);
    eax = ecx + edi * 4;
    goto loc_003CCEDA;

loc_003CCED7: ;
    eax = MEM32(ebx + 0x58);

loc_003CCEDA: ;
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCEF1; /* jne: not equal / not zero */

loc_003CCEE3: ;
    edx = esi + 4;
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003CCEEEu); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CCEEE: ;
    MEM32(esi + 8) = eax;

loc_003CCEF1: ;
    esi = MEM32(esi + 8);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 1;
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(eax) (16-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi & ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCF24; /* jne: not equal / not zero */

loc_003CCF0B: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003CCF12u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CCF0Fu); } /* indirect call */
    }

loc_003CCF12: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCF24; /* jne: not equal / not zero */

loc_003CCF17: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CCF22u); RECOMP_ABI_CALL(0x0001636Bu, sub_0001636B); /* call 0x0001636B */

loc_003CCF22: ;
    ebp = eax;

loc_003CCF24: ;
    eax = MEM32(ebx + 0x54);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCEC6; /* jl: less (signed <) */

loc_003CCF2C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CCF70
 * Original: 0x003CCF70 - 0x003CD077 (263 bytes, 101 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CCF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CCF70: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x003CCF7Eu); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003CCF7E: ;
    edi = MEM32(esi + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CD06D; /* je: equal / zero */

loc_003CCF8B: ;
    PUSH32(esp, 0x003CCF90u); RECOMP_ABI_CALL(0x000227B0u, sub_000227B0); /* call 0x000227B0 */

loc_003CCF90: ;
    ecx = eax;
    PUSH32(esp, 0x003CCF97u); RECOMP_ABI_CALL(0x000163DEu, sub_000163DE); /* call 0x000163DE */

loc_003CCF97: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    esi = eax;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    MEM32(esi + 0x14) = edi;
    MEMF(esi + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x20) = xmm0.f[0]; /* movss */
    MEM32(esi + 0x28) = eax;
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCFD3; /* jne: not equal / not zero */

loc_003CCFC5: ;
    ecx = edi + 4;
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x003CCFD0u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CCFD0: ;
    MEM32(edi + 8) = eax;

loc_003CCFD3: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD063; /* jne: not equal / not zero */

loc_003CCFE1: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003CCFE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CCFE5u); } /* indirect call */
    }

loc_003CCFE8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD063; /* jne: not equal / not zero */

loc_003CCFED: ;
    edi = MEM32(edi + 0x34);
    eax = MEM32(edi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD005; /* jne: not equal / not zero */

loc_003CCFF7: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003CD002u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CD002: ;
    MEM32(edi + 8) = eax;

loc_003CD005: ;
    eax = MEM32(edi + 8);
    edx = MEM32(esp + 0x1C);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(9) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), 9 (16-bit) */
    PUSH32(esp, edx);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003CD025u); RECOMP_ABI_CALL(0x00036350u, sub_00036350); /* call 0x00036350 */

loc_003CD025: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CD03D; /* je: equal / zero */

loc_003CD02B: ;
    goto loc_003CD030;

    /* nop */

loc_003CD030: ;
    edx = MEM32(ecx + 0x1C);
    MEM32(ecx + 0x20) = edx;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD030; /* jne: not equal / not zero */

loc_003CD03D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CD050; /* je: equal / zero */

loc_003CD045: ;
    edx = ecx;
    MEM32(ecx) = esi;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD045; /* jne: not equal / not zero */

loc_003CD050: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD060; /* je: equal / zero */

loc_003CD057: ;
    MEM32(ecx + 8) = edx;
    ecx = MEM32(esi + 4);
    MEM32(edx + 0xC) = ecx;

loc_003CD060: ;
    MEM32(esi + 4) = eax;

loc_003CD063: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

loc_003CD06D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CD0C0
 * Original: 0x003CD0C0 - 0x003CD135 (117 bytes, 34 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD0C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003CD0C0: ;
    edx = MEM32(ecx + 0x6C);
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x64);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = edx + edx * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(eax + esi) = xmm0.f[0]; /* movss */
    esi = MEM32(ecx + 0x64);
    edi = MEM32(edi);
    MEM32(esi + eax + 4) = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_003CD12F; /* jle: less or equal (signed <=) */

loc_003CD0EC: ;
    edx = MEM32(ecx + 0x64);
    xmm0 = XMM_SCALAR(MEMF(eax + edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + edx + -12); /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CD11E; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_003CD110: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(eax + -4) = xmm0.f[0]; /* movss */
    MEM32(ecx + 0x6C) = MEM32(ecx + 0x6C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

loc_003CD11E: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(eax + -4) = xmm1.f[0]; /* movss */

loc_003CD12F: ;
    MEM32(ecx + 0x6C) = MEM32(ecx + 0x6C) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CD160
 * Original: 0x003CD160 - 0x003CD17B (27 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD160(void)
{

loc_003CD160: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    eax = esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esp + 8) = 0;
    PUSH32(esp, 0x003CD177u); RECOMP_ABI_CALL(0x000337CCu, sub_000337CC); /* call 0x000337CC */

loc_003CD177: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CD190
 * Original: 0x003CD190 - 0x003CD1DA (74 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD190(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CD190: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(edi + 0x2C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003CD1D7; /* je: equal / zero */

loc_003CD1A2: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD1B7; /* jne: not equal / not zero */

loc_003CD1A9: ;
    eax = esi + 4;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CD1B4u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CD1B4: ;
    MEM32(esi + 8) = eax;

loc_003CD1B7: ;
    esi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM16(esi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD1D7; /* jne: not equal / not zero */

loc_003CD1C1: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003CD1C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD1C5u); } /* indirect call */
    }

loc_003CD1C8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD1D7; /* jne: not equal / not zero */

loc_003CD1CD: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003CD1D7u); RECOMP_ABI_CALL(0x0001636Bu, sub_0001636B); /* call 0x0001636B */

loc_003CD1D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CD1F0
 * Original: 0x003CD1F0 - 0x003CD2A8 (184 bytes, 55 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD1F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CD1F0: ;
    PUSH32(esp, ecx);
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x003CD20Bu); RECOMP_ABI_CALL(0x000337CCu, sub_000337CC); /* call 0x000337CC */

loc_003CD20B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(esp + 0x18);
    MEM32(ecx + 0x40) = 0;
    ebx = MEM32(0x87DA6C);
    edx = ecx + 0x44;
    esi = edx;
    MEM32(esi) = ebx;
    ebx = MEM32(0x87DA70);
    MEM32(esi + 4) = ebx;
    ebx = MEM32(0x87DA74);
    MEM32(esi + 8) = ebx;
    ebp = MEM32(0x87DA6C);
    esi = ecx + 0x50;
    ebx = esi;
    MEM32(ebx) = ebp;
    ebp = MEM32(0x87DA70);
    MEM32(ebx + 4) = ebp;
    ebp = MEM32(0x87DA74);
    MEM32(ebx + 8) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_003CD270; /* je: equal / zero */

loc_003CD258: ;
    goto loc_003CD260;

    /* nop */

loc_003CD260: ;
    ebx = MEM32(ecx + 0x40);
    MEM32(ecx + ebx * 4) = eax;
    MEM32(ecx + 0x40) = MEM32(ecx + 0x40) + 1;
    _fa = (uint32_t)(MEM32(ecx + 0x40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD260; /* jne: not equal / not zero */

loc_003CD270: ;
    eax = MEM32(0x87DA6C);
    MEM32(esi) = eax;
    ecx = MEM32(0x87DA70);
    MEM32(esi + 4) = ecx;
    eax = MEM32(0x87DA74);
    MEM32(esi + 8) = eax;
    ecx = MEM32(0x87DA6C);
    MEM32(edx) = ecx;
    eax = MEM32(0x87DA70);
    POP32(esp, esi);
    MEM32(edx + 4) = eax;
    ecx = MEM32(0x87DA74);
    POP32(esp, ebp);
    MEM32(edx + 8) = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CD2E0
 * Original: 0x003CD2E0 - 0x003CD450 (368 bytes, 109 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD2E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    int _cf = 0; /* carry flag */

loc_003CD2E0: ;
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = MEM32(edi);
    esi = ecx;
    ecx = edi;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CD2EFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD2ECu); } /* indirect call */
    }

loc_003CD2EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CD449; /* jne: not equal / not zero */

loc_003CD2F8: ;
    edx = MEM32(edi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003CD304u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD301u); } /* indirect call */
    }

loc_003CD304: ;
    edx = MEM32(edi);
    eax = esi + 0xD;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = edi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003CD30Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD30Cu); } /* indirect call */
    }

loc_003CD30F: ;
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003CD31Au); RECOMP_ABI_CALL(0x00037D9Au, sub_00037D9A); /* call 0x00037D9A */

loc_003CD31A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ecx = esi + 0x18;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x003CD32Au); RECOMP_ABI_CALL(0x0003676Au, sub_0003676A); /* call 0x0003676A */

loc_003CD32A: ;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD347; /* je: equal / zero */

loc_003CD334: ;
    ecx = esi + 0x34;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003CD347; /* je: equal / zero */

loc_003CD33B: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CD347u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD344u); } /* indirect call */
    }

loc_003CD347: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    MEM32(esi + 0x98) = 2;
    MEM32(esi + 0x9C) = 0;
    eax = esi + 0x34;
    MEM32(esi + 0x94) = eax;
    ecx = MEM32(esi + 0x9C);
    edx = MEM32(esi + 0x94);
    eax = ecx + ecx * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(eax + edx) = xmm3.f[0]; /* movss */
    edx = MEM32(esi + 0x94);
    MEMF(eax + edx + 4) = xmm1.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_003CD3D0; /* jle: less or equal (signed <=) */

loc_003CD39E: ;
    ecx = MEM32(esi + 0x94);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + ecx + -12); /* subss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CD3C4; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_003CD3BD: ;
    MEMF(eax + -4) = xmm3.f[0]; /* movss */
    goto loc_003CD3D0;

loc_003CD3C4: ;
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] / xmm0.f[0]; /* divss */
    MEMF(eax + -4) = xmm4.f[0]; /* movss */

loc_003CD3D0: ;
    eax = MEM32(esi + 0x9C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x9C) = eax;
    edx = MEM32(esi + 0x94);
    ecx = eax;
    eax = ecx + ecx * 2;
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        _cf = _sc <= 32u ? (int)((_sv >> (32u - _sc)) & 1u) : 0;
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(eax + edx) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0x94);
    MEMF(edx + eax + 4) = xmm1.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_003CD42F; /* jle: less or equal (signed <=) */

loc_003CD400: ;
    ecx = MEM32(esi + 0x94);
    xmm0 = XMM_SCALAR(MEMF(eax + ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + ecx + -12); /* subss */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ecx)) >> 32) & 1);
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CD426; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm4.f[0]) */

loc_003CD41F: ;
    MEMF(eax + -4) = xmm3.f[0]; /* movss */
    goto loc_003CD42F;

loc_003CD426: ;
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(eax + -4) = xmm1.f[0]; /* movss */

loc_003CD42F: ;
    MEM32(esi + 0x9C) = MEM32(esi + 0x9C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x9C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CD43Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD439u); } /* indirect call */
    }

loc_003CD43C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ebx);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, edi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003CD449: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CD4B0
 * Original: 0x003CD4B0 - 0x003CD4E7 (55 bytes, 22 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD4B0(void)
{

loc_003CD4B0: ;
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edi);
    PUSH32(esp, 0x17);
    esi = ecx;
    ecx = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = esi;
    PUSH32(esp, 0x003CD4D1u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CD4D1: ;
    PUSH32(esp, edi);
    ecx = esi + 0x28;
    MEM32(esi) = 0x835158;
    PUSH32(esp, 0x003CD4E0u); RECOMP_ABI_CALL(0x000123B0u, sub_000123B0); /* call 0x000123B0 */

loc_003CD4E0: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CD500
 * Original: 0x003CD500 - 0x003CD506 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD500(void)
{

loc_003CD500: ;
    eax = 0x834A2C;
    esp += 4; return; /* ret */

}

/**
 * sub_003CD510
 * Original: 0x003CD510 - 0x003CD529 (25 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CD510: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x28;
    MEM32(esi) = 0x835158;
    PUSH32(esp, 0x003CD521u); RECOMP_ABI_CALL(0x00013102u, sub_00013102); /* call 0x00013102 */

loc_003CD521: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

}

/**
 * sub_003CD530
 * Original: 0x003CD530 - 0x003CD531 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD530(void)
{

loc_003CD530: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CD540
 * Original: 0x003CD540 - 0x003CD571 (49 bytes, 16 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD540(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CD540: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 0x28;
    MEM32(esi) = 0x835158;
    PUSH32(esp, 0x003CD551u); RECOMP_ABI_CALL(0x00013102u, sub_00013102); /* call 0x00013102 */

loc_003CD551: ;
    ecx = esi;
    PUSH32(esp, 0x003CD558u); RECOMP_ABI_CALL(0x00014241u, sub_00014241); /* call 0x00014241 */

loc_003CD558: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CD56B; /* je: equal / zero */

loc_003CD55F: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003CD56Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD568u); } /* indirect call */
    }

loc_003CD56B: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CD580
 * Original: 0x003CD580 - 0x003CD603 (131 bytes, 60 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CD580: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CD58Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD58Cu); } /* indirect call */
    }

loc_003CD58F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CD5F0; /* jne: not equal / not zero */

loc_003CD594: ;
    edx = MEM32(esi);
    eax = edi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CD59Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD59Cu); } /* indirect call */
    }

loc_003CD59F: ;
    edx = MEM32(esi);
    eax = edi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CD5AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD5A7u); } /* indirect call */
    }

loc_003CD5AA: ;
    edx = MEM32(esi);
    eax = edi + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CD5B5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD5B2u); } /* indirect call */
    }

loc_003CD5B5: ;
    edx = MEM32(esi);
    eax = edi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CD5C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD5BDu); } /* indirect call */
    }

loc_003CD5C0: ;
    edx = MEM32(esi);
    eax = edi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CD5CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD5C8u); } /* indirect call */
    }

loc_003CD5CB: ;
    edx = MEM32(esi);
    eax = edi + 0x20;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CD5D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD5D3u); } /* indirect call */
    }

loc_003CD5D6: ;
    edx = MEM32(esi);
    eax = edi + 0x24;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003CD5E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD5DEu); } /* indirect call */
    }

loc_003CD5E1: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(edi + 0x28);
    ecx = edi + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003CD5F0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD5EDu); } /* indirect call */
    }

loc_003CD5F0: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CD5F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD5F4u); } /* indirect call */
    }

loc_003CD5F7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
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
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CD630
 * Original: 0x003CD630 - 0x003CD645 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CD630: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD644; /* je: equal / zero */

loc_003CD638: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CD644u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD641u); } /* indirect call */
    }

loc_003CD644: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CD650
 * Original: 0x003CD650 - 0x003CD662 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD650(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CD650: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CD65Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CD65E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003CD670
 * Original: 0x003CD670 - 0x003CD685 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CD670: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD684; /* je: equal / zero */

loc_003CD678: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CD684u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD681u); } /* indirect call */
    }

loc_003CD684: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CD690
 * Original: 0x003CD690 - 0x003CD6AC (28 bytes, 9 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD690(void)
{

loc_003CD690: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = esi + 8;
    MEM32(esi) = 0x835170;
    PUSH32(esp, 0x003CD6A1u); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003CD6A1: ;
    MEM32(esi + 0x20) = 0;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CD6C0
 * Original: 0x003CD6C0 - 0x003CD6C6 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD6C0(void)
{

loc_003CD6C0: ;
    eax = 0x835198;
    esp += 4; return; /* ret */

}

/**
 * sub_003CD6D0
 * Original: 0x003CD6D0 - 0x003CD6DA (10 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD6D0(void)
{

loc_003CD6D0: ;
    eax = MEM32(esp + 4);
    MEM32(ecx + 0x24) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CD6E0
 * Original: 0x003CD6E0 - 0x003CD6E4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD6E0(void)
{

loc_003CD6E0: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003CD6F0
 * Original: 0x003CD6F0 - 0x003CD6F4 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD6F0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003CD6F0: ;
    fp_push(MEMF(ecx + 0x1C)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CD700
 * Original: 0x003CD700 - 0x003CD704 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD700(void)
{

loc_003CD700: ;
    eax = ecx + 8;
    esp += 4; return; /* ret */

}

/**
 * sub_003CD710
 * Original: 0x003CD710 - 0x003CD714 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD710(void)
{

loc_003CD710: ;
    eax = MEM32(ecx + 0x20);
    esp += 4; return; /* ret */

}

/**
 * sub_003CD720
 * Original: 0x003CD720 - 0x003CD72E (14 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CD720: ;
    MEM32(ecx) = 0x835170;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000250E1(); return; /* tail jmp 0x000250E1 */

}

/**
 * sub_003CD740
 * Original: 0x003CD740 - 0x003CD741 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD740(void)
{

loc_003CD740: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CD750
 * Original: 0x003CD750 - 0x003CD76A (26 bytes, 8 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD750(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CD750: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax) = 0x8351B0;
    MEM32(eax + 0xC) = ecx;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CD770
 * Original: 0x003CD770 - 0x003CD776 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD770(void)
{

loc_003CD770: ;
    eax = 0x8351C8;
    esp += 4; return; /* ret */

}

/**
 * sub_003CD780
 * Original: 0x003CD780 - 0x003CD784 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD780(void)
{

loc_003CD780: ;
    eax = MEM32(ecx + 8);
    esp += 4; return; /* ret */

}

/**
 * sub_003CD790
 * Original: 0x003CD790 - 0x003CD794 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD790(void)
{

loc_003CD790: ;
    eax = MEM32(ecx + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_003CD7A0
 * Original: 0x003CD7A0 - 0x003CD83C (156 bytes, 59 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CD7A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CD7A0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebp = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003CD7B9; /* jne: not equal / not zero */

loc_003CD7AD: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x003CD7B4u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003CD7B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003CD7D0;

loc_003CD7B9: ;
    PUSH32(esp, 1);
    eax = edi + edi * 4;
    ecx = eax * 8 + 4;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003CD7CDu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CD7CD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CD7D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD812; /* je: equal / zero */

loc_003CD7D4: ;
    esi = eax + 4;
    MEM32(eax) = edi;
    eax = edi + -1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_003CD814; /* jl: less (signed <) */

loc_003CD7E4: ;
    PUSH32(esp, ebx);
    ebx = eax + 1;
    goto loc_003CD7F0;

    /* nop */

loc_003CD7F0: ;
    ecx = esi + 8;
    MEM32(esi) = 0x835170;
    PUSH32(esp, 0x003CD7FEu); RECOMP_ABI_CALL(0x0003520Cu, sub_0003520C); /* call 0x0003520C */

loc_003CD7FE: ;
    MEM32(esi + 0x20) = 0;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CD7F0; /* jne: not equal / not zero */

loc_003CD80B: ;
    esi = MEM32(esp + 0x14);
    POP32(esp, ebx);
    goto loc_003CD814;

loc_003CD812: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CD814: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 8) = esi;
    if (CMP_BE(_fa, _fb)) goto loc_003CD836; /* jbe: below or equal (unsigned <=) */

loc_003CD81B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_003CD820: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + esi);
    ecx = edx + esi;
    edx = MEM32(ebp + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x003CD830u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD82Du); } /* indirect call */
    }

loc_003CD830: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CD820; /* jne: not equal / not zero */

loc_003CD836: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CD870
 * Original: 0x003CD870 - 0x003CD8E9 (121 bytes, 48 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD870(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CD870: ;
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 2 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003CD8C3; /* je: equal / zero */

loc_003CD87D: ;
    eax = MEM32(esi + -4);
    PUSH32(esp, ebp);
    ebp = esi + -4;
    ecx = eax + eax * 4;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = esi + ecx * 8;
    if ((_fas < 0)) goto loc_003CD8A6; /* js: sign (negative) */

loc_003CD88D: ;
    PUSH32(esp, edi);
    edi = eax + 1;

loc_003CD891: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x28;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esi + 8;
    MEM32(esi) = 0x835170;
    PUSH32(esp, 0x003CD8A2u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CD8A2: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CD891; /* jne: not equal / not zero */

loc_003CD8A5: ;
    POP32(esp, edi);

loc_003CD8A6: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CD8BB; /* je: equal / zero */

loc_003CD8AB: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD8BB; /* je: equal / zero */

loc_003CD8AF: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CD8BBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD8B8u); } /* indirect call */
    }

loc_003CD8BB: ;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003CD8C3: ;
    ecx = esi + 8;
    MEM32(esi) = 0x835170;
    PUSH32(esp, 0x003CD8D1u); RECOMP_ABI_CALL(0x000250E1u, sub_000250E1); /* call 0x000250E1 */

loc_003CD8D1: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CD8E2; /* je: equal / zero */

loc_003CD8D6: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003CD8E2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD8DFu); } /* indirect call */
    }

loc_003CD8E2: ;
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CD910
 * Original: 0x003CD910 - 0x003CD95A (74 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CD910: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD951; /* je: equal / zero */

loc_003CD91A: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD94A; /* je: equal / zero */

loc_003CD921: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_003CD941; /* je: equal / zero */

loc_003CD92B: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CD931u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD92Fu); } /* indirect call */
    }

loc_003CD931: ;
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CD941: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CD947u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003CD947: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CD94A: ;
    MEM32(esi + 8) = 0;

loc_003CD951: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CD970
 * Original: 0x003CD970 - 0x003CD971 (1 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD970(void)
{

loc_003CD970: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CD980
 * Original: 0x003CD980 - 0x003CD9D5 (85 bytes, 38 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD980(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CD980: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CD98Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD98Cu); } /* indirect call */
    }

loc_003CD98F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CD9C2; /* jne: not equal / not zero */

loc_003CD994: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CD9A0u); RECOMP_ABI_CALL(0x00037D9Au, sub_00037D9A); /* call 0x00037D9A */

loc_003CD9A0: ;
    MEM32(edi + 4) = eax;
    edx = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CD9B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD9AEu); } /* indirect call */
    }

loc_003CD9B1: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi + 8;
    PUSH32(esp, 0x003CD9BBu); RECOMP_ABI_CALL(0x0003676Au, sub_0003676A); /* call 0x0003676A */

loc_003CD9BB: ;
    ecx = MEM32(edi + 0x10);
    MEM32(edi + 0x20) = ecx;
    POP32(esp, ebx);

loc_003CD9C2: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CD9C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD9C6u); } /* indirect call */
    }

loc_003CD9C9: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
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
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CD9F0
 * Original: 0x003CD9F0 - 0x003CDA40 (80 bytes, 27 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CD9F0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = 0x8351B0;
    if (CMP_EQ(_fa, _fb)) goto loc_003CDA37; /* je: equal / zero */

loc_003CDA00: ;
    ecx = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDA30; /* je: equal / zero */

loc_003CDA07: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_003CDA27; /* je: equal / zero */

loc_003CDA11: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CDA17u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDA15u); } /* indirect call */
    }

loc_003CDA17: ;
    MEM32(esi + 8) = 0;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CDA27: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CDA2Du); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003CDA2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CDA30: ;
    MEM32(esi + 8) = 0;

loc_003CDA37: ;
    MEM32(esi + 4) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CDA60
 * Original: 0x003CDA60 - 0x003CDAD9 (121 bytes, 52 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CDA60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CDA60: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CDA70u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDA6Du); } /* indirect call */
    }

loc_003CDA70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CDAC5; /* jne: not equal / not zero */

loc_003CDA75: ;
    edx = MEM32(ebp);
    PUSH32(esp, edi);
    eax = esp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CDA83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDA80u); } /* indirect call */
    }

loc_003CDA83: ;
    ecx = esi;
    PUSH32(esp, 0x003CDA8Au); RECOMP_ABI_CALL(0x000253C0u, sub_000253C0); /* call 0x000253C0 */

loc_003CDA8A: ;
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x003CDA96u); RECOMP_ABI_CALL(0x00029EF7u, sub_00029EF7); /* call 0x00029EF7 */

loc_003CDA96: ;
    eax = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003CDAC4; /* jle: less or equal (signed <=) */

loc_003CDAA3: ;
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CDAA6: ;
    edx = MEM32(esi + 8);
    eax = MEM32(edx + ebx);
    ecx = edx + ebx;
    edx = MEM32(esp + 0x18);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebp);
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x003CDAB8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDAB5u); } /* indirect call */
    }

loc_003CDAB8: ;
    eax = MEM32(esi + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0x28)) >> 32) & 1);
    ebx = ebx + 0x28;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003CDAA6; /* jl: less (signed <) */

loc_003CDAC3: ;
    POP32(esp, ebx);

loc_003CDAC4: ;
    POP32(esp, edi);

loc_003CDAC5: ;
    eax = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CDACDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDACAu); } /* indirect call */
    }

loc_003CDACD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CDB00
 * Original: 0x003CDB00 - 0x003CDB1E (30 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDB00: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003CDB08u); RECOMP_ABI_CALL(0x00013102u, sub_00013102); /* call 0x00013102 */

loc_003CDB08: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CDB18; /* je: equal / zero */

loc_003CDB0F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CDB15u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003CDB15: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CDB18: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CDB30
 * Original: 0x003CDB30 - 0x003CDB34 (4 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDB30(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_003CDB30: ;
    fp_push(MEMF(ecx + 0x70)); /* fld float */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CDB40
 * Original: 0x003CDB40 - 0x003CDBBD (125 bytes, 48 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CDB40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = ecx;
    PUSH32(esp, 0x003CDB54u); RECOMP_ABI_CALL(0x00037FCFu, sub_00037FCF); /* call 0x00037FCF */

loc_003CDB54: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003CDB5Bu); RECOMP_ABI_CALL(0x00037D9Au, sub_00037D9A); /* call 0x00037D9A */

loc_003CDB5B: ;
    edi = eax;
    MEM32(esi + 0x34) = edi;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003CDB78; /* jne: not equal / not zero */

loc_003CDB6A: ;
    eax = edi + 4;
    PUSH32(esp, eax);
    ecx = edi;
    PUSH32(esp, 0x003CDB75u); RECOMP_ABI_CALL(0x00013F80u, sub_00013F80); /* call 0x00013F80 */

loc_003CDB75: ;
    MEM32(edi + 8) = eax;

loc_003CDB78: ;
    edi = MEM32(edi + 8);
    _fa = (uint32_t)(MEM16(edi + 8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 8), 1 (16-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CDB8E; /* jne: not equal / not zero */

loc_003CDB82: ;
    edx = MEM32(edi);
    ecx = edi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x003CDB89u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDB86u); } /* indirect call */
    }

loc_003CDB89: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x14) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x14 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003CDB90; /* je: equal / zero */

loc_003CDB8E: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CDB90: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x28)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esi + 0x24); /* subss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esi + 0x30); /* divss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 0x70); /* mulss */
    MEMF(esi + 0x2C) = xmm0.f[0]; /* movss */
    eax = MEM32(ebx);
    ecx = ebx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CDBB0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDBADu); } /* indirect call */
    }

loc_003CDBB0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, edi);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CDBE0
 * Original: 0x003CDBE0 - 0x003CDC27 (71 bytes, 25 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDBE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDBE0: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CDC00u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CDC00: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x10) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x20) = eax;
    MEM32(esi) = 0x8351FC;
    MEMF(esi + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esi + 0x18) = xmm0.f[0]; /* movss */
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CDC40
 * Original: 0x003CDC40 - 0x003CDC46 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDC40(void)
{

loc_003CDC40: ;
    eax = MEM32(0x8CDC3C);
    esp += 4; return; /* ret */

}

/**
 * sub_003CDC50
 * Original: 0x003CDC50 - 0x003CDC77 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDC50: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x8351FC;
    PUSH32(esp, 0x003CDC5Eu); RECOMP_ABI_CALL(0x00014241u, sub_00014241); /* call 0x00014241 */

loc_003CDC5E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CDC71; /* je: equal / zero */

loc_003CDC65: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003CDC71u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDC6Eu); } /* indirect call */
    }

loc_003CDC71: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CDC80
 * Original: 0x003CDC80 - 0x003CDD00 (128 bytes, 57 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDC80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CDC80: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CDC8Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDC8Cu); } /* indirect call */
    }

loc_003CDC8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CDCF9; /* jne: not equal / not zero */

loc_003CDC94: ;
    edx = MEM32(esi);
    eax = edi + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CDC9Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDC9Cu); } /* indirect call */
    }

loc_003CDC9F: ;
    edx = MEM32(esi);
    eax = edi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CDCAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDCA7u); } /* indirect call */
    }

loc_003CDCAA: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CDCB6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDCB3u); } /* indirect call */
    }

loc_003CDCB6: ;
    ecx = MEM32(esp + 0xC);
    MEM32(edi + 0x1C) = ecx;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CDCC9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDCC6u); } /* indirect call */
    }

loc_003CDCC9: ;
    ecx = MEM32(esp + 0xC);
    MEM32(edi + 0x20) = ecx;
    edx = MEM32(esi);
    eax = edi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CDCDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDCD8u); } /* indirect call */
    }

loc_003CDCDB: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x10)) >> 32) & 1);
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CDCE6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDCE3u); } /* indirect call */
    }

loc_003CDCE6: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CDCEDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDCEAu); } /* indirect call */
    }

loc_003CDCED: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
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
    esp += 12; return; /* ret 8 */

loc_003CDCF9: ;
    POP32(esp, edi);
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CDD20
 * Original: 0x003CDD20 - 0x003CDD60 (64 bytes, 21 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDD20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDD20: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CDD40u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CDD40: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0x8C) = eax;
    MEM32(esi + 0x90) = eax;
    MEM32(esi + 0x98) = eax;
    MEM32(esi) = 0x835214;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CDD70
 * Original: 0x003CDD70 - 0x003CDD76 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDD70(void)
{

loc_003CDD70: ;
    eax = 0x834A58;
    esp += 4; return; /* ret */

}

/**
 * sub_003CDD80
 * Original: 0x003CDD80 - 0x003CDE22 (162 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDD80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDD80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x8C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDDE1; /* je: equal / zero */

loc_003CDD90: ;
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CDDC4; /* jle: less or equal (signed <=) */

loc_003CDD97: ;
    goto loc_003CDDA0;

    /* nop */

loc_003CDDA0: ;
    eax = MEM32(esi + 0x94);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDDB9; /* je: equal / zero */

loc_003CDDAD: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CDDB9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDDB6u); } /* indirect call */
    }

loc_003CDDB9: ;
    eax = MEM32(esi + 0x8C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDDA0; /* jl: less (signed <) */

loc_003CDDC4: ;
    eax = MEM32(esi + 0x94);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    POP32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003CDDDB; /* je: equal / zero */

loc_003CDDCF: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CDDDBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDDD8u); } /* indirect call */
    }

loc_003CDDDB: ;
    MEM32(esi + 0x94) = ebx;

loc_003CDDE1: ;
    ecx = MEM32(esi + 0x98);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(esi + 0x8C) = ebx;
    MEM32(esi + 0x90) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003CDE19; /* je: equal / zero */

loc_003CDDF7: ;
    edx = MEM32(ecx + -4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    eax = ecx + -4;
    if (CMP_EQ(_fa, _fb)) goto loc_003CDE10; /* je: equal / zero */

loc_003CDE01: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 3);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CDE07u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDE05u); } /* indirect call */
    }

loc_003CDE07: ;
    MEM32(esi + 0x98) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003CDE10: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CDE16u); RECOMP_ABI_CALL(0x0001FFBFu, sub_0001FFBF); /* call 0x0001FFBF */

loc_003CDE16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CDE19: ;
    MEM32(esi + 0x98) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003CDE50
 * Original: 0x003CDE50 - 0x003CDE65 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDE50: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDE64; /* je: equal / zero */

loc_003CDE58: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CDE64u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDE61u); } /* indirect call */
    }

loc_003CDE64: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CDE70
 * Original: 0x003CDE70 - 0x003CDE82 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDE70(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDE70: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CDE7Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CDE7E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003CDE90
 * Original: 0x003CDE90 - 0x003CDEA5 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDE90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDE90: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDEA4; /* je: equal / zero */

loc_003CDE98: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CDEA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CDEA1u); } /* indirect call */
    }

loc_003CDEA4: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CDEB0
 * Original: 0x003CDEB0 - 0x003CDEC6 (22 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDEB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CDEB0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x835214;
    PUSH32(esp, 0x003CDEBEu); RECOMP_ABI_CALL(0x0002384Au, sub_0002384A); /* call 0x0002384A */

loc_003CDEBE: ;
    ecx = esi;
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_00014241(); return; /* tail jmp 0x00014241 */

}

/**
 * sub_003CDED0
 * Original: 0x003CDED0 - 0x003CDF8D (189 bytes, 73 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CDED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDED0: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    PUSH32(esp, 1);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi * 4;
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    ebp = ecx;
    PUSH32(esp, 0x003CDEEBu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CDEEB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(ebp + 0x94) = eax;
    if (CMP_BE(_fa, _fb)) goto loc_003CDF20; /* jbe: below or equal (unsigned <=) */

loc_003CDEF8: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x18);
    { uint32_t _sv=(uint32_t)(ebx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ebx = _sv << _sc;
        _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }

loc_003CDF00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003CDF0Au); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CDF0A: ;
    ecx = MEM32(ebp + 0x94);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + esi * 4) = eax;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003CDF00; /* jb: below (unsigned <) */

loc_003CDF1B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */

loc_003CDF20: ;
    if (CMP_NE(_fa, _fb)) goto loc_003CDF2E; /* jne: not equal / not zero */

loc_003CDF22: ;
    PUSH32(esp, 4);
    PUSH32(esp, 0x003CDF29u); RECOMP_ABI_CALL(0x0001C626u, sub_0001C626); /* call 0x0001C626 */

loc_003CDF29: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003CDF42;

loc_003CDF2E: ;
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x70);
    PUSH32(esp, 1);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003CDF3Fu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CDF3F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CDF42: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDF81; /* je: equal / zero */

loc_003CDF46: ;
    ecx = edi + -1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    edx = eax + 4;
    MEM32(eax) = edi;
    eax = edx;
    if (CMP_L(_fas, _fbs)) goto loc_003CDF75; /* jl: less (signed <) */

loc_003CDF54: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003CDF60;

    /* nop */
    edi = edi;

loc_003CDF60: ;
    MEM32(eax) = 0x834B9C;
    MEM32(eax + 0x64) = esi;
    MEM32(eax + 0x68) = esi;
    MEM32(eax + 0x6C) = esi;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CDF60; /* jne: not equal / not zero */

loc_003CDF75: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp + 0x98) = edx;
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_003CDF81: ;
    POP32(esp, edi);
    MEM32(ebp + 0x98) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CDFC0
 * Original: 0x003CDFC0 - 0x003CDFEB (43 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDFC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDFC0: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x835214;
    PUSH32(esp, 0x003CDFCEu); RECOMP_ABI_CALL(0x0002384Au, sub_0002384A); /* call 0x0002384A */

loc_003CDFCE: ;
    ecx = esi;
    PUSH32(esp, 0x003CDFD5u); RECOMP_ABI_CALL(0x00014241u, sub_00014241); /* call 0x00014241 */

loc_003CDFD5: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CDFE5; /* je: equal / zero */

loc_003CDFDC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CDFE2u); RECOMP_ABI_CALL(0x00017F13u, sub_00017F13); /* call 0x00017F13 */

loc_003CDFE2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CDFE5: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE000
 * Original: 0x003CE000 - 0x003CE130 (304 bytes, 82 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE000(void)
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

loc_003CE000: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x90);
    ecx = MEM32(esi + 0x8C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_003CE12B; /* jle: less or equal (signed <=) */

loc_003CE038: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    MEM32(esp + 0xC) = 0;
    PUSH32(esp, edi);

loc_003CE043: ;
    ecx = MEM32(esi + 0x98);
    edx = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003CE055u); RECOMP_ABI_CALL(0x0001AE11u, sub_0001AE11); /* call 0x0001AE11 */

loc_003CE055: ;
    eax = MEM32(esi + 0x90);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE106; /* jle: less or equal (signed <=) */

loc_003CE065: ;
    goto loc_003CE070;

    /* nop */
    edi = edi;

loc_003CE070: ;
    eax = MEM32(esi + 0x94);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(eax + ecx * 4);
    eax = MEM32(esi + 0x98);
    ecx = MEM32(esp + 0x10);
    ebp = MEM32(eax + ecx + 0x64);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = edx + edi * 4;
    edx = MEM32(eax + 0x6C);
    ecx = edx + edx * 2;
    { uint32_t _sv=(uint32_t)(ecx), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        ecx = _sv << _sc;
        _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm0.f[0] = (float)(int32_t)edi; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x18); /* mulss */
    MEMF(ecx + ebp) = xmm0.f[0]; /* movss */
    ebp = MEM32(eax + 0x64);
    ebx = MEM32(ebx);
    MEM32(ecx + ebp + 4) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_003CE0F4; /* jle: less or equal (signed <=) */

loc_003CE0B5: ;
    edx = MEM32(eax + 0x64);
    xmm0 = XMM_SCALAR(MEMF(ecx + edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx + edx + -12); /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x7AB7D4)); /* movss */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CE0E3; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_003CE0D9: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ecx + -4) = xmm0.f[0]; /* movss */
    goto loc_003CE0F4;

loc_003CE0E3: ;
    xmm1 = XMM_SCALAR(MEMF(0x7A9980)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(ecx + -4) = xmm1.f[0]; /* movss */

loc_003CE0F4: ;
    MEM32(eax + 0x6C) = MEM32(eax + 0x6C) + 1;
    _fa = (uint32_t)(MEM32(eax + 0x6C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(esi + 0x90);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CE070; /* jl: less (signed <) */

loc_003CE106: ;
    ecx = MEM32(esp + 0x14);
    edi = MEM32(esp + 0x10);
    edx = MEM32(esi + 0x8C);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x70;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x10) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_003CE043; /* jl: less (signed <) */

loc_003CE128: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_003CE12B: ;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003CE180
 * Original: 0x003CE180 - 0x003CE239 (185 bytes, 72 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CE180: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 2 (8-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    if (TEST_Z(_fa, _fb)) goto loc_003CE1F4; /* je: equal / zero */

loc_003CE18B: ;
    eax = MEM32(edi + -4);
    PUSH32(esp, ebx);
    ebx = edi + -4;
    PUSH32(esp, esi);
    esi = eax;
    esi = (uint32_t)((int32_t)esi * (int32_t)0x70);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebp = 0;
    if ((_fas < 0)) goto loc_003CE1D4; /* js: sign (negative) */

loc_003CE1A2: ;
    edi = eax + 1;

loc_003CE1A5: ;
    eax = MEM32(esi + -12);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x70;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esi) = 0x834B9C;
    if (CMP_EQ(_fa, _fb)) goto loc_003CE1C8; /* je: equal / zero */

loc_003CE1B5: ;
    ecx = esi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE1C8; /* je: equal / zero */

loc_003CE1BC: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CE1C8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE1C5u); } /* indirect call */
    }

loc_003CE1C8: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0x64) = ebp;
    MEM32(esi + 0x68) = ebp;
    MEM32(esi + 0x6C) = ebp;
    if ((_fa != 0)) goto loc_003CE1A5; /* jne: not equal / not zero */

loc_003CE1D4: ;
    _fa = (uint32_t)(MEM8(esp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x14), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CE1EB; /* je: equal / zero */

loc_003CE1DB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE1EB; /* je: equal / zero */

loc_003CE1DF: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003CE1EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE1E8u); } /* indirect call */
    }

loc_003CE1EB: ;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_003CE1F4: ;
    eax = MEM32(edi + 0x64);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(edi) = 0x834B9C;
    if (CMP_EQ(_fa, _fb)) goto loc_003CE216; /* je: equal / zero */

loc_003CE203: ;
    ecx = edi + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE216; /* je: equal / zero */

loc_003CE20A: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CE216u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE213u); } /* indirect call */
    }

loc_003CE216: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 1 (8-bit) */
    MEM32(edi + 0x64) = ebp;
    MEM32(edi + 0x68) = ebp;
    MEM32(edi + 0x6C) = ebp;
    if (TEST_Z(_fa, _fb)) goto loc_003CE232; /* je: equal / zero */

loc_003CE226: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003CE232u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE22Fu); } /* indirect call */
    }

loc_003CE232: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE270
 * Original: 0x003CE270 - 0x003CE333 (195 bytes, 78 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE270(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CE270: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    ebx = ecx;
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CE280u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE27Du); } /* indirect call */
    }

loc_003CE280: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CE31F; /* jne: not equal / not zero */

loc_003CE289: ;
    edx = MEM32(esi);
    PUSH32(esp, ebp);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x80);
    eax = ebx + 0xC;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x2C); PUSH32(esp, 0x003CE29Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE297u); } /* indirect call */
    }

loc_003CE29A: ;
    edx = MEM32(esi);
    eax = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CE2A6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE2A3u); } /* indirect call */
    }

loc_003CE2A6: ;
    edx = MEM32(esi);
    eax = esp + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CE2B2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE2AFu); } /* indirect call */
    }

loc_003CE2B2: ;
    ecx = ebx;
    PUSH32(esp, 0x003CE2B9u); RECOMP_ABI_CALL(0x0002384Au, sub_0002384A); /* call 0x0002384A */

loc_003CE2B9: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = ebx;
    PUSH32(esp, 0x003CE2CAu); RECOMP_ABI_CALL(0x0002B06Du, sub_0002B06D); /* call 0x0002B06D */

loc_003CE2CA: ;
    ecx = MEM32(esp + 0xC);
    eax = MEM32(esp + 0x14);
    _cf = 0; /* xor clears CF */
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(ebx + 0x8C) = ecx;
    MEM32(ebx + 0x90) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003CE317; /* jle: less or equal (signed <=) */

loc_003CE2E4: ;
    PUSH32(esp, edi);

loc_003CE2E5: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE311; /* jle: less or equal (signed <=) */

loc_003CE2EB: ;
    goto loc_003CE2F0;

    /* nop */

loc_003CE2F0: ;
    ecx = MEM32(ebx + 0x94);
    edx = MEM32(ecx + ebp * 4);
    eax = MEM32(esi);
    ecx = edx + edi * 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x24); PUSH32(esp, 0x003CE304u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE301u); } /* indirect call */
    }

loc_003CE304: ;
    eax = MEM32(esp + 0x18);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003CE2F0; /* jl: less (signed <) */

loc_003CE30D: ;
    ecx = MEM32(esp + 0x10);

loc_003CE311: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003CE2E5; /* jl: less (signed <) */

loc_003CE316: ;
    POP32(esp, edi);

loc_003CE317: ;
    ecx = ebx;
    PUSH32(esp, 0x003CE31Eu); RECOMP_ABI_CALL(0x00014020u, sub_00014020); /* call 0x00014020 */

loc_003CE31E: ;
    POP32(esp, ebp);

loc_003CE31F: ;
    edx = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CE326u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE323u); } /* indirect call */
    }

loc_003CE326: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CE370
 * Original: 0x003CE370 - 0x003CE37C (12 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE370(void)
{

loc_003CE370: ;
    eax = MEM32(esp + 4);
    MEM32(0x9071EC) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE380
 * Original: 0x003CE380 - 0x003CE3CE (78 bytes, 39 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CE380: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    eax = MEM32(ebp);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ebx = esi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = ebp;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003CE396u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE393u); } /* indirect call */
    }

loc_003CE396: ;
    eax = MEM32(ebx);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE3B8; /* jle: less or equal (signed <=) */

loc_003CE39E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x10)) >> 32) & 1);
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CE3A1: ;
    eax = MEM32(esp + 0x18);
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x003CE3AEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE3ABu); } /* indirect call */
    }

loc_003CE3AE: ;
    eax = MEM32(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x64) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(0x64)) >> 32) & 1);
    esi = esi + 0x64;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003CE3A1; /* jl: less (signed <) */

loc_003CE3B8: ;
    edx = MEM32(ebp);
    ecx = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x003CE3C0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE3BDu); } /* indirect call */
    }

loc_003CE3C0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, edi);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, esi);
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, ebp);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CE3F0
 * Original: 0x003CE3F0 - 0x003CE3F7 (7 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE3F0(void)
{

loc_003CE3F0: ;
    MEM32(ecx) = 0x834854;
    esp += 4; return; /* ret */

}

/**
 * sub_003CE400
 * Original: 0x003CE400 - 0x003CE42C (44 bytes, 17 insns)
 * Category: game_vtable
 * CC: thiscall, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE400(void)
{

loc_003CE400: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    esi = ecx;
    ecx = MEM32(esp + 0x14);
    PUSH32(esp, 0x1B);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CE420u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CE420: ;
    MEM32(esi) = 0x83523C;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CE440
 * Original: 0x003CE440 - 0x003CE446 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE440(void)
{

loc_003CE440: ;
    eax = MEM32(0x8CDC64);
    esp += 4; return; /* ret */

}

/**
 * sub_003CE450
 * Original: 0x003CE450 - 0x003CE477 (39 bytes, 13 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE450(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE450: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x83523C;
    PUSH32(esp, 0x003CE45Eu); RECOMP_ABI_CALL(0x00014241u, sub_00014241); /* call 0x00014241 */

loc_003CE45E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CE471; /* je: equal / zero */

loc_003CE465: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003CE471u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE46Eu); } /* indirect call */
    }

loc_003CE471: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE480
 * Original: 0x003CE480 - 0x003CE52B (171 bytes, 76 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE480(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CE480: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi);
    ebp = ecx;
    ecx = esi;
    MEM32(esp + 8) = ebp;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CE494u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE491u); } /* indirect call */
    }

loc_003CE494: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003CE517; /* jne: not equal / not zero */

loc_003CE499: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = ebp + 0xC;
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CE4A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE4A2u); } /* indirect call */
    }

loc_003CE4A5: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = 0;
    if (CMP_LE(_fas, _fbs)) goto loc_003CE516; /* jle: less or equal (signed <=) */

loc_003CE4B2: ;
    PUSH32(esp, ebx);
    ebx = ebp + 0x14;

loc_003CE4B6: ;
    edx = MEM32(esi);
    eax = ebp + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x20); PUSH32(esp, 0x003CE4C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE4BEu); } /* indirect call */
    }

loc_003CE4C1: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax + 0x28); PUSH32(esp, 0x003CE4C9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE4C6u); } /* indirect call */
    }

loc_003CE4C9: ;
    eax = MEM32(ebx);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE505; /* jle: less or equal (signed <=) */

loc_003CE4D1: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebp) + (uint64_t)(0x18)) >> 32) & 1);
    ebp = ebp + 0x18;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CE4D4: ;
    edx = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CE4DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE4D9u); } /* indirect call */
    }

loc_003CE4DC: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x1C)) >> 32) & 1);
    eax = eax + 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CE4EBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE4E8u); } /* indirect call */
    }

loc_003CE4EB: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x20)) >> 32) & 1);
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CE4FAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE4F7u); } /* indirect call */
    }

loc_003CE4FA: ;
    eax = MEM32(ebx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_003CE4D4; /* jl: less (signed <) */

loc_003CE501: ;
    ebp = MEM32(esp + 0x10);

loc_003CE505: ;
    eax = MEM32(esp + 0x18);
    ecx = MEM32(ebp + 0xC);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003CE4B6; /* jl: less (signed <) */

loc_003CE515: ;
    POP32(esp, ebx);

loc_003CE516: ;
    POP32(esp, edi);

loc_003CE517: ;
    eax = MEM32(esi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CE51Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE51Bu); } /* indirect call */
    }

loc_003CE51E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    POP32(esp, esi);
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CE560
 * Original: 0x003CE560 - 0x003CE569 (9 bytes, 3 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE560(void)
{

loc_003CE560: ;
    eax = ecx;
    MEM32(eax) = 0x835250;
    esp += 4; return; /* ret */

}

/**
 * sub_003CE570
 * Original: 0x003CE570 - 0x003CE576 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE570(void)
{

loc_003CE570: ;
    eax = MEM32(0x8CDC64);
    esp += 4; return; /* ret */

}

/**
 * sub_003CE580
 * Original: 0x003CE580 - 0x003CE586 (6 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE580(void)
{

loc_003CE580: ;
    eax = 0x1E;
    esp += 4; return; /* ret */

}

/**
 * sub_003CE590
 * Original: 0x003CE590 - 0x003CE5B2 (34 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE590(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE590: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x834854;
    if (TEST_Z(_fa, _fb)) goto loc_003CE5AC; /* je: equal / zero */

loc_003CE5A0: ;
    ecx = MEM32(0x907224);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x1C); PUSH32(esp, 0x003CE5ACu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE5A9u); } /* indirect call */
    }

loc_003CE5AC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE5C0
 * Original: 0x003CE5C0 - 0x003CE604 (68 bytes, 27 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE5C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE5C0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x003CE5CCu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CE5CC: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE5FE; /* je: equal / zero */

loc_003CE5D5: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0xC);
    PUSH32(esp, 0x1B);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CE5F2u); RECOMP_ABI_CALL(0x00035B67u, sub_00035B67); /* call 0x00035B67 */

loc_003CE5F2: ;
    MEM32(esi) = 0x83523C;
    eax = esi;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

loc_003CE5FE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CE620
 * Original: 0x003CE620 - 0x003CE632 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE620(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE620: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CE62Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CE62E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003CE640
 * Original: 0x003CE640 - 0x003CE655 (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE640(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE640: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE654; /* je: equal / zero */

loc_003CE648: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CE654u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE651u); } /* indirect call */
    }

loc_003CE654: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CE660
 * Original: 0x003CE660 - 0x003CE672 (18 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE660(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE660: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CE66Eu); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CE66E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003CE680
 * Original: 0x003CE680 - 0x003CE6B3 (51 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE680(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE680: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi) = ecx;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = eax;
    MEM32(esi + 0xC) = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_003CE6AD; /* jbe: below or equal (unsigned <=) */

loc_003CE698: ;
    eax = eax + eax * 8;
    PUSH32(esp, 1);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CE6A7u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CE6A7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0xC) = eax;

loc_003CE6AD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE6C0
 * Original: 0x003CE6C0 - 0x003CE6E6 (38 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE6C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE6C0: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE6DD; /* je: equal / zero */

loc_003CE6CA: ;
    ecx = MEM32(0x907224);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edx + 0x1C); PUSH32(esp, 0x003CE6D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE6D3u); } /* indirect call */
    }

loc_003CE6D6: ;
    MEM32(esi + 0xC) = 0;

loc_003CE6DD: ;
    MEM32(esi + 8) = 0;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CE6F0
 * Original: 0x003CE6F0 - 0x003CE6F3 (3 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE6F0(void)
{

loc_003CE6F0: ;
    eax = MEM32(ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003CE700
 * Original: 0x003CE700 - 0x003CE709 (9 bytes, 3 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE700(void)
{

loc_003CE700: ;
    eax = MEM32(esp + 4);
    MEM32(ecx) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE710
 * Original: 0x003CE710 - 0x003CE72A (26 bytes, 9 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003CE710(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE710: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003CE725; /* jae: above or equal (unsigned >=) */

loc_003CE719: ;
    ecx = MEM32(ecx + 0xC);
    eax = eax + eax * 8;
    eax = ecx + eax * 4;
    esp += 8; return; /* ret 4 */

loc_003CE725: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE730
 * Original: 0x003CE730 - 0x003CE78B (91 bytes, 35 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE730(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_003CE730: ;
    PUSH32(esp, edi);
    edi = MEM32(ecx + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003CE73E; /* ja: above (unsigned >) */

loc_003CE738: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

loc_003CE73E: ;
    edx = MEM32(ecx + 4);
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0xC);
    eax = edx + edx * 8;
    xmm1 = XMM_SCALAR(MEMF(esi + eax * 4 + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = esi + eax * 4;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CE760; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_003CE75C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;

loc_003CE760: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003CE783; /* jae: above or equal (unsigned >=) */

loc_003CE764: ;
    edi = edx + edx * 8;
    esi = esi + edi * 4;
    /* nop */

loc_003CE770: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 0x14); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CE783; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(eax + 0x14)) */

loc_003CE776: ;
    edi = MEM32(ecx + 8);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x24;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    eax = esi;
    if (CMP_B(_fa, _fb)) goto loc_003CE770; /* jb: below (unsigned <) */

loc_003CE783: ;
    POP32(esp, esi);
    MEM32(ecx + 4) = edx;
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE7B0
 * Original: 0x003CE7B0 - 0x003CE953 (419 bytes, 168 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE7B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CE7B0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x24);
    eax = MEM32(esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esp + 0x10) = edi;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x14); PUSH32(esp, 0x003CE7CCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE7C9u); } /* indirect call */
    }

loc_003CE7CC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE7EB; /* jne: not equal / not zero */

loc_003CE7D1: ;
    edx = MEM32(esi);
    eax = esp + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x1C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CE7E1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE7DEu); } /* indirect call */
    }

loc_003CE7E1: ;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x18), ebx (32-bit) */
    MEM32(esp + 0x20) = ebx;
    if (CMP_G(_fas, _fbs)) goto loc_003CE800; /* jg: greater (signed >) */

loc_003CE7EB: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_003CE7F5: ;
    ebp = MEM32(esp + 0x14);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003CE800;

    /* nop */

loc_003CE800: ;
    edx = MEM32(esi);
    eax = esp + 0x28;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x2C) = ebx;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CE810u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE80Du); } /* indirect call */
    }

loc_003CE810: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x003CE81Au); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CE81A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003CE867; /* jne: not equal / not zero */

loc_003CE823: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE85B; /* je: equal / zero */

loc_003CE827: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_003CE84F; /* jbe: below or equal (unsigned <=) */

loc_003CE83A: ;
    eax = eax + eax * 8;
    PUSH32(esp, 1);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CE849u); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CE849: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = eax;

loc_003CE84F: ;
    ecx = edi;
    MEM32(esp + 0x10) = edi;
    MEM32(esp + 0x14) = ecx;
    goto loc_003CE89E;

loc_003CE85B: ;
    ecx = ebx;
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x14) = ecx;
    goto loc_003CE89E;

loc_003CE867: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE895; /* je: equal / zero */

loc_003CE86B: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(edi) = ebx;
    MEM32(edi + 4) = ebx;
    MEM32(edi + 8) = eax;
    MEM32(edi + 0xC) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_003CE897; /* jbe: below or equal (unsigned <=) */

loc_003CE87E: ;
    eax = eax + eax * 8;
    PUSH32(esp, 1);
    { uint32_t _sv=(uint32_t)(eax), _sc=(uint32_t)(2) & 31u;
      if (_sc) {
        eax = _sv << _sc;
        _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
      } }
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CE88Du); RECOMP_ABI_CALL(0x000258F7u, sub_000258F7); /* call 0x000258F7 */

loc_003CE88D: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0xC) = eax;
    goto loc_003CE897;

loc_003CE895: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CE897: ;
    MEM32(ebp) = edi;
    MEM32(esp + 0x14) = edi;

loc_003CE89E: ;
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CE8A0: ;
    edx = MEM32(esi);
    eax = esp + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    MEM32(esp + 0x20) = 0;
    { uint32_t _icall_target = MEM32(edx + 0x28); PUSH32(esp, 0x003CE8B4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE8B1u); } /* indirect call */
    }

loc_003CE8B4: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFF (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE932; /* je: equal / zero */

loc_003CE8BF: ;
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + 8) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003CE929; /* jae: above or equal (unsigned >=) */

loc_003CE8C8: ;
    edi = MEM32(ecx + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_003CE929; /* je: equal / zero */

loc_003CE8CF: ;
    MEM32(edi) = eax;
    edx = MEM32(esi);
    eax = edi + 4;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CE8DCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE8D9u); } /* indirect call */
    }

loc_003CE8DC: ;
    edx = MEM32(esi);
    eax = edi + 8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CE8E7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE8E4u); } /* indirect call */
    }

loc_003CE8E7: ;
    edx = MEM32(esi);
    eax = edi + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CE8F2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE8EFu); } /* indirect call */
    }

loc_003CE8F2: ;
    edx = MEM32(esi);
    eax = edi + 0x10;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CE8FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE8FAu); } /* indirect call */
    }

loc_003CE8FD: ;
    edx = MEM32(esi);
    eax = edi + 0x14;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CE908u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE905u); } /* indirect call */
    }

loc_003CE908: ;
    edx = MEM32(esi);
    eax = edi + 0x18;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CE913u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE910u); } /* indirect call */
    }

loc_003CE913: ;
    edx = MEM32(esi);
    eax = edi + 0x1C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    ecx = esi;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CE91Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE91Bu); } /* indirect call */
    }

loc_003CE91E: ;
    edx = MEM32(esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    ecx = esi;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x24); PUSH32(esp, 0x003CE929u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CE926u); } /* indirect call */
    }

loc_003CE929: ;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x24;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003CE8A0;

loc_003CE932: ;
    eax = MEM32(esp + 0x20);
    ecx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x20) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003CE7F5; /* jl: less (signed <) */

loc_003CE947: ;
    eax = MEM32(esp + 0x10);
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
 * sub_003CE9C0
 * Original: 0x003CE9C0 - 0x003CE9FE (62 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE9C0(void)
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

loc_003CE9C0: ;
    eax = MEM32(esp + 4);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_003CE9E5; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_003CE9DC: ;
    fp_push(MEMF(0x7AA840)); /* fld float */
    esp += 12; return; /* ret 8 */

loc_003CE9E5: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 4)); /* fdiv dword ptr [esp + 4] */
    fp_push(MEMF(eax + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(eax + 8)); /* fadd dword ptr [eax + 8] */
    esp += 12; return; /* ret 8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}
